/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelReopen
void Dino_Tracking_DinoEventTracking__TrackLevelReopen (int32_t level, Dino_Tracking_LevelReopenOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelReopen
   void Dino_Tracking_DinoEventTracking__TrackLevelReopen (int32_t level,
   Dino_Tracking_LevelReopenOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackLevelReopen_247d59c
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
                    /* try { // try from 0257d5a4 to 0267d5a7 has its CatchHandler @ 0257d5b8 */
                    /* try { // try from 0257d5a8 to 0267d5db has its CatchHandler @ 0257d3b0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d4b0 with catch @ 0257d5ac
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d4cc with catch @ 0257d5b0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d4d8 with catch @ 0257d5b4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d5a4 with catch @ 0257d5b8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d4b4 with catch @ 0257d5bc
                        */
  if ((bRam0000000004f9cf54 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257d494 with catch @ 0257d5c0
                        */
    FUN_02132f7c(PTR_DAT_04cc1e58);
    FUN_02132f7c(PTR_DAT_04cc1e60);
                    /* try { // try from 0257d5dc to 0267d5df has its CatchHandler @ 0257d5f8 */
                    /* try { // try from 0257d5e0 to 0267d5fb has its CatchHandler @ 0257d3b0 */
    FUN_02132f7c(PTR_DAT_04cc1e68);
    FUN_02132f7c(PTR_DAT_04cc1e70);
                    /* catch() { ... } // from try @ 0257d5dc with catch @ 0257d5f8 */
    FUN_02132f7c(PTR_DAT_04cc1e78);
                    /* try { // try from 0257d5fc to 0267d603 has its CatchHandler @ 0257d60c */
                    /* try { // try from 0257d604 to 0267d60f has its CatchHandler @ 0257d3b0 */
    FUN_02132f7c(PTR_DAT_04cc1e80);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0257d5fc with catch @ 0257d60c
                        */
    FUN_02132f7c(PTR_DAT_04cc1e88);
    bRam0000000004f9cf54 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1e88);
  Dino_Tracking_TrackingEventLevelReopen___ctor_24795f4(lVar3,param_1);
  if ((((lVar3 == 0) ||
       (lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetLoopBy_2f9a4bc
                          (lVar3,*param_2,*(undefined8 *)PTR_DAT_04cc1e68), lVar3 == 0)) ||
      (lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetPlayIndex_2f9a5cc
                         (lVar3,param_2[1],*(undefined8 *)PTR_DAT_04cc1e80), lVar3 == 0)) ||
     (((lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetLoseIndex_2f9a628
                          (lVar3,param_2[2],*(undefined8 *)PTR_DAT_04cc1e70), lVar3 == 0 ||
       (lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetDurationTotalStart_2f9a684
                          (lVar3,param_2[3],*(undefined8 *)PTR_DAT_04cc1e60), lVar3 == 0)) ||
      ((lVar3 = Dino_Tracking_TrackingEventLevelBase_object___SetMode_2f9a6e0
                          (lVar3,param_2[4],*(undefined8 *)PTR_DAT_04cc1e78), lVar3 == 0 ||
       (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3),
       plVar1 = plStack_28, plStack_28 == (long *)0x0)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plStack_28;
  lVar6 = *(long *)PTR_DAT_04cc1e58;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257d738;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257d738:
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

