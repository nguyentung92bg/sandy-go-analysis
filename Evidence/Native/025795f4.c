/* IL2CPP: Dino.Tracking.TrackingEventLevelReopen$$.ctor
void Dino_Tracking_TrackingEventLevelReopen___ctor (Dino_Tracking_TrackingEventLevelReopen_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLevelReopen$$.ctor
   void Dino_Tracking_TrackingEventLevelReopen___ctor (Dino_Tracking_TrackingEventLevelReopen_o*
   __this, int32_t level, const MethodInfo* method); */

void Dino_Tracking_TrackingEventLevelReopen___ctor_24795f4(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cc19f8;
  if ((bRam0000000004f9cf04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc19f8);
    bRam0000000004f9cf04 = 1;
  }
                    /* try { // try from 02579630 to 0267978f has its CatchHandler @ 02579630
                       catch() { ... } // from try @ 02579630 with catch @ 02579630
                       catch() { ... } // from try @ 025797e0 with catch @ 02579630
                       catch() { ... } // from try @ 02579858 with catch @ 02579630
                       catch() { ... } // from try @ 02579894 with catch @ 02579630
                       catch() { ... } // from try @ 025799c4 with catch @ 02579630 */
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,*(undefined8 *)puVar1);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

