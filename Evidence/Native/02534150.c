/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$AnnounceLater
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater (System_Action_o* onDataUpdated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$AnnounceLater
   Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater
   (System_Action_o* onDataUpdated, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_2434150(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_04cbf1c0;
  if ((bRam0000000004f9cc36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf1c0);
    bRam0000000004f9cc36 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_02134474((ulong)&uStack_50 | 8,0);
  uStack_40 = param_1;
  thunk_FUN_02134474(&uStack_40,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_SandBusAdConfig__AnnounceLater_d__5__26afcac
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  return 0;
}

