.late_rodata
glabel D_80B4A368
    .float -0.8

glabel D_80B4A36C
    .float -0.8

glabel D_80B4A370
    .float -0.85

.text
glabel func_80B463E4
/* 02394 80B463E4 27BDFFA8 */  addiu   $sp, $sp, 0xFFA8           ## $sp = FFFFFFA8
/* 02398 80B463E8 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 0239C 80B463EC AFB00020 */  sw      $s0, 0x0020($sp)           
/* 023A0 80B463F0 AFA5005C */  sw      $a1, 0x005C($sp)           
/* 023A4 80B463F4 8CAF1C44 */  lw      $t7, 0x1C44($a1)           ## 00001C44
/* 023A8 80B463F8 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 023AC 80B463FC 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 023B0 80B46400 AFAF0040 */  sw      $t7, 0x0040($sp)           
/* 023B4 80B46404 E7A4003C */  swc1    $f4, 0x003C($sp)           
/* 023B8 80B46408 8605008A */  lh      $a1, 0x008A($s0)           ## 0000008A
/* 023BC 80B4640C 24180001 */  addiu   $t8, $zero, 0x0001         ## $t8 = 00000001
/* 023C0 80B46410 AFB80010 */  sw      $t8, 0x0010($sp)           
/* 023C4 80B46414 248400B6 */  addiu   $a0, $a0, 0x00B6           ## $a0 = 000000B6
/* 023C8 80B46418 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 023CC 80B4641C 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 023D0 80B46420 24070FA0 */  addiu   $a3, $zero, 0x0FA0         ## $a3 = 00000FA0
/* 023D4 80B46424 8FA4005C */  lw      $a0, 0x005C($sp)           
/* 023D8 80B46428 0C2D270B */  jal     EnZf_ReactToProjectile              
/* 023DC 80B4642C 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 023E0 80B46430 54400178 */  bnel    $v0, $zero, .L80B46A14     
/* 023E4 80B46434 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 023E8 80B46438 8619001C */  lh      $t9, 0x001C($s0)           ## 0000001C
/* 023EC 80B4643C 2401FFFE */  addiu   $at, $zero, 0xFFFE         ## $at = FFFFFFFE
/* 023F0 80B46440 8FA4005C */  lw      $a0, 0x005C($sp)           
/* 023F4 80B46444 57210006 */  bnel    $t9, $at, .L80B46460       
/* 023F8 80B46448 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
/* 023FC 80B4644C 0C2D13A3 */  jal     func_80B44E8C              
/* 02400 80B46450 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 02404 80B46454 5440016F */  bnel    $v0, $zero, .L80B46A14     
/* 02408 80B46458 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 0240C 80B4645C 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
.L80B46460:
/* 02410 80B46460 34018000 */  ori     $at, $zero, 0x8000         ## $at = 00008000
/* 02414 80B46464 24483A98 */  addiu   $t0, $v0, 0x3A98           ## $t0 = 00003A98
/* 02418 80B46468 A6080032 */  sh      $t0, 0x0032($s0)           ## 00000032
/* 0241C 80B4646C 8FA90040 */  lw      $t1, 0x0040($sp)           
/* 02420 80B46470 852300B6 */  lh      $v1, 0x00B6($t1)           ## 000000B6
/* 02424 80B46474 00611821 */  addu    $v1, $v1, $at              
/* 02428 80B46478 00031C00 */  sll     $v1, $v1, 16               
/* 0242C 80B4647C 00031C03 */  sra     $v1, $v1, 16               
/* 02430 80B46480 00622023 */  subu    $a0, $v1, $v0              
/* 02434 80B46484 00042400 */  sll     $a0, $a0, 16               
/* 02438 80B46488 00042403 */  sra     $a0, $a0, 16               
/* 0243C 80B4648C 0C01DE1C */  jal     Math_SinS
              ## sins?
