/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelExit
void Dino_Tracking_DinoEventTracking__TrackLevelExit (int32_t level, Dino_Tracking_LevelExitOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelExit
   void Dino_Tracking_DinoEventTracking__TrackLevelExit (int32_t level,
   Dino_Tracking_LevelExitOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackLevelExit_247d37c
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
                    /* catch() { ... } // from try @ 0257d374 with catch @ 0257d398 */
                    /* try { // try from 0257d39c to 0267d3a3 has its CatchHandler @ 0257d3ac */
  if ((bRam0000000004f9cf53 & 1) == 0) {
                    /* try { // try from 0257d3a4 to 0267d3af has its CatchHandler @ 0257d214 */
    FUN_02132f7c(PTR_DAT_04cc1e10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0257d39c with catch @ 0257d3ac
                        */
                    /* try { // try from 0257d3b0 to 0267d493 has its CatchHandler @ 0257d3b0
                       catch() { ... } // from try @ 0257d3b0 with catch @ 0257d3b0
                       catch() { ... } // from try @ 0257d4e4 with catch @ 0257d3b0
                       catch() { ... } // from try @ 0257d5a8 with catch @ 0257d3b0
                       catch() { ... } // from try @ 0257d5e0 with catch @ 0257d3b0
                       catch() { ... } // from try @ 0257d604 with catch @ 0257d3b0 */
    FUN_02132f7c(PTR_DAT_04cc1e18);
    FUN_02132f7c(PTR_DAT_04cc1e20);
    FUN_02132f7c(PTR_DAT_04cc1e28);
    FUN_02132f7c(PTR_DAT_04cc1e30);
    FUN_02132f7c(PTR_DAT_04cc1e38);
    FUN_02132f7c(PTR_DAT_04cc1e40);
    FUN_02132f7c(PTR_DAT_04cc1e48);
    FUN_02132f7c(PTR_DAT_04cc1e50);
    bRam0000000004f9cf53 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1e18);
  Dino_Tracking_TrackingEventLevelExit___ctor_2479370(lVar3,param_1);
                    /* try { // try from 0257d494 to 0267d49b has its CatchHandler @ 0257d5c0 */
                    /* try { // try from 0257d4b0 to 0267d4b3 has its CatchHandler @ 0257d5ac */
                    /* try { // try from 0257d4b4 to 0267d4c3 has its CatchHandler @ 0257d5bc */
                    /* try { // try from 0257d4cc to 0267d4d7 has its CatchHandler @ 0257d5b0 */
                    /* try { // try from 0257d4d8 to 0267d4e3 has its CatchHandler @ 0257d5b4 */
                    /* try { // try from 0257d4e4 to 0267d5a3 has its CatchHandler @ 0257d3b0 */
  if (((((lVar3 != 0) &&
        (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetDurationTotalEnd_2f9a994
                           (lVar3,*param_2,*(undefined8 *)PTR_DAT_04cc1e38), lVar3 != 0)) &&
       (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetDurationRemain_2f9a9f0
                          (lVar3,param_2[1],*(undefined8 *)PTR_DAT_04cc1e30), lVar3 != 0)) &&
      ((lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetDurationPlay_2f9aa4c
                          (lVar3,param_2[2],*(undefined8 *)PTR_DAT_04cc1e28), lVar3 != 0 &&
       (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetProgress_2f9aaa8
                          (lVar3,param_2[3],*(undefined8 *)PTR_DAT_04cc1e50), lVar3 != 0)))) &&
     ((lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetItemsTotal_2f9ab04
                         (lVar3,param_2[4],*(undefined8 *)PTR_DAT_04cc1e48), lVar3 != 0 &&
      ((lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetItemsCleared_2f9ab60
                          (lVar3,param_2[5],*(undefined8 *)PTR_DAT_04cc1e40), lVar3 != 0 &&
       (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetActionSeq_2f9abbc
                          (lVar3,param_2[6],*(undefined8 *)PTR_DAT_04cc1e20), lVar3 != 0)))))) {
    *(undefined8 *)(lVar3 + 0x88) = param_2[7];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar4 = *plStack_28;
      lVar6 = *(long *)PTR_DAT_04cc1e10;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257d568;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257d568:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

