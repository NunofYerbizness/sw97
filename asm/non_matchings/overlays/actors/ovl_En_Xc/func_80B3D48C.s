glabel func_80B3D48C
/* 012AC 80B3D48C 8CA21D88 */  lw      $v0, 0x1D88($a1)           ## 00001D88
/* 012B0 80B3D490 50400008 */  beql    $v0, $zero, .L80B3D4B4     
/* 012B4 80B3D494 8CA21C44 */  lw      $v0, 0x1C44($a1)           ## 00001C44
/* 012B8 80B3D498 94430008 */  lhu     $v1, 0x0008($v0)           ## 00000008
/* 012BC 80B3D49C 34018000 */  ori     $at, $zero, 0x8000         ## $at = 00008000
/* 012C0 80B3D4A0 00611821 */  addu    $v1, $v1, $at              
/* 012C4 80B3D4A4 00031C00 */  sll     $v1, $v1, 16               
/* 012C8 80B3D4A8 10000007 */  beq     $zero, $zero, .L80B3D4C8   
/* 012CC 80B3D4AC 00031C03 */  sra     $v1, $v1, 16               
/* 012D0 80B3D4B0 8CA21C44 */  lw      $v0, 0x1C44($a1)           ## 00001C44
.L80B3D4B4:
/* 012D4 80B3D4B4 34018000 */  ori     $at, $zero, 0x8000         ## $at = 00008000
/* 012D8 80B3D4B8 84430032 */  lh      $v1, 0x0032($v0)           ## 00000032
/* 012DC 80B3D4BC 00611821 */  addu    $v1, $v1, $at              
/* 012E0 80B3D4C0 00031C00 */  sll     $v1, $v1, 16               
/* 012E4 80B3D4C4 00031C03 */  sra     $v1, $v1, 16               
.L80B3D4C8:
/* 012E8 80B3D4C8 A4830032 */  sh      $v1, 0x0032($a0)           ## 00000032
/* 012EC 80B3D4CC 848E0032 */  lh      $t6, 0x0032($a0)           ## 00000032
/* 012F0 80B3D4D0 03E00008 */  jr      $ra                        
/* 012F4 80B3D4D4 A48E00B6 */  sh      $t6, 0x00B6($a0)           ## 000000B6
