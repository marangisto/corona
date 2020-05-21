#pragma once

////
//
//      STM32F4 CRYP peripherals
//
////

////
//
//      Cryptographic processor
//
////

struct stm32f405_cryp_t
{
    volatile uint32_t CR;         // control register
    volatile uint32_t SR;         // [read-only] status register
    volatile uint32_t DIN;        // [read-write] data input register
    volatile uint32_t DOUT;       // [read-only] data output register
    volatile uint32_t DMACR;      // [read-write] DMA control register
    volatile uint32_t IMSCR;      // [read-write] interrupt mask set/clear register
    volatile uint32_t RISR;       // [read-only] raw interrupt status register
    volatile uint32_t MISR;       // [read-only] masked interrupt status register
    volatile uint32_t K0LR;       // [write-only] key registers
    volatile uint32_t K0RR;       // [write-only] key registers
    volatile uint32_t K1LR;       // [write-only] key registers
    volatile uint32_t K1RR;       // [write-only] key registers
    volatile uint32_t K2LR;       // [write-only] key registers
    volatile uint32_t K2RR;       // [write-only] key registers
    volatile uint32_t K3LR;       // [write-only] key registers
    volatile uint32_t K3RR;       // [write-only] key registers
    volatile uint32_t IV0LR;      // [read-write] initialization vector registers
    volatile uint32_t IV0RR;      // [read-write] initialization vector registers
    volatile uint32_t IV1LR;      // [read-write] initialization vector registers
    volatile uint32_t IV1RR;      // [read-write] initialization vector registers
    volatile uint32_t CSGCMCCM0R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM1R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM2R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM3R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM4R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM5R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM6R; // [read-write] context swap register
    volatile uint32_t CSGCMCCM7R; // [read-write] context swap register
    volatile uint32_t CSGCM0R;    // [read-write] context swap register
    volatile uint32_t CSGCM1R;    // [read-write] context swap register
    volatile uint32_t CSGCM2R;    // [read-write] context swap register
    volatile uint32_t CSGCM3R;    // [read-write] context swap register
    volatile uint32_t CSGCM4R;    // [read-write] context swap register
    volatile uint32_t CSGCM5R;    // [read-write] context swap register
    volatile uint32_t CSGCM6R;    // [read-write] context swap register
    volatile uint32_t CSGCM7R;    // [read-write] context swap register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ALGODIR = 0x4;       // Algorithm direction
    template<uint32_t X>
    static constexpr uint32_t CR_ALGOMODE0 =          // Algorithm mode
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_DATATYPE =           // Data type selection
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_KEYSIZE =            // Key size selection (AES mode only)
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_FFLUSH = 0x4000;     // FIFO flush
    static constexpr uint32_t CR_CRYPEN = 0x8000;     // Cryptographic processor enable
    template<uint32_t X>
    static constexpr uint32_t CR_GCM_CCMPH =          // GCM_CCMPH
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t CR_ALGOMODE3 = 0x80000; // ALGOMODE

    static constexpr uint32_t SR_RESET_VALUE = 0x3;
    static constexpr uint32_t SR_BUSY = 0x10; // Busy bit
    static constexpr uint32_t SR_OFFU = 0x8;  // Output FIFO full
    static constexpr uint32_t SR_OFNE = 0x4;  // Output FIFO not empty
    static constexpr uint32_t SR_IFNF = 0x2;  // Input FIFO not full
    static constexpr uint32_t SR_IFEM = 0x1;  // Input FIFO empty

    static constexpr uint32_t DIN_RESET_VALUE = 0x0;

    static constexpr uint32_t DOUT_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACR_DOEN = 0x2; // DMA output enable
    static constexpr uint32_t DMACR_DIEN = 0x1; // DMA input enable

    static constexpr uint32_t IMSCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IMSCR_OUTIM = 0x2; // Output FIFO service interrupt mask
    static constexpr uint32_t IMSCR_INIM = 0x1;  // Input FIFO service interrupt mask

    static constexpr uint32_t RISR_RESET_VALUE = 0x1;
    static constexpr uint32_t RISR_OUTRIS = 0x2; // Output FIFO service raw interrupt status
    static constexpr uint32_t RISR_INRIS = 0x1;  // Input FIFO service raw interrupt status

    static constexpr uint32_t MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MISR_OUTMIS = 0x2; // Output FIFO service masked interrupt status
    static constexpr uint32_t MISR_INMIS = 0x1;  // Input FIFO service masked interrupt status

