/* IL2CPP: Dino.Tracking.TrackingEventLevelEnd$$SetResult
Dino_Tracking_TrackingEventLevelEnd_o* Dino_Tracking_TrackingEventLevelEnd__SetResult (Dino_Tracking_TrackingEventLevelEnd_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLevelEnd$$SetResult
   Dino_Tracking_TrackingEventLevelEnd_o* Dino_Tracking_TrackingEventLevelEnd__SetResult
   (Dino_Tracking_TrackingEventLevelEnd_o* __this, int32_t value, const MethodInfo* method); */

long Dino_Tracking_TrackingEventLevelEnd__SetResult_2479228(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cc19c8;
  if ((bRam0000000004f9cefe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc19c8);
    bRam0000000004f9cefe = 1;
  }
  uStack_28 = 0;
  System_Nullable_Int32Enum____ctor_2bcbf5c(&uStack_28,param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x88) = uStack_28;
  return param_1;
}

