#pragma once
#include <gpio.h>
#include <device/fdcan.h>

struct fdcan_tx_header_t
{
    uint32_t ident;
    uint32_t size;
};

template<unsigned N> struct fdcan_bds_traits {};
template<> struct fdcan_bds_traits<8> { static constexpr unsigned value = 0x0; };
template<> struct fdcan_bds_traits<12> { static constexpr unsigned value = 0x1; };
template<> struct fdcan_bds_traits<16> { static constexpr unsigned value = 0x2; };
template<> struct fdcan_bds_traits<20> { static constexpr unsigned value = 0x3; };
template<> struct fdcan_bds_traits<24> { static constexpr unsigned value = 0x4; };
template<> struct fdcan_bds_traits<32> { static constexpr unsigned value = 0x5; };
template<> struct fdcan_bds_traits<48> { static constexpr unsigned value = 0x6; };
template<> struct fdcan_bds_traits<64> { static constexpr unsigned value = 0x7; };

template<int INST, pin_t TX, pin_t RX>
class fd_can_t
{
public:
    template
        < unsigned  FRAME_SIZE
        , unsigned  N_STD_FILTER
        , unsigned  N_RX_FIFO_0
        , unsigned  N_TX_FIFO
        >
    static void setup()
    {
        setup<FRAME_SIZE, N_STD_FILTER, 0, N_RX_FIFO_0, 0, 0, 0, 0, N_TX_FIFO>();
    }

    template
        < unsigned  FRAME_SIZE
        , unsigned  N_STD_FILTER
        , unsigned  N_EXT_FILTER
        , unsigned  N_RX_FIFO_0
        , unsigned  N_RX_FIFO_1
        , unsigned  N_RX_BUFFER
        , unsigned  N_EVT_FIFO
        , unsigned  N_TX_BUFFER
        , unsigned  N_TX_FIFO
        >
    static void setup()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        alternate_t<TX, traits::TX>::template setup<push_pull, high_speed>();
        alternate_t<RX, traits::RX>::template setup<floating>();

        static constexpr unsigned BDS = fdcan_bds_traits<FRAME_SIZE>::value;
        static constexpr uint32_t ELEMENT_SIZE = FRAME_SIZE + 8;    // in bytes!

        fdcan_traits<0>::template enable<rcc_t>();          // enable clock
        FDCAN.FDCAN_TEST = _::FDCAN_TEST_RESET_VALUE;       // reset test register
        FDCAN.FDCAN_CCCR = _::FDCAN_CCCR_INIT;              // start initialization
        while (!(FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT));   // clock domain sync wait
        FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_CCE;              // configuration change enable
        FDCAN.FDCAN_CCCR |= (_::FDCAN_CCCR_DAR & 0)         // disable auto retransmission
                         |  (_::FDCAN_CCCR_TXP & 0)         // enable transmission pause
                         |  (_::FDCAN_CCCR_PXHD & 0)        // disable protocol exceptions
                         |  (_::FDCAN_CCCR_BSE & 0)         // enable bit-rate switching
                         |  (_::FDCAN_CCCR_FDOE & 0)        // enable FD operation
                         |  (_::FDCAN_CCCR_MON & 0)         // enable bus monitoring mode
                         |  (_::FDCAN_CCCR_ASM & 0)         // restricted operating mode
                         ;
        FDCAN.FDCAN_DBTP = _::FDCAN_DBTP_DBRP::W(0x1)       // data bitrate prescaler
                         | _::FDCAN_DBTP_DTSEG1::W(0x1f)    // data time segment before sample
                         | _::FDCAN_DBTP_DTSEG2::W(0x8)     // data time segment after sample
                         | _::FDCAN_DBTP_DSJW::W(0x8)       // synchronization jump width
                         ;
        FDCAN.FDCAN_TXESC = _::FDCAN_TXESC_RESET_VALUE      // reset tx-buffer element size
                          | _::FDCAN_TXESC_TBDS::W(BDS)     // tx-buffer element size
                          ;
        FDCAN.FDCAN_RXESC = _::FDCAN_RXESC_RESET_VALUE      // reset rx-buffer element size
                          | _::FDCAN_RXESC_RBDS::W(BDS)     // rx-buffer element size
                          | _::FDCAN_RXESC_F1DS::W(BDS)     // rx-fifo-1 element size
                          | _::FDCAN_RXESC_F0DS::W(BDS)     // rx-fifo-0 element size
                          ;
        FDCAN.FDCAN_TTOCF = _::FDCAN_TTOCF_RESET_VALUE;     // event-driven operating mode

