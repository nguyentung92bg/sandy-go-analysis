/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdImpression
void Dino_Tracking_DinoEventTracking__TrackAdImpression (System_String_o* adFormat, System_String_o* placement, Dino_Tracking_AdImpressionOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdImpression
   void Dino_Tracking_DinoEventTracking__TrackAdImpression (System_String_o* adFormat,
   System_String_o* placement, Dino_Tracking_AdImpressionOptions_o* options,
   Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackAdImpression_247bc94
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_38;
  
                    /* try { // try from 0257bca0 to 0267bca3 has its CatchHandler @ 0257bd74 */
                    /* try { // try from 0257bcac to 0267bcb7 has its CatchHandler @ 0257bd7c */
  if ((bRam0000000004f9cf42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1c38);
    FUN_02132f7c(PTR_DAT_04cc1c40);
    FUN_02132f7c(PTR_DAT_04cc1c48);
                    /* try { // try from 0257bce4 to 0267bce7 has its CatchHandler @ 0257bd9c */
                    /* try { // try from 0257bce8 to 0267bd53 has its CatchHandler @ 0257b9e0 */
    FUN_02132f7c(PTR_DAT_04cc1c50);
    FUN_02132f7c(PTR_DAT_04cc1c58);
    bRam0000000004f9cf42 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1c58);
  Dino_Tracking_TrackingEventAdImpression___ctor_2477f04(lVar3,param_1,param_2);
                    /* try { // try from 0257bd54 to 0267bd57 has its CatchHandler @ 0257bda8 */
                    /* try { // try from 0257bd58 to 0267bd5b has its CatchHandler @ 0257bda4 */
                    /* try { // try from 0257bd5c to 0267bd5f has its CatchHandler @ 0257bd8c */
                    /* try { // try from 0257bd60 to 0267bd63 has its CatchHandler @ 0257bd88 */
                    /* try { // try from 0257bd64 to 0267bd67 has its CatchHandler @ 0257bd84 */
                    /* try { // try from 0257bd68 to 0267bd6b has its CatchHandler @ 0257bd80 */
                    /* try { // try from 0257bd6c to 0267bdc3 has its CatchHandler @ 0257b9e0 */
                    /* catch() { ... } // from try @ 0257bc64 with catch @ 0257bd70 */
                    /* catch() { ... } // from try @ 0257bca0 with catch @ 0257bd74 */
                    /* catch() { ... } // from try @ 0257bc84 with catch @ 0257bd78 */
                    /* catch() { ... } // from try @ 0257bcac with catch @ 0257bd7c */
                    /* catch() { ... } // from try @ 0257bd68 with catch @ 0257bd80 */
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdPlatform_2f99718
                          (lVar3,*param_3,*(undefined8 *)PTR_DAT_04cc1c48), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdNetwork_2f9977c
                         (lVar3,param_3[1],*(undefined8 *)PTR_DAT_04cc1c40), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId_2f997e0
                        (lVar3,param_3[2],*(undefined8 *)PTR_DAT_04cc1c50), lVar3 != 0)) {
                    /* catch() { ... } // from try @ 0257bd64 with catch @ 0257bd84 */
    uVar7 = param_3[3];
                    /* catch() { ... } // from try @ 0257bd60 with catch @ 0257bd88 */
                    /* catch() { ... } // from try @ 0257bd5c with catch @ 0257bd8c */
    *(undefined8 *)(lVar3 + 0x48) = param_3[4];
    *(undefined8 *)(lVar3 + 0x40) = uVar7;
                    /* catch() { ... } // from try @ 0257bbe0 with catch @ 0257bd90 */
                    /* catch() { ... } // from try @ 0257bbf8 with catch @ 0257bd94 */
    *(undefined2 *)(lVar3 + 0x50) = *(undefined2 *)(param_3 + 5);
                    /* catch() { ... } // from try @ 0257bbd0 with catch @ 0257bd98 */
                    /* catch() { ... } // from try @ 0257bce4 with catch @ 0257bd9c */
    *(undefined8 *)(lVar3 + 0x54) = *(undefined8 *)((long)param_3 + 0x2c);
                    /* catch() { ... } // from try @ 0257bc38 with catch @ 0257bda0 */
                    /* catch() { ... } // from try @ 0257bd58 with catch @ 0257bda4 */
    *(undefined8 *)(lVar3 + 0x60) = param_3[7];
                    /* catch() { ... } // from try @ 0257bd54 with catch @ 0257bda8 */
    thunk_FUN_02134474();
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
                    /* try { // try from 0257bdc4 to 0267bdc7 has its CatchHandler @ 0257bde8 */
                    /* try { // try from 0257bdc8 to 0267bdeb has its CatchHandler @ 0257b9e0 */
      lVar4 = *plStack_38;
      lVar6 = *(long *)PTR_DAT_04cc1c38;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 0257bdc4 with catch @ 0257bde8 */
                    /* try { // try from 0257bdec to 0267bdf3 has its CatchHandler @ 0257bdfc */
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257be1c;
          }
                    /* try { // try from 0257bdf4 to 0267bdff has its CatchHandler @ 0257b9e0 */
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 0257bdec with catch @ 0257bdfc */
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257be1c:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