    static constexpr uint32_t K0LR_RESET_VALUE = 0x0;
    static constexpr uint32_t K0LR_b224 = 0x1;        // b224
    static constexpr uint32_t K0LR_b225 = 0x2;        // b225
    static constexpr uint32_t K0LR_b226 = 0x4;        // b226
    static constexpr uint32_t K0LR_b227 = 0x8;        // b227
    static constexpr uint32_t K0LR_b228 = 0x10;       // b228
    static constexpr uint32_t K0LR_b229 = 0x20;       // b229
    static constexpr uint32_t K0LR_b230 = 0x40;       // b230
    static constexpr uint32_t K0LR_b231 = 0x80;       // b231
    static constexpr uint32_t K0LR_b232 = 0x100;      // b232
    static constexpr uint32_t K0LR_b233 = 0x200;      // b233
    static constexpr uint32_t K0LR_b234 = 0x400;      // b234
    static constexpr uint32_t K0LR_b235 = 0x800;      // b235
    static constexpr uint32_t K0LR_b236 = 0x1000;     // b236
    static constexpr uint32_t K0LR_b237 = 0x2000;     // b237
    static constexpr uint32_t K0LR_b238 = 0x4000;     // b238
    static constexpr uint32_t K0LR_b239 = 0x8000;     // b239
    static constexpr uint32_t K0LR_b240 = 0x10000;    // b240
    static constexpr uint32_t K0LR_b241 = 0x20000;    // b241
    static constexpr uint32_t K0LR_b242 = 0x40000;    // b242
    static constexpr uint32_t K0LR_b243 = 0x80000;    // b243
    static constexpr uint32_t K0LR_b244 = 0x100000;   // b244
    static constexpr uint32_t K0LR_b245 = 0x200000;   // b245
    static constexpr uint32_t K0LR_b246 = 0x400000;   // b246
    static constexpr uint32_t K0LR_b247 = 0x800000;   // b247
    static constexpr uint32_t K0LR_b248 = 0x1000000;  // b248
    static constexpr uint32_t K0LR_b249 = 0x2000000;  // b249
    static constexpr uint32_t K0LR_b250 = 0x4000000;  // b250
    static constexpr uint32_t K0LR_b251 = 0x8000000;  // b251
    static constexpr uint32_t K0LR_b252 = 0x10000000; // b252
    static constexpr uint32_t K0LR_b253 = 0x20000000; // b253
    static constexpr uint32_t K0LR_b254 = 0x40000000; // b254
    static constexpr uint32_t K0LR_b255 = 0x80000000; // b255

    static constexpr uint32_t K0RR_RESET_VALUE = 0x0;
    static constexpr uint32_t K0RR_b192 = 0x1;        // b192
    static constexpr uint32_t K0RR_b193 = 0x2;        // b193
    static constexpr uint32_t K0RR_b194 = 0x4;        // b194
    static constexpr uint32_t K0RR_b195 = 0x8;        // b195
    static constexpr uint32_t K0RR_b196 = 0x10;       // b196
    static constexpr uint32_t K0RR_b197 = 0x20;       // b197
    static constexpr uint32_t K0RR_b198 = 0x40;       // b198
    static constexpr uint32_t K0RR_b199 = 0x80;       // b199
    static constexpr uint32_t K0RR_b200 = 0x100;      // b200
    static constexpr uint32_t K0RR_b201 = 0x200;      // b201
    static constexpr uint32_t K0RR_b202 = 0x400;      // b202
    static constexpr uint32_t K0RR_b203 = 0x800;      // b203
    static constexpr uint32_t K0RR_b204 = 0x1000;     // b204
    static constexpr uint32_t K0RR_b205 = 0x2000;     // b205
    static constexpr uint32_t K0RR_b206 = 0x4000;     // b206
    static constexpr uint32_t K0RR_b207 = 0x8000;     // b207
    static constexpr uint32_t K0RR_b208 = 0x10000;    // b208
    static constexpr uint32_t K0RR_b209 = 0x20000;    // b209
    static constexpr uint32_t K0RR_b210 = 0x40000;    // b210
    static constexpr uint32_t K0RR_b211 = 0x80000;    // b211
    static constexpr uint32_t K0RR_b212 = 0x100000;   // b212
    static constexpr uint32_t K0RR_b213 = 0x200000;   // b213
    static constexpr uint32_t K0RR_b214 = 0x400000;   // b214
    static constexpr uint32_t K0RR_b215 = 0x800000;   // b215
    static constexpr uint32_t K0RR_b216 = 0x1000000;  // b216
    static constexpr uint32_t K0RR_b217 = 0x2000000;  // b217
    static constexpr uint32_t K0RR_b218 = 0x4000000;  // b218
    static constexpr uint32_t K0RR_b219 = 0x8000000;  // b219
    static constexpr uint32_t K0RR_b220 = 0x10000000; // b220
    static constexpr uint32_t K0RR_b221 = 0x20000000; // b221
    static constexpr uint32_t K0RR_b222 = 0x40000000; // b222
    static constexpr uint32_t K0RR_b223 = 0x80000000; // b223