        // configure message RAM
        
        static_assert(N_STD_FILTER <= 128, "too many std-filter");
        static_assert(N_EXT_FILTER <= 64, "too many ext-filter");
        static_assert(N_RX_FIFO_0 <= 64, "too many rx-fifo-0");
        static_assert(N_RX_FIFO_1 <= 64, "too many rx-fifo-1");
        static_assert(N_RX_BUFFER <= 64, "too many rx-buffer");
        static_assert(N_EVT_FIFO <= 32, "too many evt-fifo");
        static_assert(N_TX_BUFFER + N_TX_FIFO <= 32, "too many tx-buffers + tx-fifo");

        static constexpr uint32_t FLSSA = 0; // FIXME: parameter for multiple instances!

        FDCAN.FDCAN_SIDFC = _::FDCAN_SIDFC_FLSSA::W(FLSSA)      // standard filters start address
                          | _::FDCAN_SIDFC_LSS::W(N_STD_FILTER) // number of 11-bit filters
                          ;

        static constexpr uint32_t FLESA = FLSSA + N_STD_FILTER * 4;

        FDCAN.FDCAN_XIDFC = _::FDCAN_XIDFC_FLESA::W(FLESA)      // extended filters start address
                          | _::FDCAN_XIDFC_LSE::W(N_EXT_FILTER) // number of 29-bit filters
                          ;

        static constexpr uint32_t F0SA = FLESA + N_EXT_FILTER * 8;

        FDCAN.FDCAN_RXF0C = _::FDCAN_RXF0C_F0SA::W(F0SA)        // rx-fifo-0 start address
                          | _::FDCAN_RXF0C_F0S::W(N_RX_FIFO_0)  // number of rx-fifo-0 elements
                          ;

        static constexpr uint32_t F1SA = F0SA + N_RX_FIFO_0 * ELEMENT_SIZE;

        FDCAN.FDCAN_RXF1C = _::FDCAN_RXF1C_F1SA::W(F1SA)        // rx-fifo-1 start address
                          | _::FDCAN_RXF1C_F1S::W(N_RX_FIFO_1)  // number of rx-fifo-1 elements
                          ;

        static constexpr uint32_t RBSA = F1SA + N_RX_FIFO_1 * ELEMENT_SIZE;

        FDCAN.FDCAN_RXBC = _::FDCAN_RXBC_RBSA::W(RBSA);         // rx-buffer list start address

        static constexpr uint32_t EFSA = RBSA + N_RX_BUFFER * ELEMENT_SIZE;

        FDCAN.FDCAN_TXEFC = _::FDCAN_TXEFC_EFSA::W(EFSA)        // event-fifo start address
                          | _::FDCAN_TXEFC_EFS::W(N_EVT_FIFO)   // number of event-fifo elements
                          //| _::FDCAN_TXEFC_TBDS::W(???)       // FIXME!
                          ;

        static constexpr uint32_t TBSA = EFSA + N_EVT_FIFO * 8;

        FDCAN.FDCAN_TXBC = _::FDCAN_TXBC_TBSA::W(TBSA)          // tx-buffer start address
                         | _::FDCAN_TXBC_NDTB::W(N_TX_BUFFER)   // number of tx-buffers
                         | _::FDCAN_TXBC_TFQS::W(N_TX_FIFO)     // number tx-fifo elements
                         ;

        static constexpr uint32_t TMSA = TBSA + (N_TX_BUFFER + N_TX_FIFO) * ELEMENT_SIZE;

        static_assert(TMSA <= 2560 * 4, "message RAM overflow");

