                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler 
                                      3 ; Version 4.4.0 #14620 (MINGW32)
                                      4 ;--------------------------------------------------------
                                      5 	.module Operations
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _SPI_send
                                     12 	.globl _TF1
                                     13 	.globl _TR1
                                     14 	.globl _TF0
                                     15 	.globl _TR0
                                     16 	.globl _IE1
                                     17 	.globl _IT1
                                     18 	.globl _IE0
                                     19 	.globl _IT0
                                     20 	.globl _SM0
                                     21 	.globl _SM1
                                     22 	.globl _SM2
                                     23 	.globl _REN
                                     24 	.globl _TB8
                                     25 	.globl _RB8
                                     26 	.globl _TI
                                     27 	.globl _RI
                                     28 	.globl _CY
                                     29 	.globl _AC
                                     30 	.globl _F0
                                     31 	.globl _RS1
                                     32 	.globl _RS0
                                     33 	.globl _OV
                                     34 	.globl _F1
                                     35 	.globl _P
                                     36 	.globl _RD
                                     37 	.globl _WR
                                     38 	.globl _T1
                                     39 	.globl _T0
                                     40 	.globl _INT1
                                     41 	.globl _INT0
                                     42 	.globl _TXD0
                                     43 	.globl _TXD
                                     44 	.globl _RXD0
                                     45 	.globl _RXD
                                     46 	.globl _P3_7
                                     47 	.globl _P3_6
                                     48 	.globl _P3_5
                                     49 	.globl _P3_4
                                     50 	.globl _P3_3
                                     51 	.globl _P3_2
                                     52 	.globl _P3_1
                                     53 	.globl _P3_0
                                     54 	.globl _P2_7
                                     55 	.globl _P2_6
                                     56 	.globl _P2_5
                                     57 	.globl _P2_4
                                     58 	.globl _P2_3
                                     59 	.globl _P2_2
                                     60 	.globl _P2_1
                                     61 	.globl _P2_0
                                     62 	.globl _P1_7
                                     63 	.globl _P1_6
                                     64 	.globl _P1_5
                                     65 	.globl _P1_4
                                     66 	.globl _P1_3
                                     67 	.globl _P1_2
                                     68 	.globl _P1_1
                                     69 	.globl _P1_0
                                     70 	.globl _P0_7
                                     71 	.globl _P0_6
                                     72 	.globl _P0_5
                                     73 	.globl _P0_4
                                     74 	.globl _P0_3
                                     75 	.globl _P0_2
                                     76 	.globl _P0_1
                                     77 	.globl _P0_0
                                     78 	.globl _PS
                                     79 	.globl _PT1
                                     80 	.globl _PX1
                                     81 	.globl _PT0
                                     82 	.globl _PX0
                                     83 	.globl _EA
                                     84 	.globl _ES
                                     85 	.globl _ET1
                                     86 	.globl _EX1
                                     87 	.globl _ET0
                                     88 	.globl _EX0
                                     89 	.globl _BREG_F7
                                     90 	.globl _BREG_F6
                                     91 	.globl _BREG_F5
                                     92 	.globl _BREG_F4
                                     93 	.globl _BREG_F3
                                     94 	.globl _BREG_F2
                                     95 	.globl _BREG_F1
                                     96 	.globl _BREG_F0
                                     97 	.globl _P5_7
                                     98 	.globl _P5_6
                                     99 	.globl _P5_5
                                    100 	.globl _P5_4
                                    101 	.globl _P5_3
                                    102 	.globl _P5_2
                                    103 	.globl _P5_1
                                    104 	.globl _P5_0
                                    105 	.globl _P4_7
                                    106 	.globl _P4_6
                                    107 	.globl _P4_5
                                    108 	.globl _P4_4
                                    109 	.globl _P4_3
                                    110 	.globl _P4_2
                                    111 	.globl _P4_1
                                    112 	.globl _P4_0
                                    113 	.globl _PX0L
                                    114 	.globl _PT0L
                                    115 	.globl _PX1L
                                    116 	.globl _PT1L
                                    117 	.globl _PSL
                                    118 	.globl _PT2L
                                    119 	.globl _PPCL
                                    120 	.globl _EC
                                    121 	.globl _CCF0
                                    122 	.globl _CCF1
                                    123 	.globl _CCF2
                                    124 	.globl _CCF3
                                    125 	.globl _CCF4
                                    126 	.globl _CR
                                    127 	.globl _CF
                                    128 	.globl _TF2
                                    129 	.globl _EXF2
                                    130 	.globl _RCLK
                                    131 	.globl _TCLK
                                    132 	.globl _EXEN2
                                    133 	.globl _TR2
                                    134 	.globl _C_T2
                                    135 	.globl _CP_RL2
                                    136 	.globl _T2CON_7
                                    137 	.globl _T2CON_6
                                    138 	.globl _T2CON_5
                                    139 	.globl _T2CON_4
                                    140 	.globl _T2CON_3
                                    141 	.globl _T2CON_2
                                    142 	.globl _T2CON_1
                                    143 	.globl _T2CON_0
                                    144 	.globl _PT2
                                    145 	.globl _ET2
                                    146 	.globl _TMOD
                                    147 	.globl _TL1
                                    148 	.globl _TL0
                                    149 	.globl _TH1
                                    150 	.globl _TH0
                                    151 	.globl _TCON
                                    152 	.globl _SP
                                    153 	.globl _SCON
                                    154 	.globl _SBUF0
                                    155 	.globl _SBUF
                                    156 	.globl _PSW
                                    157 	.globl _PCON
                                    158 	.globl _P3
                                    159 	.globl _P2
                                    160 	.globl _P1
                                    161 	.globl _P0
                                    162 	.globl _IP
                                    163 	.globl _IE
                                    164 	.globl _DP0L
                                    165 	.globl _DPL
                                    166 	.globl _DP0H
                                    167 	.globl _DPH
                                    168 	.globl _B
                                    169 	.globl _ACC
                                    170 	.globl _EECON
                                    171 	.globl _KBF
                                    172 	.globl _KBE
                                    173 	.globl _KBLS
                                    174 	.globl _BRL
                                    175 	.globl _BDRCON
                                    176 	.globl _T2MOD
                                    177 	.globl _SPDAT
                                    178 	.globl _SPSTA
                                    179 	.globl _SPCON
                                    180 	.globl _SADEN
                                    181 	.globl _SADDR
                                    182 	.globl _WDTPRG
                                    183 	.globl _WDTRST
                                    184 	.globl _P5
                                    185 	.globl _P4
                                    186 	.globl _IPH1
                                    187 	.globl _IPL1
                                    188 	.globl _IPH0
                                    189 	.globl _IPL0
                                    190 	.globl _IEN1
                                    191 	.globl _IEN0
                                    192 	.globl _CMOD
                                    193 	.globl _CL
                                    194 	.globl _CH
                                    195 	.globl _CCON
                                    196 	.globl _CCAPM4
                                    197 	.globl _CCAPM3
                                    198 	.globl _CCAPM2
                                    199 	.globl _CCAPM1
                                    200 	.globl _CCAPM0
                                    201 	.globl _CCAP4L
                                    202 	.globl _CCAP3L
                                    203 	.globl _CCAP2L
                                    204 	.globl _CCAP1L
                                    205 	.globl _CCAP0L
                                    206 	.globl _CCAP4H
                                    207 	.globl _CCAP3H
                                    208 	.globl _CCAP2H
                                    209 	.globl _CCAP1H
                                    210 	.globl _CCAP0H
                                    211 	.globl _CKCON1
                                    212 	.globl _CKCON0
                                    213 	.globl _CKRL
                                    214 	.globl _AUXR1
                                    215 	.globl _AUXR
                                    216 	.globl _TH2
                                    217 	.globl _TL2
                                    218 	.globl _RCAP2H
                                    219 	.globl _RCAP2L
                                    220 	.globl _T2CON
                                    221 	.globl _LED_Fast_Blink
                                    222 	.globl _LED_Slow_Blink
                                    223 	.globl _LED_On
                                    224 	.globl _LED_Off
                                    225 ;--------------------------------------------------------
                                    226 ; special function registers
                                    227 ;--------------------------------------------------------
                                    228 	.area RSEG    (ABS,DATA)
      000000                        229 	.org 0x0000
                           0000C8   230 _T2CON	=	0x00c8
                           0000CA   231 _RCAP2L	=	0x00ca
                           0000CB   232 _RCAP2H	=	0x00cb
                           0000CC   233 _TL2	=	0x00cc
                           0000CD   234 _TH2	=	0x00cd
                           00008E   235 _AUXR	=	0x008e
                           0000A2   236 _AUXR1	=	0x00a2
                           000097   237 _CKRL	=	0x0097
                           00008F   238 _CKCON0	=	0x008f
                           0000AF   239 _CKCON1	=	0x00af
                           0000FA   240 _CCAP0H	=	0x00fa
                           0000FB   241 _CCAP1H	=	0x00fb
                           0000FC   242 _CCAP2H	=	0x00fc
                           0000FD   243 _CCAP3H	=	0x00fd
                           0000FE   244 _CCAP4H	=	0x00fe
                           0000EA   245 _CCAP0L	=	0x00ea
                           0000EB   246 _CCAP1L	=	0x00eb
                           0000EC   247 _CCAP2L	=	0x00ec
                           0000ED   248 _CCAP3L	=	0x00ed
                           0000EE   249 _CCAP4L	=	0x00ee
                           0000DA   250 _CCAPM0	=	0x00da
                           0000DB   251 _CCAPM1	=	0x00db
                           0000DC   252 _CCAPM2	=	0x00dc
                           0000DD   253 _CCAPM3	=	0x00dd
                           0000DE   254 _CCAPM4	=	0x00de
                           0000D8   255 _CCON	=	0x00d8
                           0000F9   256 _CH	=	0x00f9
                           0000E9   257 _CL	=	0x00e9
                           0000D9   258 _CMOD	=	0x00d9
                           0000A8   259 _IEN0	=	0x00a8
                           0000B1   260 _IEN1	=	0x00b1
                           0000B8   261 _IPL0	=	0x00b8
                           0000B7   262 _IPH0	=	0x00b7
                           0000B2   263 _IPL1	=	0x00b2
                           0000B3   264 _IPH1	=	0x00b3
                           0000C0   265 _P4	=	0x00c0
                           0000E8   266 _P5	=	0x00e8
                           0000A6   267 _WDTRST	=	0x00a6
                           0000A7   268 _WDTPRG	=	0x00a7
                           0000A9   269 _SADDR	=	0x00a9
                           0000B9   270 _SADEN	=	0x00b9
                           0000C3   271 _SPCON	=	0x00c3
                           0000C4   272 _SPSTA	=	0x00c4
                           0000C5   273 _SPDAT	=	0x00c5
                           0000C9   274 _T2MOD	=	0x00c9
                           00009B   275 _BDRCON	=	0x009b
                           00009A   276 _BRL	=	0x009a
                           00009C   277 _KBLS	=	0x009c
                           00009D   278 _KBE	=	0x009d
                           00009E   279 _KBF	=	0x009e
                           0000D2   280 _EECON	=	0x00d2
                           0000E0   281 _ACC	=	0x00e0
                           0000F0   282 _B	=	0x00f0
                           000083   283 _DPH	=	0x0083
                           000083   284 _DP0H	=	0x0083
                           000082   285 _DPL	=	0x0082
                           000082   286 _DP0L	=	0x0082
                           0000A8   287 _IE	=	0x00a8
                           0000B8   288 _IP	=	0x00b8
                           000080   289 _P0	=	0x0080
                           000090   290 _P1	=	0x0090
                           0000A0   291 _P2	=	0x00a0
                           0000B0   292 _P3	=	0x00b0
                           000087   293 _PCON	=	0x0087
                           0000D0   294 _PSW	=	0x00d0
                           000099   295 _SBUF	=	0x0099
                           000099   296 _SBUF0	=	0x0099
                           000098   297 _SCON	=	0x0098
                           000081   298 _SP	=	0x0081
                           000088   299 _TCON	=	0x0088
                           00008C   300 _TH0	=	0x008c
                           00008D   301 _TH1	=	0x008d
                           00008A   302 _TL0	=	0x008a
                           00008B   303 _TL1	=	0x008b
                           000089   304 _TMOD	=	0x0089
                                    305 ;--------------------------------------------------------
                                    306 ; special function bits
                                    307 ;--------------------------------------------------------
                                    308 	.area RSEG    (ABS,DATA)
      000000                        309 	.org 0x0000
                           0000AD   310 _ET2	=	0x00ad
                           0000BD   311 _PT2	=	0x00bd
                           0000C8   312 _T2CON_0	=	0x00c8
                           0000C9   313 _T2CON_1	=	0x00c9
                           0000CA   314 _T2CON_2	=	0x00ca
                           0000CB   315 _T2CON_3	=	0x00cb
                           0000CC   316 _T2CON_4	=	0x00cc
                           0000CD   317 _T2CON_5	=	0x00cd
                           0000CE   318 _T2CON_6	=	0x00ce
                           0000CF   319 _T2CON_7	=	0x00cf
                           0000C8   320 _CP_RL2	=	0x00c8
                           0000C9   321 _C_T2	=	0x00c9
                           0000CA   322 _TR2	=	0x00ca
                           0000CB   323 _EXEN2	=	0x00cb
                           0000CC   324 _TCLK	=	0x00cc
                           0000CD   325 _RCLK	=	0x00cd
                           0000CE   326 _EXF2	=	0x00ce
                           0000CF   327 _TF2	=	0x00cf
                           0000DF   328 _CF	=	0x00df
                           0000DE   329 _CR	=	0x00de
                           0000DC   330 _CCF4	=	0x00dc
                           0000DB   331 _CCF3	=	0x00db
                           0000DA   332 _CCF2	=	0x00da
                           0000D9   333 _CCF1	=	0x00d9
                           0000D8   334 _CCF0	=	0x00d8
                           0000AE   335 _EC	=	0x00ae
                           0000BE   336 _PPCL	=	0x00be
                           0000BD   337 _PT2L	=	0x00bd
                           0000BC   338 _PSL	=	0x00bc
                           0000BB   339 _PT1L	=	0x00bb
                           0000BA   340 _PX1L	=	0x00ba
                           0000B9   341 _PT0L	=	0x00b9
                           0000B8   342 _PX0L	=	0x00b8
                           0000C0   343 _P4_0	=	0x00c0
                           0000C1   344 _P4_1	=	0x00c1
                           0000C2   345 _P4_2	=	0x00c2
                           0000C3   346 _P4_3	=	0x00c3
                           0000C4   347 _P4_4	=	0x00c4
                           0000C5   348 _P4_5	=	0x00c5
                           0000C6   349 _P4_6	=	0x00c6
                           0000C7   350 _P4_7	=	0x00c7
                           0000E8   351 _P5_0	=	0x00e8
                           0000E9   352 _P5_1	=	0x00e9
                           0000EA   353 _P5_2	=	0x00ea
                           0000EB   354 _P5_3	=	0x00eb
                           0000EC   355 _P5_4	=	0x00ec
                           0000ED   356 _P5_5	=	0x00ed
                           0000EE   357 _P5_6	=	0x00ee
                           0000EF   358 _P5_7	=	0x00ef
                           0000F0   359 _BREG_F0	=	0x00f0
                           0000F1   360 _BREG_F1	=	0x00f1
                           0000F2   361 _BREG_F2	=	0x00f2
                           0000F3   362 _BREG_F3	=	0x00f3
                           0000F4   363 _BREG_F4	=	0x00f4
                           0000F5   364 _BREG_F5	=	0x00f5
                           0000F6   365 _BREG_F6	=	0x00f6
                           0000F7   366 _BREG_F7	=	0x00f7
                           0000A8   367 _EX0	=	0x00a8
                           0000A9   368 _ET0	=	0x00a9
                           0000AA   369 _EX1	=	0x00aa
                           0000AB   370 _ET1	=	0x00ab
                           0000AC   371 _ES	=	0x00ac
                           0000AF   372 _EA	=	0x00af
                           0000B8   373 _PX0	=	0x00b8
                           0000B9   374 _PT0	=	0x00b9
                           0000BA   375 _PX1	=	0x00ba
                           0000BB   376 _PT1	=	0x00bb
                           0000BC   377 _PS	=	0x00bc
                           000080   378 _P0_0	=	0x0080
                           000081   379 _P0_1	=	0x0081
                           000082   380 _P0_2	=	0x0082
                           000083   381 _P0_3	=	0x0083
                           000084   382 _P0_4	=	0x0084
                           000085   383 _P0_5	=	0x0085
                           000086   384 _P0_6	=	0x0086
                           000087   385 _P0_7	=	0x0087
                           000090   386 _P1_0	=	0x0090
                           000091   387 _P1_1	=	0x0091
                           000092   388 _P1_2	=	0x0092
                           000093   389 _P1_3	=	0x0093
                           000094   390 _P1_4	=	0x0094
                           000095   391 _P1_5	=	0x0095
                           000096   392 _P1_6	=	0x0096
                           000097   393 _P1_7	=	0x0097
                           0000A0   394 _P2_0	=	0x00a0
                           0000A1   395 _P2_1	=	0x00a1
                           0000A2   396 _P2_2	=	0x00a2
                           0000A3   397 _P2_3	=	0x00a3
                           0000A4   398 _P2_4	=	0x00a4
                           0000A5   399 _P2_5	=	0x00a5
                           0000A6   400 _P2_6	=	0x00a6
                           0000A7   401 _P2_7	=	0x00a7
                           0000B0   402 _P3_0	=	0x00b0
                           0000B1   403 _P3_1	=	0x00b1
                           0000B2   404 _P3_2	=	0x00b2
                           0000B3   405 _P3_3	=	0x00b3
                           0000B4   406 _P3_4	=	0x00b4
                           0000B5   407 _P3_5	=	0x00b5
                           0000B6   408 _P3_6	=	0x00b6
                           0000B7   409 _P3_7	=	0x00b7
                           0000B0   410 _RXD	=	0x00b0
                           0000B0   411 _RXD0	=	0x00b0
                           0000B1   412 _TXD	=	0x00b1
                           0000B1   413 _TXD0	=	0x00b1
                           0000B2   414 _INT0	=	0x00b2
                           0000B3   415 _INT1	=	0x00b3
                           0000B4   416 _T0	=	0x00b4
                           0000B5   417 _T1	=	0x00b5
                           0000B6   418 _WR	=	0x00b6
                           0000B7   419 _RD	=	0x00b7
                           0000D0   420 _P	=	0x00d0
                           0000D1   421 _F1	=	0x00d1
                           0000D2   422 _OV	=	0x00d2
                           0000D3   423 _RS0	=	0x00d3
                           0000D4   424 _RS1	=	0x00d4
                           0000D5   425 _F0	=	0x00d5
                           0000D6   426 _AC	=	0x00d6
                           0000D7   427 _CY	=	0x00d7
                           000098   428 _RI	=	0x0098
                           000099   429 _TI	=	0x0099
                           00009A   430 _RB8	=	0x009a
                           00009B   431 _TB8	=	0x009b
                           00009C   432 _REN	=	0x009c
                           00009D   433 _SM2	=	0x009d
                           00009E   434 _SM1	=	0x009e
                           00009F   435 _SM0	=	0x009f
                           000088   436 _IT0	=	0x0088
                           000089   437 _IE0	=	0x0089
                           00008A   438 _IT1	=	0x008a
                           00008B   439 _IE1	=	0x008b
                           00008C   440 _TR0	=	0x008c
                           00008D   441 _TF0	=	0x008d
                           00008E   442 _TR1	=	0x008e
                           00008F   443 _TF1	=	0x008f
                                    444 ;--------------------------------------------------------
                                    445 ; overlayable register banks
                                    446 ;--------------------------------------------------------
                                    447 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        448 	.ds 8
                                    449 ;--------------------------------------------------------
                                    450 ; internal ram data
                                    451 ;--------------------------------------------------------
                                    452 	.area DSEG    (DATA)
                                    453 ;--------------------------------------------------------
                                    454 ; overlayable items in internal ram
                                    455 ;--------------------------------------------------------
                                    456 ;--------------------------------------------------------
                                    457 ; indirectly addressable internal ram data
                                    458 ;--------------------------------------------------------
                                    459 	.area ISEG    (DATA)
                                    460 ;--------------------------------------------------------
                                    461 ; absolute internal ram data
                                    462 ;--------------------------------------------------------
                                    463 	.area IABS    (ABS,DATA)
                                    464 	.area IABS    (ABS,DATA)
                                    465 ;--------------------------------------------------------
                                    466 ; bit data
                                    467 ;--------------------------------------------------------
                                    468 	.area BSEG    (BIT)
                                    469 ;--------------------------------------------------------
                                    470 ; paged external ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area PSEG    (PAG,XDATA)
                                    473 ;--------------------------------------------------------
                                    474 ; uninitialized external ram data
                                    475 ;--------------------------------------------------------
                                    476 	.area XSEG    (XDATA)
                                    477 ;--------------------------------------------------------
                                    478 ; absolute external ram data
                                    479 ;--------------------------------------------------------
                                    480 	.area XABS    (ABS,XDATA)
                                    481 ;--------------------------------------------------------
                                    482 ; initialized external ram data
                                    483 ;--------------------------------------------------------
                                    484 	.area XISEG   (XDATA)
                                    485 	.area HOME    (CODE)
                                    486 	.area GSINIT0 (CODE)
                                    487 	.area GSINIT1 (CODE)
                                    488 	.area GSINIT2 (CODE)
                                    489 	.area GSINIT3 (CODE)
                                    490 	.area GSINIT4 (CODE)
                                    491 	.area GSINIT5 (CODE)
                                    492 	.area GSINIT  (CODE)
                                    493 	.area GSFINAL (CODE)
                                    494 	.area CSEG    (CODE)
                                    495 ;--------------------------------------------------------
                                    496 ; global & static initialisations
                                    497 ;--------------------------------------------------------
                                    498 	.area HOME    (CODE)
                                    499 	.area GSINIT  (CODE)
                                    500 	.area GSFINAL (CODE)
                                    501 	.area GSINIT  (CODE)
                                    502 ;--------------------------------------------------------
                                    503 ; Home
                                    504 ;--------------------------------------------------------
                                    505 	.area HOME    (CODE)
                                    506 	.area HOME    (CODE)
                                    507 ;--------------------------------------------------------
                                    508 ; code
                                    509 ;--------------------------------------------------------
                                    510 	.area CSEG    (CODE)
                                    511 ;------------------------------------------------------------
                                    512 ;Allocation info for local variables in function 'LED_Fast_Blink'
                                    513 ;------------------------------------------------------------
                                    514 ;	Operations.c:4: void LED_Fast_Blink(void)
                                    515 ;	-----------------------------------------
                                    516 ;	 function LED_Fast_Blink
                                    517 ;	-----------------------------------------
      003485                        518 _LED_Fast_Blink:
                           000007   519 	ar7 = 0x07
                           000006   520 	ar6 = 0x06
                           000005   521 	ar5 = 0x05
                           000004   522 	ar4 = 0x04
                           000003   523 	ar3 = 0x03
                           000002   524 	ar2 = 0x02
                           000001   525 	ar1 = 0x01
                           000000   526 	ar0 = 0x00
                                    527 ;	Operations.c:6: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_ECON1);     //Write to the ECON1 register
      003485 75 82 5F         [24]  528 	mov	dpl, #0x5f
      003488 12 35 DC         [24]  529 	lcall	_SPI_send
                                    530 ;	Operations.c:7: SPI_send(ENC_REGISTER_BANK_2);                          //Select register bank2
      00348B 75 82 02         [24]  531 	mov	dpl, #0x02
      00348E 12 35 DC         [24]  532 	lcall	_SPI_send
                                    533 ;	Operations.c:9: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_MIREGADR);  //Select the MIREGADR register
      003491 75 82 54         [24]  534 	mov	dpl, #0x54
      003494 12 35 DC         [24]  535 	lcall	_SPI_send
                                    536 ;	Operations.c:10: SPI_send(ENC_PHLCON);                                   //Write the address of the PHY register in the MIREGADR register
      003497 75 82 14         [24]  537 	mov	dpl, #0x14
      00349A 12 35 DC         [24]  538 	lcall	_SPI_send
                                    539 ;	Operations.c:12: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_MIWRL);
      00349D 75 82 56         [24]  540 	mov	dpl, #0x56
      0034A0 12 35 DC         [24]  541 	lcall	_SPI_send
                                    542 ;	Operations.c:13: SPI_send(LED_FAST_BLINK_LSB);
      0034A3 75 82 00         [24]  543 	mov	dpl, #0x00
      0034A6 12 35 DC         [24]  544 	lcall	_SPI_send
                                    545 ;	Operations.c:14: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_MIWRH);
      0034A9 75 82 57         [24]  546 	mov	dpl, #0x57
      0034AC 12 35 DC         [24]  547 	lcall	_SPI_send
                                    548 ;	Operations.c:15: SPI_send(LED_FAST_BLINK_MSB);
      0034AF 75 82 0A         [24]  549 	mov	dpl, #0x0a
                                    550 ;	Operations.c:17: }
      0034B2 02 35 DC         [24]  551 	ljmp	_SPI_send
                                    552 ;------------------------------------------------------------
                                    553 ;Allocation info for local variables in function 'LED_Slow_Blink'
                                    554 ;------------------------------------------------------------
                                    555 ;	Operations.c:19: void LED_Slow_Blink(void)
                                    556 ;	-----------------------------------------
                                    557 ;	 function LED_Slow_Blink
                                    558 ;	-----------------------------------------
      0034B5                        559 _LED_Slow_Blink:
                                    560 ;	Operations.c:22: }
      0034B5 22               [24]  561 	ret
                                    562 ;------------------------------------------------------------
                                    563 ;Allocation info for local variables in function 'LED_On'
                                    564 ;------------------------------------------------------------
                                    565 ;	Operations.c:24: void LED_On(void)
                                    566 ;	-----------------------------------------
                                    567 ;	 function LED_On
                                    568 ;	-----------------------------------------
      0034B6                        569 _LED_On:
                                    570 ;	Operations.c:26: P1_1 = 0;
                                    571 ;	assignBit
      0034B6 C2 91            [12]  572 	clr	_P1_1
                                    573 ;	Operations.c:27: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_ECON1);     //Write to the ECON1 register
      0034B8 75 82 5F         [24]  574 	mov	dpl, #0x5f
      0034BB 12 35 DC         [24]  575 	lcall	_SPI_send
                                    576 ;	Operations.c:29: SPI_send(ENC_REGISTER_BANK_2);                          //Select register bank2
      0034BE 75 82 02         [24]  577 	mov	dpl, #0x02
      0034C1 12 35 DC         [24]  578 	lcall	_SPI_send
                                    579 ;	Operations.c:31: P1_1 = 1;
                                    580 ;	assignBit
      0034C4 D2 91            [12]  581 	setb	_P1_1
                                    582 ;	Operations.c:34: P1_1 = 0;
                                    583 ;	assignBit
      0034C6 C2 91            [12]  584 	clr	_P1_1
                                    585 ;	Operations.c:35: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_MIREGADR);  //Select the MIREGADR register
      0034C8 75 82 54         [24]  586 	mov	dpl, #0x54
      0034CB 12 35 DC         [24]  587 	lcall	_SPI_send
                                    588 ;	Operations.c:37: SPI_send(ENC_PHLCON);                                   //Write the address of the PHY register in the MIREGADR register
      0034CE 75 82 14         [24]  589 	mov	dpl, #0x14
      0034D1 12 35 DC         [24]  590 	lcall	_SPI_send
                                    591 ;	Operations.c:39: P1_1 = 1;
                                    592 ;	assignBit
      0034D4 D2 91            [12]  593 	setb	_P1_1
                                    594 ;	Operations.c:43: P1_1 = 0;
                                    595 ;	assignBit
      0034D6 C2 91            [12]  596 	clr	_P1_1
                                    597 ;	Operations.c:44: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_MIWRL);
      0034D8 75 82 56         [24]  598 	mov	dpl, #0x56
      0034DB 12 35 DC         [24]  599 	lcall	_SPI_send
                                    600 ;	Operations.c:46: SPI_send(0xA8);
      0034DE 75 82 A8         [24]  601 	mov	dpl, #0xa8
      0034E1 12 35 DC         [24]  602 	lcall	_SPI_send
                                    603 ;	Operations.c:47: P1_1 = 1;
                                    604 ;	assignBit
      0034E4 D2 91            [12]  605 	setb	_P1_1
                                    606 ;	Operations.c:51: P1_1 = 0;
                                    607 ;	assignBit
      0034E6 C2 91            [12]  608 	clr	_P1_1
                                    609 ;	Operations.c:52: SPI_send(ENC_WRITE_CONTROL_REG_OPCODE | ENC_MIWRH);
      0034E8 75 82 57         [24]  610 	mov	dpl, #0x57
      0034EB 12 35 DC         [24]  611 	lcall	_SPI_send
                                    612 ;	Operations.c:54: SPI_send(0x3A);
      0034EE 75 82 3A         [24]  613 	mov	dpl, #0x3a
      0034F1 12 35 DC         [24]  614 	lcall	_SPI_send
                                    615 ;	Operations.c:55: P1_1 = 1;
                                    616 ;	assignBit
      0034F4 D2 91            [12]  617 	setb	_P1_1
                                    618 ;	Operations.c:57: }
      0034F6 22               [24]  619 	ret
                                    620 ;------------------------------------------------------------
                                    621 ;Allocation info for local variables in function 'LED_Off'
                                    622 ;------------------------------------------------------------
                                    623 ;	Operations.c:59: void LED_Off(void)
                                    624 ;	-----------------------------------------
                                    625 ;	 function LED_Off
                                    626 ;	-----------------------------------------
      0034F7                        627 _LED_Off:
                                    628 ;	Operations.c:62: }
      0034F7 22               [24]  629 	ret
                                    630 	.area CSEG    (CODE)
                                    631 	.area CONST   (CODE)
                                    632 	.area XINIT   (CODE)
                                    633 	.area CABS    (ABS,CODE)
