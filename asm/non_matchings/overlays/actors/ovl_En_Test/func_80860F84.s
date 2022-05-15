.late_rodata
glabel D_808647B4
    .float -0.8
glabel D_808647B8
    .float -0.8

.text
glabel func_80860F84
/* 01934 80860F84 27BDFFB8 */  addiu   $sp, $sp, 0xFFB8           ## $sp = FFFFFFB8
/* 01938 80860F88 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 0193C 80860F8C AFB00020 */  sw      $s0, 0x0020($sp)           
/* 01940 80860F90 8CAE1C44 */  lw      $t6, 0x1C44($a1)           ## 00001C44
/* 01944 80860F94 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 01948 80860F98 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0194C 80860F9C 00A03025 */  or      $a2, $a1, $zero            ## $a2 = 00000000
/* 01950 80860FA0 00A02025 */  or      $a0, $a1, $zero            ## $a0 = 00000000
/* 01954 80860FA4 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 01958 80860FA8 AFA6004C */  sw      $a2, 0x004C($sp)           
/* 0195C 80860FAC AFAE0030 */  sw      $t6, 0x0030($sp)           
/* 01960 80860FB0 0C21907A */  jal     func_808641E8              
/* 01964 80860FB4 E7A4002C */  swc1    $f4, 0x002C($sp)           
/* 01968 80860FB8 14400112 */  bne     $v0, $zero, .L80861404     
/* 0196C 80860FBC 260400B6 */  addiu   $a0, $s0, 0x00B6           ## $a0 = 000000B6
/* 01970 80860FC0 8605008A */  lh      $a1, 0x008A($s0)           ## 0000008A
/* 01974 80860FC4 240F0001 */  addiu   $t7, $zero, 0x0001         ## $t7 = 00000001
/* 01978 80860FC8 AFAF0010 */  sw      $t7, 0x0010($sp)           
/* 0197C 80860FCC 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 01980 80860FD0 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 01984 80860FD4 24070FA0 */  addiu   $a3, $zero, 0x0FA0         ## $a3 = 00000FA0
/* 01988 80860FD8 861800B6 */  lh      $t8, 0x00B6($s0)           ## 000000B6
/* 0198C 80860FDC 34018000 */  ori     $at, $zero, 0x8000         ## $at = 00008000
/* 01990 80860FE0 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 01994 80860FE4 27193E80 */  addiu   $t9, $t8, 0x3E80           ## $t9 = 00003E80
/* 01998 80860FE8 A6190032 */  sh      $t9, 0x0032($s0)           ## 00000032
/* 0199C 80860FEC 8FA80030 */  lw      $t0, 0x0030($sp)           
/* 019A0 80860FF0 850900B6 */  lh      $t1, 0x00B6($t0)           ## 000000B6
/* 019A4 80860FF4 01215021 */  addu    $t2, $t1, $at              
/* 019A8 80860FF8 A7AA0046 */  sh      $t2, 0x0046($sp)           
/* 019AC 80860FFC C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 019B0 80861000 4600303E */  c.le.s  $f6, $f0                   
/* 019B4 80861004 00000000 */  nop
/* 019B8 80861008 4500000E */  bc1f    .L80861044                 
/* 019BC 8086100C 3C0140C0 */  lui     $at, 0x40C0                ## $at = 40C00000
/* 019C0 80861010 44811000 */  mtc1    $at, $f2                   ## $f2 = 6.00
/* 019C4 80861014 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 019C8 80861018 4602003C */  c.lt.s  $f0, $f2                   
/* 019CC 8086101C 00000000 */  nop
/* 019D0 80861020 45000006 */  bc1f    .L8086103C                 
/* 019D4 80861024 00000000 */  nop
/* 019D8 80861028 44814000 */  mtc1    $at, $f8                   ## $f8 = 0.50
/* 019DC 8086102C 00000000 */  nop
/* 019E0 80861030 46080280 */  add.s   $f10, $f0, $f8             
/* 019E4 80861034 10000010 */  beq     $zero, $zero, .L80861078   
/* 019E8 80861038 E60A0068 */  swc1    $f10, 0x0068($s0)          ## 00000068
.L8086103C:
/* 019EC 8086103C 1000000E */  beq     $zero, $zero, .L80861078   
/* 019F0 80861040 E6020068 */  swc1    $f2, 0x0068($s0)           ## 00000068
.L80861044:
/* 019F4 80861044 3C01C0C0 */  lui     $at, 0xC0C0                ## $at = C0C00000
/* 019F8 80861048 44811000 */  mtc1    $at, $f2                   ## $f2 = -6.00
/* 019FC 8086104C 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 01A00 80861050 4600103C */  c.lt.s  $f2, $f0                   
/* 01A04 80861054 00000000 */  nop
/* 01A08 80861058 45020007 */  bc1fl   .L80861078                 
/* 01A0C 8086105C E6020068 */  swc1    $f2, 0x0068($s0)           ## 00000068
/* 01A10 80861060 44818000 */  mtc1    $at, $f16                  ## $f16 = 0.50
/* 01A14 80861064 00000000 */  nop
/* 01A18 80861068 46100481 */  sub.s   $f18, $f0, $f16            
/* 01A1C 8086106C 10000002 */  beq     $zero, $zero, .L80861078   
/* 01A20 80861070 E6120068 */  swc1    $f18, 0x0068($s0)          ## 00000068
/* 01A24 80861074 E6020068 */  swc1    $f2, 0x0068($s0)           ## 00000068
.L80861078:
/* 01A28 80861078 96020088 */  lhu     $v0, 0x0088($s0)           ## 00000088
/* 01A2C 8086107C 30420008 */  andi    $v0, $v0, 0x0008           ## $v0 = 00000000
/* 01A30 80861080 1440000D */  bne     $v0, $zero, .L808610B8     
/* 01A34 80861084 00000000 */  nop
/* 01A38 80861088 860B001C */  lh      $t3, 0x001C($s0)           ## 0000001C
/* 01A3C 8086108C 24010003 */  addiu   $at, $zero, 0x0003         ## $at = 00000003
/* 01A40 80861090 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01A44 80861094 15610040 */  bne     $t3, $at, .L80861198       
/* 01A48 80861098 8FA5004C */  lw      $a1, 0x004C($sp)           
/* 01A4C 8086109C 8E060068 */  lw      $a2, 0x0068($s0)           ## 00000068
/* 01A50 808610A0 0C00CE6E */  jal     func_800339B8              
/* 01A54 808610A4 86070032 */  lh      $a3, 0x0032($s0)           ## 00000032
/* 01A58 808610A8 5440003C */  bnel    $v0, $zero, .L8086119C     
/* 01A5C 808610AC 8FA4004C */  lw      $a0, 0x004C($sp)           
/* 01A60 808610B0 96020088 */  lhu     $v0, 0x0088($s0)           ## 00000088
/* 01A64 808610B4 30420008 */  andi    $v0, $v0, 0x0008           ## $v0 = 00000000
.L808610B8:
/* 01A68 808610B8 10400016 */  beq     $v0, $zero, .L80861114     
/* 01A6C 808610BC 3C018086 */  lui     $at, %hi(D_808647B4)       ## $at = 80860000
/* 01A70 808610C0 C6040068 */  lwc1    $f4, 0x0068($s0)           ## 00000068
/* 01A74 808610C4 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 01A78 808610C8 00000000 */  nop
/* 01A7C 808610CC 4604303E */  c.le.s  $f6, $f4                   
/* 01A80 808610D0 00000000 */  nop
/* 01A84 808610D4 45020007 */  bc1fl   .L808610F4                 
/* 01A88 808610D8 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
/* 01A8C 808610DC 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
/* 01A90 808610E0 24423FFF */  addiu   $v0, $v0, 0x3FFF           ## $v0 = 00003FFF
/* 01A94 808610E4 00021400 */  sll     $v0, $v0, 16               
/* 01A98 808610E8 10000005 */  beq     $zero, $zero, .L80861100   
/* 01A9C 808610EC 00021403 */  sra     $v0, $v0, 16               
/* 01AA0 808610F0 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
.L808610F4:
/* 01AA4 808610F4 2442C001 */  addiu   $v0, $v0, 0xC001           ## $v0 = 00000000
/* 01AA8 808610F8 00021400 */  sll     $v0, $v0, 16               
/* 01AAC 808610FC 00021403 */  sra     $v0, $v0, 16               
.L80861100:
/* 01AB0 80861100 860C007E */  lh      $t4, 0x007E($s0)           ## 0000007E
/* 01AB4 80861104 01821023 */  subu    $v0, $t4, $v0              
/* 01AB8 80861108 00021400 */  sll     $v0, $v0, 16               
/* 01ABC 8086110C 10000006 */  beq     $zero, $zero, .L80861128   
/* 01AC0 80861110 00021403 */  sra     $v0, $v0, 16               
.L80861114:
/* 01AC4 80861114 C6080068 */  lwc1    $f8, 0x0068($s0)           ## 00000068
/* 01AC8 80861118 C42A47B4 */  lwc1    $f10, %lo(D_808647B4)($at) 
/* 01ACC 8086111C 00001025 */  or      $v0, $zero, $zero          ## $v0 = 00000000
/* 01AD0 80861120 460A4402 */  mul.s   $f16, $f8, $f10            
/* 01AD4 80861124 E6100068 */  swc1    $f16, 0x0068($s0)          ## 00000068
.L80861128:
/* 01AD8 80861128 04400003 */  bltz    $v0, .L80861138            
/* 01ADC 8086112C 00021823 */  subu    $v1, $zero, $v0            
/* 01AE0 80861130 10000001 */  beq     $zero, $zero, .L80861138   
/* 01AE4 80861134 00401825 */  or      $v1, $v0, $zero            ## $v1 = 00000000
.L80861138:
/* 01AE8 80861138 28614001 */  slti    $at, $v1, 0x4001           
/* 01AEC 8086113C 14200016 */  bne     $at, $zero, .L80861198     
/* 01AF0 80861140 3C018086 */  lui     $at, %hi(D_808647B8)       ## $at = 80860000
/* 01AF4 80861144 C42447B8 */  lwc1    $f4, %lo(D_808647B8)($at)  
/* 01AF8 80861148 C6120068 */  lwc1    $f18, 0x0068($s0)          ## 00000068
/* 01AFC 8086114C 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 01B00 80861150 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 01B04 80861154 46049182 */  mul.s   $f6, $f18, $f4             
/* 01B08 80861158 E6060068 */  swc1    $f6, 0x0068($s0)           ## 00000068
/* 01B0C 8086115C C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 01B10 80861160 4608003C */  c.lt.s  $f0, $f8                   
/* 01B14 80861164 00000000 */  nop
/* 01B18 80861168 45020008 */  bc1fl   .L8086118C                 
/* 01B1C 8086116C 44819000 */  mtc1    $at, $f18                  ## $f18 = 0.50
/* 01B20 80861170 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 01B24 80861174 44815000 */  mtc1    $at, $f10                  ## $f10 = 0.50
/* 01B28 80861178 00000000 */  nop
/* 01B2C 8086117C 460A0401 */  sub.s   $f16, $f0, $f10            
/* 01B30 80861180 10000005 */  beq     $zero, $zero, .L80861198   
/* 01B34 80861184 E6100068 */  swc1    $f16, 0x0068($s0)          ## 00000068
/* 01B38 80861188 44819000 */  mtc1    $at, $f18                  ## $f18 = 0.50
.L8086118C:
/* 01B3C 8086118C 00000000 */  nop
/* 01B40 80861190 46120100 */  add.s   $f4, $f0, $f18             
/* 01B44 80861194 E6040068 */  swc1    $f4, 0x0068($s0)           ## 00000068
.L80861198:
/* 01B48 80861198 8FA4004C */  lw      $a0, 0x004C($sp)           
.L8086119C:
/* 01B4C 8086119C 0C00CEAE */  jal     Actor_OtherIsTargeted              
/* 01B50 808611A0 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 01B54 808611A4 10400004 */  beq     $v0, $zero, .L808611B8     
/* 01B58 808611A8 3C014348 */  lui     $at, 0x4348                ## $at = 43480000
/* 01B5C 808611AC 44811000 */  mtc1    $at, $f2                   ## $f2 = 200.00
/* 01B60 808611B0 00000000 */  nop
/* 01B64 808611B4 E7A2002C */  swc1    $f2, 0x002C($sp)           
.L808611B8:
/* 01B68 808611B8 3C0142A0 */  lui     $at, 0x42A0                ## $at = 42A00000
/* 01B6C 808611BC C7A2002C */  lwc1    $f2, 0x002C($sp)           
/* 01B70 808611C0 44813000 */  mtc1    $at, $f6                   ## $f6 = 80.00
/* 01B74 808611C4 C6000090 */  lwc1    $f0, 0x0090($s0)           ## 00000090
/* 01B78 808611C8 260407EC */  addiu   $a0, $s0, 0x07EC           ## $a0 = 000007EC
/* 01B7C 808611CC 46023200 */  add.s   $f8, $f6, $f2              
/* 01B80 808611D0 3C05C020 */  lui     $a1, 0xC020                ## $a1 = C0200000
/* 01B84 808611D4 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 01B88 808611D8 3C073F4C */  lui     $a3, 0x3F4C                ## $a3 = 3F4C0000
/* 01B8C 808611DC 4608003E */  c.le.s  $f0, $f8                   
/* 01B90 808611E0 3C0142DC */  lui     $at, 0x42DC                ## $at = 42DC0000
/* 01B94 808611E4 45020008 */  bc1fl   .L80861208                 
/* 01B98 808611E8 44818000 */  mtc1    $at, $f16                  ## $f16 = 110.00
/* 01B9C 808611EC 44805000 */  mtc1    $zero, $f10                ## $f10 = 0.00
/* 01BA0 808611F0 34E7CCCD */  ori     $a3, $a3, 0xCCCD           ## $a3 = 3F4CCCCD
/* 01BA4 808611F4 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 01BA8 808611F8 E7AA0010 */  swc1    $f10, 0x0010($sp)          
/* 01BAC 808611FC 1000001A */  beq     $zero, $zero, .L80861268   
/* 01BB0 80861200 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 01BB4 80861204 44818000 */  mtc1    $at, $f16                  ## $f16 = 0.00
.L80861208:
/* 01BB8 80861208 260407EC */  addiu   $a0, $s0, 0x07EC           ## $a0 = 000007EC
/* 01BBC 8086120C 24050000 */  addiu   $a1, $zero, 0x0000         ## $a1 = 00000000
/* 01BC0 80861210 46028480 */  add.s   $f18, $f16, $f2            
/* 01BC4 80861214 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 01BC8 80861218 3C0740D4 */  lui     $a3, 0x40D4                ## $a3 = 40D40000
/* 01BCC 8086121C 4600903C */  c.lt.s  $f18, $f0                  
/* 01BD0 80861220 00000000 */  nop
/* 01BD4 80861224 4502000C */  bc1fl   .L80861258                 
/* 01BD8 80861228 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 01BDC 8086122C 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 01BE0 80861230 3C073F4C */  lui     $a3, 0x3F4C                ## $a3 = 3F4C0000
/* 01BE4 80861234 34E7CCCD */  ori     $a3, $a3, 0xCCCD           ## $a3 = 3F4CCCCD
/* 01BE8 80861238 260407EC */  addiu   $a0, $s0, 0x07EC           ## $a0 = 000007EC
/* 01BEC 8086123C 3C054020 */  lui     $a1, 0x4020                ## $a1 = 40200000
/* 01BF0 80861240 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 01BF4 80861244 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 01BF8 80861248 E7A40010 */  swc1    $f4, 0x0010($sp)           
/* 01BFC 8086124C 10000006 */  beq     $zero, $zero, .L80861268   
/* 01C00 80861250 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 01C04 80861254 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
.L80861258:
/* 01C08 80861258 34E7CCCD */  ori     $a3, $a3, 0xCCCD           ## $a3 = 0000CCCD
/* 01C0C 8086125C 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 01C10 80861260 E7A60010 */  swc1    $f6, 0x0010($sp)           
/* 01C14 80861264 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
.L80861268:
/* 01C18 80861268 C60A07EC */  lwc1    $f10, 0x07EC($s0)          ## 000007EC
/* 01C1C 8086126C 460A4032 */  c.eq.s  $f8, $f10                  
/* 01C20 80861270 00000000 */  nop
/* 01C24 80861274 45030010 */  bc1tl   .L808612B8                 
/* 01C28 80861278 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 01C2C 8086127C 0C01DE1C */  jal     Math_SinS
              ## sins?
