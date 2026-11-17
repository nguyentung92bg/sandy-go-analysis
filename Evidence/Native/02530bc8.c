/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$ShowInterstitialAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync (System_String_o* slot, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$ShowInterstitialAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync
   (System_String_o* slot, System_Action_bool__o* done, const MethodInfo* method); */

undefined8
Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync_2430bc8
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_04cbefe8;
  if ((bRam0000000004f9cc1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbefe8);
    bRam0000000004f9cc1d = 1;
  }
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_02134474((ulong)&uStack_80 | 8,0);
  uStack_70 = param_1;
  thunk_FUN_02134474(&uStack_70,param_1);
  uStack_68 = param_2;
  thunk_FUN_02134474(&uStack_68,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_DinoAdProvider__ShowInterstitialAsync_d__27__26afb5c
            ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  return 0;
}

