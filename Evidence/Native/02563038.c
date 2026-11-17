/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$SendBatchAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_Tracking_ServerTrackingProvider__SendBatchAsync (Dino_Tracking_ServerTrackingProvider_o* __this, System_String_o* baseUrl, System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$SendBatchAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Dino_Tracking_ServerTrackingProvider__SendBatchAsync
   (Dino_Tracking_ServerTrackingProvider_o* __this, System_String_o* baseUrl, System_String_o* json,
   const MethodInfo* method); */

undefined8
Dino_Tracking_ServerTrackingProvider__SendBatchAsync_2463038
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cc0ab0;
  if ((bRam0000000004f9ce3b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0ab0);
    bRam0000000004f9ce3b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_02134474((ulong)&uStack_70 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_02134474(&uStack_50,param_1);
  uStack_60 = param_2;
  thunk_FUN_02134474(&uStack_60,param_2);
  uStack_58 = param_3;
  thunk_FUN_02134474(&uStack_58,param_3);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_ServerTrackingProvider__SendBatchAsync_d__32__26afdc4
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

