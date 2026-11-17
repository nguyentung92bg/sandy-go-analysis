/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<AppendKeys>d__54$$MoveNext
bool Dino_BusSand_App_UI_PassportPanel__AppendKeys_d__54__MoveNext (Dino_BusSand_App_UI_PassportPanel__AppendKeys_d__54_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportPanel.<AppendKeys>d__54$$MoveNext
   bool Dino_BusSand_App_UI_PassportPanel__AppendKeys_d__54__MoveNext
   (Dino_BusSand_App_UI_PassportPanel__AppendKeys_d__54_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_PassportPanel__AppendKeys_d__54__MoveNext_21d8e58(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  int iStack_44;
  double dStack_28;
  
                    /* try { // try from 022d8e58 to 023d8eab has its CatchHandler @ 022d8f78 */
  if ((bRam0000000004f9bb71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04caebf0);
    FUN_02132f7c(PTR_DAT_04cb08b8);
    FUN_02132f7c(PTR_DAT_04cb08c0);
    FUN_02132f7c(PTR_DAT_04cabd10);
                    /* try { // try from 022d8ed8 to 023d8f4b has its CatchHandler @ 022d8f8c */
    FUN_02132f7c(PTR_DAT_04caf1e0);
    bRam0000000004f9bb71 = 1;
  }
  fVar14 = _UNK_00e200f8;
  iVar3 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  iStack_44 = 0;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 != 0) {
        Dino_BusSand_App_UI_PassportPanel__BlockInput_21d87cc(lVar8,1);
        if (*(long *)(lVar8 + 0x40) != 0) {
          Dino_BusSand_App_Meta_PassportFeature__SetPendingKeysCommitDirty_22478ec
                    (*(long *)(lVar8 + 0x40),1,0);
          uVar2 = Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284(lVar8);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
          Dino_BusSand_App_UI_PassportPanel__ScrollToCurrent_21d44b0(lVar8);
          if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(0x3f000000,0);
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
      goto LAB_022d93dc;
    }
    if (iVar3 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x40) == 0)) goto LAB_022d93dc;
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentStageIndex_22468d0
                      (*(long *)(lVar8 + 0x40),0);
    lVar7 = *(long *)(lVar8 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    if (lVar7 == 0) goto LAB_022d93dc;
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentKeys_2246928(lVar7,0);
    lVar7 = *(long *)(lVar8 + 0x40);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    if (lVar7 == 0) goto LAB_022d93dc;
                    /* try { // try from 022d8f4c to 023d8f6f has its CatchHandler @ 022d8df8 */
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__get_PendingKeys_2246980(lVar7,0);
    lVar7 = *(long *)(lVar8 + 0x40);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    if (lVar7 == 0) goto LAB_022d93dc;
    iVar3 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(lVar7,0);
                    /* try { // try from 022d8f70 to 023d8f73 has its CatchHandler @ 022d8f78 */
    if (*(long *)(lVar8 + 0x40) == 0) goto LAB_022d93dc;
                    /* try { // try from 022d8f74 to 023d8f77 has its CatchHandler @ 022d8f8c */
                    /* catch() { ... } // from try @ 022d8e58 with catch @ 022d8f78
                       catch() { ... } // from try @ 022d8f70 with catch @ 022d8f78
                       try { // try from 022d8f78 to 023d8f9f has its CatchHandler @ 022d8df8 */
    iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50
                      (*(long *)(lVar8 + 0x40),0);
    *(int *)(param_1 + 0x38) = iVar4 + iVar3;
                    /* catch() { ... } // from try @ 022d8ed8 with catch @ 022d8f8c
                       catch() { ... } // from try @ 022d8f74 with catch @ 022d8f8c */
LAB_022d8fa8:
    if (*(int *)(param_1 + 0x34) < 1) {
      iVar3 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2c);
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + 0x38) <= iVar4) break;
        if (lVar8 == 0) {
          iStack_44 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lVar8 + 0x48) != '\0') goto LAB_022d9150;
        if (*(long *)(lVar8 + 0x40) == 0) {
          iStack_44 = iVar3;
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar4 = Dino_BusSand_App_Meta_PassportFeature__StageKeyCost_2246a60
                          (*(long *)(lVar8 + 0x40),iVar4,0);
        *(int *)(param_1 + 0x3c) = iVar4;
        if (0 < iVar4) {
          iVar1 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30);
          if (iVar4 <= iVar1) {
            iVar1 = iVar4;
          }
          *(int *)(param_1 + 0x40) = iVar1;
          iStack_44 = iVar3;
          Dino_BusSand_App_UI_PassportPanel__SetStageNum_21d6af4
                    (lVar8,*(undefined4 *)(param_1 + 0x2c));
          if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb08b8,0);
          fVar12 = 0.0;
          *(undefined4 *)(param_1 + 0x44) = 0;
          goto LAB_022d9124;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
        iVar4 = iVar3 + 1;
        *(int *)(param_1 + 0x2c) = iVar4;
      } while (0 < *(int *)(param_1 + 0x34));
    }
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_022d8fa8;
    }
    fVar12 = *(float *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (fVar12 < fVar14) {
      if (lVar8 == 0) goto LAB_022d93dc;
LAB_022d9124:
      if (*(char *)(lVar8 + 0x48) == '\0') {
        fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar10 = (fVar12 + fVar9) / _UNK_00e200f8;
        fVar14 = 1.0;
        if (fVar10 <= 1.0) {
          fVar14 = fVar10;
        }
        *(float *)(param_1 + 0x44) = fVar12 + fVar9;
                    /* try { // try from 022d9264 to 023d92b7 has its CatchHandler @ 022d9370 */
        fVar12 = 0.0;
        if (0.0 <= fVar10) {
          fVar12 = fVar14;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar12) {
          fVar14 = fVar12;
        }
        fVar14 = ((float)*(int *)(param_1 + 0x40) - (float)*(int *)(param_1 + 0x30)) * fVar14 +
                 (float)*(int *)(param_1 + 0x30);
        Dino_BusSand_App_UI_PassportPanel__SetSlider_21d69ec
                  (fVar14 / (float)*(int *)(param_1 + 0x3c),lVar8);
        if (cRam0000000004f9b891 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar13 = (double)fVar14;
        dVar11 = (double)FUN_049b52f0(dVar13,&dStack_28);
        if (0.0 <= fVar14) {
          if (dVar11 == 0.5) {
            dVar11 = 1.0;
            goto LAB_022d930c;
          }
          dStack_28 = (double)(long)(dVar13 + 0.5);
        }
        else {
                    /* try { // try from 022d92e4 to 023d9343 has its CatchHandler @ 022d9384 */
          if (dVar11 == -0.5) {
            dVar11 = -1.0;
LAB_022d930c:
            if (((long)dStack_28 & 1U) != 0) {
              dStack_28 = dStack_28 + dVar11;
            }
          }
          else {
            dStack_28 = (double)(long)(dVar13 + -0.5);
          }
        }
                    /* try { // try from 022d9344 to 023d9367 has its CatchHandler @ 022d9208 */
        iStack_44 = -0x80000000;
        if (dStack_28 != INFINITY) {
          iStack_44 = (int)dStack_28;
        }
        uVar5 = System_Int32__ToString_482d750(&iStack_44,0);
                    /* try { // try from 022d9368 to 023d936b has its CatchHandler @ 022d9370 */
        uVar6 = System_Int32__ToString_482d750((int *)(param_1 + 0x3c),0);
                    /* try { // try from 022d936c to 023d936f has its CatchHandler @ 022d9384 */
                    /* catch() { ... } // from try @ 022d9264 with catch @ 022d9370
                       catch() { ... } // from try @ 022d9368 with catch @ 022d9370
                       try { // try from 022d9370 to 023d9397 has its CatchHandler @ 022d9208 */
                    /* catch() { ... } // from try @ 022d92e4 with catch @ 022d9384
                       catch() { ... } // from try @ 022d936c with catch @ 022d9384 */
        uVar5 = System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cabd10,uVar6,0);
                    /* try { // try from 022d9398 to 023d941f has its CatchHandler @ 022d9398
                       catch() { ... } // from try @ 022d9398 with catch @ 022d9398
                       catch() { ... } // from try @ 022d9438 with catch @ 022d9398
                       catch() { ... } // from try @ 022d9578 with catch @ 022d9398 */
        Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar8,*(undefined8 *)PTR_DAT_04caebf0,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar2 = 2;
        goto LAB_022d93b8;
      }
    }
    iVar3 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) - iVar3) + *(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x3c) <= iVar3) {
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04caf1e0,0);
      if (*(int *)(*(long *)PTR_DAT_04cab230 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Haptics__Vibrate_214dd74(*(undefined8 *)PTR_DAT_04cb08c0,0);
      iStack_44 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = iStack_44 + 1;
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (lVar8 != 0) {
        Dino_BusSand_App_UI_PassportPanel__SetSlider_21d69ec(0,lVar8);
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(_UNK_00e207cc,0);
                    /* try { // try from 022d9208 to 023d9263 has its CatchHandler @ 022d9208
                       catch() { ... } // from try @ 022d9208 with catch @ 022d9208
                       catch() { ... } // from try @ 022d9344 with catch @ 022d9208
                       catch() { ... } // from try @ 022d9370 with catch @ 022d9208 */
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
        uVar2 = 3;
LAB_022d93b8:
        *(undefined4 *)(param_1 + 0x10) = uVar2;
        return 1;
      }
      goto LAB_022d93dc;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    iVar3 = iStack_44;
  }
  iStack_44 = iVar3;
  iVar3 = iStack_44;
  if (lVar8 != 0) {
LAB_022d9150:
    iStack_44 = iVar3;
    Dino_BusSand_App_UI_PassportPanel__FinishAppend_21d8930(lVar8,*(undefined4 *)(param_1 + 0x28));
    return 0;
  }
LAB_022d93dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

