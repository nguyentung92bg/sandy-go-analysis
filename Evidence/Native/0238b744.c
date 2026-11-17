/* IL2CPP: Dino.BusSand.App.UI.UiKit$$BalanceLines
void Dino_BusSand_App_UI_UiKit__BalanceLines (TMPro_TMP_Text_o* t, float minShare, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$BalanceLines
   void Dino_BusSand_App_UI_UiKit__BalanceLines (TMPro_TMP_Text_o* t, float minShare, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit__BalanceLines_228b744(float param_1,float param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar10;
  long *plVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c182 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5198);
    FUN_02132f7c(PTR_DAT_04cb51a0);
    bRam0000000004f9c182 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if ((param_3 == (long *)0x0) ||
     (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_3,0), lVar5 == 0)) {
LAB_0238ba9c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar5,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Application__get_isEditor_43543ec(0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar7 = UnityEngine_Object__get_name_43c71a4(param_3,0);
    uVar7 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cb5198,uVar7,*(undefined8 *)PTR_DAT_04cb51a0,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    puVar2 = PTR_DAT_04ca9af8;
    uVar9 = 0;
    if ((bRam0000000004fa626c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9af8,0);
      FUN_02132f7c(PTR_DAT_04ce7050);
      bRam0000000004fa626c = 1;
      uVar9 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar9 = extraout_x1_00;
    }
    if (cRam0000000004f9d848 == '\0') {
      FUN_02132f7c(PTR_DAT_04ca9af8,uVar9);
      cRam0000000004f9d848 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    plVar11 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ce7050) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_04457b18;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar8)(plVar11,2,uVar7,puVar8[1]);
    return;
  }
  lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(param_3,0);
  if (lVar5 == 0) goto LAB_0238ba9c;
  fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar5,0);
  fVar14 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
  (**(code **)(*param_3 + 0x788))(param_3,0,0,*(undefined8 *)(*param_3 + 0x790));
  lVar6 = TMPro_TMP_Text__get_textInfo_42cd550(param_3,0);
  if (lVar6 == 0) goto LAB_0238ba9c;
  iVar1 = *(int *)(lVar6 + 0x2c);
  if (iVar1 < 2) {
    return;
  }
  if (fVar13 <= 0.0) {
    return;
  }
  fVar16 = *(float *)((long)param_3 + 0x20c);
  param_1 = fVar13 * param_1;
  iVar12 = 8;
  fVar15 = fVar13;
  do {
    fVar17 = (fVar15 + param_1) * 0.5;
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar5,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar17,lVar5,0);
    (**(code **)(*param_3 + 0x788))(param_3,0,0,*(undefined8 *)(*param_3 + 0x790));
    lVar6 = TMPro_TMP_Text__get_textInfo_42cd550(param_3,0);
    if (lVar6 == 0) goto LAB_0238ba9c;
    fVar3 = fVar17;
    if ((*(int *)(lVar6 + 0x2c) == iVar1) && (fVar16 + -0.5 <= *(float *)((long)param_3 + 0x20c))) {
      fVar3 = param_1;
      fVar15 = fVar17;
    }
    param_1 = fVar3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar5,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70((float)(int)fVar15 + 2.0,lVar5,0);
  fVar15 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar5,0);
  if (*(int *)((long)param_3 + 0x294) == 4) {
    fVar16 = (float)UnityEngine_RectTransform__get_pivot_43cfb30(lVar5,0);
    param_2 = param_2 + 0.0;
    fVar14 = fVar14 + (fVar13 - fVar15) * (1.0 - fVar16);
  }
  else {
    if (*(int *)((long)param_3 + 0x294) != 1) goto LAB_0238ba64;
    fVar16 = (float)UnityEngine_RectTransform__get_pivot_43cfb30(lVar5,0);
    fVar14 = fVar14 - (fVar13 - fVar15) * fVar16;
  }
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar14,param_2,lVar5,0);
LAB_0238ba64:
                    /* WARNING: Could not recover jumptable at 0x0238ba98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x788))(param_3,0,0,*(undefined8 *)(*param_3 + 0x790));
  return;
}