    static constexpr uint32_t K1LR_RESET_VALUE = 0x0;
    static constexpr uint32_t K1LR_b160 = 0x1;        // b160
    static constexpr uint32_t K1LR_b161 = 0x2;        // b161
    static constexpr uint32_t K1LR_b162 = 0x4;        // b162
    static constexpr uint32_t K1LR_b163 = 0x8;        // b163
    static constexpr uint32_t K1LR_b164 = 0x10;       // b164
    static constexpr uint32_t K1LR_b165 = 0x20;       // b165
    static constexpr uint32_t K1LR_b166 = 0x40;       // b166
    static constexpr uint32_t K1LR_b167 = 0x80;       // b167
    static constexpr uint32_t K1LR_b168 = 0x100;      // b168
    static constexpr uint32_t K1LR_b169 = 0x200;      // b169
    static constexpr uint32_t K1LR_b170 = 0x400;      // b170
    static constexpr uint32_t K1LR_b171 = 0x800;      // b171
    static constexpr uint32_t K1LR_b172 = 0x1000;     // b172
    static constexpr uint32_t K1LR_b173 = 0x2000;     // b173
    static constexpr uint32_t K1LR_b174 = 0x4000;     // b174
    static constexpr uint32_t K1LR_b175 = 0x8000;     // b175
    static constexpr uint32_t K1LR_b176 = 0x10000;    // b176
    static constexpr uint32_t K1LR_b177 = 0x20000;    // b177
    static constexpr uint32_t K1LR_b178 = 0x40000;    // b178
    static constexpr uint32_t K1LR_b179 = 0x80000;    // b179
    static constexpr uint32_t K1LR_b180 = 0x100000;   // b180
    static constexpr uint32_t K1LR_b181 = 0x200000;   // b181
    static constexpr uint32_t K1LR_b182 = 0x400000;   // b182
    static constexpr uint32_t K1LR_b183 = 0x800000;   // b183
    static constexpr uint32_t K1LR_b184 = 0x1000000;  // b184
    static constexpr uint32_t K1LR_b185 = 0x2000000;  // b185
    static constexpr uint32_t K1LR_b186 = 0x4000000;  // b186
    static constexpr uint32_t K1LR_b187 = 0x8000000;  // b187
    static constexpr uint32_t K1LR_b188 = 0x10000000; // b188
    static constexpr uint32_t K1LR_b189 = 0x20000000; // b189
    static constexpr uint32_t K1LR_b190 = 0x40000000; // b190
    static constexpr uint32_t K1LR_b191 = 0x80000000; // b191

    static constexpr uint32_t K1RR_RESET_VALUE = 0x0;
    static constexpr uint32_t K1RR_b128 = 0x1;        // b128
    static constexpr uint32_t K1RR_b129 = 0x2;        // b129
    static constexpr uint32_t K1RR_b130 = 0x4;        // b130
    static constexpr uint32_t K1RR_b131 = 0x8;        // b131
    static constexpr uint32_t K1RR_b132 = 0x10;       // b132
    static constexpr uint32_t K1RR_b133 = 0x20;       // b133
    static constexpr uint32_t K1RR_b134 = 0x40;       // b134
    static constexpr uint32_t K1RR_b135 = 0x80;       // b135
    static constexpr uint32_t K1RR_b136 = 0x100;      // b136
    static constexpr uint32_t K1RR_b137 = 0x200;      // b137
    static constexpr uint32_t K1RR_b138 = 0x400;      // b138
    static constexpr uint32_t K1RR_b139 = 0x800;      // b139
    static constexpr uint32_t K1RR_b140 = 0x1000;     // b140
    static constexpr uint32_t K1RR_b141 = 0x2000;     // b141
    static constexpr uint32_t K1RR_b142 = 0x4000;     // b142
    static constexpr uint32_t K1RR_b143 = 0x8000;     // b143
    static constexpr uint32_t K1RR_b144 = 0x10000;    // b144
    static constexpr uint32_t K1RR_b145 = 0x20000;    // b145
    static constexpr uint32_t K1RR_b146 = 0x40000;    // b146
    static constexpr uint32_t K1RR_b147 = 0x80000;    // b147
    static constexpr uint32_t K1RR_b148 = 0x100000;   // b148
    static constexpr uint32_t K1RR_b149 = 0x200000;   // b149
    static constexpr uint32_t K1RR_b150 = 0x400000;   // b150
    static constexpr uint32_t K1RR_b151 = 0x800000;   // b151
    static constexpr uint32_t K1RR_b152 = 0x1000000;  // b152
    static constexpr uint32_t K1RR_b153 = 0x2000000;  // b153
    static constexpr uint32_t K1RR_b154 = 0x4000000;  // b154
    static constexpr uint32_t K1RR_b155 = 0x8000000;  // b155
    static constexpr uint32_t K1RR_b156 = 0x10000000; // b156
    static constexpr uint32_t K1RR_b157 = 0x20000000; // b157
    static constexpr uint32_t K1RR_b158 = 0x40000000; // b158
    static constexpr uint32_t K1RR_b159 = 0x80000000; // b159