/* 01C30 80861280 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 01C34 80861284 C61207EC */  lwc1    $f18, 0x07EC($s0)          ## 000007EC
/* 01C38 80861288 C6100024 */  lwc1    $f16, 0x0024($s0)          ## 00000024
/* 01C3C 8086128C 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 01C40 80861290 46120102 */  mul.s   $f4, $f0, $f18             
/* 01C44 80861294 46048180 */  add.s   $f6, $f16, $f4             
/* 01C48 80861298 0C01DE0D */  jal     Math_CosS
              ## coss?
/* 01C4C 8086129C E6060024 */  swc1    $f6, 0x0024($s0)           ## 00000024
/* 01C50 808612A0 C60A07EC */  lwc1    $f10, 0x07EC($s0)          ## 000007EC
/* 01C54 808612A4 C608002C */  lwc1    $f8, 0x002C($s0)           ## 0000002C
/* 01C58 808612A8 460A0482 */  mul.s   $f18, $f0, $f10            
/* 01C5C 808612AC 46124400 */  add.s   $f16, $f8, $f18            
/* 01C60 808612B0 E610002C */  swc1    $f16, 0x002C($s0)          ## 0000002C
/* 01C64 808612B4 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
.L808612B8:
/* 01C68 808612B8 44813000 */  mtc1    $at, $f6                   ## $f6 = 0.50
/* 01C6C 808612BC C6040068 */  lwc1    $f4, 0x0068($s0)           ## 00000068
/* 01C70 808612C0 C60801A0 */  lwc1    $f8, 0x01A0($s0)           ## 000001A0
/* 01C74 808612C4 26040188 */  addiu   $a0, $s0, 0x0188           ## $a0 = 00000188
/* 01C78 808612C8 46062282 */  mul.s   $f10, $f4, $f6             
/* 01C7C 808612CC 4600448D */  trunc.w.s $f18, $f8                  
/* 01C80 808612D0 44039000 */  mfc1    $v1, $f18                  
/* 01C84 808612D4 E60A01A4 */  swc1    $f10, 0x01A4($s0)          ## 000001A4
/* 01C88 808612D8 0C02927F */  jal     SkelAnime_Update
              
