.late_rodata
glabel D_80B96A94
    .float 0.8

.text
glabel func_80B96160
/* 00090 80B96160 27BDFF30 */  addiu   $sp, $sp, 0xFF30           ## $sp = FFFFFF30
/* 00094 80B96164 F7BC0068 */  sdc1    $f28, 0x0068($sp)          
/* 00098 80B96168 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 0009C 80B9616C 4481E000 */  mtc1    $at, $f28                  ## $f28 = 0.50
/* 000A0 80B96170 F7BA0060 */  sdc1    $f26, 0x0060($sp)          
/* 000A4 80B96174 3C0140C0 */  lui     $at, 0x40C0                ## $at = 40C00000
/* 000A8 80B96178 4481D000 */  mtc1    $at, $f26                  ## $f26 = 6.00
/* 000AC 80B9617C F7B80058 */  sdc1    $f24, 0x0058($sp)          
/* 000B0 80B96180 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 000B4 80B96184 4481C000 */  mtc1    $at, $f24                  ## $f24 = 10.00
/* 000B8 80B96188 F7B60050 */  sdc1    $f22, 0x0050($sp)          
/* 000BC 80B9618C 3C014248 */  lui     $at, 0x4248                ## $at = 42480000
/* 000C0 80B96190 AFB7008C */  sw      $s7, 0x008C($sp)           
/* 000C4 80B96194 AFB60088 */  sw      $s6, 0x0088($sp)           
/* 000C8 80B96198 AFB00070 */  sw      $s0, 0x0070($sp)           
/* 000CC 80B9619C 4481B000 */  mtc1    $at, $f22                  ## $f22 = 50.00
/* 000D0 80B961A0 AFBE0090 */  sw      $s8, 0x0090($sp)           
/* 000D4 80B961A4 AFB50084 */  sw      $s5, 0x0084($sp)           
/* 000D8 80B961A8 AFB40080 */  sw      $s4, 0x0080($sp)           
/* 000DC 80B961AC AFB3007C */  sw      $s3, 0x007C($sp)           
/* 000E0 80B961B0 AFB20078 */  sw      $s2, 0x0078($sp)           
/* 000E4 80B961B4 F7B40048 */  sdc1    $f20, 0x0048($sp)          
/* 000E8 80B961B8 3C0180B9 */  lui     $at, %hi(D_80B96A94)       ## $at = 80B90000
/* 000EC 80B961BC 3C1080B9 */  lui     $s0, %hi(D_80B969D0)       ## $s0 = 80B90000
/* 000F0 80B961C0 3C160600 */  lui     $s6, %hi(D_06000140)                ## $s6 = 06000000
/* 000F4 80B961C4 3C1780B9 */  lui     $s7, %hi(D_80B969F4)       ## $s7 = 80B90000
/* 000F8 80B961C8 00809025 */  or      $s2, $a0, $zero            ## $s2 = 00000000
/* 000FC 80B961CC 00A0F025 */  or      $s8, $a1, $zero            ## $s8 = 00000000
/* 00100 80B961D0 AFBF0094 */  sw      $ra, 0x0094($sp)           
/* 00104 80B961D4 AFB10074 */  sw      $s1, 0x0074($sp)           
/* 00108 80B961D8 26F769F4 */  addiu   $s7, $s7, %lo(D_80B969F4)  ## $s7 = 80B969F4
/* 0010C 80B961DC 26D60140 */  addiu   $s6, $s6, %lo(D_06000140)           ## $s6 = 06000140
/* 00110 80B961E0 261069D0 */  addiu   $s0, $s0, %lo(D_80B969D0)  ## $s0 = 80B969D0
/* 00114 80B961E4 C4346A94 */  lwc1    $f20, %lo(D_80B96A94)($at) 
/* 00118 80B961E8 24930024 */  addiu   $s3, $a0, 0x0024           ## $s3 = 00000024
/* 0011C 80B961EC 27B400C4 */  addiu   $s4, $sp, 0x00C4           ## $s4 = FFFFFFF4
/* 00120 80B961F0 27B500B8 */  addiu   $s5, $sp, 0x00B8           ## $s5 = FFFFFFE8
/* 00124 80B961F4 860E0000 */  lh      $t6, 0x0000($s0)           ## 80B969D0
.L80B961F8:
/* 00128 80B961F8 C6460050 */  lwc1    $f6, 0x0050($s2)           ## 00000050
/* 0012C 80B961FC C66A0000 */  lwc1    $f10, 0x0000($s3)          ## 00000024
/* 00130 80B96200 448E2000 */  mtc1    $t6, $f4                   ## $f4 = 0.00
/* 00134 80B96204 860F0002 */  lh      $t7, 0x0002($s0)           ## 80B969D2
/* 00138 80B96208 46802020 */  cvt.s.w $f0, $f4                   
/* 0013C 80B9620C 448F2000 */  mtc1    $t7, $f4                   ## $f4 = 0.00
/* 00140 80B96210 46060202 */  mul.s   $f8, $f0, $f6              
/* 00144 80B96214 468021A0 */  cvt.s.w $f6, $f4                   
/* 00148 80B96218 460A4400 */  add.s   $f16, $f8, $f10            
/* 0014C 80B9621C E7B000C4 */  swc1    $f16, 0x00C4($sp)          
/* 00150 80B96220 C6720004 */  lwc1    $f18, 0x0004($s3)          ## 00000028
/* 00154 80B96224 E7B200C8 */  swc1    $f18, 0x00C8($sp)          
/* 00158 80B96228 C6480058 */  lwc1    $f8, 0x0058($s2)           ## 00000058
/* 0015C 80B9622C C6700008 */  lwc1    $f16, 0x0008($s3)          ## 0000002C
/* 00160 80B96230 46083282 */  mul.s   $f10, $f6, $f8             
/* 00164 80B96234 46105480 */  add.s   $f18, $f10, $f16           
/* 00168 80B96238 E7B200CC */  swc1    $f18, 0x00CC($sp)          
/* 0016C 80B9623C C6440050 */  lwc1    $f4, 0x0050($s2)           ## 00000050
/* 00170 80B96240 46040182 */  mul.s   $f6, $f0, $f4              
/* 00174 80B96244 00000000 */  nop
/* 00178 80B96248 46143202 */  mul.s   $f8, $f6, $f20             
/* 0017C 80B9624C 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 00180 80B96250 E7A800B8 */  swc1    $f8, 0x00B8($sp)           
/* 00184 80B96254 46180282 */  mul.s   $f10, $f0, $f24            
/* 00188 80B96258 86180002 */  lh      $t8, 0x0002($s0)           ## 80B969D2
/* 0018C 80B9625C 44989000 */  mtc1    $t8, $f18                  ## $f18 = 0.00
/* 00190 80B96260 461A5400 */  add.s   $f16, $f10, $f26           
/* 00194 80B96264 46809120 */  cvt.s.w $f4, $f18                  
/* 00198 80B96268 E7B000BC */  swc1    $f16, 0x00BC($sp)          
/* 0019C 80B9626C C6460058 */  lwc1    $f6, 0x0058($s2)           ## 00000058
/* 001A0 80B96270 46062202 */  mul.s   $f8, $f4, $f6              
/* 001A4 80B96274 00000000 */  nop
/* 001A8 80B96278 46144282 */  mul.s   $f10, $f8, $f20            
/* 001AC 80B9627C 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 001B0 80B96280 E7AA00C0 */  swc1    $f10, 0x00C0($sp)          
/* 001B4 80B96284 461C003C */  c.lt.s  $f0, $f28                  
/* 001B8 80B96288 24110020 */  addiu   $s1, $zero, 0x0020         ## $s1 = 00000020
/* 001BC 80B9628C 45000003 */  bc1f    .L80B9629C                 
/* 001C0 80B96290 00000000 */  nop
/* 001C4 80B96294 10000001 */  beq     $zero, $zero, .L80B9629C   
/* 001C8 80B96298 24110040 */  addiu   $s1, $zero, 0x0040         ## $s1 = 00000040
.L80B9629C:
/* 001CC 80B9629C 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 001D0 80B962A0 00000000 */  nop
/* 001D4 80B962A4 46160402 */  mul.s   $f16, $f0, $f22            
/* 001D8 80B962A8 2419FF00 */  addiu   $t9, $zero, 0xFF00         ## $t9 = FFFFFF00
/* 001DC 80B962AC 2408000F */  addiu   $t0, $zero, 0x000F         ## $t0 = 0000000F
/* 001E0 80B962B0 2409000F */  addiu   $t1, $zero, 0x000F         ## $t1 = 0000000F
/* 001E4 80B962B4 AFA9001C */  sw      $t1, 0x001C($sp)           
/* 001E8 80B962B8 AFA80018 */  sw      $t0, 0x0018($sp)           
/* 001EC 80B962BC AFB90010 */  sw      $t9, 0x0010($sp)           
/* 001F0 80B962C0 46168480 */  add.s   $f18, $f16, $f22           
/* 001F4 80B962C4 AFB10014 */  sw      $s1, 0x0014($sp)           
/* 001F8 80B962C8 AFA00020 */  sw      $zero, 0x0020($sp)         
/* 001FC 80B962CC C6440050 */  lwc1    $f4, 0x0050($s2)           ## 00000050
/* 00200 80B962D0 240C0020 */  addiu   $t4, $zero, 0x0020         ## $t4 = 00000020
/* 00204 80B962D4 240D0032 */  addiu   $t5, $zero, 0x0032         ## $t5 = 00000032
/* 00208 80B962D8 46049182 */  mul.s   $f6, $f18, $f4             
/* 0020C 80B962DC 240EFFFF */  addiu   $t6, $zero, 0xFFFF         ## $t6 = FFFFFFFF
/* 00210 80B962E0 240F011D */  addiu   $t7, $zero, 0x011D         ## $t7 = 0000011D
/* 00214 80B962E4 AFAF0038 */  sw      $t7, 0x0038($sp)           
/* 00218 80B962E8 AFAE0034 */  sw      $t6, 0x0034($sp)           
/* 0021C 80B962EC AFAD0030 */  sw      $t5, 0x0030($sp)           
/* 00220 80B962F0 AFAC002C */  sw      $t4, 0x002C($sp)           
/* 00224 80B962F4 4600320D */  trunc.w.s $f8, $f6                   
/* 00228 80B962F8 AFB6003C */  sw      $s6, 0x003C($sp)           
/* 0022C 80B962FC AFA00028 */  sw      $zero, 0x0028($sp)         
/* 00230 80B96300 03C02025 */  or      $a0, $s8, $zero            ## $a0 = 00000000
/* 00234 80B96304 440B4000 */  mfc1    $t3, $f8                   
/* 00238 80B96308 02802825 */  or      $a1, $s4, $zero            ## $a1 = FFFFFFF4
/* 0023C 80B9630C 02A03025 */  or      $a2, $s5, $zero            ## $a2 = FFFFFFE8
/* 00240 80B96310 02603825 */  or      $a3, $s3, $zero            ## $a3 = 00000024
/* 00244 80B96314 0C00A7A3 */  jal     EffectSsKakera_Spawn
              
