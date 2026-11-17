/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$Tick
bool Dino_Tracking_ServerTrackingProvider__Tick (Dino_Tracking_ServerTrackingProvider_o* __this, float deltaSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$Tick
   bool Dino_Tracking_ServerTrackingProvider__Tick (Dino_Tracking_ServerTrackingProvider_o* __this,
   float deltaSeconds, const MethodInfo* method); */

bool Dino_Tracking_ServerTrackingProvider__Tick_2462ffc(float param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    return false;
  }
  if (*(char *)(lVar1 + 0x4c) != '\0') {
    return true;
  }
  param_1 = *(float *)(lVar1 + 0x48) + param_1;
  *(float *)(lVar1 + 0x48) = param_1;
  return *(float *)(lVar1 + 0x14) <= param_1;
}

