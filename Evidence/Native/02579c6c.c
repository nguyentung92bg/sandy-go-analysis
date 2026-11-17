/* IL2CPP: Dino.Tracking.TrackingEventFeatureFirstShow$$.ctor
void Dino_Tracking_TrackingEventFeatureFirstShow___ctor (Dino_Tracking_TrackingEventFeatureFirstShow_o* __this, System_String_o* featureName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventFeatureFirstShow$$.ctor
   void Dino_Tracking_TrackingEventFeatureFirstShow___ctor
   (Dino_Tracking_TrackingEventFeatureFirstShow_o* __this, System_String_o* featureName, const
   MethodInfo* method); */

void Dino_Tracking_TrackingEventFeatureFirstShow___ctor_2479c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1ab0;
  if ((bRam0000000004f9cf13 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1ab0);
                    /* try { // try from 02579ca0 to 02679ca3 has its CatchHandler @ 0257a1e0 */
                    /* try { // try from 02579ca4 to 02679cbf has its CatchHandler @ 0257a278 */
    bRam0000000004f9cf13 = 1;
  }
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,*(undefined8 *)puVar1);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  *puVar2 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

