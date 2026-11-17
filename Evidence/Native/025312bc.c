/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$RewardedFromPackage
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_DinoAdProvider__RewardedFromPackage (Dino_Common_IAdService_o* s, System_String_o* placement, int32_t rewards0, int32_t displays0, Dino_BusSand_Sdk_DinoAdProvider_Show_o* show, Cysharp_Threading_Tasks_UniTaskCompletionSource_ValueTuple_bool__string___o* answer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$RewardedFromPackage
   Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_DinoAdProvider__RewardedFromPackage
   (Dino_Common_IAdService_o* s, System_String_o* placement, int32_t rewards0, int32_t displays0,
   Dino_BusSand_Sdk_DinoAdProvider_Show_o* show,
   Cysharp_Threading_Tasks_UniTaskCompletionSource_ValueTuple_bool__string___o* answer, const
   MethodInfo* method); */

undefined8
Dino_BusSand_Sdk_DinoAdProvider__RewardedFromPackage_24312bc
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined4 auStack_100 [2];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 auStack_d0 [16];
  
  puVar1 = PTR_DAT_04cbf040;
  if ((bRam0000000004f9cc1c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf040);
    bRam0000000004f9cc1c = 1;
  }
  func_0x049b52e0(auStack_100,0,0xb0);
  thunk_FUN_02134474(auStack_f8,0);
  uStack_f0 = param_1;
  thunk_FUN_02134474(&uStack_f0,param_1);
  uStack_e8 = param_2;
  thunk_FUN_02134474(&uStack_e8,param_2);
  uStack_e0 = param_5;
  uStack_d8 = param_3;
  uStack_d4 = param_4;
  thunk_FUN_02134474(&uStack_e0,param_5);
  auStack_d0[0] = param_6;
  thunk_FUN_02134474(auStack_d0,param_6);
  auStack_100[0] = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_DinoAdProvider__RewardedFromPackage_d__26__26afb24
            (auStack_f8,auStack_100,*(undefined8 *)puVar1);
  return 0;
}