    static constexpr uint32_t K2LR_RESET_VALUE = 0x0;
    static constexpr uint32_t K2LR_b96 = 0x1;         // b96
    static constexpr uint32_t K2LR_b97 = 0x2;         // b97
    static constexpr uint32_t K2LR_b98 = 0x4;         // b98
    static constexpr uint32_t K2LR_b99 = 0x8;         // b99
    static constexpr uint32_t K2LR_b100 = 0x10;       // b100
    static constexpr uint32_t K2LR_b101 = 0x20;       // b101
    static constexpr uint32_t K2LR_b102 = 0x40;       // b102
    static constexpr uint32_t K2LR_b103 = 0x80;       // b103
    static constexpr uint32_t K2LR_b104 = 0x100;      // b104
    static constexpr uint32_t K2LR_b105 = 0x200;      // b105
    static constexpr uint32_t K2LR_b106 = 0x400;      // b106
    static constexpr uint32_t K2LR_b107 = 0x800;      // b107
    static constexpr uint32_t K2LR_b108 = 0x1000;     // b108
    static constexpr uint32_t K2LR_b109 = 0x2000;     // b109
    static constexpr uint32_t K2LR_b110 = 0x4000;     // b110
    static constexpr uint32_t K2LR_b111 = 0x8000;     // b111
    static constexpr uint32_t K2LR_b112 = 0x10000;    // b112
    static constexpr uint32_t K2LR_b113 = 0x20000;    // b113
    static constexpr uint32_t K2LR_b114 = 0x40000;    // b114
    static constexpr uint32_t K2LR_b115 = 0x80000;    // b115
    static constexpr uint32_t K2LR_b116 = 0x100000;   // b116
    static constexpr uint32_t K2LR_b117 = 0x200000;   // b117
    static constexpr uint32_t K2LR_b118 = 0x400000;   // b118
    static constexpr uint32_t K2LR_b119 = 0x800000;   // b119
    static constexpr uint32_t K2LR_b120 = 0x1000000;  // b120
    static constexpr uint32_t K2LR_b121 = 0x2000000;  // b121
    static constexpr uint32_t K2LR_b122 = 0x4000000;  // b122
    static constexpr uint32_t K2LR_b123 = 0x8000000;  // b123
    static constexpr uint32_t K2LR_b124 = 0x10000000; // b124
    static constexpr uint32_t K2LR_b125 = 0x20000000; // b125
    static constexpr uint32_t K2LR_b126 = 0x40000000; // b126
    static constexpr uint32_t K2LR_b127 = 0x80000000; // b127