/* 02440 80B46490 A7A30056 */  sh      $v1, 0x0056($sp)           
/* 02444 80B46494 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 02448 80B46498 00000000 */  nop
/* 0244C 80B4649C 4600303E */  c.le.s  $f6, $f0                   
/* 02450 80B464A0 00000000 */  nop
/* 02454 80B464A4 4500000E */  bc1f    .L80B464E0                 
/* 02458 80B464A8 3C01C100 */  lui     $at, 0xC100                ## $at = C1000000
/* 0245C 80B464AC 44810000 */  mtc1    $at, $f0                   ## $f0 = -8.00
/* 02460 80B464B0 3C013E80 */  lui     $at, 0x3E80                ## $at = 3E800000
/* 02464 80B464B4 44815000 */  mtc1    $at, $f10                  ## $f10 = 0.25
/* 02468 80B464B8 C6080068 */  lwc1    $f8, 0x0068($s0)           ## 00000068
/* 0246C 80B464BC 460A4481 */  sub.s   $f18, $f8, $f10            
/* 02470 80B464C0 E6120068 */  swc1    $f18, 0x0068($s0)          ## 00000068
/* 02474 80B464C4 C6040068 */  lwc1    $f4, 0x0068($s0)           ## 00000068
/* 02478 80B464C8 4600203C */  c.lt.s  $f4, $f0                   
/* 0247C 80B464CC 00000000 */  nop
/* 02480 80B464D0 4502001C */  bc1fl   .L80B46544                 
/* 02484 80B464D4 860C001C */  lh      $t4, 0x001C($s0)           ## 0000001C
/* 02488 80B464D8 10000019 */  beq     $zero, $zero, .L80B46540   
/* 0248C 80B464DC E6000068 */  swc1    $f0, 0x0068($s0)           ## 00000068
.L80B464E0:
/* 02490 80B464E0 87AA0056 */  lh      $t2, 0x0056($sp)           
/* 02494 80B464E4 860B00B6 */  lh      $t3, 0x00B6($s0)           ## 000000B6
/* 02498 80B464E8 014B2023 */  subu    $a0, $t2, $t3              
/* 0249C 80B464EC 00042400 */  sll     $a0, $a0, 16               
/* 024A0 80B464F0 0C01DE1C */  jal     Math_SinS
              ## sins?
