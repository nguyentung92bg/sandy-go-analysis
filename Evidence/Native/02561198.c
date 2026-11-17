/* IL2CPP: Dino.Tracking.ServerTrackingCore$$Tick
bool Dino_Tracking_ServerTrackingCore__Tick (Dino_Tracking_ServerTrackingCore_o* __this, float deltaSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$Tick
   bool Dino_Tracking_ServerTrackingCore__Tick (Dino_Tracking_ServerTrackingCore_o* __this, float
   deltaSeconds, const MethodInfo* method); */

bool Dino_Tracking_ServerTrackingCore__Tick_2461198(float param_1,long param_2)

{
  if (*(char *)(param_2 + 0x4c) != '\0') {
    return true;
  }
  param_1 = *(float *)(param_2 + 0x48) + param_1;
  *(float *)(param_2 + 0x48) = param_1;
  return *(float *)(param_2 + 0x14) <= param_1;
}

