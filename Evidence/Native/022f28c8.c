/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnOpen
void Dino_BusSand_App_UI_YachtRacingStartPanel__OnOpen (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnOpen
   void Dino_BusSand_App_UI_YachtRacingStartPanel__OnOpen
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__OnOpen_21f28c8(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_04cb1508;
  if ((bRam0000000004f9bc2b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1508);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1020);
    FUN_02132f7c(PTR_DAT_04cb1510);
    FUN_02132f7c(PTR_DAT_04cb1518);
    FUN_02132f7c(PTR_DAT_04cb1520);
                    /* catch() { ... } // from try @ 022f29dc with catch @ 022f2968 */
    FUN_02132f7c(PTR_DAT_04cb1528);
    FUN_02132f7c(PTR_DAT_04cad4e8);
    FUN_02132f7c(PTR_DAT_04cb0428);
    FUN_02132f7c(PTR_DAT_04cb1530);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04cb1040);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cb1538);
                    /* try { // try from 022f29c8 to 023f29db has its CatchHandler @ 022f29f4 */
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bc2b = 1;
  }
                    /* try { // try from 022f29dc to 023f2a0b has its CatchHandler @ 022f2968 */
  if (param_2 == (long *)0x0) {
LAB_022f2a0c:
                    /* catch() { ... } // from try @ 022f2a9c with catch @ 022f2a0c */
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                    /* catch() { ... } // from try @ 022f29c8 with catch @ 022f29f4 */
    if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3))
    goto LAB_022f2a0c;
  }
  puVar11 = PTR_DAT_04cb1530;
  puVar10 = PTR_DAT_04cb1528;
  puVar9 = PTR_DAT_04cb1518;
  puVar8 = PTR_DAT_04cb1510;
  puVar7 = PTR_DAT_04cb1040;
  puVar6 = PTR_DAT_04cb1020;
  puVar5 = PTR_DAT_04cb0428;
  puVar4 = PTR_DAT_04cad948;
  puVar3 = PTR_DAT_04caa458;
  if (param_1 == 0) {
LAB_022f2d4c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(param_1 + 0x38) = (long)param_2;
  thunk_FUN_02134474((long *)(param_1 + 0x38),param_2);
  lVar14 = Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838(0);
  plVar20 = (long *)(param_1 + 0x40);
  *plVar20 = lVar14;
                    /* try { // try from 022f2a90 to 023f2a9b has its CatchHandler @ 022f2ad0 */
  thunk_FUN_02134474(plVar20,lVar14);
                    /* try { // try from 022f2a9c to 023f2ae7 has its CatchHandler @ 022f2a0c */
  plVar15 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar14 = *(long *)PTR_DAT_04cabdb0;
    plVar1 = plVar15;
    if (*plVar15 != lVar14) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x58) = plVar1;
                    /* catch() { ... } // from try @ 022f2a90 with catch @ 022f2ad0 */
    if (*plVar15 != lVar14) {
      plVar15 = (long *)0x0;
    }
  }
                    /* catch() { ... } // from try @ 022f2b5c with catch @ 022f2ae8 */
  thunk_FUN_02134474(param_1 + 0x58,plVar15);
  uVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  uVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  Dino_BusSand_App_UI_YachtRacingRewardTips___ctor_21eb1d8(uVar17,uVar16);
  *(undefined8 *)(param_1 + 0x50) = uVar17;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar17);
  uVar16 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  Dino_BusSand_App_UI_YachtRacingUi__PlayLoop_21f8914(uVar16,*(undefined8 *)puVar11,0);
  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 022f2b48 to 023f2b5b has its CatchHandler @ 022f2b74 */
  System_Action___ctor_47b5ed0(uVar16,param_1,*(undefined8 *)puVar9,0);
                    /* try { // try from 022f2b5c to 023f2b8b has its CatchHandler @ 022f2ae8 */
                    /* catch() { ... } // from try @ 022f2b48 with catch @ 022f2b74 */
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar10,uVar16,1,*(undefined8 *)puVar4,0);
  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 022f2c1c with catch @ 022f2b8c */
  System_Action___ctor_47b5ed0(uVar16,param_1,*(undefined8 *)puVar8,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar16,1,*(undefined8 *)puVar4,0);
  lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cadc30,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
  if ((uVar18 & 1) != 0) {
    if (lVar14 == 0) goto LAB_022f2d4c;
                    /* try { // try from 022f2c10 to 023f2c1b has its CatchHandler @ 022f2c50 */
    uVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
                    /* try { // try from 022f2c1c to 023f2c67 has its CatchHandler @ 022f2b8c */
    uVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar17,param_1,*(undefined8 *)PTR_DAT_04cb1520,0);
                    /* catch() { ... } // from try @ 022f2c10 with catch @ 022f2c50 */
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar16,uVar17,0,0,0);
  }
  puVar3 = PTR_DAT_04ca9d18;
  uVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1538,0);
  lVar21 = *(long *)puVar3;
  lVar14 = *(long *)(lVar21 + 0x38);
  if (lVar14 == 0) {
    FUN_0216b4cc(lVar21);
    lVar14 = *(long *)(lVar21 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_0216b470();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cad4e8;
  lVar14 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_0216b470();
  }
  uVar17 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                     (*(undefined8 *)puVar3,**(undefined8 **)(lVar14 + 0xb8),0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar16,uVar17,0);
  if (*plVar20 == 0) {
    return;
  }
  uVar12 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454(*plVar20,0);
  *(undefined4 *)(param_1 + 0x48) = uVar12;
  if ((bRam0000000004f9bc2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1540);
    FUN_02132f7c(PTR_DAT_04cb1548);
    FUN_02132f7c(PTR_DAT_04cb1550);
    FUN_02132f7c(PTR_DAT_04cb1558);
    FUN_02132f7c(PTR_DAT_04cb1560);
    FUN_02132f7c(PTR_DAT_04cb1568);
    FUN_02132f7c(PTR_DAT_04cb1570);
    FUN_02132f7c(PTR_DAT_04cb1578);
    FUN_02132f7c(PTR_DAT_04cb1580);
    FUN_02132f7c(PTR_DAT_04cadde8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cae9e0);
    bRam0000000004f9bc2c = 1;
  }
  puVar7 = PTR_DAT_04cb1558;
  puVar6 = PTR_DAT_04cb1550;
  puVar5 = PTR_DAT_04cb1548;
  puVar4 = PTR_DAT_04cae9e0;
  puVar3 = PTR_DAT_04ca9ae8;
  iStack_64 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar13 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454
                       (*(long *)(param_1 + 0x40),0);
    lVar14 = 4;
    while( true ) {
      lVar21 = *(long *)puVar6;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar21 = *(long *)puVar6;
      }
      if (**(long **)(lVar21 + 0xb8) == 0) goto LAB_022f3260;
      if ((long)*(int *)(**(long **)(lVar21 + 0xb8) + 0x18) <= (long)(lVar14 - 4U)) break;
      lVar21 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
      System_Object___ctor_4870e5c(lVar21,0);
      if (lVar21 == 0) goto LAB_022f3260;
      *(long *)(lVar21 + 0x20) = param_1;
      thunk_FUN_02134474((long *)(lVar21 + 0x20),param_1);
      lVar19 = *(long *)puVar6;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar19 = *(long *)puVar6;
      }
      lVar19 = **(long **)(lVar19 + 0xb8);
      if (lVar19 == 0) goto LAB_022f3260;
      if ((ulong)*(uint *)(lVar19 + 0x18) <= lVar14 - 4U) goto LAB_022f3264;
      plVar15 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                  (param_1,*(undefined8 *)(lVar19 + lVar14 * 8),0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar18 = UnityEngine_Object__op_Equality_43c6f30(plVar15,0,0);
      if ((uVar18 & 1) == 0) {
        lVar19 = *(long *)puVar6;
        iVar22 = (int)(lVar14 - 3U);
        *(int *)(lVar21 + 0x10) = iVar22;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_YachtRacingStartPanel__SetStageButton_21f3370
                  (plVar15,lVar14 - 3U & 0xffffffff,iVar22 < iVar13);
        if ((*(int *)(lVar21 + 0x10) == 3) || (iVar13 <= *(int *)(lVar21 + 0x10))) {
          if (plVar15 == (long *)0x0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(lVar21 + 0x18),0);
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar19 = *(long *)PTR_DAT_04cabdb0;
          plVar20 = plVar15;
          if (*plVar15 != lVar19) {
            plVar20 = (long *)0x0;
          }
          *(long *)(lVar21 + 0x18) = (long)plVar20;
          plVar20 = plVar15;
          if (*plVar15 != lVar19) {
            plVar20 = (long *)0x0;
          }
          thunk_FUN_02134474((long *)(lVar21 + 0x18),plVar20);
          uVar16 = UnityEngine_Component__get_gameObject_43bcde8(plVar15,0);
          uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar17,lVar21,*(undefined8 *)PTR_DAT_04cb1540,0);
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                    (uVar16,uVar17,1,*(undefined8 *)PTR_DAT_04cad948,0);
        }
      }
      lVar14 = lVar14 + 1;
    }
    iStack_64 = 1;
    do {
      uVar16 = System_Int32__ToString_482d750(&iStack_64,0);
      uVar16 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar16,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar16,iVar13 == iStack_64,0);
      uVar16 = System_Int32__ToString_482d750(&iStack_64,0);
      uVar16 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar16,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar16,iVar13 == iStack_64,0);
      puVar3 = PTR_DAT_04ca9c20;
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < 4);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar14 != 0)) {
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (param_1,*(undefined8 *)PTR_DAT_04cb1580,*(undefined1 *)(lVar14 + 0x80),0);
      plVar15 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_022f3260;
      uStack_68 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                            (*(long *)(param_1 + 0x40),0xffffffff,0);
      lVar14 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_68);
      if (plVar15 != (long *)0x0) {
        if ((lVar14 != 0) &&
           (lVar21 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar21 == 0)) {
LAB_022f327c:
          uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar16,0);
        }
        if ((int)plVar15[3] != 0) {
          plVar15[4] = lVar14;
          thunk_FUN_02134474(plVar15 + 4,lVar14);
          uVar16 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                             (*(undefined8 *)PTR_DAT_04cb1560,plVar15,0);
          lVar14 = System_String__Concat_46d2b84
                             (*(undefined8 *)PTR_DAT_04cb1570,uVar16,*(undefined8 *)PTR_DAT_04cadde8
                              ,0);
          uVar16 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                             (param_1,*(undefined8 *)PTR_DAT_04cb1568,0);
          plVar15 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
          if (plVar15 == (long *)0x0) goto LAB_022f3260;
          if ((lVar14 != 0) &&
             (lVar21 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar21 == 0))
          goto LAB_022f327c;
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar14;
            thunk_FUN_02134474(plVar15 + 4,lVar14);
            uVar17 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                               (*(undefined8 *)PTR_DAT_04cb1578,plVar15,0);
            Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar16,uVar17,0);
            return;
          }
        }
LAB_022f3264:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_022f3260:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