/* 024A4 80B464F4 00042403 */  sra     $a0, $a0, 16               
/* 024A8 80B464F8 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 024AC 80B464FC 3C014100 */  lui     $at, 0x4100                ## $at = 41000000
/* 024B0 80B46500 4606003C */  c.lt.s  $f0, $f6                   
/* 024B4 80B46504 00000000 */  nop
/* 024B8 80B46508 4502000E */  bc1fl   .L80B46544                 
/* 024BC 80B4650C 860C001C */  lh      $t4, 0x001C($s0)           ## 0000001C
/* 024C0 80B46510 44810000 */  mtc1    $at, $f0                   ## $f0 = 8.00
/* 024C4 80B46514 3C013E80 */  lui     $at, 0x3E80                ## $at = 3E800000
/* 024C8 80B46518 44815000 */  mtc1    $at, $f10                  ## $f10 = 0.25
/* 024CC 80B4651C C6080068 */  lwc1    $f8, 0x0068($s0)           ## 00000068
/* 024D0 80B46520 460A4480 */  add.s   $f18, $f8, $f10            
/* 024D4 80B46524 E6120068 */  swc1    $f18, 0x0068($s0)          ## 00000068
/* 024D8 80B46528 C6040068 */  lwc1    $f4, 0x0068($s0)           ## 00000068
/* 024DC 80B4652C 4604003C */  c.lt.s  $f0, $f4                   
/* 024E0 80B46530 00000000 */  nop
/* 024E4 80B46534 45020003 */  bc1fl   .L80B46544                 
/* 024E8 80B46538 860C001C */  lh      $t4, 0x001C($s0)           ## 0000001C
/* 024EC 80B4653C E6000068 */  swc1    $f0, 0x0068($s0)           ## 00000068
.L80B46540:
/* 024F0 80B46540 860C001C */  lh      $t4, 0x001C($s0)           ## 0000001C
.L80B46544:
/* 024F4 80B46544 05820009 */  bltzl   $t4, .L80B4656C            
/* 024F8 80B46548 96020088 */  lhu     $v0, 0x0088($s0)           ## 00000088
/* 024FC 80B4654C 860D03F8 */  lh      $t5, 0x03F8($s0)           ## 000003F8
/* 02500 80B46550 51A0004E */  beql    $t5, $zero, .L80B4668C     
/* 02504 80B46554 8FA4005C */  lw      $a0, 0x005C($sp)           
/* 02508 80B46558 C6060068 */  lwc1    $f6, 0x0068($s0)           ## 00000068
/* 0250C 80B4655C 46003207 */  neg.s   $f8, $f6                   
/* 02510 80B46560 10000049 */  beq     $zero, $zero, .L80B46688   
/* 02514 80B46564 E6080068 */  swc1    $f8, 0x0068($s0)           ## 00000068
/* 02518 80B46568 96020088 */  lhu     $v0, 0x0088($s0)           ## 00000088
.L80B4656C:
/* 0251C 80B4656C C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 02520 80B46570 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02524 80B46574 30420008 */  andi    $v0, $v0, 0x0008           ## $v0 = 00000000
/* 02528 80B46578 1440000D */  bne     $v0, $zero, .L80B465B0     
/* 0252C 80B4657C 00000000 */  nop
/* 02530 80B46580 860700B6 */  lh      $a3, 0x00B6($s0)           ## 000000B6
/* 02534 80B46584 44060000 */  mfc1    $a2, $f0                   
/* 02538 80B46588 8FA5005C */  lw      $a1, 0x005C($sp)           
/* 0253C 80B4658C 24E73FFF */  addiu   $a3, $a3, 0x3FFF           ## $a3 = 00003FFF
/* 02540 80B46590 00073C00 */  sll     $a3, $a3, 16               
/* 02544 80B46594 0C00CE6E */  jal     func_800339B8              
/* 02548 80B46598 00073C03 */  sra     $a3, $a3, 16               
/* 0254C 80B4659C 5440003B */  bnel    $v0, $zero, .L80B4668C     
/* 02550 80B465A0 8FA4005C */  lw      $a0, 0x005C($sp)           
/* 02554 80B465A4 96020088 */  lhu     $v0, 0x0088($s0)           ## 00000088
/* 02558 80B465A8 C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 0255C 80B465AC 30420008 */  andi    $v0, $v0, 0x0008           ## $v0 = 00000000
.L80B465B0:
/* 02560 80B465B0 10400015 */  beq     $v0, $zero, .L80B46608     
/* 02564 80B465B4 3C0180B5 */  lui     $at, %hi(D_80B4A368)       ## $at = 80B50000
/* 02568 80B465B8 44805000 */  mtc1    $zero, $f10                ## $f10 = 0.00
/* 0256C 80B465BC 00000000 */  nop
/* 02570 80B465C0 4600503E */  c.le.s  $f10, $f0                  
/* 02574 80B465C4 00000000 */  nop
/* 02578 80B465C8 45020007 */  bc1fl   .L80B465E8                 
/* 0257C 80B465CC 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
/* 02580 80B465D0 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
/* 02584 80B465D4 24423FFF */  addiu   $v0, $v0, 0x3FFF           ## $v0 = 00003FFF
/* 02588 80B465D8 00021400 */  sll     $v0, $v0, 16               
/* 0258C 80B465DC 10000005 */  beq     $zero, $zero, .L80B465F4   
/* 02590 80B465E0 00021403 */  sra     $v0, $v0, 16               
/* 02594 80B465E4 860200B6 */  lh      $v0, 0x00B6($s0)           ## 000000B6
.L80B465E8:
/* 02598 80B465E8 2442C001 */  addiu   $v0, $v0, 0xC001           ## $v0 = 00000000
/* 0259C 80B465EC 00021400 */  sll     $v0, $v0, 16               
/* 025A0 80B465F0 00021403 */  sra     $v0, $v0, 16               
.L80B465F4:
/* 025A4 80B465F4 860E007E */  lh      $t6, 0x007E($s0)           ## 0000007E
/* 025A8 80B465F8 01C21023 */  subu    $v0, $t6, $v0              
/* 025AC 80B465FC 00021400 */  sll     $v0, $v0, 16               
/* 025B0 80B46600 10000005 */  beq     $zero, $zero, .L80B46618   
/* 025B4 80B46604 00021403 */  sra     $v0, $v0, 16               
.L80B46608:
/* 025B8 80B46608 C432A368 */  lwc1    $f18, %lo(D_80B4A368)($at) 
/* 025BC 80B4660C 00001025 */  or      $v0, $zero, $zero          ## $v0 = 00000000
/* 025C0 80B46610 46120102 */  mul.s   $f4, $f0, $f18             
/* 025C4 80B46614 E6040068 */  swc1    $f4, 0x0068($s0)           ## 00000068
.L80B46618:
/* 025C8 80B46618 04400003 */  bltz    $v0, .L80B46628            
/* 025CC 80B4661C 00021823 */  subu    $v1, $zero, $v0            
/* 025D0 80B46620 10000001 */  beq     $zero, $zero, .L80B46628   
/* 025D4 80B46624 00401825 */  or      $v1, $v0, $zero            ## $v1 = 00000000
.L80B46628:
/* 025D8 80B46628 28614001 */  slti    $at, $v1, 0x4001           
/* 025DC 80B4662C 14200016 */  bne     $at, $zero, .L80B46688     
/* 025E0 80B46630 3C0180B5 */  lui     $at, %hi(D_80B4A36C)       ## $at = 80B50000
/* 025E4 80B46634 C428A36C */  lwc1    $f8, %lo(D_80B4A36C)($at)  
/* 025E8 80B46638 C6060068 */  lwc1    $f6, 0x0068($s0)           ## 00000068
/* 025EC 80B4663C 44809000 */  mtc1    $zero, $f18                ## $f18 = 0.00
/* 025F0 80B46640 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 025F4 80B46644 46083282 */  mul.s   $f10, $f6, $f8             
/* 025F8 80B46648 E60A0068 */  swc1    $f10, 0x0068($s0)          ## 00000068
/* 025FC 80B4664C C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 02600 80B46650 4612003C */  c.lt.s  $f0, $f18                  
/* 02604 80B46654 00000000 */  nop
/* 02608 80B46658 45020008 */  bc1fl   .L80B4667C                 
/* 0260C 80B4665C 44814000 */  mtc1    $at, $f8                   ## $f8 = 0.50
/* 02610 80B46660 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 02614 80B46664 44812000 */  mtc1    $at, $f4                   ## $f4 = 0.50
/* 02618 80B46668 00000000 */  nop
/* 0261C 80B4666C 46040181 */  sub.s   $f6, $f0, $f4              
/* 02620 80B46670 10000005 */  beq     $zero, $zero, .L80B46688   
/* 02624 80B46674 E6060068 */  swc1    $f6, 0x0068($s0)           ## 00000068
/* 02628 80B46678 44814000 */  mtc1    $at, $f8                   ## $f8 = 0.50
.L80B4667C:
/* 0262C 80B4667C 00000000 */  nop
/* 02630 80B46680 46080280 */  add.s   $f10, $f0, $f8             
/* 02634 80B46684 E60A0068 */  swc1    $f10, 0x0068($s0)          ## 00000068
.L80B46688:
/* 02638 80B46688 8FA4005C */  lw      $a0, 0x005C($sp)           
.L80B4668C:
/* 0263C 80B4668C 0C00CEAE */  jal     Actor_OtherIsTargeted              
/* 02640 80B46690 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 02644 80B46694 10400004 */  beq     $v0, $zero, .L80B466A8     
/* 02648 80B46698 3C0142C8 */  lui     $at, 0x42C8                ## $at = 42C80000
/* 0264C 80B4669C 44811000 */  mtc1    $at, $f2                   ## $f2 = 100.00
/* 02650 80B466A0 00000000 */  nop
/* 02654 80B466A4 E7A2003C */  swc1    $f2, 0x003C($sp)           
.L80B466A8:
/* 02658 80B466A8 3C01428C */  lui     $at, 0x428C                ## $at = 428C0000
/* 0265C 80B466AC C7A2003C */  lwc1    $f2, 0x003C($sp)           
/* 02660 80B466B0 44819000 */  mtc1    $at, $f18                  ## $f18 = 70.00
/* 02664 80B466B4 C6000090 */  lwc1    $f0, 0x0090($s0)           ## 00000090
/* 02668 80B466B8 46029100 */  add.s   $f4, $f18, $f2             
/* 0266C 80B466BC 4604003E */  c.le.s  $f0, $f4                   
/* 02670 80B466C0 00000000 */  nop
/* 02674 80B466C4 4502000B */  bc1fl   .L80B466F4                 
/* 02678 80B466C8 3C0142B4 */  lui     $at, 0x42B4                ## $at = 42B40000
/* 0267C 80B466CC 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 02680 80B466D0 26040408 */  addiu   $a0, $s0, 0x0408           ## $a0 = 00000408
/* 02684 80B466D4 3C05C080 */  lui     $a1, 0xC080                ## $a1 = C0800000
/* 02688 80B466D8 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 0268C 80B466DC 3C073FC0 */  lui     $a3, 0x3FC0                ## $a3 = 3FC00000
/* 02690 80B466E0 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 02694 80B466E4 E7A60010 */  swc1    $f6, 0x0010($sp)           
/* 02698 80B466E8 1000001A */  beq     $zero, $zero, .L80B46754   
/* 0269C 80B466EC C6020408 */  lwc1    $f2, 0x0408($s0)           ## 00000408
/* 026A0 80B466F0 3C0142B4 */  lui     $at, 0x42B4                ## $at = 42B40000
.L80B466F4:
/* 026A4 80B466F4 44814000 */  mtc1    $at, $f8                   ## $f8 = 90.00
/* 026A8 80B466F8 26040408 */  addiu   $a0, $s0, 0x0408           ## $a0 = 00000408
/* 026AC 80B466FC 24050000 */  addiu   $a1, $zero, 0x0000         ## $a1 = 00000000
/* 026B0 80B46700 46024280 */  add.s   $f10, $f8, $f2             
/* 026B4 80B46704 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 026B8 80B46708 3C0740B4 */  lui     $a3, 0x40B4                ## $a3 = 40B40000
/* 026BC 80B4670C 4600503C */  c.lt.s  $f10, $f0                  
/* 026C0 80B46710 00000000 */  nop
/* 026C4 80B46714 4502000B */  bc1fl   .L80B46744                 
/* 026C8 80B46718 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 026CC 80B4671C 44809000 */  mtc1    $zero, $f18                ## $f18 = 0.00
/* 026D0 80B46720 26040408 */  addiu   $a0, $s0, 0x0408           ## $a0 = 00000408
/* 026D4 80B46724 3C054080 */  lui     $a1, 0x4080                ## $a1 = 40800000
/* 026D8 80B46728 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 026DC 80B4672C 3C073FC0 */  lui     $a3, 0x3FC0                ## $a3 = 3FC00000
/* 026E0 80B46730 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 026E4 80B46734 E7B20010 */  swc1    $f18, 0x0010($sp)          
/* 026E8 80B46738 10000006 */  beq     $zero, $zero, .L80B46754   
/* 026EC 80B4673C C6020408 */  lwc1    $f2, 0x0408($s0)           ## 00000408
/* 026F0 80B46740 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
.L80B46744:
/* 026F4 80B46744 34E7CCCD */  ori     $a3, $a3, 0xCCCD           ## $a3 = 0000CCCD
/* 026F8 80B46748 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 026FC 80B4674C E7A40010 */  swc1    $f4, 0x0010($sp)           
/* 02700 80B46750 C6020408 */  lwc1    $f2, 0x0408($s0)           ## 00000408
.L80B46754:
/* 02704 80B46754 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 02708 80B46758 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0270C 80B4675C 46023032 */  c.eq.s  $f6, $f2                   
/* 02710 80B46760 00000000 */  nop
/* 02714 80B46764 45030015 */  bc1tl   .L80B467BC                 
/* 02718 80B46768 44808000 */  mtc1    $zero, $f16                ## $f16 = 0.00
/* 0271C 80B4676C 44061000 */  mfc1    $a2, $f2                   
/* 02720 80B46770 0C2D1071 */  jal     func_80B441C4              
/* 02724 80B46774 8FA5005C */  lw      $a1, 0x005C($sp)           
/* 02728 80B46778 54400010 */  bnel    $v0, $zero, .L80B467BC     
/* 0272C 80B4677C 44808000 */  mtc1    $zero, $f16                ## $f16 = 0.00
/* 02730 80B46780 0C01DE1C */  jal     Math_SinS
              ## sins?
