/* IL2CPP: Dino.Tracking.TrackingEventTutorialAction$$.ctor
void Dino_Tracking_TrackingEventTutorialAction___ctor (Dino_Tracking_TrackingEventTutorialAction_o* __this, System_String_o* actionCate, System_String_o* actionName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventTutorialAction$$.ctor
   void Dino_Tracking_TrackingEventTutorialAction___ctor
   (Dino_Tracking_TrackingEventTutorialAction_o* __this, System_String_o* actionCate,
   System_String_o* actionName, const MethodInfo* method); */

void Dino_Tracking_TrackingEventTutorialAction___ctor_247a8c8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* try { // try from 0257a8cc to 0267a8d3 has its CatchHandler @ 0257aa74 */
                    /* try { // try from 0257a8d8 to 0267a8db has its CatchHandler @ 0257a908 */
                    /* try { // try from 0257a8e0 to 0267a8e3 has its CatchHandler @ 0257a910 */
  Dino_Common_TrackingScriptBase___ctor_2447ec8(param_1,0);
                    /* try { // try from 0257a8e8 to 0267a8ef has its CatchHandler @ 0257a954 */
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_2);
                    /* try { // try from 0257a8f4 to 0267a8f7 has its CatchHandler @ 0257a900 */
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_3;
                    /* try { // try from 0257a8f8 to 0267a92f has its CatchHandler @ 0257a450 */
                    /* catch() { ... } // from try @ 0257a818 with catch @ 0257a8fc */
                    /* catch() { ... } // from try @ 0257a8f4 with catch @ 0257a900 */
                    /* catch() { ... } // from try @ 0257a768 with catch @ 0257a904 */
                    /* catch() { ... } // from try @ 0257a8d8 with catch @ 0257a908 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

