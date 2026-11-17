/* IL2CPP: Dino.Tracking.TrackingEventLoadingStart$$.ctor
void Dino_Tracking_TrackingEventLoadingStart___ctor (Dino_Tracking_TrackingEventLoadingStart_o* __this, System_String_o* dataSource, System_String_o* resourceType, System_String_o* loadContext, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLoadingStart$$.ctor
   void Dino_Tracking_TrackingEventLoadingStart___ctor (Dino_Tracking_TrackingEventLoadingStart_o*
   __this, System_String_o* dataSource, System_String_o* resourceType, System_String_o* loadContext,
   const MethodInfo* method); */

void Dino_Tracking_TrackingEventLoadingStart___ctor_247aff8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 0257aff8 to 0267affb has its CatchHandler @ 0257b0ec */
  puVar1 = PTR_DAT_04cc1bc0;
                    /* try { // try from 0257affc to 0267afff has its CatchHandler @ 0257b0e8 */
                    /* try { // try from 0257b000 to 0267b003 has its CatchHandler @ 0257b0e4 */
                    /* try { // try from 0257b004 to 0267b007 has its CatchHandler @ 0257b088 */
                    /* try { // try from 0257b008 to 0267b00b has its CatchHandler @ 0257b07c */
                    /* try { // try from 0257b00c to 0267b00f has its CatchHandler @ 0257b118 */
                    /* try { // try from 0257b010 to 0267b017 has its CatchHandler @ 0257b110 */
                    /* try { // try from 0257b018 to 0267b01b has its CatchHandler @ 0257b09c */
                    /* try { // try from 0257b01c to 0267b01f has its CatchHandler @ 0257b078 */
                    /* catch() { ... } // from try @ 0257aaf4 with catch @ 0257b020 */
                    /* try { // try from 0257b028 to 0267b02f has its CatchHandler @ 0257b394 */
  if ((bRam0000000004f9cf33 & 1) == 0) {
                    /* try { // try from 0257b030 to 0267b04b has its CatchHandler @ 0257a450 */
    FUN_02132f7c(PTR_DAT_04cc1bc0);
    bRam0000000004f9cf33 = 1;
  }
                    /* try { // try from 0257b04c to 0267b04f has its CatchHandler @ 0257b058 */
                    /* catch() { ... } // from try @ 0257b04c with catch @ 0257b058 */
                    /* try { // try from 0257b05c to 0267b063 has its CatchHandler @ 0257b394 */
                    /* try { // try from 0257b064 to 0267b0bf has its CatchHandler @ 0257a450 */
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,param_3,param_4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),param_3);
  puVar2 = (undefined8 *)(param_1 + 0x28);
  *puVar2 = param_4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