/* 02734 80B46784 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 02738 80B46788 C60A0408 */  lwc1    $f10, 0x0408($s0)          ## 00000408
/* 0273C 80B4678C C6080024 */  lwc1    $f8, 0x0024($s0)           ## 00000024
/* 02740 80B46790 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 02744 80B46794 460A0482 */  mul.s   $f18, $f0, $f10            
/* 02748 80B46798 46124100 */  add.s   $f4, $f8, $f18             
/* 0274C 80B4679C 0C01DE0D */  jal     Math_CosS
              ## coss?
/* 02750 80B467A0 E6040024 */  swc1    $f4, 0x0024($s0)           ## 00000024
/* 02754 80B467A4 C60A0408 */  lwc1    $f10, 0x0408($s0)          ## 00000408
/* 02758 80B467A8 C606002C */  lwc1    $f6, 0x002C($s0)           ## 0000002C
/* 0275C 80B467AC 460A0202 */  mul.s   $f8, $f0, $f10             
/* 02760 80B467B0 46083480 */  add.s   $f18, $f6, $f8             
/* 02764 80B467B4 E612002C */  swc1    $f18, 0x002C($s0)          ## 0000002C
/* 02768 80B467B8 44808000 */  mtc1    $zero, $f16                ## $f16 = 0.00
.L80B467BC:
/* 0276C 80B467BC C6000068 */  lwc1    $f0, 0x0068($s0)           ## 00000068
/* 02770 80B467C0 C6020408 */  lwc1    $f2, 0x0408($s0)           ## 00000408
/* 02774 80B467C4 4600803E */  c.le.s  $f16, $f0                  
/* 02778 80B467C8 00000000 */  nop
/* 0277C 80B467CC 45020004 */  bc1fl   .L80B467E0                 
/* 02780 80B467D0 46000387 */  neg.s   $f14, $f0                  
/* 02784 80B467D4 10000002 */  beq     $zero, $zero, .L80B467E0   
/* 02788 80B467D8 46000386 */  mov.s   $f14, $f0                  
/* 0278C 80B467DC 46000387 */  neg.s   $f14, $f0                  
.L80B467E0:
/* 02790 80B467E0 4602803E */  c.le.s  $f16, $f2                  
/* 02794 80B467E4 00000000 */  nop
/* 02798 80B467E8 45020004 */  bc1fl   .L80B467FC                 
/* 0279C 80B467EC 46001307 */  neg.s   $f12, $f2                  
/* 027A0 80B467F0 10000002 */  beq     $zero, $zero, .L80B467FC   
/* 027A4 80B467F4 46001306 */  mov.s   $f12, $f2                  
/* 027A8 80B467F8 46001307 */  neg.s   $f12, $f2                  
.L80B467FC:
/* 027AC 80B467FC 460E603E */  c.le.s  $f12, $f14                 
/* 027B0 80B46800 3C013F40 */  lui     $at, 0x3F40                ## $at = 3F400000
/* 027B4 80B46804 45020007 */  bc1fl   .L80B46824                 
/* 027B8 80B46808 C6060168 */  lwc1    $f6, 0x0168($s0)           ## 00000168
/* 027BC 80B4680C 44812000 */  mtc1    $at, $f4                   ## $f4 = 0.75
/* 027C0 80B46810 00000000 */  nop
/* 027C4 80B46814 46040282 */  mul.s   $f10, $f0, $f4             
/* 027C8 80B46818 10000012 */  beq     $zero, $zero, .L80B46864   
/* 027CC 80B4681C E60A0168 */  swc1    $f10, 0x0168($s0)          ## 00000168
/* 027D0 80B46820 C6060168 */  lwc1    $f6, 0x0168($s0)           ## 00000168
.L80B46824:
/* 027D4 80B46824 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 027D8 80B46828 3C013F40 */  lui     $at, 0x3F40                ## $at = 3F400000
/* 027DC 80B4682C 4608303C */  c.lt.s  $f6, $f8                   
/* 027E0 80B46830 00000000 */  nop
/* 027E4 80B46834 45020008 */  bc1fl   .L80B46858                 
/* 027E8 80B46838 44815000 */  mtc1    $at, $f10                  ## $f10 = 0.75
/* 027EC 80B4683C 3C01BF40 */  lui     $at, 0xBF40                ## $at = BF400000
/* 027F0 80B46840 44819000 */  mtc1    $at, $f18                  ## $f18 = -0.75
/* 027F4 80B46844 00000000 */  nop
/* 027F8 80B46848 46121102 */  mul.s   $f4, $f2, $f18             
/* 027FC 80B4684C 10000005 */  beq     $zero, $zero, .L80B46864   
/* 02800 80B46850 E6040168 */  swc1    $f4, 0x0168($s0)           ## 00000168
/* 02804 80B46854 44815000 */  mtc1    $at, $f10                  ## $f10 = -0.75
.L80B46858:
/* 02808 80B46858 00000000 */  nop
/* 0280C 80B4685C 460A1182 */  mul.s   $f6, $f2, $f10             
/* 02810 80B46860 E6060168 */  swc1    $f6, 0x0168($s0)           ## 00000168
.L80B46864:
/* 02814 80B46864 C6080164 */  lwc1    $f8, 0x0164($s0)           ## 00000164
/* 02818 80B46868 2604014C */  addiu   $a0, $s0, 0x014C           ## $a0 = 0000014C
/* 0281C 80B4686C 4600448D */  trunc.w.s $f18, $f8                  
/* 02820 80B46870 44039000 */  mfc1    $v1, $f18                  
/* 02824 80B46874 0C02927F */  jal     SkelAnime_Update
              
