/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<Forward>d__42$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_d__42__MoveNext (Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_d__42_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<Forward>d__42$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_d__42__MoveNext
   (Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_d__42_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_d__42__MoveNext_21f76f0(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000004f9bc43 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb17a8);
    FUN_02132f7c(PTR_DAT_04cb17b0);
    FUN_02132f7c(PTR_DAT_04cb17b8);
    bRam0000000004f9bc43 = 1;
  }
  uVar9 = _UNK_00e69bf0;
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar11 = *(float *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    if (lVar8 == 0) goto LAB_022f7b6c;
    lVar7 = *(long *)(lVar8 + 0x20);
    *(float *)(param_1 + 0x38) = *(float *)(lVar8 + 0x30) + 472.0 + -130.0;
    puVar3 = PTR_DAT_04ca9ae8;
    if (lVar7 == 0) goto LAB_022f7b6c;
    cVar2 = *(char *)(lVar7 + 0x2c);
    *(undefined2 *)(param_1 + 0x3c) = 0;
    uVar9 = *(undefined8 *)(lVar8 + 0x48);
    lVar7 = *(long *)puVar3;
    bVar4 = cVar2 == '\0' || *(byte *)(param_1 + 0x28) == 0;
    *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x28) ^ 1;
    iVar1 = *(int *)(lVar7 + 0xe4);
    *(bool *)(param_1 + 0x3e) = bVar4;
    *(bool *)(param_1 + 0x40) = bVar4;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    fVar11 = 0.0;
    uVar12 = 0;
    if ((uVar5 & 1) != 0) {
      if (*(long *)(lVar8 + 0x48) == 0) goto LAB_022f7b6c;
      uVar12 = 0;
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(lVar8 + 0x48),0);
    }
    *(undefined4 *)(param_1 + 0x44) = uVar12;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x48) = fVar11 + fVar10;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    fVar13 = *(float *)(param_1 + 0x30);
    if (fVar13 <= fVar11 + fVar10) {
      *(undefined1 *)(param_1 + 0x3c) = 1;
      if (lVar8 == 0) goto LAB_022f7b6c;
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(lVar8 + 0xa8),0);
      puVar3 = PTR_DAT_04ca9ae8;
      uVar9 = *(undefined8 *)(lVar8 + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar8 + 0xc0) == 0) goto LAB_022f7b6c;
        UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,*(long *)(lVar8 + 0xc0),0);
      }
      Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(lVar8 + 0xb0),1);
      if (*(char *)(param_1 + 0x29) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb17b8,0);
      }
      uVar9 = *(undefined8 *)(lVar8 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar8 + 0x48) == 0) goto LAB_022f7b6c;
        UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(lVar8 + 0x48),0);
        *(float *)(param_1 + 0x44) = fVar13;
      }
    }
    if (*(char *)(param_1 + 0x3c) != '\0') goto LAB_022f7948;
  }
  else {
LAB_022f7948:
    if (*(char *)(param_1 + 0x3d) == '\0') {
      if (lVar8 == 0) goto LAB_022f7b6c;
      uVar9 = *(undefined8 *)(lVar8 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        if ((*(char *)(param_1 + 0x3c) != '\0') && (*(char *)(param_1 + 0x3d) == '\0')) {
LAB_022f7b54:
          *(undefined1 *)(param_1 + 0x3d) = 1;
          Dino_BusSand_App_UI_YachtRacingTrackRow__OnForwardComplete_21f6b30
                    (lVar8,*(undefined1 *)(param_1 + 0x28));
        }
      }
      else {
        fVar15 = *(float *)(param_1 + 0x2c);
        fVar13 = *(float *)(param_1 + 0x44);
        fVar10 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x30)) /
                 *(float *)(param_1 + 0x34);
        fVar11 = 1.0;
        if (fVar10 <= 1.0) {
          fVar11 = fVar10;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar10) {
          fVar14 = fVar11;
        }
        fVar11 = (float)Dino_BusSand_App_UI_YachtRacingAnimValues__InOutQuad_21e7fd4(fVar14,0);
        lVar7 = *(long *)(lVar8 + 0x48);
        if (lVar7 == 0) goto LAB_022f7b6c;
        fVar13 = fVar13 + (fVar15 - fVar13) * fVar11;
        uVar9 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar7,0);
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar9,fVar13,lVar7,0);
        puVar3 = PTR_DAT_04cab1e8;
        if ((*(char *)(param_1 + 0x40) == '\0') && (*(float *)(param_1 + 0x38) <= fVar13)) {
          *(undefined1 *)(param_1 + 0x40) = 1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb17b0,0);
        }
        if (1.0 <= fVar14) goto LAB_022f7b54;
      }
    }
  }
  if ((*(char *)(param_1 + 0x3e) == '\0') && (1.0 <= *(float *)(param_1 + 0x48))) {
    *(undefined1 *)(param_1 + 0x3e) = 1;
    if (lVar8 == 0) goto LAB_022f7b6c;
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(lVar8 + 0xb8),1);
    if (*(int *)(*(long *)PTR_DAT_04cab230 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Haptics__Vibrate_214dd74(*(undefined8 *)PTR_DAT_04cb17a8,0);
  }
  if (*(char *)(param_1 + 0x3f) == '\0') {
    if (1.5 <= *(float *)(param_1 + 0x48)) {
      *(undefined1 *)(param_1 + 0x3f) = 1;
      if (lVar8 == 0) goto LAB_022f7b6c;
      Dino_BusSand_App_UI_YachtRacingTrackRow__PlayFinishFlagAnim_21f6d20(lVar8);
      bVar6 = *(byte *)(param_1 + 0x3f);
    }
    else {
      bVar6 = 0;
    }
  }
  else {
    bVar6 = 1;
  }
  if ((*(byte *)(param_1 + 0x3e) & *(byte *)(param_1 + 0x3d) & bVar6) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 200) = 0;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 200),0);
    return 0;
  }
LAB_022f7b6c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

