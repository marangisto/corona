#pragma once

////
//
//      STM32F7 CRYP peripherals
//
///

// CRYP: Cryptographic processor

struct stm32f722_cryp_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DINR; // data input register
    volatile uint32_t DOUTR; // data output register
    volatile uint32_t KEYR0; // key register
    volatile uint32_t KEYR1; // key register
    volatile uint32_t KEYR2; // key register
    volatile uint32_t KEYR3; // key register
    volatile uint32_t IVR0; // initialization vector register
    volatile uint32_t IVR1; // initialization vector register
    volatile uint32_t IVR2; // initialization vector register
    volatile uint32_t IVR3; // initialization vector register
    volatile uint32_t KEYR4; // key registers
    volatile uint32_t KEYR5; // key registers
    volatile uint32_t KEYR6; // key registers
    volatile uint32_t KEYR7; // key registers
    volatile uint32_t SUSP0R; // Suspend registers
    volatile uint32_t SUSP1R; // Suspend registers
    volatile uint32_t SUSP2R; // Suspend registers
    volatile uint32_t SUSP3R; // Suspend registers
    volatile uint32_t SUSP4R; // Suspend registers
    volatile uint32_t SUSP5R; // Suspend registers
    volatile uint32_t SUSP6R; // Suspend registers
    volatile uint32_t SUSP7R; // Suspend registers

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    typedef bit_field_t<13, 0x3> CR_GCMPH; // Used only for GCM, GMAC and CMAC algorithms and has no effect when other
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation complete flag clear
    typedef bit_field_t<5, 0x3> CR_CHMOD; // AES chaining mode
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection (for data in and data out to/from the cryptographic block)
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // Busy flag
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_DINR; // Data input

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_DOUTR; // Data output

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> KEYR0_KEYR0; // Data output register

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_KEYR1; // Data output register

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> KEYR2_KEYR2; // Data output register

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_KEYR3; // Data output register

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_IVR0; // initialization vector register

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_IVR1; // Initialization vector register

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_IVR2; // Initialization vector register

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_IVR3; // Initialization vector register

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR4_KEYR4; // Data output register

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_KEYR5; // Data output register

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_KEYR6; // Data output register

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_KEYR7; // Data output register

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP0R_SUSP0R; // AES Suspend

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP1R_SUSP1R; // AES Suspend

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP2R_SUSP2R; // AES Suspend

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP3R_SUSP3R; // IV127

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP4R_SUSP4R; // AES Suspend

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP5R_SUSP5R; // AES Suspend

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP6R_SUSP6R; // AES Suspend

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SUSP7R_SUSP7R; // AES Suspend
};

// CRYP: Cryptographic processor

