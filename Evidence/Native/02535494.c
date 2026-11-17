/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$Refresh
Cysharp_Threading_Tasks_UniTask_o Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$Refresh
   Cysharp_Threading_Tasks_UniTask_o Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh
   (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh_2435494(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cbf290;
  if ((bRam0000000004f9cc44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf290);
    bRam0000000004f9cc44 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_02134474((ulong)&uStack_50 | 8,0);
  uStack_38 = param_1;
  thunk_FUN_02134474(&uStack_38,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_0216b4cc();
  }
  Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh_d__22__MoveNext_24359b0(&uStack_50);
  FUN_0224c748((ulong)&uStack_50 | 8,0);
  return;
}

