glabel func_8099D650
/* 009A0 8099D650 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 009A4 8099D654 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 009A8 8099D658 00001025 */  or      $v0, $zero, $zero          ## $v0 = 00000000
.L8099D65C:
/* 009AC 8099D65C 908E0024 */  lbu     $t6, 0x0024($a0)           ## 00000024
/* 009B0 8099D660 24420001 */  addiu   $v0, $v0, 0x0001           ## $v0 = 00000001
/* 009B4 8099D664 00021400 */  sll     $v0, $v0, 16               
/* 009B8 8099D668 15C00025 */  bne     $t6, $zero, .L8099D700     
/* 009BC 8099D66C 00021403 */  sra     $v0, $v0, 16               
/* 009C0 8099D670 240F0001 */  addiu   $t7, $zero, 0x0001         ## $t7 = 00000001
/* 009C4 8099D674 A08F0024 */  sb      $t7, 0x0024($a0)           ## 00000024
/* 009C8 8099D678 8CB90000 */  lw      $t9, 0x0000($a1)           ## 00000000
/* 009CC 8099D67C 3C01447A */  lui     $at, 0x447A                ## $at = 447A0000
/* 009D0 8099D680 44813000 */  mtc1    $at, $f6                   ## $f6 = 1000.00
/* 009D4 8099D684 AC990000 */  sw      $t9, 0x0000($a0)           ## 00000000
/* 009D8 8099D688 8CB80004 */  lw      $t8, 0x0004($a1)           ## 00000004
/* 009DC 8099D68C 240C00FF */  addiu   $t4, $zero, 0x00FF         ## $t4 = 000000FF
/* 009E0 8099D690 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 009E4 8099D694 AC980004 */  sw      $t8, 0x0004($a0)           ## 00000004
/* 009E8 8099D698 8CB90008 */  lw      $t9, 0x0008($a1)           ## 00000008
/* 009EC 8099D69C 44816000 */  mtc1    $at, $f12                  ## $f12 = 10.00
/* 009F0 8099D6A0 AC990008 */  sw      $t9, 0x0008($a0)           ## 00000008
/* 009F4 8099D6A4 8CC90000 */  lw      $t1, 0x0000($a2)           ## 00000000
/* 009F8 8099D6A8 AC89000C */  sw      $t1, 0x000C($a0)           ## 0000000C
/* 009FC 8099D6AC 8CC80004 */  lw      $t0, 0x0004($a2)           ## 00000004
/* 00A00 8099D6B0 AC880010 */  sw      $t0, 0x0010($a0)           ## 00000010
/* 00A04 8099D6B4 8CC90008 */  lw      $t1, 0x0008($a2)           ## 00000008
/* 00A08 8099D6B8 AC890014 */  sw      $t1, 0x0014($a0)           ## 00000014
/* 00A0C 8099D6BC 8CEB0000 */  lw      $t3, 0x0000($a3)           ## 00000000
/* 00A10 8099D6C0 AC8B0018 */  sw      $t3, 0x0018($a0)           ## 00000018
/* 00A14 8099D6C4 8CEA0004 */  lw      $t2, 0x0004($a3)           ## 00000004
/* 00A18 8099D6C8 AC8A001C */  sw      $t2, 0x001C($a0)           ## 0000001C
/* 00A1C 8099D6CC 8CEB0008 */  lw      $t3, 0x0008($a3)           ## 00000008
/* 00A20 8099D6D0 AC8B0020 */  sw      $t3, 0x0020($a0)           ## 00000020
/* 00A24 8099D6D4 C7A40028 */  lwc1    $f4, 0x0028($sp)           
/* 00A28 8099D6D8 A48C002A */  sh      $t4, 0x002A($a0)           ## 0000002A
/* 00A2C 8099D6DC 46062203 */  div.s   $f8, $f4, $f6              
/* 00A30 8099D6E0 E4880030 */  swc1    $f8, 0x0030($a0)           ## 00000030
/* 00A34 8099D6E4 0C00CFBE */  jal     Rand_ZeroFloat
              
/* 00A38 8099D6E8 AFA40018 */  sw      $a0, 0x0018($sp)           
/* 00A3C 8099D6EC 4600028D */  trunc.w.s $f10, $f0                  
/* 00A40 8099D6F0 8FA40018 */  lw      $a0, 0x0018($sp)           
/* 00A44 8099D6F4 44185000 */  mfc1    $t8, $f10                  
/* 00A48 8099D6F8 10000004 */  beq     $zero, $zero, .L8099D70C   
/* 00A4C 8099D6FC A0980025 */  sb      $t8, 0x0025($a0)           ## 00000025
.L8099D700:
/* 00A50 8099D700 28410064 */  slti    $at, $v0, 0x0064           
/* 00A54 8099D704 1420FFD5 */  bne     $at, $zero, .L8099D65C     
/* 00A58 8099D708 2484003C */  addiu   $a0, $a0, 0x003C           ## $a0 = 0000003C
.L8099D70C:
/* 00A5C 8099D70C 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 00A60 8099D710 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 00A64 8099D714 03E00008 */  jr      $ra                        
/* 00A68 8099D718 00000000 */  nop
