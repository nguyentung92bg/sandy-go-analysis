/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelStart
void Dino_Tracking_DinoEventTracking__TrackLevelStart (int32_t level, Dino_Tracking_LevelStartOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLevelStart
   void Dino_Tracking_DinoEventTracking__TrackLevelStart (int32_t level,
   Dino_Tracking_LevelStartOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackLevelStart_247ceac
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uStack_38;
  long *plStack_28;
  
  if ((bRam0000000004f9cf51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1d68);
    FUN_02132f7c(PTR_DAT_04cc1d70);
    FUN_02132f7c(PTR_DAT_04cc1d78);
    FUN_02132f7c(PTR_DAT_04cc1d80);
    FUN_02132f7c(PTR_DAT_04cc1d88);
    FUN_02132f7c(PTR_DAT_04cc1d90);
    FUN_02132f7c(PTR_DAT_04cc1d98);
    FUN_02132f7c(PTR_DAT_04cc1da0);
    FUN_02132f7c(PTR_DAT_04cc1da8);
    FUN_02132f7c(PTR_DAT_04cc1db0);
    bRam0000000004f9cf51 = 1;
  }
  plStack_28 = (long *)0x0;
  uStack_38 = 0;
  uVar3 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1db0);
  Dino_Tracking_TrackingEventLevelStart___ctor_24796e4(lVar4,param_1);
  if ((((lVar4 != 0) &&
       (lVar4 = Dino_Tracking_TrackingEventLevelBase_object___SetLoopBy_2f9a4bc
                          (lVar4,*param_2,*(undefined8 *)PTR_DAT_04cc1d88), lVar4 != 0)) &&
      (lVar4 = Dino_Tracking_TrackingEventLevelBase_object___SetPlayIndex_2f9a5cc
                         (lVar4,param_2[2],*(undefined8 *)PTR_DAT_04cc1da0), lVar4 != 0)) &&
     ((lVar4 = Dino_Tracking_TrackingEventLevelBase_object___SetLoseIndex_2f9a628
                         (lVar4,param_2[3],*(undefined8 *)PTR_DAT_04cc1d90), lVar4 != 0 &&
      (lVar4 = Dino_Tracking_TrackingEventLevelBase_object___SetDurationTotalStart_2f9a684
                         (lVar4,param_2[4],*(undefined8 *)PTR_DAT_04cc1d80), lVar4 != 0)))) {
    lVar4 = Dino_Tracking_TrackingEventLevelBase_object___SetMode_2f9a6e0
                      (lVar4,param_2[5],*(undefined8 *)PTR_DAT_04cc1d98);
    uStack_38 = param_2[1];
    if ((uStack_38 & 0xff) == 0) {
      if (lVar4 == 0) goto LAB_0257d0f4;
    }
    else {
      uVar2 = System_Nullable_Int32Enum___get_Value_2bcbf74
                        (&uStack_38,*(undefined8 *)PTR_DAT_04cc1d78);
      if (lVar4 == 0) goto LAB_0257d0f4;
      Dino_Tracking_TrackingEventLevelBase_object___SetPlayType_2f9a518
                (lVar4,uVar2,*(undefined8 *)PTR_DAT_04cc1da8);
    }
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar4,param_3);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar5 = *plStack_28;
      lVar7 = *(long *)PTR_DAT_04cc1d68;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257d0c0;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      lVar5 = FUN_0216b7a4(plStack_28);
LAB_0257d0c0:
      lVar5 = thunk_FUN_02150f88(*(undefined8 *)(lVar5 + 8),lVar7);
      (**(code **)(lVar5 + 8))(plVar1,lVar4,lVar5);
      return;
    }
  }
LAB_0257d0f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

