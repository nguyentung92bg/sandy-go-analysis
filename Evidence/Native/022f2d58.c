/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$RefreshStage
void Dino_BusSand_App_UI_YachtRacingStartPanel__RefreshStage (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$RefreshStage
   void Dino_BusSand_App_UI_YachtRacingStartPanel__RefreshStage
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__RefreshStage_21f2d58(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined4 uStack_68;
  int iStack_64;
  
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
  puVar6 = PTR_DAT_04cb1558;
  puVar5 = PTR_DAT_04cb1550;
  puVar4 = PTR_DAT_04cb1548;
  puVar3 = PTR_DAT_04cae9e0;
  puVar2 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022f2ef4 with catch @ 022f2e50 */
  iStack_64 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar7 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454
                      (*(long *)(param_1 + 0x40),0);
    lVar15 = 4;
    while( true ) {
                    /* try { // try from 022f2e90 to 023f2e9b has its CatchHandler @ 022f2f64 */
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar5;
      }
      if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_022f3260;
                    /* try { // try from 022f2eb8 to 023f2ec3 has its CatchHandler @ 022f2f50 */
      if ((long)*(int *)(**(long **)(lVar8 + 0xb8) + 0x18) <= (long)(lVar15 - 4U)) break;
                    /* try { // try from 022f2ec4 to 023f2edb has its CatchHandler @ 022f2f2c */
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Object___ctor_4870e5c(lVar8,0);
      if (lVar8 == 0) goto LAB_022f3260;
      *(long *)(lVar8 + 0x20) = param_1;
      thunk_FUN_02134474((long *)(lVar8 + 0x20),param_1);
      lVar9 = *(long *)puVar5;
                    /* try { // try from 022f2ef0 to 023f2ef3 has its CatchHandler @ 022f2ef4 */
      if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022f2ef0 with catch @ 022f2ef4
                       try { // try from 022f2ef4 to 023f2f77 has its CatchHandler @ 022f2e50 */
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar5;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_022f3260;
      if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar15 - 4U) goto LAB_022f3264;
      plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                  (param_1,*(undefined8 *)(lVar9 + lVar15 * 8),0);
                    /* catch() { ... } // from try @ 022f2ec4 with catch @ 022f2f2c */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(plVar10,0,0);
      if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 022f2eb8 with catch @ 022f2f50 */
        lVar9 = *(long *)puVar5;
        iVar14 = (int)(lVar15 - 3U);
        *(int *)(lVar8 + 0x10) = iVar14;
        if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022f2e90 with catch @ 022f2f64 */
          thunk_FUN_0218fdac();
        }
                    /* catch() { ... } // from try @ 022f3020 with catch @ 022f2f78 */
        Dino_BusSand_App_UI_YachtRacingStartPanel__SetStageButton_21f3370
                  (plVar10,lVar15 - 3U & 0xffffffff,iVar14 < iVar7);
        if ((*(int *)(lVar8 + 0x10) == 3) || (iVar7 <= *(int *)(lVar8 + 0x10))) {
          if (plVar10 == (long *)0x0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),0);
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar9 = *(long *)PTR_DAT_04cabdb0;
          plVar1 = plVar10;
          if (*plVar10 != lVar9) {
            plVar1 = (long *)0x0;
          }
          *(long *)(lVar8 + 0x18) = (long)plVar1;
          plVar1 = plVar10;
          if (*plVar10 != lVar9) {
            plVar1 = (long *)0x0;
          }
          thunk_FUN_02134474((long *)(lVar8 + 0x18),plVar1);
                    /* try { // try from 022f2fc8 to 023f2fd3 has its CatchHandler @ 022f3048 */
          uVar12 = UnityEngine_Component__get_gameObject_43bcde8(plVar10,0);
          uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022f2ff0 to 023f3007 has its CatchHandler @ 022f3044 */
          System_Action___ctor_47b5ed0(uVar13,lVar8,*(undefined8 *)PTR_DAT_04cb1540,0);
                    /* try { // try from 022f301c to 023f301f has its CatchHandler @ 022f3020 */
                    /* catch() { ... } // from try @ 022f301c with catch @ 022f3020
                       try { // try from 022f3020 to 023f305b has its CatchHandler @ 022f2f78 */
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                    (uVar12,uVar13,1,*(undefined8 *)PTR_DAT_04cad948,0);
        }
      }
      lVar15 = lVar15 + 1;
    }
    iStack_64 = 1;
    do {
      uVar12 = System_Int32__ToString_482d750(&iStack_64,0);
                    /* catch() { ... } // from try @ 022f2ff0 with catch @ 022f3044 */
                    /* catch() { ... } // from try @ 022f2fc8 with catch @ 022f3048 */
      uVar12 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar12,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar12,iVar7 == iStack_64,0);
      uVar12 = System_Int32__ToString_482d750(&iStack_64,0);
      uVar12 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,uVar12,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,uVar12,iVar7 == iStack_64,0);
      puVar2 = PTR_DAT_04ca9c20;
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < 4);
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
      if (lVar15 != 0) {
        Dino_BusSand_App_UI_UIPanel__Show_21f4018
                  (param_1,*(undefined8 *)PTR_DAT_04cb1580,*(undefined1 *)(lVar15 + 0x80),0);
        plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
        if (*(long *)(param_1 + 0x40) != 0) {
          uStack_68 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                                (*(long *)(param_1 + 0x40),0xffffffff,0);
          lVar15 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_68);
          if (plVar10 == (long *)0x0) goto LAB_022f3260;
          if ((lVar15 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
LAB_022f327c:
            uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar12,0);
          }
          if ((int)plVar10[3] != 0) {
            plVar10[4] = lVar15;
            thunk_FUN_02134474(plVar10 + 4,lVar15);
            uVar12 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                               (*(undefined8 *)PTR_DAT_04cb1560,plVar10,0);
            lVar15 = System_String__Concat_46d2b84
                               (*(undefined8 *)PTR_DAT_04cb1570,uVar12,
                                *(undefined8 *)PTR_DAT_04cadde8,0);
            uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_1,*(undefined8 *)PTR_DAT_04cb1568,0);
            plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
            if (plVar10 == (long *)0x0) goto LAB_022f3260;
            if ((lVar15 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
            goto LAB_022f327c;
            if ((int)plVar10[3] != 0) {
              plVar10[4] = lVar15;
              thunk_FUN_02134474(plVar10 + 4,lVar15);
              uVar13 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                                 (*(undefined8 *)PTR_DAT_04cb1578,plVar10,0);
              Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar12,uVar13,0);
              return;
            }
          }
LAB_022f3264:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
LAB_022f3260:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

