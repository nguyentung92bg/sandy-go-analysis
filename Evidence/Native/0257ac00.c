/* IL2CPP: Dino.Tracking.TrackingEventResourceSpend$$.ctor
void Dino_Tracking_TrackingEventResourceSpend___ctor (Dino_Tracking_TrackingEventResourceSpend_o* __this, int32_t resourceType, System_String_o* resourceName, int64_t resourceAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventResourceSpend$$.ctor
   void Dino_Tracking_TrackingEventResourceSpend___ctor (Dino_Tracking_TrackingEventResourceSpend_o*
   __this, int32_t resourceType, System_String_o* resourceName, int64_t resourceAmount, const
   MethodInfo* method); */

void Dino_Tracking_TrackingEventResourceSpend___ctor_247ac00
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cc1b80;
                    /* try { // try from 0257ac20 to 0267ac23 has its CatchHandler @ 0257b070 */
                    /* try { // try from 0257ac24 to 0267ac3f has its CatchHandler @ 0257b358 */
  if ((bRam0000000004f9cf2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1b80);
    bRam0000000004f9cf2d = 1;
  }
                    /* try { // try from 0257ac54 to 0267ac57 has its CatchHandler @ 0257b10c */
                    /* try { // try from 0257ac6c to 0267ac73 has its CatchHandler @ 0257b108 */
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,param_3,param_4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  return;
}

