/* IL2CPP: Dino.Tracking.TrackingEventButtonClick$$.ctor
void Dino_Tracking_TrackingEventButtonClick___ctor (Dino_Tracking_TrackingEventButtonClick_o* __this, System_String_o* buttonName, System_String_o* screenName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventButtonClick$$.ctor
   void Dino_Tracking_TrackingEventButtonClick___ctor (Dino_Tracking_TrackingEventButtonClick_o*
   __this, System_String_o* buttonName, System_String_o* screenName, const MethodInfo* method); */

void Dino_Tracking_TrackingEventButtonClick___ctor_247a324
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* try { // try from 0257a334 to 0267a337 has its CatchHandler @ 0257a344 */
  Dino_Common_TrackingScriptBase___ctor_2447ec8(param_1,0);
                    /* catch() { ... } // from try @ 0257a334 with catch @ 0257a344 */
                    /* try { // try from 0257a348 to 0267a34f has its CatchHandler @ 0257a358 */
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_2);
                    /* try { // try from 0257a350 to 0267a35b has its CatchHandler @ 025799d0 */
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_3;
                    /* catch() { ... } // from try @ 0257a254 with catch @ 0257a358
                       catch() { ... } // from try @ 0257a2ac with catch @ 0257a358
                       catch() { ... } // from try @ 0257a308 with catch @ 0257a358
                       catch() { ... } // from try @ 0257a348 with catch @ 0257a358 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

