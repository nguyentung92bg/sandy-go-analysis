/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<BigWin>d__22$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyalePanel__BigWin_d__22__MoveNext (Dino_BusSand_App_UI_BattleRoyalePanel__BigWin_d__22_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<BigWin>d__22$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyalePanel__BigWin_d__22__MoveNext
   (Dino_BusSand_App_UI_BattleRoyalePanel__BigWin_d__22_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyalePanel__BigWin_d__22__MoveNext_218e694(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float in_s3;
  
  if ((bRam0000000004f9b996 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cadeb8);
    FUN_02132f7c(PTR_DAT_04cadaf8);
    bRam0000000004f9b996 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar10 = *(float *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_0228ea10;
    plVar3 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (lVar6,*(undefined8 *)PTR_DAT_04cadaf8,0);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_04cabdb0;
      plVar7 = plVar3;
      if (*plVar3 != lVar5) {
        plVar7 = (long *)0x0;
      }
      *(long **)(param_1 + 0x30) = plVar7;
      if (*plVar3 != lVar5) {
        plVar3 = (long *)0x0;
      }
    }
    plVar7 = (long *)(param_1 + 0x30);
    thunk_FUN_02134474(plVar7,plVar3);
    plVar3 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (lVar6,*(undefined8 *)PTR_DAT_04cadeb8,0);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_04cabdb0;
      plVar1 = plVar3;
      if (*plVar3 != lVar5) {
        plVar1 = (long *)0x0;
      }
      *(long **)(param_1 + 0x38) = plVar1;
      if (*plVar3 != lVar5) {
        plVar3 = (long *)0x0;
      }
    }
    thunk_FUN_02134474((long *)(param_1 + 0x38),plVar3);
    puVar2 = PTR_DAT_04ca9ae8;
    lVar5 = *plVar7;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    uVar11 = 0;
    if ((uVar4 & 1) != 0) {
      if (*plVar7 == 0) goto LAB_0228ea10;
      uVar11 = 0;
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(*plVar7,0);
    }
    lVar5 = *(long *)puVar2;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = uVar11;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    uVar11 = 0;
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 == 0) goto LAB_0228ea10;
      uVar11 = 0;
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
    }
    *(undefined4 *)(param_1 + 0x44) = uVar11;
    *(undefined4 *)(param_1 + 0x48) = 0x44f00000;
    plVar3 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar6,0);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else if (*plVar3 != *(long *)PTR_DAT_04cabdb0) {
      plVar3 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (plVar3 == (long *)0x0) goto LAB_0228ea10;
      UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
      if (0.0 < in_s3) {
        UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
        *(float *)(param_1 + 0x48) = in_s3;
      }
    }
    fVar10 = 0.0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(float *)(param_1 + 0x28) <= fVar10) {
    return 0;
  }
  fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x4c) = fVar10 + fVar9;
  fVar10 = (float)Dino_BusSand_App_UI_BattleRoyaleUi__InBack_219d130
                            ((fVar10 + fVar9) / *(float *)(param_1 + 0x28),0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == 0) goto LAB_0228ea10;
    uVar11 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (uVar11,*(float *)(param_1 + 0x40) + fVar10 * *(float *)(param_1 + 0x48),lVar6,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) {
LAB_0228ea10:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (uVar11,*(float *)(param_1 + 0x44) + fVar10 * *(float *)(param_1 + 0x48),lVar6,0);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

