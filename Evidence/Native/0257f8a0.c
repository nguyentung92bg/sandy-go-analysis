/* IL2CPP: Dino.Tracking.TrackingService$$InitAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_Tracking_TrackingService__InitAsync (Dino_Tracking_TrackingService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$InitAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Dino_Tracking_TrackingService__InitAsync
   (Dino_Tracking_TrackingService_o* __this, const MethodInfo* method); */

undefined8 Dino_Tracking_TrackingService__InitAsync_247f8a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_04cc2210;
  if ((bRam0000000004f9cf93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2210);
    bRam0000000004f9cf93 = 1;
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
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_TrackingService__InitAsync_d__15__26afdfc
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  return 0;
}

