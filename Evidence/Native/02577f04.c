/* IL2CPP: Dino.Tracking.TrackingEventAdImpression$$.ctor
void Dino_Tracking_TrackingEventAdImpression___ctor (Dino_Tracking_TrackingEventAdImpression_o* __this, System_String_o* adFormat, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdImpression$$.ctor
   void Dino_Tracking_TrackingEventAdImpression___ctor (Dino_Tracking_TrackingEventAdImpression_o*
   __this, System_String_o* adFormat, System_String_o* placement, const MethodInfo* method); */

void Dino_Tracking_TrackingEventAdImpression___ctor_2477f04
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1940;
  if ((bRam0000000004f9cee6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1940);
    bRam0000000004f9cee6 = 1;
  }
                    /* try { // try from 02577f4c to 02677f67 has its CatchHandler @ 02577fc4 */
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,param_3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_2);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  *puVar2 = param_3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

