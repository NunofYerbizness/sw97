glabel func_80A00218
/* 00278 80A00218 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 0027C 80A0021C AFB00018 */  sw      $s0, 0x0018($sp)
/* 00280 80A00220 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00284 80A00224 AFBF001C */  sw      $ra, 0x001C($sp)
/* 00288 80A00228 240E0019 */  addiu   $t6, $zero, 0x0019         ## $t6 = 00000019
/* 0028C 80A0022C 3C050600 */  lui     $a1, %hi(D_060012AC)                ## $a1 = 06000000
/* 00290 80A00230 AC8E02A8 */  sw      $t6, 0x02A8($a0)           ## 000002A8
/* 00294 80A00234 24A512AC */  addiu   $a1, $a1, %lo(D_060012AC)           ## $a1 = 060012AC
/* 00298 80A00238 0C0294BE */  jal     Animation_PlayLoop
/* 0029C 80A0023C 2484014C */  addiu   $a0, $a0, 0x014C           ## $a0 = 0000014C
/* 002A0 80A00240 3C014220 */  lui     $at, 0x4220                ## $at = 42200000
/* 002A4 80A00244 C6040008 */  lwc1    $f4, 0x0008($s0)           ## 00000008
/* 002A8 80A00248 44814000 */  mtc1    $at, $f8                   ## $f8 = 40.00
/* 002AC 80A0024C C606000C */  lwc1    $f6, 0x000C($s0)           ## 0000000C
/* 002B0 80A00250 8602001C */  lh      $v0, 0x001C($s0)           ## 0000001C
/* 002B4 80A00254 E6040024 */  swc1    $f4, 0x0024($s0)           ## 00000024
/* 002B8 80A00258 46083281 */  sub.s   $f10, $f6, $f8
/* 002BC 80A0025C C6100010 */  lwc1    $f16, 0x0010($s0)          ## 00000010
/* 002C0 80A00260 44809000 */  mtc1    $zero, $f18                ## $f18 = 0.00
/* 002C4 80A00264 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 002C8 80A00268 2401000A */  addiu   $at, $zero, 0x000A         ## $at = 0000000A
/* 002CC 80A0026C E60A0028 */  swc1    $f10, 0x0028($s0)          ## 00000028
/* 002D0 80A00270 E610002C */  swc1    $f16, 0x002C($s0)          ## 0000002C
/* 002D4 80A00274 E6120060 */  swc1    $f18, 0x0060($s0)          ## 00000060
/* 002D8 80A00278 10410016 */  beq     $v0, $at, .L80A002D4
/* 002DC 80A0027C E6040068 */  swc1    $f4, 0x0068($s0)           ## 00000068
/* 002E0 80A00280 5440000C */  bnel    $v0, $zero, .L80A002B4
/* 002E4 80A00284 8E190118 */  lw      $t9, 0x0118($s0)           ## 00000118
/* 002E8 80A00288 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 002EC 80A0028C 00000000 */  nop
/* 002F0 80A00290 3C014780 */  lui     $at, 0x4780                ## $at = 47800000
/* 002F4 80A00294 44813000 */  mtc1    $at, $f6                   ## $f6 = 65536.00
/* 002F8 80A00298 00000000 */  nop
/* 002FC 80A0029C 46060202 */  mul.s   $f8, $f0, $f6
/* 00300 80A002A0 4600428D */  trunc.w.s $f10, $f8
/* 00304 80A002A4 44185000 */  mfc1    $t8, $f10
/* 00308 80A002A8 10000006 */  beq     $zero, $zero, .L80A002C4
/* 0030C 80A002AC A6180032 */  sh      $t8, 0x0032($s0)           ## 00000032
/* 00310 80A002B0 8E190118 */  lw      $t9, 0x0118($s0)           ## 00000118
.L80A002B4:
/* 00314 80A002B4 00024B80 */  sll     $t1, $v0, 14
/* 00318 80A002B8 87280032 */  lh      $t0, 0x0032($t9)           ## 00000032
/* 0031C 80A002BC 01095021 */  addu    $t2, $t0, $t1
/* 00320 80A002C0 A60A0032 */  sh      $t2, 0x0032($s0)           ## 00000032
.L80A002C4:
/* 00324 80A002C4 0C280069 */  jal     func_80A001A4
/* 00328 80A002C8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0032C 80A002CC 1000000D */  beq     $zero, $zero, .L80A00304
/* 00330 80A002D0 920C0298 */  lbu     $t4, 0x0298($s0)           ## 00000298
.L80A002D4:
/* 00334 80A002D4 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 00338 80A002D8 00000000 */  nop
/* 0033C 80A002DC 3C014780 */  lui     $at, 0x4780                ## $at = 47800000
/* 00340 80A002E0 44818000 */  mtc1    $at, $f16                  ## $f16 = 65536.00
/* 00344 80A002E4 00000000 */  nop
/* 00348 80A002E8 46100482 */  mul.s   $f18, $f0, $f16
/* 0034C 80A002EC 4600910D */  trunc.w.s $f4, $f18
/* 00350 80A002F0 44022000 */  mfc1    $v0, $f4
/* 00354 80A002F4 00000000 */  nop
/* 00358 80A002F8 A60200B6 */  sh      $v0, 0x00B6($s0)           ## 000000B6
/* 0035C 80A002FC A6020032 */  sh      $v0, 0x0032($s0)           ## 00000032
/* 00360 80A00300 920C0298 */  lbu     $t4, 0x0298($s0)           ## 00000298
.L80A00304:
/* 00364 80A00304 920E0299 */  lbu     $t6, 0x0299($s0)           ## 00000299
/* 00368 80A00308 8E180004 */  lw      $t8, 0x0004($s0)           ## 00000004
/* 0036C 80A0030C 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 00370 80A00310 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 00374 80A00314 2401EFFE */  addiu   $at, $zero, 0xEFFE         ## $at = FFFFEFFE
/* 00378 80A00318 3C0880A0 */  lui     $t0, %hi(func_80A00858)    ## $t0 = 80A00000
/* 0037C 80A0031C 25080858 */  addiu   $t0, $t0, %lo(func_80A00858) ## $t0 = 80A00858
/* 00380 80A00320 318DFFFE */  andi    $t5, $t4, 0xFFFE           ## $t5 = 00000000
/* 00384 80A00324 31CFFFFE */  andi    $t7, $t6, 0xFFFE           ## $t7 = 00000000
/* 00388 80A00328 0301C824 */  and     $t9, $t8, $at
/* 0038C 80A0032C A20D0298 */  sb      $t5, 0x0298($s0)           ## 00000298
/* 00390 80A00330 A20F0299 */  sb      $t7, 0x0299($s0)           ## 00000299
/* 00394 80A00334 AE190004 */  sw      $t9, 0x0004($s0)           ## 00000004
/* 00398 80A00338 AE080190 */  sw      $t0, 0x0190($s0)           ## 00000190
/* 0039C 80A0033C E60600C4 */  swc1    $f6, 0x00C4($s0)           ## 000000C4
/* 003A0 80A00340 E60800BC */  swc1    $f8, 0x00BC($s0)           ## 000000BC
/* 003A4 80A00344 8FBF001C */  lw      $ra, 0x001C($sp)
/* 003A8 80A00348 8FB00018 */  lw      $s0, 0x0018($sp)
/* 003AC 80A0034C 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 003B0 80A00350 03E00008 */  jr      $ra
/* 003B4 80A00354 00000000 */  nop