/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$WaitForReady
Cysharp_Threading_Tasks_UniTask_bool__o Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$WaitForReady
   Cysharp_Threading_Tasks_UniTask_bool__o Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady
   (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_24394d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_04cbf3f8;
  if ((bRam0000000004f9cc65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf400);
    FUN_02132f7c(PTR_DAT_04cbf3f8);
    FUN_02132f7c(PTR_DAT_04cbf408);
    bRam0000000004f9cc65 = 1;
  }
  puVar2 = PTR_DAT_04cbf408;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  thunk_FUN_02134474((ulong)&uStack_70 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_02134474(&uStack_50,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_0216b4cc();
  }
  Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_d__10__MoveNext_243aee4(&uStack_70);
  FUN_02541230((ulong)&uStack_70 | 8,*(undefined8 *)puVar2);
  return;
}

