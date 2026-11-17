/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingTipsPanel.<ArrowBob>d__7$$MoveNext
bool Dino_BusSand_App_UI_PlayerSettingTipsPanel__ArrowBob_d__7__MoveNext (Dino_BusSand_App_UI_PlayerSettingTipsPanel__ArrowBob_d__7_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingTipsPanel.<ArrowBob>d__7$$MoveNext
   bool Dino_BusSand_App_UI_PlayerSettingTipsPanel__ArrowBob_d__7__MoveNext
   (Dino_BusSand_App_UI_PlayerSettingTipsPanel__ArrowBob_d__7_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_PlayerSettingTipsPanel__ArrowBob_d__7__MoveNext_2305488
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f9c4f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4f7 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_02405638;
    UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_3 + 0x20),0);
    *(undefined4 *)(param_3 + 0x2c) = 0;
    *(undefined4 *)(param_3 + 0x28) = param_2;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  fVar8 = *(float *)(param_3 + 0x2c);
  fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar8 = fVar8 + fVar5;
  *(float *)(param_3 + 0x2c) = fVar8;
  if (*(long *)(param_3 + 0x20) != 0) {
    uVar6 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_3 + 0x20),0);
    lVar4 = *(long *)(param_3 + 0x20);
    if (lVar4 != 0) {
      fVar9 = *(float *)(param_3 + 0x28);
      fVar8 = fVar8 - (float)(int)fVar8;
      fVar5 = 1.0;
      if (fVar8 <= 1.0) {
        fVar5 = fVar8;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar5;
      }
      fVar5 = fVar7 + fVar7;
      if (0.5 <= fVar7) {
        fVar5 = 1.0 - (fVar7 + -0.5 + fVar7 + -0.5);
      }
      fVar5 = (float)cosf(fVar5 * _UNK_00e2082c);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (uVar6,fVar9 + (fVar5 + -1.0) * -0.5 * 30.0,lVar4,0);
      *(undefined8 *)(param_3 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),0);
      *(undefined4 *)(param_3 + 0x10) = 1;
      return 1;
    }
  }
LAB_02405638:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