        latest_tx_fifo_request = 0;
        element_size = ELEMENT_SIZE;
    }

    static void start()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        FDCAN.FDCAN_CCCR &= ~_::FDCAN_CCCR_INIT;            // clear initialization bit
        while ((FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT));   // clock domain sync wait
    }

    static void stop()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_INIT;             // set initialization bit
        while (!(FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT));   // clock domain sync wait
    }

    static unsigned write(const fdcan_tx_header_t& hdr, const uint8_t *buf)
    {
        typename fdcan::T& FDCAN = fdcan::V;

        if (_::FDCAN_TXBC_TFQS::R(FDCAN.FDCAN_TXBC) == 0)
            return -1;

        while (FDCAN.FDCAN_TXFQS & _::FDCAN_TXFQS_TFQF);        // wait until not full

        uint8_t i = _::FDCAN_TXFQS_TFQPI::R(FDCAN.FDCAN_TXFQS); // free fifo buffer index

        tx_copy(hdr, buf, i);
        FDCAN.FDCAN_TXBAR = latest_tx_fifo_request = (1 << i);  // activate transmission
 
        return 0;
    }

    static void test_mode(bool enable)
    {
        typename fdcan::T& FDCAN = fdcan::V;

        init_begin();

        if (enable)
        {
            FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_CCE;      // configuration change enable
            FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_TEST;     // enable test mode
            FDCAN.FDCAN_TEST |= _::FDCAN_TEST_LBCK;     // loop back mode
        }
        else
            FDCAN.FDCAN_CCCR &= ~_::FDCAN_CCCR_TEST;    // disable test mode

        init_end();
    }

    static bool test_rx_read()
    {
        return fdcan::V.FDCAN_TEST & _::FDCAN_TEST_RX;
    }

    static void test_tx_write(bool x)
    {
        if (x)
            fdcan::V.FDCAN_TEST &= ~_::FDCAN_TEST_TX::W(0x2);
        else
            fdcan::V.FDCAN_TEST |= _::FDCAN_TEST_TX::W(0x3);
    }

    static uint32_t reg()
    {
        return fdcan::V.FDCAN_NBTP;
    }

    static inline uint32_t tx_buf_addr(uint8_t i)
    {
        return CAN_RAM_ADDRESS + _::FDCAN_TXBC_TBSA::R(fdcan::V.FDCAN_TXBC) + i * element_size;
    }

private:
    static void tx_copy(const fdcan_tx_header_t& hdr, const uint8_t *buf, uint8_t i)
    {
        uint32_t *dst = reinterpret_cast<uint32_t*>(tx_buf_addr(i));

        *dst++ = (0 << 31)                              // ESI (not used in classic mode)
               | (0 << 30)                              // 11-bit identifier FIXME: choice!
               | (0 << 29)                              // transmit data-frame
               | (hdr.ident << 18)                      // identifier FIXME: support EXT
               ;
        *dst++ = (0 << 24)                              // message marker
               | (0 << 23)                              // don't store tx-events
               | (0 << 21)                              // use classic frame format: FIXME fd?
               | (0 << 20)                              // no bit-rate switching: FIXME fd?
               | (data_length_code(hdr.size) << 16)     // data length code
               ;

        for (uint8_t j = 0; j < hdr.size; ++j)
            *dst++ = buf[j];                            // FIXME: correct byte ordering?
    }

    static uint32_t data_length_code(uint8_t n)
    {
        switch (n)
        {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: return n;
        case 12: return 0x9;
        case 16: return 0xA;
        case 20: return 0xB;
        case 24: return 0xC;
        case 32: return 0xD;
        case 48: return 0xE;
        case 64: return 0xF;
        default: return 0;
        }
    }

    static void init_begin()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        FDCAN.FDCAN_CCCR |= _::FDCAN_CCCR_INIT;             // start initialization
        while (!(FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT));   // wait for acceptance
    }

    static void init_end()
    {
        typename fdcan::T& FDCAN = fdcan::V;

        FDCAN.FDCAN_CCCR &= ~_::FDCAN_CCCR_INIT;            // finish initialization
        while (FDCAN.FDCAN_CCCR & _::FDCAN_CCCR_INIT);      // wait for acceptance
    }

    using traits = fdcan_traits<INST>;
    using fdcan = typename traits::fdcan;
    using _ = typename fdcan::T;

    static constexpr uint32_t CAN_RAM_ADDRESS = 0x4000AC00; // FIXME: is this MCU dependent?
    static uint8_t latest_tx_fifo_request;
    static uint8_t element_size;
};

template<int INST, pin_t TX, pin_t RX>
uint8_t fd_can_t<INST, TX, RX>::latest_tx_fifo_request = 0;

template<int INST, pin_t TX, pin_t RX>
uint8_t fd_can_t<INST, TX, RX>::element_size = 0;