struct stm32f745_cryp_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DIN; // data input register
    volatile uint32_t DOUT; // data output register
    volatile uint32_t DMACR; // DMA control register
    volatile uint32_t IMSCR; // interrupt mask set/clear register
    volatile uint32_t RISR; // raw interrupt status register
    volatile uint32_t MISR; // masked interrupt status register
    volatile uint32_t K0LR; // key registers
    volatile uint32_t K0RR; // key registers
    volatile uint32_t K1LR; // key registers
    volatile uint32_t K1RR; // key registers
    volatile uint32_t K2LR; // key registers
    volatile uint32_t K2RR; // key registers
    volatile uint32_t K3LR; // key registers
    volatile uint32_t K3RR; // key registers
    volatile uint32_t IV0LR; // initialization vector registers
    volatile uint32_t IV0RR; // initialization vector registers
    volatile uint32_t IV1LR; // initialization vector registers
    volatile uint32_t IV1RR; // initialization vector registers
    volatile uint32_t CSGCMCCM0R; // context swap register
    volatile uint32_t CSGCMCCM1R; // context swap register
    volatile uint32_t CSGCMCCM2R; // context swap register
    volatile uint32_t CSGCMCCM3R; // context swap register
    volatile uint32_t CSGCMCCM4R; // context swap register
    volatile uint32_t CSGCMCCM5R; // context swap register
    volatile uint32_t CSGCMCCM6R; // context swap register
    volatile uint32_t CSGCMCCM7R; // context swap register
    volatile uint32_t CSGCM0R; // context swap register
    volatile uint32_t CSGCM1R; // context swap register
    volatile uint32_t CSGCM2R; // context swap register
    volatile uint32_t CSGCM3R; // context swap register
    volatile uint32_t CSGCM4R; // context swap register
    volatile uint32_t CSGCM5R; // context swap register
    volatile uint32_t CSGCM6R; // context swap register
    volatile uint32_t CSGCM7R; // context swap register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ALGODIR = 0x4; // Algorithm direction
    typedef bit_field_t<3, 0x7> CR_ALGOMODE0; // Algorithm mode
    typedef bit_field_t<6, 0x3> CR_DATATYPE; // Data type selection
    typedef bit_field_t<8, 0x3> CR_KEYSIZE; // Key size selection (AES mode only)
    static constexpr uint32_t CR_FFLUSH = 0x4000; // FIFO flush
    static constexpr uint32_t CR_CRYPEN = 0x8000; // Cryptographic processor enable
    typedef bit_field_t<16, 0x3> CR_GCM_CCMPH; // GCM_CCMPH
    static constexpr uint32_t CR_ALGOMODE3 = 0x80000; // ALGOMODE

    static constexpr uint32_t SR_RESET_VALUE = 0x3; // Reset value
    static constexpr uint32_t SR_BUSY = 0x10; // Busy bit
    static constexpr uint32_t SR_OFFU = 0x8; // Output FIFO full
    static constexpr uint32_t SR_OFNE = 0x4; // Output FIFO not empty
    static constexpr uint32_t SR_IFNF = 0x2; // Input FIFO not full
    static constexpr uint32_t SR_IFEM = 0x1; // Input FIFO empty

    static constexpr uint32_t DIN_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIN_DATAIN; // Data input

    static constexpr uint32_t DOUT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUT_DATAOUT; // Data output

    static constexpr uint32_t DMACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACR_DOEN = 0x2; // DMA output enable
    static constexpr uint32_t DMACR_DIEN = 0x1; // DMA input enable

    static constexpr uint32_t IMSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMSCR_OUTIM = 0x2; // Output FIFO service interrupt mask
    static constexpr uint32_t IMSCR_INIM = 0x1; // Input FIFO service interrupt mask

    static constexpr uint32_t RISR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t RISR_OUTRIS = 0x2; // Output FIFO service raw interrupt status
    static constexpr uint32_t RISR_INRIS = 0x1; // Input FIFO service raw interrupt status

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_OUTMIS = 0x2; // Output FIFO service masked interrupt status
    static constexpr uint32_t MISR_INMIS = 0x1; // Input FIFO service masked interrupt status

    static constexpr uint32_t K0LR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K0LR_B224 = 0x1; // b224
    static constexpr uint32_t K0LR_B225 = 0x2; // b225
    static constexpr uint32_t K0LR_B226 = 0x4; // b226
    static constexpr uint32_t K0LR_B227 = 0x8; // b227
    static constexpr uint32_t K0LR_B228 = 0x10; // b228
    static constexpr uint32_t K0LR_B229 = 0x20; // b229
    static constexpr uint32_t K0LR_B230 = 0x40; // b230
    static constexpr uint32_t K0LR_B231 = 0x80; // b231
    static constexpr uint32_t K0LR_B232 = 0x100; // b232
    static constexpr uint32_t K0LR_B233 = 0x200; // b233
    static constexpr uint32_t K0LR_B234 = 0x400; // b234
    static constexpr uint32_t K0LR_B235 = 0x800; // b235
    static constexpr uint32_t K0LR_B236 = 0x1000; // b236
    static constexpr uint32_t K0LR_B237 = 0x2000; // b237
    static constexpr uint32_t K0LR_B238 = 0x4000; // b238
    static constexpr uint32_t K0LR_B239 = 0x8000; // b239
    static constexpr uint32_t K0LR_B240 = 0x10000; // b240
    static constexpr uint32_t K0LR_B241 = 0x20000; // b241
    static constexpr uint32_t K0LR_B242 = 0x40000; // b242
    static constexpr uint32_t K0LR_B243 = 0x80000; // b243
    static constexpr uint32_t K0LR_B244 = 0x100000; // b244
    static constexpr uint32_t K0LR_B245 = 0x200000; // b245
    static constexpr uint32_t K0LR_B246 = 0x400000; // b246
    static constexpr uint32_t K0LR_B247 = 0x800000; // b247
    static constexpr uint32_t K0LR_B248 = 0x1000000; // b248
    static constexpr uint32_t K0LR_B249 = 0x2000000; // b249
    static constexpr uint32_t K0LR_B250 = 0x4000000; // b250
    static constexpr uint32_t K0LR_B251 = 0x8000000; // b251
    static constexpr uint32_t K0LR_B252 = 0x10000000; // b252
    static constexpr uint32_t K0LR_B253 = 0x20000000; // b253
    static constexpr uint32_t K0LR_B254 = 0x40000000; // b254
    static constexpr uint32_t K0LR_B255 = 0x80000000; // b255

    static constexpr uint32_t K0RR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K0RR_B192 = 0x1; // b192
    static constexpr uint32_t K0RR_B193 = 0x2; // b193
    static constexpr uint32_t K0RR_B194 = 0x4; // b194
    static constexpr uint32_t K0RR_B195 = 0x8; // b195
    static constexpr uint32_t K0RR_B196 = 0x10; // b196
    static constexpr uint32_t K0RR_B197 = 0x20; // b197
    static constexpr uint32_t K0RR_B198 = 0x40; // b198
    static constexpr uint32_t K0RR_B199 = 0x80; // b199
    static constexpr uint32_t K0RR_B200 = 0x100; // b200
    static constexpr uint32_t K0RR_B201 = 0x200; // b201
    static constexpr uint32_t K0RR_B202 = 0x400; // b202
    static constexpr uint32_t K0RR_B203 = 0x800; // b203
    static constexpr uint32_t K0RR_B204 = 0x1000; // b204
    static constexpr uint32_t K0RR_B205 = 0x2000; // b205
    static constexpr uint32_t K0RR_B206 = 0x4000; // b206
    static constexpr uint32_t K0RR_B207 = 0x8000; // b207
    static constexpr uint32_t K0RR_B208 = 0x10000; // b208
    static constexpr uint32_t K0RR_B209 = 0x20000; // b209
    static constexpr uint32_t K0RR_B210 = 0x40000; // b210
    static constexpr uint32_t K0RR_B211 = 0x80000; // b211
    static constexpr uint32_t K0RR_B212 = 0x100000; // b212
    static constexpr uint32_t K0RR_B213 = 0x200000; // b213
    static constexpr uint32_t K0RR_B214 = 0x400000; // b214
    static constexpr uint32_t K0RR_B215 = 0x800000; // b215
    static constexpr uint32_t K0RR_B216 = 0x1000000; // b216
    static constexpr uint32_t K0RR_B217 = 0x2000000; // b217
    static constexpr uint32_t K0RR_B218 = 0x4000000; // b218
    static constexpr uint32_t K0RR_B219 = 0x8000000; // b219
    static constexpr uint32_t K0RR_B220 = 0x10000000; // b220
    static constexpr uint32_t K0RR_B221 = 0x20000000; // b221
    static constexpr uint32_t K0RR_B222 = 0x40000000; // b222
    static constexpr uint32_t K0RR_B223 = 0x80000000; // b223

    static constexpr uint32_t K1LR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K1LR_B160 = 0x1; // b160
    static constexpr uint32_t K1LR_B161 = 0x2; // b161
    static constexpr uint32_t K1LR_B162 = 0x4; // b162
    static constexpr uint32_t K1LR_B163 = 0x8; // b163
    static constexpr uint32_t K1LR_B164 = 0x10; // b164
    static constexpr uint32_t K1LR_B165 = 0x20; // b165
    static constexpr uint32_t K1LR_B166 = 0x40; // b166
    static constexpr uint32_t K1LR_B167 = 0x80; // b167
    static constexpr uint32_t K1LR_B168 = 0x100; // b168
    static constexpr uint32_t K1LR_B169 = 0x200; // b169
    static constexpr uint32_t K1LR_B170 = 0x400; // b170
    static constexpr uint32_t K1LR_B171 = 0x800; // b171
    static constexpr uint32_t K1LR_B172 = 0x1000; // b172
    static constexpr uint32_t K1LR_B173 = 0x2000; // b173
    static constexpr uint32_t K1LR_B174 = 0x4000; // b174
    static constexpr uint32_t K1LR_B175 = 0x8000; // b175
    static constexpr uint32_t K1LR_B176 = 0x10000; // b176
    static constexpr uint32_t K1LR_B177 = 0x20000; // b177
    static constexpr uint32_t K1LR_B178 = 0x40000; // b178
    static constexpr uint32_t K1LR_B179 = 0x80000; // b179
    static constexpr uint32_t K1LR_B180 = 0x100000; // b180
    static constexpr uint32_t K1LR_B181 = 0x200000; // b181
    static constexpr uint32_t K1LR_B182 = 0x400000; // b182
    static constexpr uint32_t K1LR_B183 = 0x800000; // b183
    static constexpr uint32_t K1LR_B184 = 0x1000000; // b184
    static constexpr uint32_t K1LR_B185 = 0x2000000; // b185
    static constexpr uint32_t K1LR_B186 = 0x4000000; // b186
    static constexpr uint32_t K1LR_B187 = 0x8000000; // b187
    static constexpr uint32_t K1LR_B188 = 0x10000000; // b188
    static constexpr uint32_t K1LR_B189 = 0x20000000; // b189
    static constexpr uint32_t K1LR_B190 = 0x40000000; // b190
    static constexpr uint32_t K1LR_B191 = 0x80000000; // b191

    static constexpr uint32_t K1RR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K1RR_B128 = 0x1; // b128
    static constexpr uint32_t K1RR_B129 = 0x2; // b129
    static constexpr uint32_t K1RR_B130 = 0x4; // b130
    static constexpr uint32_t K1RR_B131 = 0x8; // b131
    static constexpr uint32_t K1RR_B132 = 0x10; // b132
    static constexpr uint32_t K1RR_B133 = 0x20; // b133
    static constexpr uint32_t K1RR_B134 = 0x40; // b134
    static constexpr uint32_t K1RR_B135 = 0x80; // b135
    static constexpr uint32_t K1RR_B136 = 0x100; // b136
    static constexpr uint32_t K1RR_B137 = 0x200; // b137
    static constexpr uint32_t K1RR_B138 = 0x400; // b138
    static constexpr uint32_t K1RR_B139 = 0x800; // b139
    static constexpr uint32_t K1RR_B140 = 0x1000; // b140
    static constexpr uint32_t K1RR_B141 = 0x2000; // b141
    static constexpr uint32_t K1RR_B142 = 0x4000; // b142
    static constexpr uint32_t K1RR_B143 = 0x8000; // b143
    static constexpr uint32_t K1RR_B144 = 0x10000; // b144
    static constexpr uint32_t K1RR_B145 = 0x20000; // b145
    static constexpr uint32_t K1RR_B146 = 0x40000; // b146
    static constexpr uint32_t K1RR_B147 = 0x80000; // b147
    static constexpr uint32_t K1RR_B148 = 0x100000; // b148
    static constexpr uint32_t K1RR_B149 = 0x200000; // b149
    static constexpr uint32_t K1RR_B150 = 0x400000; // b150
    static constexpr uint32_t K1RR_B151 = 0x800000; // b151
    static constexpr uint32_t K1RR_B152 = 0x1000000; // b152
    static constexpr uint32_t K1RR_B153 = 0x2000000; // b153
    static constexpr uint32_t K1RR_B154 = 0x4000000; // b154
    static constexpr uint32_t K1RR_B155 = 0x8000000; // b155
    static constexpr uint32_t K1RR_B156 = 0x10000000; // b156
    static constexpr uint32_t K1RR_B157 = 0x20000000; // b157
    static constexpr uint32_t K1RR_B158 = 0x40000000; // b158
    static constexpr uint32_t K1RR_B159 = 0x80000000; // b159

    static constexpr uint32_t K2LR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K2LR_B96 = 0x1; // b96
    static constexpr uint32_t K2LR_B97 = 0x2; // b97
    static constexpr uint32_t K2LR_B98 = 0x4; // b98
    static constexpr uint32_t K2LR_B99 = 0x8; // b99
    static constexpr uint32_t K2LR_B100 = 0x10; // b100
    static constexpr uint32_t K2LR_B101 = 0x20; // b101
    static constexpr uint32_t K2LR_B102 = 0x40; // b102
    static constexpr uint32_t K2LR_B103 = 0x80; // b103
    static constexpr uint32_t K2LR_B104 = 0x100; // b104
    static constexpr uint32_t K2LR_B105 = 0x200; // b105
    static constexpr uint32_t K2LR_B106 = 0x400; // b106
    static constexpr uint32_t K2LR_B107 = 0x800; // b107
    static constexpr uint32_t K2LR_B108 = 0x1000; // b108
    static constexpr uint32_t K2LR_B109 = 0x2000; // b109
    static constexpr uint32_t K2LR_B110 = 0x4000; // b110
    static constexpr uint32_t K2LR_B111 = 0x8000; // b111
    static constexpr uint32_t K2LR_B112 = 0x10000; // b112
    static constexpr uint32_t K2LR_B113 = 0x20000; // b113
    static constexpr uint32_t K2LR_B114 = 0x40000; // b114
    static constexpr uint32_t K2LR_B115 = 0x80000; // b115
    static constexpr uint32_t K2LR_B116 = 0x100000; // b116
    static constexpr uint32_t K2LR_B117 = 0x200000; // b117
    static constexpr uint32_t K2LR_B118 = 0x400000; // b118
    static constexpr uint32_t K2LR_B119 = 0x800000; // b119
    static constexpr uint32_t K2LR_B120 = 0x1000000; // b120
    static constexpr uint32_t K2LR_B121 = 0x2000000; // b121
    static constexpr uint32_t K2LR_B122 = 0x4000000; // b122
    static constexpr uint32_t K2LR_B123 = 0x8000000; // b123
    static constexpr uint32_t K2LR_B124 = 0x10000000; // b124
    static constexpr uint32_t K2LR_B125 = 0x20000000; // b125
    static constexpr uint32_t K2LR_B126 = 0x40000000; // b126
    static constexpr uint32_t K2LR_B127 = 0x80000000; // b127

    static constexpr uint32_t K2RR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K2RR_B64 = 0x1; // b64
    static constexpr uint32_t K2RR_B65 = 0x2; // b65
    static constexpr uint32_t K2RR_B66 = 0x4; // b66
    static constexpr uint32_t K2RR_B67 = 0x8; // b67
    static constexpr uint32_t K2RR_B68 = 0x10; // b68
    static constexpr uint32_t K2RR_B69 = 0x20; // b69
    static constexpr uint32_t K2RR_B70 = 0x40; // b70
    static constexpr uint32_t K2RR_B71 = 0x80; // b71
    static constexpr uint32_t K2RR_B72 = 0x100; // b72
    static constexpr uint32_t K2RR_B73 = 0x200; // b73
    static constexpr uint32_t K2RR_B74 = 0x400; // b74
    static constexpr uint32_t K2RR_B75 = 0x800; // b75
    static constexpr uint32_t K2RR_B76 = 0x1000; // b76
    static constexpr uint32_t K2RR_B77 = 0x2000; // b77
    static constexpr uint32_t K2RR_B78 = 0x4000; // b78
    static constexpr uint32_t K2RR_B79 = 0x8000; // b79
    static constexpr uint32_t K2RR_B80 = 0x10000; // b80
    static constexpr uint32_t K2RR_B81 = 0x20000; // b81
    static constexpr uint32_t K2RR_B82 = 0x40000; // b82
    static constexpr uint32_t K2RR_B83 = 0x80000; // b83
    static constexpr uint32_t K2RR_B84 = 0x100000; // b84
    static constexpr uint32_t K2RR_B85 = 0x200000; // b85
    static constexpr uint32_t K2RR_B86 = 0x400000; // b86
    static constexpr uint32_t K2RR_B87 = 0x800000; // b87
    static constexpr uint32_t K2RR_B88 = 0x1000000; // b88
    static constexpr uint32_t K2RR_B89 = 0x2000000; // b89
    static constexpr uint32_t K2RR_B90 = 0x4000000; // b90
    static constexpr uint32_t K2RR_B91 = 0x8000000; // b91
    static constexpr uint32_t K2RR_B92 = 0x10000000; // b92
    static constexpr uint32_t K2RR_B93 = 0x20000000; // b93
    static constexpr uint32_t K2RR_B94 = 0x40000000; // b94
    static constexpr uint32_t K2RR_B95 = 0x80000000; // b95

    static constexpr uint32_t K3LR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K3LR_B32 = 0x1; // b32
    static constexpr uint32_t K3LR_B33 = 0x2; // b33
    static constexpr uint32_t K3LR_B34 = 0x4; // b34
    static constexpr uint32_t K3LR_B35 = 0x8; // b35
    static constexpr uint32_t K3LR_B36 = 0x10; // b36
    static constexpr uint32_t K3LR_B37 = 0x20; // b37
    static constexpr uint32_t K3LR_B38 = 0x40; // b38
    static constexpr uint32_t K3LR_B39 = 0x80; // b39
    static constexpr uint32_t K3LR_B40 = 0x100; // b40
    static constexpr uint32_t K3LR_B41 = 0x200; // b41
    static constexpr uint32_t K3LR_B42 = 0x400; // b42
    static constexpr uint32_t K3LR_B43 = 0x800; // b43
    static constexpr uint32_t K3LR_B44 = 0x1000; // b44
    static constexpr uint32_t K3LR_B45 = 0x2000; // b45
    static constexpr uint32_t K3LR_B46 = 0x4000; // b46
    static constexpr uint32_t K3LR_B47 = 0x8000; // b47
    static constexpr uint32_t K3LR_B48 = 0x10000; // b48
    static constexpr uint32_t K3LR_B49 = 0x20000; // b49
    static constexpr uint32_t K3LR_B50 = 0x40000; // b50
    static constexpr uint32_t K3LR_B51 = 0x80000; // b51
    static constexpr uint32_t K3LR_B52 = 0x100000; // b52
    static constexpr uint32_t K3LR_B53 = 0x200000; // b53
    static constexpr uint32_t K3LR_B54 = 0x400000; // b54
    static constexpr uint32_t K3LR_B55 = 0x800000; // b55
    static constexpr uint32_t K3LR_B56 = 0x1000000; // b56
    static constexpr uint32_t K3LR_B57 = 0x2000000; // b57
    static constexpr uint32_t K3LR_B58 = 0x4000000; // b58
    static constexpr uint32_t K3LR_B59 = 0x8000000; // b59
    static constexpr uint32_t K3LR_B60 = 0x10000000; // b60
    static constexpr uint32_t K3LR_B61 = 0x20000000; // b61
    static constexpr uint32_t K3LR_B62 = 0x40000000; // b62
    static constexpr uint32_t K3LR_B63 = 0x80000000; // b63

    static constexpr uint32_t K3RR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t K3RR_B0 = 0x1; // b0
    static constexpr uint32_t K3RR_B1 = 0x2; // b1
    static constexpr uint32_t K3RR_B2 = 0x4; // b2
    static constexpr uint32_t K3RR_B3 = 0x8; // b3
    static constexpr uint32_t K3RR_B4 = 0x10; // b4
    static constexpr uint32_t K3RR_B5 = 0x20; // b5
    static constexpr uint32_t K3RR_B6 = 0x40; // b6
    static constexpr uint32_t K3RR_B7 = 0x80; // b7
    static constexpr uint32_t K3RR_B8 = 0x100; // b8
    static constexpr uint32_t K3RR_B9 = 0x200; // b9
    static constexpr uint32_t K3RR_B10 = 0x400; // b10
    static constexpr uint32_t K3RR_B11 = 0x800; // b11
    static constexpr uint32_t K3RR_B12 = 0x1000; // b12
    static constexpr uint32_t K3RR_B13 = 0x2000; // b13
    static constexpr uint32_t K3RR_B14 = 0x4000; // b14
    static constexpr uint32_t K3RR_B15 = 0x8000; // b15
    static constexpr uint32_t K3RR_B16 = 0x10000; // b16
    static constexpr uint32_t K3RR_B17 = 0x20000; // b17
    static constexpr uint32_t K3RR_B18 = 0x40000; // b18
    static constexpr uint32_t K3RR_B19 = 0x80000; // b19
    static constexpr uint32_t K3RR_B20 = 0x100000; // b20
    static constexpr uint32_t K3RR_B21 = 0x200000; // b21
    static constexpr uint32_t K3RR_B22 = 0x400000; // b22
    static constexpr uint32_t K3RR_B23 = 0x800000; // b23
    static constexpr uint32_t K3RR_B24 = 0x1000000; // b24
    static constexpr uint32_t K3RR_B25 = 0x2000000; // b25
    static constexpr uint32_t K3RR_B26 = 0x4000000; // b26
    static constexpr uint32_t K3RR_B27 = 0x8000000; // b27
    static constexpr uint32_t K3RR_B28 = 0x10000000; // b28
    static constexpr uint32_t K3RR_B29 = 0x20000000; // b29
    static constexpr uint32_t K3RR_B30 = 0x40000000; // b30
    static constexpr uint32_t K3RR_B31 = 0x80000000; // b31

    static constexpr uint32_t IV0LR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IV0LR_IV31 = 0x1; // IV31
    static constexpr uint32_t IV0LR_IV30 = 0x2; // IV30
    static constexpr uint32_t IV0LR_IV29 = 0x4; // IV29
    static constexpr uint32_t IV0LR_IV28 = 0x8; // IV28
    static constexpr uint32_t IV0LR_IV27 = 0x10; // IV27
    static constexpr uint32_t IV0LR_IV26 = 0x20; // IV26
    static constexpr uint32_t IV0LR_IV25 = 0x40; // IV25
    static constexpr uint32_t IV0LR_IV24 = 0x80; // IV24
    static constexpr uint32_t IV0LR_IV23 = 0x100; // IV23
    static constexpr uint32_t IV0LR_IV22 = 0x200; // IV22
    static constexpr uint32_t IV0LR_IV21 = 0x400; // IV21
    static constexpr uint32_t IV0LR_IV20 = 0x800; // IV20
    static constexpr uint32_t IV0LR_IV19 = 0x1000; // IV19
    static constexpr uint32_t IV0LR_IV18 = 0x2000; // IV18
    static constexpr uint32_t IV0LR_IV17 = 0x4000; // IV17
    static constexpr uint32_t IV0LR_IV16 = 0x8000; // IV16
    static constexpr uint32_t IV0LR_IV15 = 0x10000; // IV15
    static constexpr uint32_t IV0LR_IV14 = 0x20000; // IV14
    static constexpr uint32_t IV0LR_IV13 = 0x40000; // IV13
    static constexpr uint32_t IV0LR_IV12 = 0x80000; // IV12
    static constexpr uint32_t IV0LR_IV11 = 0x100000; // IV11
    static constexpr uint32_t IV0LR_IV10 = 0x200000; // IV10
    static constexpr uint32_t IV0LR_IV9 = 0x400000; // IV9
    static constexpr uint32_t IV0LR_IV8 = 0x800000; // IV8
    static constexpr uint32_t IV0LR_IV7 = 0x1000000; // IV7
    static constexpr uint32_t IV0LR_IV6 = 0x2000000; // IV6
    static constexpr uint32_t IV0LR_IV5 = 0x4000000; // IV5
    static constexpr uint32_t IV0LR_IV4 = 0x8000000; // IV4
    static constexpr uint32_t IV0LR_IV3 = 0x10000000; // IV3
    static constexpr uint32_t IV0LR_IV2 = 0x20000000; // IV2
    static constexpr uint32_t IV0LR_IV1 = 0x40000000; // IV1
    static constexpr uint32_t IV0LR_IV0 = 0x80000000; // IV0

    static constexpr uint32_t IV0RR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IV0RR_IV63 = 0x1; // IV63
    static constexpr uint32_t IV0RR_IV62 = 0x2; // IV62
    static constexpr uint32_t IV0RR_IV61 = 0x4; // IV61
    static constexpr uint32_t IV0RR_IV60 = 0x8; // IV60
    static constexpr uint32_t IV0RR_IV59 = 0x10; // IV59
    static constexpr uint32_t IV0RR_IV58 = 0x20; // IV58
    static constexpr uint32_t IV0RR_IV57 = 0x40; // IV57
    static constexpr uint32_t IV0RR_IV56 = 0x80; // IV56
    static constexpr uint32_t IV0RR_IV55 = 0x100; // IV55
    static constexpr uint32_t IV0RR_IV54 = 0x200; // IV54
    static constexpr uint32_t IV0RR_IV53 = 0x400; // IV53
    static constexpr uint32_t IV0RR_IV52 = 0x800; // IV52
    static constexpr uint32_t IV0RR_IV51 = 0x1000; // IV51
    static constexpr uint32_t IV0RR_IV50 = 0x2000; // IV50
    static constexpr uint32_t IV0RR_IV49 = 0x4000; // IV49
    static constexpr uint32_t IV0RR_IV48 = 0x8000; // IV48
    static constexpr uint32_t IV0RR_IV47 = 0x10000; // IV47
    static constexpr uint32_t IV0RR_IV46 = 0x20000; // IV46
    static constexpr uint32_t IV0RR_IV45 = 0x40000; // IV45
    static constexpr uint32_t IV0RR_IV44 = 0x80000; // IV44
    static constexpr uint32_t IV0RR_IV43 = 0x100000; // IV43
    static constexpr uint32_t IV0RR_IV42 = 0x200000; // IV42
    static constexpr uint32_t IV0RR_IV41 = 0x400000; // IV41
    static constexpr uint32_t IV0RR_IV40 = 0x800000; // IV40
    static constexpr uint32_t IV0RR_IV39 = 0x1000000; // IV39
    static constexpr uint32_t IV0RR_IV38 = 0x2000000; // IV38
    static constexpr uint32_t IV0RR_IV37 = 0x4000000; // IV37
    static constexpr uint32_t IV0RR_IV36 = 0x8000000; // IV36
    static constexpr uint32_t IV0RR_IV35 = 0x10000000; // IV35
    static constexpr uint32_t IV0RR_IV34 = 0x20000000; // IV34
    static constexpr uint32_t IV0RR_IV33 = 0x40000000; // IV33
    static constexpr uint32_t IV0RR_IV32 = 0x80000000; // IV32

    static constexpr uint32_t IV1LR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IV1LR_IV95 = 0x1; // IV95
    static constexpr uint32_t IV1LR_IV94 = 0x2; // IV94
    static constexpr uint32_t IV1LR_IV93 = 0x4; // IV93
    static constexpr uint32_t IV1LR_IV92 = 0x8; // IV92
    static constexpr uint32_t IV1LR_IV91 = 0x10; // IV91
    static constexpr uint32_t IV1LR_IV90 = 0x20; // IV90
    static constexpr uint32_t IV1LR_IV89 = 0x40; // IV89
    static constexpr uint32_t IV1LR_IV88 = 0x80; // IV88
    static constexpr uint32_t IV1LR_IV87 = 0x100; // IV87
    static constexpr uint32_t IV1LR_IV86 = 0x200; // IV86
    static constexpr uint32_t IV1LR_IV85 = 0x400; // IV85
    static constexpr uint32_t IV1LR_IV84 = 0x800; // IV84
    static constexpr uint32_t IV1LR_IV83 = 0x1000; // IV83
    static constexpr uint32_t IV1LR_IV82 = 0x2000; // IV82
    static constexpr uint32_t IV1LR_IV81 = 0x4000; // IV81
    static constexpr uint32_t IV1LR_IV80 = 0x8000; // IV80
    static constexpr uint32_t IV1LR_IV79 = 0x10000; // IV79
    static constexpr uint32_t IV1LR_IV78 = 0x20000; // IV78
    static constexpr uint32_t IV1LR_IV77 = 0x40000; // IV77
    static constexpr uint32_t IV1LR_IV76 = 0x80000; // IV76
    static constexpr uint32_t IV1LR_IV75 = 0x100000; // IV75
    static constexpr uint32_t IV1LR_IV74 = 0x200000; // IV74
    static constexpr uint32_t IV1LR_IV73 = 0x400000; // IV73
    static constexpr uint32_t IV1LR_IV72 = 0x800000; // IV72
    static constexpr uint32_t IV1LR_IV71 = 0x1000000; // IV71
    static constexpr uint32_t IV1LR_IV70 = 0x2000000; // IV70
    static constexpr uint32_t IV1LR_IV69 = 0x4000000; // IV69
    static constexpr uint32_t IV1LR_IV68 = 0x8000000; // IV68
    static constexpr uint32_t IV1LR_IV67 = 0x10000000; // IV67
    static constexpr uint32_t IV1LR_IV66 = 0x20000000; // IV66
    static constexpr uint32_t IV1LR_IV65 = 0x40000000; // IV65
    static constexpr uint32_t IV1LR_IV64 = 0x80000000; // IV64

    static constexpr uint32_t IV1RR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IV1RR_IV127 = 0x1; // IV127
    static constexpr uint32_t IV1RR_IV126 = 0x2; // IV126
    static constexpr uint32_t IV1RR_IV125 = 0x4; // IV125
    static constexpr uint32_t IV1RR_IV124 = 0x8; // IV124
    static constexpr uint32_t IV1RR_IV123 = 0x10; // IV123
    static constexpr uint32_t IV1RR_IV122 = 0x20; // IV122
    static constexpr uint32_t IV1RR_IV121 = 0x40; // IV121
    static constexpr uint32_t IV1RR_IV120 = 0x80; // IV120
    static constexpr uint32_t IV1RR_IV119 = 0x100; // IV119
    static constexpr uint32_t IV1RR_IV118 = 0x200; // IV118
    static constexpr uint32_t IV1RR_IV117 = 0x400; // IV117
    static constexpr uint32_t IV1RR_IV116 = 0x800; // IV116
    static constexpr uint32_t IV1RR_IV115 = 0x1000; // IV115
    static constexpr uint32_t IV1RR_IV114 = 0x2000; // IV114
    static constexpr uint32_t IV1RR_IV113 = 0x4000; // IV113
    static constexpr uint32_t IV1RR_IV112 = 0x8000; // IV112
    static constexpr uint32_t IV1RR_IV111 = 0x10000; // IV111
    static constexpr uint32_t IV1RR_IV110 = 0x20000; // IV110
    static constexpr uint32_t IV1RR_IV109 = 0x40000; // IV109
    static constexpr uint32_t IV1RR_IV108 = 0x80000; // IV108
    static constexpr uint32_t IV1RR_IV107 = 0x100000; // IV107
    static constexpr uint32_t IV1RR_IV106 = 0x200000; // IV106
    static constexpr uint32_t IV1RR_IV105 = 0x400000; // IV105
    static constexpr uint32_t IV1RR_IV104 = 0x800000; // IV104
    static constexpr uint32_t IV1RR_IV103 = 0x1000000; // IV103
    static constexpr uint32_t IV1RR_IV102 = 0x2000000; // IV102
    static constexpr uint32_t IV1RR_IV101 = 0x4000000; // IV101
    static constexpr uint32_t IV1RR_IV100 = 0x8000000; // IV100
    static constexpr uint32_t IV1RR_IV99 = 0x10000000; // IV99
    static constexpr uint32_t IV1RR_IV98 = 0x20000000; // IV98
    static constexpr uint32_t IV1RR_IV97 = 0x40000000; // IV97
    static constexpr uint32_t IV1RR_IV96 = 0x80000000; // IV96

    static constexpr uint32_t CSGCMCCM0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM0R_CSGCMCCM0R; // CSGCMCCM0R

    static constexpr uint32_t CSGCMCCM1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM1R_CSGCMCCM1R; // CSGCMCCM1R

    static constexpr uint32_t CSGCMCCM2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM2R_CSGCMCCM2R; // CSGCMCCM2R

    static constexpr uint32_t CSGCMCCM3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM3R_CSGCMCCM3R; // CSGCMCCM3R

    static constexpr uint32_t CSGCMCCM4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM4R_CSGCMCCM4R; // CSGCMCCM4R

    static constexpr uint32_t CSGCMCCM5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM5R_CSGCMCCM5R; // CSGCMCCM5R

    static constexpr uint32_t CSGCMCCM6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM6R_CSGCMCCM6R; // CSGCMCCM6R

    static constexpr uint32_t CSGCMCCM7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCMCCM7R_CSGCMCCM7R; // CSGCMCCM7R

    static constexpr uint32_t CSGCM0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM0R_CSGCM0R; // CSGCM0R

    static constexpr uint32_t CSGCM1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM1R_CSGCM1R; // CSGCM1R

    static constexpr uint32_t CSGCM2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM2R_CSGCM2R; // CSGCM2R

    static constexpr uint32_t CSGCM3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM3R_CSGCM3R; // CSGCM3R

    static constexpr uint32_t CSGCM4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM4R_CSGCM4R; // CSGCM4R

    static constexpr uint32_t CSGCM5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM5R_CSGCM5R; // CSGCM5R

    static constexpr uint32_t CSGCM6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM6R_CSGCM6R; // CSGCM6R

    static constexpr uint32_t CSGCM7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSGCM7R_CSGCM7R; // CSGCM7R
};

template<>
struct peripheral_t<STM32F722, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f722_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f722_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f722_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f722_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, CRYP>
{
    static constexpr periph_t P = CRYP;
    using T = stm32f745_cryp_t;
    static T& V;
};

using cryp_t = peripheral_t<svd, CRYP>;

template<int INST> struct cryp_traits {};

template<> struct cryp_traits<0>
{
    using cryp = cryp_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_CRYPEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_CRYPEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_CRYPRST;
    }
};
