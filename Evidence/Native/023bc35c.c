/* IL2CPP: Dino.BusSand.App.UI.LoadingPanel$$Update
void Dino_BusSand_App_UI_LoadingPanel__Update (Dino_BusSand_App_UI_LoadingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LoadingPanel$$Update
   void Dino_BusSand_App_UI_LoadingPanel__Update (Dino_BusSand_App_UI_LoadingPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_LoadingPanel__Update_22bc35c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000004f9c310 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6538);
    FUN_02132f7c(PTR_DAT_04cb6540);
    bRam0000000004f9c310 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  fVar13 = *(float *)(param_1 + 0x54);
  fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar10 = _UNK_00e2094c;
  fVar13 = fVar13 + fVar9;
  fVar12 = fVar13 / 2.5;
  *(float *)(param_1 + 0x54) = fVar13;
  fVar9 = 1.0;
  if (fVar12 <= 1.0) {
    fVar9 = fVar12;
  }
  fVar13 = 0.0;
  if (0.0 <= fVar12) {
    fVar13 = fVar9;
  }
  if (fVar10 <= fVar13) {
    if (_UNK_00e20094 <= fVar13) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar10 = (float)Dino_BusSand_App_UI_UiMotion__InQuad_228fdd0
                                ((fVar13 + _UNK_00e201f8) / _UNK_00e2098c,0);
      fVar10 = fVar10 * _UNK_00e204f0;
      fVar9 = _UNK_00e207e8;
    }
    else {
      fVar10 = (fVar13 + _UNK_00e2044c) * _UNK_00e2098c;
      fVar9 = _UNK_00e208e8;
    }
    fVar10 = fVar10 + fVar9;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar10 = (float)Dino_BusSand_App_UI_UiMotion__OutCubic_2287f20(fVar13 / fVar10,0);
    fVar10 = fVar10 * _UNK_00e208e8;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  fVar9 = *(float *)(param_1 + 0x58);
  if (0.0 <= fVar9) {
    fVar12 = *(float *)(param_1 + 0x5c);
    fVar13 = (float)expf((*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x60)) / _UNK_00e201f8);
    fVar9 = fVar9 + (fVar12 - fVar9) * _UNK_00e20180 * (1.0 - fVar13);
    if (fVar9 <= fVar10) {
      fVar10 = fVar9;
    }
  }
  fVar9 = *(float *)(param_1 + 0x50);
  fVar13 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar12 = (float)expf(fVar13 * -8.0);
  fVar12 = 1.0 - fVar12;
  fVar13 = 1.0;
  if (fVar12 <= 1.0) {
    fVar13 = fVar12;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar12) {
    fVar11 = fVar13;
  }
  fVar10 = fVar9 + (fVar10 - fVar9) * fVar11;
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  *(float *)(param_1 + 0x50) = fVar9;
  Dino_BusSand_App_UI_LoadingPanel__SetProgress_22bc290(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = System_String__EndsWith_46d07b4
                      (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb6540,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      plVar7 = *(long **)(param_1 + 0x40);
      fVar9 = *(float *)(param_1 + 0x54) * 3.0;
      iVar6 = -1;
      if (fVar9 != INFINITY) {
        iVar6 = (int)fVar9 % 3 + 1;
      }
      uVar8 = System_String__Substring_46d4848(lVar3,0,*(int *)(lVar3 + 0x10) + -3,0);
      uVar4 = System_String__CreateString_46d8c58(0,0x2e,iVar6,0);
      uVar5 = System_String__CreateString_46d8c58(0,0x2e,3 - iVar6,0);
      uVar8 = System_String__Concat_46d30e8(uVar8,uVar4,*(undefined8 *)PTR_DAT_04cb6538,uVar5,0);
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023bc684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x518))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x520));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