/* 01C8C 808612DC AFA3003C */  sw      $v1, 0x003C($sp)           
/* 01C90 808612E0 44807000 */  mtc1    $zero, $f14                ## $f14 = 0.00
/* 01C94 808612E4 C60001A4 */  lwc1    $f0, 0x01A4($s0)           ## 000001A4
/* 01C98 808612E8 8FA3003C */  lw      $v1, 0x003C($sp)           
/* 01C9C 808612EC 4600703E */  c.le.s  $f14, $f0                  
/* 01CA0 808612F0 00000000 */  nop
/* 01CA4 808612F4 45020004 */  bc1fl   .L80861308                 
/* 01CA8 808612F8 46000087 */  neg.s   $f2, $f0                   
/* 01CAC 808612FC 10000002 */  beq     $zero, $zero, .L80861308   
/* 01CB0 80861300 46000086 */  mov.s   $f2, $f0                   
/* 01CB4 80861304 46000087 */  neg.s   $f2, $f0                   
.L80861308:
/* 01CB8 80861308 C60C01A0 */  lwc1    $f12, 0x01A0($s0)          ## 000001A0
/* 01CBC 8086130C 4600703E */  c.le.s  $f14, $f0                  
/* 01CC0 80861310 46026401 */  sub.s   $f16, $f12, $f2            
/* 01CC4 80861314 4600618D */  trunc.w.s $f6, $f12                  
/* 01CC8 80861318 4600810D */  trunc.w.s $f4, $f16                  
/* 01CCC 8086131C 44183000 */  mfc1    $t8, $f6                   
/* 01CD0 80861320 44042000 */  mfc1    $a0, $f4                   
/* 01CD4 80861324 45020004 */  bc1fl   .L80861338                 
/* 01CD8 80861328 46000087 */  neg.s   $f2, $f0                   
/* 01CDC 8086132C 10000002 */  beq     $zero, $zero, .L80861338   
/* 01CE0 80861330 46000086 */  mov.s   $f2, $f0                   
/* 01CE4 80861334 46000087 */  neg.s   $f2, $f0                   
.L80861338:
/* 01CE8 80861338 50780011 */  beql    $v1, $t8, .L80861380       
/* 01CEC 8086133C 8FA9004C */  lw      $t1, 0x004C($sp)           
/* 01CF0 80861340 4600128D */  trunc.w.s $f10, $f2                  
/* 01CF4 80861344 44085000 */  mfc1    $t0, $f10                  
/* 01CF8 80861348 00000000 */  nop
/* 01CFC 8086134C 01031021 */  addu    $v0, $t0, $v1              
/* 01D00 80861350 28410002 */  slti    $at, $v0, 0x0002           
/* 01D04 80861354 54200003 */  bnel    $at, $zero, .L80861364     
/* 01D08 80861358 28810007 */  slti    $at, $a0, 0x0007           
/* 01D0C 8086135C 18800004 */  blez    $a0, .L80861370            
/* 01D10 80861360 28810007 */  slti    $at, $a0, 0x0007           
.L80861364:
/* 01D14 80861364 10200005 */  beq     $at, $zero, .L8086137C     
/* 01D18 80861368 28410008 */  slti    $at, $v0, 0x0008           
/* 01D1C 8086136C 14200003 */  bne     $at, $zero, .L8086137C     
.L80861370:
/* 01D20 80861370 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01D24 80861374 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 01D28 80861378 2405383D */  addiu   $a1, $zero, 0x383D         ## $a1 = 0000383D
.L8086137C:
/* 01D2C 8086137C 8FA9004C */  lw      $t1, 0x004C($sp)           
.L80861380:
/* 01D30 80861380 3C0A0001 */  lui     $t2, 0x0001                ## $t2 = 00010000
/* 01D34 80861384 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01D38 80861388 01495021 */  addu    $t2, $t2, $t1              
/* 01D3C 8086138C 8D4A1DE4 */  lw      $t2, 0x1DE4($t2)           ## 00011DE4
/* 01D40 80861390 314B005F */  andi    $t3, $t2, 0x005F           ## $t3 = 00000000
/* 01D44 80861394 55600004 */  bnel    $t3, $zero, .L808613A8     
/* 01D48 80861398 87AC0046 */  lh      $t4, 0x0046($sp)           
/* 01D4C 8086139C 0C00BE0A */  nop
              
