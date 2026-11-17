/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate$$Run
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_SandBusUpdateGate__Run (System_Action_AppUpdate_Result__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate$$Run
   Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_SandBusUpdateGate__Run
   (System_Action_AppUpdate_Result__o* done, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SandBusUpdateGate__Run_243d40c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cbf5d8;
  if ((bRam0000000004f9cc84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf5d8);
    bRam0000000004f9cc84 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  thunk_FUN_02134474((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_02134474(&uStack_50,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_SandBusUpdateGate__Run_d__1__26afd54
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

