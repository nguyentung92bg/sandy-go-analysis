/* IL2CPP: Dino.Tracking.TrackingService$$Init
void Dino_Tracking_TrackingService__Init (Dino_Tracking_TrackingService_o* __this, Dino_Common_Tracking_ITrackingProvider_o* provider, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$Init
   void Dino_Tracking_TrackingService__Init (Dino_Tracking_TrackingService_o* __this,
   Dino_Common_Tracking_ITrackingProvider_o* provider, const MethodInfo* method); */

void Dino_Tracking_TrackingService__Init_247f708(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