/* 00248 80B96318 AFAB0024 */  sw      $t3, 0x0024($sp)           
/* 0024C 80B9631C 26100004 */  addiu   $s0, $s0, 0x0004           ## $s0 = 80B969D4
/* 00250 80B96320 5617FFB5 */  bnel    $s0, $s7, .L80B961F8       
/* 00254 80B96324 860E0000 */  lh      $t6, 0x0000($s0)           ## 80B969D4
/* 00258 80B96328 8642001C */  lh      $v0, 0x001C($s2)           ## 0000001C
/* 0025C 80B9632C 03C02025 */  or      $a0, $s8, $zero            ## $a0 = 00000000
/* 00260 80B96330 02602825 */  or      $a1, $s3, $zero            ## $a1 = 00000024
/* 00264 80B96334 00021043 */  sra     $v0, $v0,  1               
/* 00268 80B96338 30420001 */  andi    $v0, $v0, 0x0001           ## $v0 = 00000000
/* 0026C 80B9633C 1440000C */  bne     $v0, $zero, .L80B96370     
/* 00270 80B96340 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 00274 80B96344 24180078 */  addiu   $t8, $zero, 0x0078         ## $t8 = 00000078
/* 00278 80B96348 24190064 */  addiu   $t9, $zero, 0x0064         ## $t9 = 00000064
/* 0027C 80B9634C 24080001 */  addiu   $t0, $zero, 0x0001         ## $t0 = 00000001
/* 00280 80B96350 AFA80018 */  sw      $t0, 0x0018($sp)           
/* 00284 80B96354 AFB90014 */  sw      $t9, 0x0014($sp)           
/* 00288 80B96358 AFB80010 */  sw      $t8, 0x0010($sp)           
/* 0028C 80B9635C 3C0642F0 */  lui     $a2, 0x42F0                ## $a2 = 42F00000
/* 00290 80B96360 0C00CD20 */  jal     Actor_SpawnFlyingDust              
/* 00294 80B96364 2407000C */  addiu   $a3, $zero, 0x000C         ## $a3 = 0000000C
/* 00298 80B96368 1000000E */  beq     $zero, $zero, .L80B963A4   
/* 0029C 80B9636C 8FBF0094 */  lw      $ra, 0x0094($sp)           
.L80B96370:
/* 002A0 80B96370 1441000B */  bne     $v0, $at, .L80B963A0       
/* 002A4 80B96374 03C02025 */  or      $a0, $s8, $zero            ## $a0 = 00000000
/* 002A8 80B96378 2409003C */  addiu   $t1, $zero, 0x003C         ## $t1 = 0000003C
/* 002AC 80B9637C 240A0064 */  addiu   $t2, $zero, 0x0064         ## $t2 = 00000064
/* 002B0 80B96380 240B0001 */  addiu   $t3, $zero, 0x0001         ## $t3 = 00000001
/* 002B4 80B96384 AFAB0018 */  sw      $t3, 0x0018($sp)           
/* 002B8 80B96388 AFAA0014 */  sw      $t2, 0x0014($sp)           
/* 002BC 80B9638C AFA90010 */  sw      $t1, 0x0010($sp)           
/* 002C0 80B96390 02602825 */  or      $a1, $s3, $zero            ## $a1 = 00000024
/* 002C4 80B96394 3C064270 */  lui     $a2, 0x4270                ## $a2 = 42700000
/* 002C8 80B96398 0C00CD20 */  jal     Actor_SpawnFlyingDust              
/* 002CC 80B9639C 24070008 */  addiu   $a3, $zero, 0x0008         ## $a3 = 00000008
.L80B963A0:
/* 002D0 80B963A0 8FBF0094 */  lw      $ra, 0x0094($sp)           
.L80B963A4:
/* 002D4 80B963A4 D7B40048 */  ldc1    $f20, 0x0048($sp)          
/* 002D8 80B963A8 D7B60050 */  ldc1    $f22, 0x0050($sp)          
/* 002DC 80B963AC D7B80058 */  ldc1    $f24, 0x0058($sp)          
/* 002E0 80B963B0 D7BA0060 */  ldc1    $f26, 0x0060($sp)          
/* 002E4 80B963B4 D7BC0068 */  ldc1    $f28, 0x0068($sp)          
/* 002E8 80B963B8 8FB00070 */  lw      $s0, 0x0070($sp)           
/* 002EC 80B963BC 8FB10074 */  lw      $s1, 0x0074($sp)           
/* 002F0 80B963C0 8FB20078 */  lw      $s2, 0x0078($sp)           
/* 002F4 80B963C4 8FB3007C */  lw      $s3, 0x007C($sp)           
/* 002F8 80B963C8 8FB40080 */  lw      $s4, 0x0080($sp)           
/* 002FC 80B963CC 8FB50084 */  lw      $s5, 0x0084($sp)           
/* 00300 80B963D0 8FB60088 */  lw      $s6, 0x0088($sp)           
/* 00304 80B963D4 8FB7008C */  lw      $s7, 0x008C($sp)           
/* 00308 80B963D8 8FBE0090 */  lw      $s8, 0x0090($sp)           
/* 0030C 80B963DC 03E00008 */  jr      $ra                        
/* 00310 80B963E0 27BD00D0 */  addiu   $sp, $sp, 0x00D0           ## $sp = 00000000
