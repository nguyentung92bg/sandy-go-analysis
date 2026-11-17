/* IL2CPP: Dino.Tracking.TrackingEventScreenShow$$.ctor
void Dino_Tracking_TrackingEventScreenShow___ctor (Dino_Tracking_TrackingEventScreenShow_o* __this, System_String_o* screenName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventScreenShow$$.ctor
   void Dino_Tracking_TrackingEventScreenShow___ctor (Dino_Tracking_TrackingEventScreenShow_o*
   __this, System_String_o* screenName, const MethodInfo* method); */

void Dino_Tracking_TrackingEventScreenShow___ctor_247a624(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* try { // try from 0257a62c to 0267a633 has its CatchHandler @ 0257aa4c */
  Dino_Common_TrackingScriptBase___ctor_2447ec8(param_1,0);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_2;
                    /* try { // try from 0257a650 to 0267a653 has its CatchHandler @ 0257aa48 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

