glabel func_809BD47C
/* 0081C 809BD47C 908F029D */  lbu     $t7, 0x029D($a0)           ## 0000029D
/* 00820 809BD480 3C19809C */  lui     $t9, %hi(func_809BDF34)    ## $t9 = 809C0000
/* 00824 809BD484 240E0010 */  addiu   $t6, $zero, 0x0010         ## $t6 = 00000010
/* 00828 809BD488 2739DF34 */  addiu   $t9, $t9, %lo(func_809BDF34) ## $t9 = 809BDF34
/* 0082C 809BD48C 31F8FFFE */  andi    $t8, $t7, 0xFFFE           ## $t8 = 00000000
/* 00830 809BD490 A48E0196 */  sh      $t6, 0x0196($a0)           ## 00000196
/* 00834 809BD494 A098029D */  sb      $t8, 0x029D($a0)           ## 0000029D
/* 00838 809BD498 A0800114 */  sb      $zero, 0x0114($a0)         ## 00000114
/* 0083C 809BD49C 03E00008 */  jr      $ra                        
/* 00840 809BD4A0 AC990190 */  sw      $t9, 0x0190($a0)           ## 00000190