    static constexpr uint32_t K2RR_RESET_VALUE = 0x0;
    static constexpr uint32_t K2RR_b64 = 0x1;        // b64
    static constexpr uint32_t K2RR_b65 = 0x2;        // b65
    static constexpr uint32_t K2RR_b66 = 0x4;        // b66
    static constexpr uint32_t K2RR_b67 = 0x8;        // b67
    static constexpr uint32_t K2RR_b68 = 0x10;       // b68
    static constexpr uint32_t K2RR_b69 = 0x20;       // b69
    static constexpr uint32_t K2RR_b70 = 0x40;       // b70
    static constexpr uint32_t K2RR_b71 = 0x80;       // b71
    static constexpr uint32_t K2RR_b72 = 0x100;      // b72
    static constexpr uint32_t K2RR_b73 = 0x200;      // b73
    static constexpr uint32_t K2RR_b74 = 0x400;      // b74
    static constexpr uint32_t K2RR_b75 = 0x800;      // b75
    static constexpr uint32_t K2RR_b76 = 0x1000;     // b76
    static constexpr uint32_t K2RR_b77 = 0x2000;     // b77
    static constexpr uint32_t K2RR_b78 = 0x4000;     // b78
    static constexpr uint32_t K2RR_b79 = 0x8000;     // b79
    static constexpr uint32_t K2RR_b80 = 0x10000;    // b80
    static constexpr uint32_t K2RR_b81 = 0x20000;    // b81
    static constexpr uint32_t K2RR_b82 = 0x40000;    // b82
    static constexpr uint32_t K2RR_b83 = 0x80000;    // b83
    static constexpr uint32_t K2RR_b84 = 0x100000;   // b84
    static constexpr uint32_t K2RR_b85 = 0x200000;   // b85
    static constexpr uint32_t K2RR_b86 = 0x400000;   // b86
    static constexpr uint32_t K2RR_b87 = 0x800000;   // b87
    static constexpr uint32_t K2RR_b88 = 0x1000000;  // b88
    static constexpr uint32_t K2RR_b89 = 0x2000000;  // b89
    static constexpr uint32_t K2RR_b90 = 0x4000000;  // b90
    static constexpr uint32_t K2RR_b91 = 0x8000000;  // b91
    static constexpr uint32_t K2RR_b92 = 0x10000000; // b92
    static constexpr uint32_t K2RR_b93 = 0x20000000; // b93
    static constexpr uint32_t K2RR_b94 = 0x40000000; // b94
    static constexpr uint32_t K2RR_b95 = 0x80000000; // b95

    static constexpr uint32_t K3LR_RESET_VALUE = 0x0;
    static constexpr uint32_t K3LR_b32 = 0x1;        // b32
    static constexpr uint32_t K3LR_b33 = 0x2;        // b33
    static constexpr uint32_t K3LR_b34 = 0x4;        // b34
    static constexpr uint32_t K3LR_b35 = 0x8;        // b35
    static constexpr uint32_t K3LR_b36 = 0x10;       // b36
    static constexpr uint32_t K3LR_b37 = 0x20;       // b37
    static constexpr uint32_t K3LR_b38 = 0x40;       // b38
    static constexpr uint32_t K3LR_b39 = 0x80;       // b39
    static constexpr uint32_t K3LR_b40 = 0x100;      // b40
    static constexpr uint32_t K3LR_b41 = 0x200;      // b41
    static constexpr uint32_t K3LR_b42 = 0x400;      // b42
    static constexpr uint32_t K3LR_b43 = 0x800;      // b43
    static constexpr uint32_t K3LR_b44 = 0x1000;     // b44
    static constexpr uint32_t K3LR_b45 = 0x2000;     // b45
    static constexpr uint32_t K3LR_b46 = 0x4000;     // b46
    static constexpr uint32_t K3LR_b47 = 0x8000;     // b47
    static constexpr uint32_t K3LR_b48 = 0x10000;    // b48
    static constexpr uint32_t K3LR_b49 = 0x20000;    // b49
    static constexpr uint32_t K3LR_b50 = 0x40000;    // b50
    static constexpr uint32_t K3LR_b51 = 0x80000;    // b51
    static constexpr uint32_t K3LR_b52 = 0x100000;   // b52
    static constexpr uint32_t K3LR_b53 = 0x200000;   // b53
    static constexpr uint32_t K3LR_b54 = 0x400000;   // b54
    static constexpr uint32_t K3LR_b55 = 0x800000;   // b55
    static constexpr uint32_t K3LR_b56 = 0x1000000;  // b56
    static constexpr uint32_t K3LR_b57 = 0x2000000;  // b57
    static constexpr uint32_t K3LR_b58 = 0x4000000;  // b58
    static constexpr uint32_t K3LR_b59 = 0x8000000;  // b59
    static constexpr uint32_t K3LR_b60 = 0x10000000; // b60
    static constexpr uint32_t K3LR_b61 = 0x20000000; // b61
    static constexpr uint32_t K3LR_b62 = 0x40000000; // b62
    static constexpr uint32_t K3LR_b63 = 0x80000000; // b63