/* 01D50 808613A0 24053838 */  nop
/* 01D54 808613A4 87AC0046 */  lh      $t4, 0x0046($sp)           
.L808613A8:
/* 01D58 808613A8 860D00B6 */  lh      $t5, 0x00B6($s0)           ## 000000B6
/* 01D5C 808613AC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01D60 808613B0 018D1023 */  subu    $v0, $t4, $t5              
/* 01D64 808613B4 00021400 */  sll     $v0, $v0, 16               
/* 01D68 808613B8 00021403 */  sra     $v0, $v0, 16               
/* 01D6C 808613BC 04430005 */  bgezl   $v0, .L808613D4            
/* 01D70 808613C0 28416801 */  slti    $at, $v0, 0x6801           
/* 01D74 808613C4 00021023 */  subu    $v0, $zero, $v0            
/* 01D78 808613C8 00021400 */  sll     $v0, $v0, 16               
/* 01D7C 808613CC 00021403 */  sra     $v0, $v0, 16               
/* 01D80 808613D0 28416801 */  slti    $at, $v0, 0x6801           
.L808613D4:
/* 01D84 808613D4 10200004 */  beq     $at, $zero, .L808613E8     
/* 01D88 808613D8 00000000 */  nop
/* 01D8C 808613DC 8E0207E8 */  lw      $v0, 0x07E8($s0)           ## 000007E8
/* 01D90 808613E0 14400005 */  bne     $v0, $zero, .L808613F8     
/* 01D94 808613E4 00000000 */  nop
.L808613E8:
/* 01D98 808613E8 0C217EAC */  jal     func_8085FAB0              
/* 01D9C 808613EC 8FA5004C */  lw      $a1, 0x004C($sp)           
/* 01DA0 808613F0 10000005 */  beq     $zero, $zero, .L80861408   
/* 01DA4 808613F4 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L808613F8:
/* 01DA8 808613F8 10400002 */  beq     $v0, $zero, .L80861404     
/* 01DAC 808613FC 244EFFFF */  addiu   $t6, $v0, 0xFFFF           ## $t6 = FFFFFFFF
/* 01DB0 80861400 AE0E07E8 */  sw      $t6, 0x07E8($s0)           ## 000007E8
.L80861404:
/* 01DB4 80861404 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80861408:
/* 01DB8 80861408 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 01DBC 8086140C 27BD0048 */  addiu   $sp, $sp, 0x0048           ## $sp = 00000000
/* 01DC0 80861410 03E00008 */  jr      $ra                        
/* 01DC4 80861414 00000000 */  nop
