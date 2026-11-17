/* IL2CPP: Dino.Tracking.TrackingEventLevelEnd$$.ctor
void Dino_Tracking_TrackingEventLevelEnd___ctor (Dino_Tracking_TrackingEventLevelEnd_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLevelEnd$$.ctor
   void Dino_Tracking_TrackingEventLevelEnd___ctor (Dino_Tracking_TrackingEventLevelEnd_o* __this,
   int32_t level, const MethodInfo* method); */

void Dino_Tracking_TrackingEventLevelEnd___ctor_24791d0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cc19c0;
  if ((bRam0000000004f9cefd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc19c0);
    bRam0000000004f9cefd = 1;
  }
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,*(undefined8 *)puVar1);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