    static constexpr uint32_t K3RR_RESET_VALUE = 0x0;
    static constexpr uint32_t K3RR_b0 = 0x1;         // b0
    static constexpr uint32_t K3RR_b1 = 0x2;         // b1
    static constexpr uint32_t K3RR_b2 = 0x4;         // b2
    static constexpr uint32_t K3RR_b3 = 0x8;         // b3
    static constexpr uint32_t K3RR_b4 = 0x10;        // b4
    static constexpr uint32_t K3RR_b5 = 0x20;        // b5
    static constexpr uint32_t K3RR_b6 = 0x40;        // b6
    static constexpr uint32_t K3RR_b7 = 0x80;        // b7
    static constexpr uint32_t K3RR_b8 = 0x100;       // b8
    static constexpr uint32_t K3RR_b9 = 0x200;       // b9
    static constexpr uint32_t K3RR_b10 = 0x400;      // b10
    static constexpr uint32_t K3RR_b11 = 0x800;      // b11
    static constexpr uint32_t K3RR_b12 = 0x1000;     // b12
    static constexpr uint32_t K3RR_b13 = 0x2000;     // b13
    static constexpr uint32_t K3RR_b14 = 0x4000;     // b14
    static constexpr uint32_t K3RR_b15 = 0x8000;     // b15
    static constexpr uint32_t K3RR_b16 = 0x10000;    // b16
    static constexpr uint32_t K3RR_b17 = 0x20000;    // b17
    static constexpr uint32_t K3RR_b18 = 0x40000;    // b18
    static constexpr uint32_t K3RR_b19 = 0x80000;    // b19
    static constexpr uint32_t K3RR_b20 = 0x100000;   // b20
    static constexpr uint32_t K3RR_b21 = 0x200000;   // b21
    static constexpr uint32_t K3RR_b22 = 0x400000;   // b22
    static constexpr uint32_t K3RR_b23 = 0x800000;   // b23
    static constexpr uint32_t K3RR_b24 = 0x1000000;  // b24
    static constexpr uint32_t K3RR_b25 = 0x2000000;  // b25
    static constexpr uint32_t K3RR_b26 = 0x4000000;  // b26
    static constexpr uint32_t K3RR_b27 = 0x8000000;  // b27
    static constexpr uint32_t K3RR_b28 = 0x10000000; // b28
    static constexpr uint32_t K3RR_b29 = 0x20000000; // b29
    static constexpr uint32_t K3RR_b30 = 0x40000000; // b30
    static constexpr uint32_t K3RR_b31 = 0x80000000; // b31

    static constexpr uint32_t IV0LR_RESET_VALUE = 0x0;
    static constexpr uint32_t IV0LR_IV31 = 0x1;       // IV31
    static constexpr uint32_t IV0LR_IV30 = 0x2;       // IV30
    static constexpr uint32_t IV0LR_IV29 = 0x4;       // IV29
    static constexpr uint32_t IV0LR_IV28 = 0x8;       // IV28
    static constexpr uint32_t IV0LR_IV27 = 0x10;      // IV27
    static constexpr uint32_t IV0LR_IV26 = 0x20;      // IV26
    static constexpr uint32_t IV0LR_IV25 = 0x40;      // IV25
    static constexpr uint32_t IV0LR_IV24 = 0x80;      // IV24
    static constexpr uint32_t IV0LR_IV23 = 0x100;     // IV23
    static constexpr uint32_t IV0LR_IV22 = 0x200;     // IV22
    static constexpr uint32_t IV0LR_IV21 = 0x400;     // IV21
    static constexpr uint32_t IV0LR_IV20 = 0x800;     // IV20
    static constexpr uint32_t IV0LR_IV19 = 0x1000;    // IV19
    static constexpr uint32_t IV0LR_IV18 = 0x2000;    // IV18
    static constexpr uint32_t IV0LR_IV17 = 0x4000;    // IV17
    static constexpr uint32_t IV0LR_IV16 = 0x8000;    // IV16
    static constexpr uint32_t IV0LR_IV15 = 0x10000;   // IV15
    static constexpr uint32_t IV0LR_IV14 = 0x20000;   // IV14
    static constexpr uint32_t IV0LR_IV13 = 0x40000;   // IV13
    static constexpr uint32_t IV0LR_IV12 = 0x80000;   // IV12
    static constexpr uint32_t IV0LR_IV11 = 0x100000;  // IV11
    static constexpr uint32_t IV0LR_IV10 = 0x200000;  // IV10
    static constexpr uint32_t IV0LR_IV9 = 0x400000;   // IV9
    static constexpr uint32_t IV0LR_IV8 = 0x800000;   // IV8
    static constexpr uint32_t IV0LR_IV7 = 0x1000000;  // IV7
    static constexpr uint32_t IV0LR_IV6 = 0x2000000;  // IV6
    static constexpr uint32_t IV0LR_IV5 = 0x4000000;  // IV5
    static constexpr uint32_t IV0LR_IV4 = 0x8000000;  // IV4
    static constexpr uint32_t IV0LR_IV3 = 0x10000000; // IV3
    static constexpr uint32_t IV0LR_IV2 = 0x20000000; // IV2
    static constexpr uint32_t IV0LR_IV1 = 0x40000000; // IV1
    static constexpr uint32_t IV0LR_IV0 = 0x80000000; // IV0

