glabel func_80A97F20
/* 01170 80A97F20 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 01174 80A97F24 AFA40018 */  sw      $a0, 0x0018($sp)           
/* 01178 80A97F28 8FAE0018 */  lw      $t6, 0x0018($sp)           
/* 0117C 80A97F2C AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 01180 80A97F30 AFA5001C */  sw      $a1, 0x001C($sp)           
/* 01184 80A97F34 00A02025 */  or      $a0, $a1, $zero            ## $a0 = 00000000
/* 01188 80A97F38 24070010 */  addiu   $a3, $zero, 0x0010         ## $a3 = 00000010
/* 0118C 80A97F3C 25C502E4 */  addiu   $a1, $t6, 0x02E4           ## $a1 = 000002E4
/* 01190 80A97F40 0C00D3D5 */  jal     func_80034F54              
/* 01194 80A97F44 25C60304 */  addiu   $a2, $t6, 0x0304           ## $a2 = 00000304
/* 01198 80A97F48 8FA40018 */  lw      $a0, 0x0018($sp)           
/* 0119C 80A97F4C 24060002 */  addiu   $a2, $zero, 0x0002         ## $a2 = 00000002
/* 011A0 80A97F50 24070004 */  addiu   $a3, $zero, 0x0004         ## $a3 = 00000004
/* 011A4 80A97F54 0C00D285 */  jal     Npc_TurnTowardsFocus              
/* 011A8 80A97F58 248501E8 */  addiu   $a1, $a0, 0x01E8           ## $a1 = 000001E8
/* 011AC 80A97F5C 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 011B0 80A97F60 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 011B4 80A97F64 24020001 */  addiu   $v0, $zero, 0x0001         ## $v0 = 00000001
/* 011B8 80A97F68 03E00008 */  jr      $ra                        
/* 011BC 80A97F6C 00000000 */  nop