/* 02828 80B46878 AFA3004C */  sw      $v1, 0x004C($sp)           
/* 0282C 80B4687C 44808000 */  mtc1    $zero, $f16                ## $f16 = 0.00
/* 02830 80B46880 C6000168 */  lwc1    $f0, 0x0168($s0)           ## 00000168
/* 02834 80B46884 8FA3004C */  lw      $v1, 0x004C($sp)           
/* 02838 80B46888 4600803E */  c.le.s  $f16, $f0                  
/* 0283C 80B4688C 00000000 */  nop
/* 02840 80B46890 45020004 */  bc1fl   .L80B468A4                 
/* 02844 80B46894 46000307 */  neg.s   $f12, $f0                  
/* 02848 80B46898 10000002 */  beq     $zero, $zero, .L80B468A4   
/* 0284C 80B4689C 46000306 */  mov.s   $f12, $f0                  
/* 02850 80B468A0 46000307 */  neg.s   $f12, $f0                  
.L80B468A4:
/* 02854 80B468A4 C6020164 */  lwc1    $f2, 0x0164($s0)           ## 00000164
/* 02858 80B468A8 4600803E */  c.le.s  $f16, $f0                  
/* 0285C 80B468AC 460C1101 */  sub.s   $f4, $f2, $f12             
/* 02860 80B468B0 4600118D */  trunc.w.s $f6, $f2                   
/* 02864 80B468B4 4600228D */  trunc.w.s $f10, $f4                  
/* 02868 80B468B8 44083000 */  mfc1    $t0, $f6                   
/* 0286C 80B468BC 44025000 */  mfc1    $v0, $f10                  
/* 02870 80B468C0 45020004 */  bc1fl   .L80B468D4                 
/* 02874 80B468C4 46000307 */  neg.s   $f12, $f0                  
/* 02878 80B468C8 10000002 */  beq     $zero, $zero, .L80B468D4   
/* 0287C 80B468CC 46000306 */  mov.s   $f12, $f0                  
/* 02880 80B468D0 46000307 */  neg.s   $f12, $f0                  
.L80B468D4:
/* 02884 80B468D4 10680015 */  beq     $v1, $t0, .L80B4692C       
/* 02888 80B468D8 2841000E */  slti    $at, $v0, 0x000E           
/* 0288C 80B468DC 50200008 */  beql    $at, $zero, .L80B46900     
/* 02890 80B468E0 2841001B */  slti    $at, $v0, 0x001B           
/* 02894 80B468E4 4600620D */  trunc.w.s $f8, $f12                  
/* 02898 80B468E8 440A4000 */  mfc1    $t2, $f8                   
/* 0289C 80B468EC 00000000 */  nop
/* 028A0 80B468F0 01435821 */  addu    $t3, $t2, $v1              
/* 028A4 80B468F4 29610010 */  slti    $at, $t3, 0x0010           
/* 028A8 80B468F8 10200009 */  beq     $at, $zero, .L80B46920     
/* 028AC 80B468FC 2841001B */  slti    $at, $v0, 0x001B           
.L80B46900:
/* 028B0 80B46900 5020000B */  beql    $at, $zero, .L80B46930     
/* 028B4 80B46904 8FA3005C */  lw      $v1, 0x005C($sp)           
/* 028B8 80B46908 4600648D */  trunc.w.s $f18, $f12                 
/* 028BC 80B4690C 440D9000 */  mfc1    $t5, $f18                  
/* 028C0 80B46910 00000000 */  nop
/* 028C4 80B46914 01A37021 */  addu    $t6, $t5, $v1              
/* 028C8 80B46918 29C1001D */  slti    $at, $t6, 0x001D           
/* 028CC 80B4691C 14200003 */  bne     $at, $zero, .L80B4692C     
.L80B46920:
/* 028D0 80B46920 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 028D4 80B46924 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 028D8 80B46928 2405382E */  addiu   $a1, $zero, 0x382E         ## $a1 = 0000382E
.L80B4692C:
/* 028DC 80B4692C 8FA3005C */  lw      $v1, 0x005C($sp)           
.L80B46930:
/* 028E0 80B46930 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 028E4 80B46934 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 028E8 80B46938 00611821 */  addu    $v1, $v1, $at              
/* 028EC 80B4693C 8C6F1DE4 */  lw      $t7, 0x1DE4($v1)           ## 00001DE4
/* 028F0 80B46940 24053829 */  addiu   $a1, $zero, 0x3829         ## $a1 = 00003829
/* 028F4 80B46944 31F8005F */  andi    $t8, $t7, 0x005F           ## $t8 = 00000000
/* 028F8 80B46948 57000005 */  bnel    $t8, $zero, .L80B46960     
/* 028FC 80B4694C 87B90056 */  lh      $t9, 0x0056($sp)           
/* 02900 80B46950 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 02904 80B46954 AFA30028 */  sw      $v1, 0x0028($sp)           
/* 02908 80B46958 8FA30028 */  lw      $v1, 0x0028($sp)           
/* 0290C 80B4695C 87B90056 */  lh      $t9, 0x0056($sp)           
.L80B46960:
/* 02910 80B46960 860800B6 */  lh      $t0, 0x00B6($s0)           ## 000000B6
/* 02914 80B46964 AFA30028 */  sw      $v1, 0x0028($sp)           
/* 02918 80B46968 03282023 */  subu    $a0, $t9, $t0              
/* 0291C 80B4696C 00042400 */  sll     $a0, $a0, 16               
/* 02920 80B46970 0C01DE0D */  jal     Math_CosS
              ## coss?