    static constexpr uint32_t IV0RR_RESET_VALUE = 0x0;
    static constexpr uint32_t IV0RR_IV63 = 0x1;        // IV63
    static constexpr uint32_t IV0RR_IV62 = 0x2;        // IV62
    static constexpr uint32_t IV0RR_IV61 = 0x4;        // IV61
    static constexpr uint32_t IV0RR_IV60 = 0x8;        // IV60
    static constexpr uint32_t IV0RR_IV59 = 0x10;       // IV59
    static constexpr uint32_t IV0RR_IV58 = 0x20;       // IV58
    static constexpr uint32_t IV0RR_IV57 = 0x40;       // IV57
    static constexpr uint32_t IV0RR_IV56 = 0x80;       // IV56
    static constexpr uint32_t IV0RR_IV55 = 0x100;      // IV55
    static constexpr uint32_t IV0RR_IV54 = 0x200;      // IV54
    static constexpr uint32_t IV0RR_IV53 = 0x400;      // IV53
    static constexpr uint32_t IV0RR_IV52 = 0x800;      // IV52
    static constexpr uint32_t IV0RR_IV51 = 0x1000;     // IV51
    static constexpr uint32_t IV0RR_IV50 = 0x2000;     // IV50
    static constexpr uint32_t IV0RR_IV49 = 0x4000;     // IV49
    static constexpr uint32_t IV0RR_IV48 = 0x8000;     // IV48
    static constexpr uint32_t IV0RR_IV47 = 0x10000;    // IV47
    static constexpr uint32_t IV0RR_IV46 = 0x20000;    // IV46
    static constexpr uint32_t IV0RR_IV45 = 0x40000;    // IV45
    static constexpr uint32_t IV0RR_IV44 = 0x80000;    // IV44
    static constexpr uint32_t IV0RR_IV43 = 0x100000;   // IV43
    static constexpr uint32_t IV0RR_IV42 = 0x200000;   // IV42
    static constexpr uint32_t IV0RR_IV41 = 0x400000;   // IV41
    static constexpr uint32_t IV0RR_IV40 = 0x800000;   // IV40
    static constexpr uint32_t IV0RR_IV39 = 0x1000000;  // IV39
    static constexpr uint32_t IV0RR_IV38 = 0x2000000;  // IV38
    static constexpr uint32_t IV0RR_IV37 = 0x4000000;  // IV37
    static constexpr uint32_t IV0RR_IV36 = 0x8000000;  // IV36
    static constexpr uint32_t IV0RR_IV35 = 0x10000000; // IV35
    static constexpr uint32_t IV0RR_IV34 = 0x20000000; // IV34
    static constexpr uint32_t IV0RR_IV33 = 0x40000000; // IV33
    static constexpr uint32_t IV0RR_IV32 = 0x80000000; // IV32

    static constexpr uint32_t IV1LR_RESET_VALUE = 0x0;
    static constexpr uint32_t IV1LR_IV95 = 0x1;        // IV95
    static constexpr uint32_t IV1LR_IV94 = 0x2;        // IV94
    static constexpr uint32_t IV1LR_IV93 = 0x4;        // IV93
    static constexpr uint32_t IV1LR_IV92 = 0x8;        // IV92
    static constexpr uint32_t IV1LR_IV91 = 0x10;       // IV91
    static constexpr uint32_t IV1LR_IV90 = 0x20;       // IV90
    static constexpr uint32_t IV1LR_IV89 = 0x40;       // IV89
    static constexpr uint32_t IV1LR_IV88 = 0x80;       // IV88
    static constexpr uint32_t IV1LR_IV87 = 0x100;      // IV87
    static constexpr uint32_t IV1LR_IV86 = 0x200;      // IV86
    static constexpr uint32_t IV1LR_IV85 = 0x400;      // IV85
    static constexpr uint32_t IV1LR_IV84 = 0x800;      // IV84
    static constexpr uint32_t IV1LR_IV83 = 0x1000;     // IV83
    static constexpr uint32_t IV1LR_IV82 = 0x2000;     // IV82
    static constexpr uint32_t IV1LR_IV81 = 0x4000;     // IV81
    static constexpr uint32_t IV1LR_IV80 = 0x8000;     // IV80
    static constexpr uint32_t IV1LR_IV79 = 0x10000;    // IV79
    static constexpr uint32_t IV1LR_IV78 = 0x20000;    // IV78
    static constexpr uint32_t IV1LR_IV77 = 0x40000;    // IV77
    static constexpr uint32_t IV1LR_IV76 = 0x80000;    // IV76
    static constexpr uint32_t IV1LR_IV75 = 0x100000;   // IV75
    static constexpr uint32_t IV1LR_IV74 = 0x200000;   // IV74
    static constexpr uint32_t IV1LR_IV73 = 0x400000;   // IV73
    static constexpr uint32_t IV1LR_IV72 = 0x800000;   // IV72
    static constexpr uint32_t IV1LR_IV71 = 0x1000000;  // IV71
    static constexpr uint32_t IV1LR_IV70 = 0x2000000;  // IV70
    static constexpr uint32_t IV1LR_IV69 = 0x4000000;  // IV69
    static constexpr uint32_t IV1LR_IV68 = 0x8000000;  // IV68
    static constexpr uint32_t IV1LR_IV67 = 0x10000000; // IV67
    static constexpr uint32_t IV1LR_IV66 = 0x20000000; // IV66
    static constexpr uint32_t IV1LR_IV65 = 0x40000000; // IV65
    static constexpr uint32_t IV1LR_IV64 = 0x80000000; // IV64

