/* IL2CPP: Dino.Tracking.ServerTrackingCore.PendingEvent$$.ctor
void Dino_Tracking_ServerTrackingCore_PendingEvent___ctor (Dino_Tracking_ServerTrackingCore_PendingEvent_o __this, System_String_o* name, int64_t ts, Dino_Common_DinoTrackingParameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore.PendingEvent$$.ctor
   void Dino_Tracking_ServerTrackingCore_PendingEvent___ctor
   (Dino_Tracking_ServerTrackingCore_PendingEvent_o __this, System_String_o* name, int64_t ts,
   Dino_Common_DinoTrackingParameter_array* parameters, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore_PendingEvent___ctor_2460f80
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  thunk_FUN_02134474();
  puVar1 = param_1 + 2;
  *puVar1 = param_4;
  param_1[1] = param_3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

