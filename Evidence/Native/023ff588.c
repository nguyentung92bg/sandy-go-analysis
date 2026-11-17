/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<WinRewardCountUp>d__32$$MoveNext
bool Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_d__32__MoveNext (Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_d__32_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<WinRewardCountUp>d__32$$MoveNext
   bool Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_d__32__MoveNext
   (Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_d__32_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_MainHudPanel__WinRewardCountUp_d__32__MoveNext_22ff588(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  if ((bRam0000000004f9c4ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb5e58);
    FUN_02132f7c(PTR_DAT_04cb7b40);
    bRam0000000004f9c4ca = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_023ff91c;
    goto LAB_023ff7d8;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  puVar3 = PTR_DAT_04cabaf8;
  if (lVar7 == 0) {
LAB_023ff91c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined1 *)(lVar7 + 0x58) = 1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
  }
  uVar5 = System_Math__Max_4830fd4(0,lVar4 - iVar1,0);
  Dino_BusSand_App_UI_MainHudPanel__SetCoins_22fbad4(lVar7,uVar5);
  puVar3 = PTR_DAT_04caba50;
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  lVar4 = 0;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_023ff91c;
    lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x30);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar6 & 1) == 0) {
LAB_023ff7a4:
    fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    fVar8 = fVar8 + _UNK_00e20b1c;
  }
  else {
    if (lVar4 == 0) goto LAB_023ff91c;
    fVar8 = *(float *)(lVar4 + 0x28);
    if (fVar8 <= 0.0) goto LAB_023ff7a4;
  }
  *(float *)(param_1 + 0x2c) = fVar8 + _UNK_00e20170;
LAB_023ff7d8:
  if (*(char *)(lVar7 + 0x58) != '\0') {
    fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    puVar3 = PTR_DAT_04cab1e8;
    if (fVar8 < *(float *)(param_1 + 0x2c)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(char *)(lVar7 + 0x58) != '\0') {
      *(undefined1 *)(lVar7 + 0x58) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb5e58,0);
      uVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,*(undefined8 *)PTR_DAT_04cb7b40,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_UI_MainHudPanel__Punch_22fca68(_UNK_00e2038c,_UNK_00e20754,uVar5);
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar7,uVar5,0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
      Dino_BusSand_App_UI_MainHudPanel__AnimateCoins_22fc75c(lVar7,uVar5);
    }
  }
  return 0;
}