/* 02924 80B46974 00042403 */  sra     $a0, $a0, 16               
/* 02928 80B46978 3C0180B5 */  lui     $at, %hi(D_80B4A370)       ## $at = 80B50000
/* 0292C 80B4697C C424A370 */  lwc1    $f4, %lo(D_80B4A370)($at)  
/* 02930 80B46980 8FA30028 */  lw      $v1, 0x0028($sp)           
/* 02934 80B46984 3C0142C8 */  lui     $at, 0x42C8                ## $at = 42C80000
/* 02938 80B46988 4604003C */  c.lt.s  $f0, $f4                   
/* 0293C 80B4698C 00000000 */  nop
/* 02940 80B46990 45030005 */  bc1tl   .L80B469A8                 
/* 02944 80B46994 44815000 */  mtc1    $at, $f10                  ## $f10 = 100.00
/* 02948 80B46998 8E0203F0 */  lw      $v0, 0x03F0($s0)           ## 000003F0
/* 0294C 80B4699C 14400019 */  bne     $v0, $zero, .L80B46A04     
/* 02950 80B469A0 00000000 */  nop
/* 02954 80B469A4 44815000 */  mtc1    $at, $f10                  ## $f10 = 100.00
.L80B469A8:
/* 02958 80B469A8 C6060090 */  lwc1    $f6, 0x0090($s0)           ## 00000090
/* 0295C 80B469AC 860900B6 */  lh      $t1, 0x00B6($s0)           ## 000000B6
/* 02960 80B469B0 460A303E */  c.le.s  $f6, $f10                  
/* 02964 80B469B4 A6090032 */  sh      $t1, 0x0032($s0)           ## 00000032
/* 02968 80B469B8 4500000E */  bc1f    .L80B469F4                 
/* 0296C 80B469BC 00000000 */  nop
/* 02970 80B469C0 8C6A1DE4 */  lw      $t2, 0x1DE4($v1)           ## 00001DE4
/* 02974 80B469C4 8FA4005C */  lw      $a0, 0x005C($sp)           
/* 02978 80B469C8 314B0003 */  andi    $t3, $t2, 0x0003           ## $t3 = 00000000
/* 0297C 80B469CC 15600009 */  bne     $t3, $zero, .L80B469F4     
/* 02980 80B469D0 00000000 */  nop
/* 02984 80B469D4 0C2D133C */  jal     func_80B44CF0              
/* 02988 80B469D8 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 0298C 80B469DC 10400005 */  beq     $v0, $zero, .L80B469F4     
/* 02990 80B469E0 00000000 */  nop
/* 02994 80B469E4 0C2D1A89 */  jal     func_80B46A24              
/* 02998 80B469E8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0299C 80B469EC 10000009 */  beq     $zero, $zero, .L80B46A14   
/* 029A0 80B469F0 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B469F4:
/* 029A4 80B469F4 0C2D14E1 */  jal     func_80B45384              
/* 029A8 80B469F8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 029AC 80B469FC 10000005 */  beq     $zero, $zero, .L80B46A14   
/* 029B0 80B46A00 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B46A04:
/* 029B4 80B46A04 10400002 */  beq     $v0, $zero, .L80B46A10     
/* 029B8 80B46A08 244CFFFF */  addiu   $t4, $v0, 0xFFFF           ## $t4 = FFFFFFFF
/* 029BC 80B46A0C AE0C03F0 */  sw      $t4, 0x03F0($s0)           ## 000003F0
.L80B46A10:
/* 029C0 80B46A10 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B46A14:
/* 029C4 80B46A14 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 029C8 80B46A18 27BD0058 */  addiu   $sp, $sp, 0x0058           ## $sp = 00000000
/* 029CC 80B46A1C 03E00008 */  jr      $ra                        
/* 029D0 80B46A20 00000000 */  nop
