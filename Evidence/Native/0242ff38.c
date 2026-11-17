/* IL2CPP: Dino.BusSand.App.UI.PackPopup$$WasPrice
System_String_o* Dino_BusSand_App_UI_PackPopup__WasPrice (System_String_o* price, System_String_o* discount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PackPopup$$WasPrice
   System_String_o* Dino_BusSand_App_UI_PackPopup__WasPrice (System_String_o* price,
   System_String_o* discount, const MethodInfo* method); */

void Dino_BusSand_App_UI_PackPopup__WasPrice_232ff38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000004f9c61f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9c10);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cab2c8);
    FUN_02132f7c(PTR_DAT_04cb9080);
    bRam0000000004f9c61f = 1;
  }
  iStack_ac = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_88._0_8_ = 0;
  auStack_88._8_8_ = 0;
  uVar7 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  uVar8 = 0;
  if ((uVar7 & 1) == 0) {
    uVar7 = System_Int32__TryParse_482de64(param_2,&iStack_ac,0);
    puVar5 = PTR_DAT_04cb9080;
    uVar8 = 0;
    if ((uVar7 & 1) != 0) {
      if (iStack_ac - 1U < 99) {
        uVar8 = 0;
        if ((*(long *)PTR_DAT_04cb9080 != 0) &&
           (uVar8 = System_String__ToCharArray_46d1f90(*(long *)PTR_DAT_04cb9080,0), param_1 != 0))
        {
          uVar8 = System_String__IndexOfAny_46d7618(param_1,uVar8,0);
          if (*(long *)puVar5 != 0) {
            uVar9 = System_String__ToCharArray_46d1f90(*(long *)puVar5,0);
            iVar6 = System_String__LastIndexOfAny_46d7f1c(param_1,uVar9,0);
            iVar17 = (int)uVar8;
            if (-1 < iVar17) {
              uVar9 = System_String__Substring_46d4848
                                (param_1,uVar8 & 0xffffffff,(iVar6 - iVar17) + 1,0);
              if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa370);
              }
              uVar10 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
              plVar15 = (long *)PTR_DAT_04ca9c10;
              if (*(int *)(*(long *)PTR_DAT_04ca9c10 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9c10);
              }
              uVar7 = System_Decimal__TryParse_4889b44(uVar9,0x6f,uVar10,&uStack_78,0);
              uVar10 = uStack_70;
              uVar9 = uStack_78;
              uVar8 = 0;
              if ((uVar7 & 1) != 0) {
                lVar11 = *plVar15;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar11 = *plVar15;
                }
                uVar7 = System_Decimal__op_LessThanOrEqual_488be8c
                                  (uVar9,uVar10,**(undefined8 **)(lVar11 + 0xb8),
                                   (*(undefined8 **)(lVar11 + 0xb8))[1],0);
                uVar10 = uStack_70;
                uVar9 = uStack_78;
                uVar8 = 0;
                if ((uVar7 & 1) == 0) {
                  lVar11 = *plVar15;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar11 = *plVar15;
                  }
                  uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
                  uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18);
                  auVar18 = System_Decimal__op_Implicit_488b6e0(iStack_ac,0);
                  uStack_98 = 0;
                  uStack_90 = 0;
                  System_Decimal___ctor_4886ed0(&uStack_98,100,0);
                  auVar18 = System_Decimal__op_Division_488bc30
                                      (auVar18._0_8_,auVar18._8_8_,uStack_98,uStack_90,0);
                  auVar18 = System_Decimal__op_Subtraction_488bacc
                                      (uVar13,uVar16,auVar18._0_8_,auVar18._8_8_,0);
                  auVar18 = System_Decimal__op_Division_488bc30
                                      (uVar9,uVar10,auVar18._0_8_,auVar18._8_8_,0);
                  uVar10 = auVar18._8_8_;
                  uVar9 = auVar18._0_8_;
                  auStack_88._0_8_ = 0;
                  auStack_88._8_8_ = 0;
                  auVar18 = System_Decimal__Floor_48895b0(uVar9,uVar10,0);
                  auVar18 = System_Decimal__op_Subtraction_488bacc
                                      (auVar18._0_8_,auVar18._8_8_,
                                       *(undefined8 *)(*(long *)(*plVar15 + 0xb8) + 0x10),
                                       *(undefined8 *)(*(long *)(*plVar15 + 0xb8) + 0x18),0);
                  auVar4 = ZEXT816(0);
                  auVar21 = ZEXT816(0);
                  while( true ) {
                    uStack_c8 = auVar4._8_8_;
                    uStack_d0 = auVar4._0_8_;
                    uVar13 = auVar18._8_8_;
                    uVar16 = auVar18._0_8_;
                    if (*(int *)(*plVar15 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    auVar18 = System_Decimal__Floor_48895b0(uVar9,uVar10,0);
                    auVar18 = System_Decimal__op_Addition_488ba18
                                        (auVar18._0_8_,auVar18._8_8_,
                                         *(undefined8 *)(*(long *)(*plVar15 + 0xb8) + 0x10),
                                         *(undefined8 *)(*(long *)(*plVar15 + 0xb8) + 0x18),0);
                    uVar8 = System_Decimal__op_LessThanOrEqual_488be8c
                                      (uVar16,uVar13,auVar18._0_8_,auVar18._8_8_,0);
                    if ((uVar8 & 1) == 0) break;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    System_Decimal___ctor_4887994(&uStack_98,99,0,0,0,2,0);
                    if (*(int *)(*plVar15 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    auVar18 = System_Decimal__op_Addition_488ba18
                                        (uVar16,uVar13,uStack_98,uStack_90,0);
                    uVar14 = auVar18._8_8_;
                    uVar12 = auVar18._0_8_;
                    uVar8 = System_Decimal__op_GreaterThan_488bf1c
                                      (uVar12,uVar14,uStack_78,uStack_70,0);
                    if ((uVar8 & 1) != 0) {
                      lVar11 = *plVar15;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar11 = *plVar15;
                      }
                      uVar1 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
                      uVar2 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18);
                      auVar19 = System_Decimal__op_Division_488bc30
                                          (uStack_78,uStack_70,uVar12,uVar14,0);
                      auVar19 = System_Decimal__op_Subtraction_488bacc
                                          (uVar1,uVar2,auVar19._0_8_,auVar19._8_8_,0);
                      uStack_98 = 0;
                      uStack_90 = 0;
                      System_Decimal___ctor_4886ed0(&uStack_98,100,0);
                      auVar19 = System_Decimal__op_Multiply_488bb80
                                          (auVar19._0_8_,auVar19._8_8_,uStack_98,uStack_90,0);
                      auVar19 = System_Decimal__Round_488a374(auVar19._0_8_,auVar19._8_8_,0);
                      auVar20 = System_Decimal__op_Implicit_488b6e0(iStack_ac,0);
                      uVar8 = System_Decimal__op_Equality_488bce0
                                        (auVar19._0_8_,auVar19._8_8_,auVar20._0_8_,auVar20._8_8_,0);
                      if ((uVar8 & 1) != 0) {
                        lVar11 = *plVar15;
                        if (*(int *)(lVar11 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                          lVar11 = *plVar15;
                        }
                        uVar8 = System_Decimal__op_Equality_488bce0
                                          (auVar21._0_8_,auVar21._8_8_,
                                           **(undefined8 **)(lVar11 + 0xb8),
                                           (*(undefined8 **)(lVar11 + 0xb8))[1],0);
                        if ((uVar8 & 1) == 0) {
                          if (*(int *)(*plVar15 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          auVar21 = System_Decimal__op_Subtraction_488bacc
                                              (uVar12,uVar14,uVar9,uVar10,0);
                          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          auVar21 = FUN_0243eb58(auVar21._0_8_,auVar21._8_8_,0);
                          auVar19 = System_Decimal__op_Subtraction_488bacc
                                              (uStack_d0,uStack_c8,uVar9,uVar10,0);
                          auVar19 = FUN_0243eb58(auVar19._0_8_,auVar19._8_8_,0);
                          uVar8 = System_Decimal__op_LessThan_488be00
                                            (auVar21._0_8_,auVar21._8_8_,auVar19._0_8_,auVar19._8_8_
                                             ,0);
                          plVar15 = (long *)PTR_DAT_04ca9c10;
                          auVar21 = auVar4;
                          if ((uVar8 & 1) == 0) goto LAB_0243045c;
                        }
                        auVar21 = auVar18;
                        auVar4 = auVar18;
                        auStack_88 = auVar18;
                      }
                    }
LAB_0243045c:
                    if (*(int *)(*plVar15 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    auVar18 = System_Decimal__op_Increment_488b9a8(uVar16,uVar13,0);
                  }
                  lVar11 = *plVar15;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar11 = *plVar15;
                  }
                  uVar8 = System_Decimal__op_Equality_488bce0
                                    (auVar21._0_8_,auVar21._8_8_,**(undefined8 **)(lVar11 + 0xb8),
                                     (*(undefined8 **)(lVar11 + 0xb8))[1],0);
                  puVar5 = PTR_DAT_04caa370;
                  auVar18 = auStack_88;
                  if ((uVar8 & 1) != 0) {
                    uStack_98 = 0;
                    uStack_90 = 0;
                    System_Decimal___ctor_4887994(&uStack_98,99,0,0,0,2,0);
                    if (*(int *)(*plVar15 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    auVar18 = System_Decimal__op_Subtraction_488bacc
                                        (uVar9,uVar10,uStack_98,uStack_90,0);
                    auVar18 = System_Decimal__Ceiling_4888268(auVar18._0_8_,auVar18._8_8_,0);
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    System_Decimal___ctor_4887994(&uStack_a8,99,0,0,0,2,0);
                    auVar18 = System_Decimal__op_Addition_488ba18
                                        (auVar18._0_8_,auVar18._8_8_,uStack_a8,uStack_a0,0);
                  }
                  auStack_88 = auVar18;
                  uVar9 = System_String__Substring_46d4848(param_1,0,iVar17,0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar5);
                  }
                  uVar10 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                  if (*(int *)(*plVar15 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*plVar15);
                  }
                  uVar10 = System_Decimal__ToString_48897e8
                                     (auStack_88,*(undefined8 *)PTR_DAT_04cab2c8,uVar10,0);
                  uVar13 = System_String__Substring_46d6a94(param_1,iVar6 + 1,0);
                  uVar8 = System_String__Concat_46d2b84(uVar9,uVar10,uVar13,0);
                }
              }
              goto LAB_0243048c;
            }
            goto LAB_02430488;
          }
        }
                    /* try { // try from 0243062c to 02530a9b has its CatchHandler @ 0243062c
                       catch() { ... } // from try @ 0243062c with catch @ 0243062c
                       catch() { ... } // from try @ 02430b80 with catch @ 0243062c
                       catch() { ... } // from try @ 02430bd4 with catch @ 0243062c
                       catch() { ... } // from try @ 02430c1c with catch @ 0243062c
                       catch() { ... } // from try @ 02430c48 with catch @ 0243062c */
        if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_02430638;
      }
LAB_02430488:
      uVar8 = 0;
    }
  }
LAB_0243048c:
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_02430638:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

