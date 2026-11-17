/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<HeartTimer>d__37$$MoveNext
bool Dino_BusSand_App_UI_MainHudPanel__HeartTimer_d__37__MoveNext (Dino_BusSand_App_UI_MainHudPanel__HeartTimer_d__37_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<HeartTimer>d__37$$MoveNext
   bool Dino_BusSand_App_UI_MainHudPanel__HeartTimer_d__37__MoveNext
   (Dino_BusSand_App_UI_MainHudPanel__HeartTimer_d__37_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MainHudPanel__HeartTimer_d__37__MoveNext_22ff1c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  if ((bRam0000000004f9c4c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c4c8 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  puVar1 = PTR_DAT_04cabaf8;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar3 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
      iVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
      uVar7 = (iVar3 < iVar4 ^ 0xffffffff) & 1;
    }
    else {
      uVar7 = 2;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (uVar7 == *(uint *)(lVar8 + 0x70)) {
      Dino_BusSand_App_UI_MainHudPanel__RefreshHeartTime_22fcbd8();
    }
    else {
      Dino_BusSand_App_UI_MainHudPanel__RefreshHearts_22fbc98(lVar8);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar5,0);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

