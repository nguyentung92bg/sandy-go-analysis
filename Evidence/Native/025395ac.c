/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$WaitForDatabuckets
Cysharp_Threading_Tasks_UniTask_bool__o Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$WaitForDatabuckets
   Cysharp_Threading_Tasks_UniTask_bool__o
   Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_24395ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar2 = PTR_DAT_04cbf410;
  if ((bRam0000000004f9cc66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf400);
    FUN_02132f7c(PTR_DAT_04cbf410);
    FUN_02132f7c(PTR_DAT_04cbf408);
    bRam0000000004f9cc66 = 1;
  }
  puVar1 = PTR_DAT_04cbf408;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  thunk_FUN_02134474((ulong)&uStack_50 | 8,0);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
    FUN_0216b4cc();
  }
  Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_d__11__MoveNext_243aba8(&uStack_50);
  FUN_02541230((ulong)&uStack_50 | 8,*(undefined8 *)puVar1);
  return;
}

