/* IL2CPP: Dino.Tracking.TrackingEventLoadingFinish$$.ctor
void Dino_Tracking_TrackingEventLoadingFinish___ctor (Dino_Tracking_TrackingEventLoadingFinish_o* __this, System_String_o* dataSource, System_String_o* resourceType, System_String_o* loadContext, System_String_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLoadingFinish$$.ctor
   void Dino_Tracking_TrackingEventLoadingFinish___ctor (Dino_Tracking_TrackingEventLoadingFinish_o*
   __this, System_String_o* dataSource, System_String_o* resourceType, System_String_o* loadContext,
   System_String_o* result, const MethodInfo* method); */

void Dino_Tracking_TrackingEventLoadingFinish___ctor_247aea8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1ba8;
                    /* try { // try from 0257aeb0 to 0267aeb3 has its CatchHandler @ 0257b084 */
                    /* try { // try from 0257aeb4 to 0267aebb has its CatchHandler @ 0257b080 */
                    /* try { // try from 0257aecc to 0267aedf has its CatchHandler @ 0257b0e0 */
  if ((bRam0000000004f9cf30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1ba8);
                    /* try { // try from 0257aef0 to 0267af1b has its CatchHandler @ 0257b118 */
    bRam0000000004f9cf30 = 1;
  }
  Dino_Tracking_TrackingEventLoadingBase_object____ctor_2f9adfc
            (param_1,param_2,param_3,param_4,*(undefined8 *)puVar1);
  puVar2 = (undefined8 *)(param_1 + 0x48);
  *puVar2 = param_5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