    static constexpr uint32_t IV1RR_RESET_VALUE = 0x0;
    static constexpr uint32_t IV1RR_IV127 = 0x1;       // IV127
    static constexpr uint32_t IV1RR_IV126 = 0x2;       // IV126
    static constexpr uint32_t IV1RR_IV125 = 0x4;       // IV125
    static constexpr uint32_t IV1RR_IV124 = 0x8;       // IV124
    static constexpr uint32_t IV1RR_IV123 = 0x10;      // IV123
    static constexpr uint32_t IV1RR_IV122 = 0x20;      // IV122
    static constexpr uint32_t IV1RR_IV121 = 0x40;      // IV121
    static constexpr uint32_t IV1RR_IV120 = 0x80;      // IV120
    static constexpr uint32_t IV1RR_IV119 = 0x100;     // IV119
    static constexpr uint32_t IV1RR_IV118 = 0x200;     // IV118
    static constexpr uint32_t IV1RR_IV117 = 0x400;     // IV117
    static constexpr uint32_t IV1RR_IV116 = 0x800;     // IV116
    static constexpr uint32_t IV1RR_IV115 = 0x1000;    // IV115
    static constexpr uint32_t IV1RR_IV114 = 0x2000;    // IV114
    static constexpr uint32_t IV1RR_IV113 = 0x4000;    // IV113
    static constexpr uint32_t IV1RR_IV112 = 0x8000;    // IV112
    static constexpr uint32_t IV1RR_IV111 = 0x10000;   // IV111
    static constexpr uint32_t IV1RR_IV110 = 0x20000;   // IV110
    static constexpr uint32_t IV1RR_IV109 = 0x40000;   // IV109
    static constexpr uint32_t IV1RR_IV108 = 0x80000;   // IV108
    static constexpr uint32_t IV1RR_IV107 = 0x100000;  // IV107
    static constexpr uint32_t IV1RR_IV106 = 0x200000;  // IV106
    static constexpr uint32_t IV1RR_IV105 = 0x400000;  // IV105
    static constexpr uint32_t IV1RR_IV104 = 0x800000;  // IV104
    static constexpr uint32_t IV1RR_IV103 = 0x1000000; // IV103
    static constexpr uint32_t IV1RR_IV102 = 0x2000000; // IV102
    static constexpr uint32_t IV1RR_IV101 = 0x4000000; // IV101
    static constexpr uint32_t IV1RR_IV100 = 0x8000000; // IV100
    static constexpr uint32_t IV1RR_IV99 = 0x10000000; // IV99
    static constexpr uint32_t IV1RR_IV98 = 0x20000000; // IV98
    static constexpr uint32_t IV1RR_IV97 = 0x40000000; // IV97
    static constexpr uint32_t IV1RR_IV96 = 0x80000000; // IV96

    static constexpr uint32_t CSGCMCCM0R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM2R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM3R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM4R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM5R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM6R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCMCCM7R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM0R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM2R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM3R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM4R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM5R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM6R_RESET_VALUE = 0x0;

    static constexpr uint32_t CSGCM7R_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F405, CRYP>
{
    typedef stm32f405_cryp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, CRYP>
{
    typedef stm32f405_cryp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, CRYP>
{
    typedef stm32f405_cryp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, CRYP>
{
    typedef stm32f405_cryp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, CRYP>
{
    typedef stm32f405_cryp_t T;
    static T& V;
};

using cryp_t = peripheral_t<mcu_svd, CRYP>;

