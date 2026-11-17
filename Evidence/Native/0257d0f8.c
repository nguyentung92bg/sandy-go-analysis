/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelEnd
void Dino_Tracking_DinoEventTracking__TrackLevelEnd (int32_t level, int32_t result, Dino_Tracking_LevelEndOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelEnd
   void Dino_Tracking_DinoEventTracking__TrackLevelEnd (int32_t level, int32_t result,
   Dino_Tracking_LevelEndOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo*
   method); */

void Dino_Tracking_DinoEventTracking__TrackLevelEnd_247d0f8
               (undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *plStack_38;
  
  if ((bRam0000000004f9cf52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1db8);
    FUN_02132f7c(PTR_DAT_04cc1dc0);
    FUN_02132f7c(PTR_DAT_04cc1dc8);
    FUN_02132f7c(PTR_DAT_04cc1dd0);
    FUN_02132f7c(PTR_DAT_04cc1dd8);
    FUN_02132f7c(PTR_DAT_04cc1de0);
    FUN_02132f7c(PTR_DAT_04cc1de8);
    FUN_02132f7c(PTR_DAT_04cc1df0);
    FUN_02132f7c(PTR_DAT_04cc1df8);
    FUN_02132f7c(PTR_DAT_04cc1e00);
    FUN_02132f7c(PTR_DAT_04cc1e08);
    bRam0000000004f9cf52 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0257d374 to 0267d377 has its CatchHandler @ 0257d398 */
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1dd0);
  Dino_Tracking_TrackingEventLevelEnd___ctor_24791d0(lVar3,param_1);
  if (lVar3 != 0) {
    uVar4 = Dino_Tracking_TrackingEventLevelEnd__SetResult_2479228(lVar3,param_2);
    lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetPlayIndex_2f9a5cc
                      (uVar4,*param_3,*(undefined8 *)PTR_DAT_04cc1dc8);
                    /* try { // try from 0257d214 to 0267d2c7 has its CatchHandler @ 0257d214
                       catch() { ... } // from try @ 0257d214 with catch @ 0257d214
                       catch() { ... } // from try @ 0257d314 with catch @ 0257d214
                       catch() { ... } // from try @ 0257d378 with catch @ 0257d214
                       catch() { ... } // from try @ 0257d3a4 with catch @ 0257d214 */
    if ((((((lVar3 != 0) &&
           (lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetLoseIndex_2f9a628
                              (lVar3,param_3[1],*(undefined8 *)PTR_DAT_04cc1dc0), lVar3 != 0)) &&
          (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetDurationTotalEnd_2f9a994
                             (lVar3,param_3[2],*(undefined8 *)PTR_DAT_04cc1df0), lVar3 != 0)) &&
         ((lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetDurationRemain_2f9a9f0
                             (lVar3,param_3[3],*(undefined8 *)PTR_DAT_04cc1de8), lVar3 != 0 &&
          (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetDurationPlay_2f9aa4c
                             (lVar3,param_3[4],*(undefined8 *)PTR_DAT_04cc1de0), lVar3 != 0)))) &&
        ((lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetProgress_2f9aaa8
                            (lVar3,param_3[5],*(undefined8 *)PTR_DAT_04cc1e08), lVar3 != 0 &&
         ((lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetItemsTotal_2f9ab04
                             (lVar3,param_3[6],*(undefined8 *)PTR_DAT_04cc1e00), lVar3 != 0 &&
          (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetItemsCleared_2f9ab60
                             (lVar3,param_3[7],*(undefined8 *)PTR_DAT_04cc1df8), lVar3 != 0)))))) &&
       (lVar3 = Dino_Tracking_TrackingEventLevelSessionEndBase_object___SetActionSeq_2f9abbc
                          (lVar3,param_3[8],*(undefined8 *)PTR_DAT_04cc1dd8), lVar3 != 0)) {
                    /* try { // try from 0257d2c8 to 0267d2cf has its CatchHandler @ 0257d358 */
      *(undefined8 *)(lVar3 + 0x90) = param_3[9];
      thunk_FUN_02134474();
      Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4);
      plVar1 = plStack_38;
                    /* try { // try from 0257d2e0 to 0267d2eb has its CatchHandler @ 0257d354 */
      if (plStack_38 != (long *)0x0) {
        lVar5 = *plStack_38;
        lVar7 = *(long *)PTR_DAT_04cc1db8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 0257d300 to 0267d303 has its CatchHandler @ 0257d34c */
                    /* try { // try from 0257d304 to 0267d313 has its CatchHandler @ 0257d350 */
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* try { // try from 0257d314 to 0267d373 has its CatchHandler @ 0257d214 */
            if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
              goto LAB_0257d344;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        lVar5 = FUN_0216b7a4(plStack_38);
LAB_0257d344:
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d300 with catch @ 0257d34c
                        */
        lVar5 = thunk_FUN_02150f88(*(undefined8 *)(lVar5 + 8),lVar7);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d304 with catch @ 0257d350
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d2e0 with catch @ 0257d354
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d2c8 with catch @ 0257d358
                        */
        (**(code **)(lVar5 + 8))(plVar1,lVar3,lVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0257d378 to 0267d39b has its CatchHandler @ 0257d214 */
  FUN_02133224();
}

