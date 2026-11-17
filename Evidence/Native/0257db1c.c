/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackFeatureClose
void Dino_Tracking_DinoEventTracking__TrackFeatureClose (System_String_o* featureName, Dino_Tracking_FeatureCloseOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackFeatureClose
   void Dino_Tracking_DinoEventTracking__TrackFeatureClose (System_String_o* featureName,
   Dino_Tracking_FeatureCloseOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackFeatureClose_247db1c
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000004f9cf57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1f00);
    FUN_02132f7c(PTR_DAT_04cc1f08);
    FUN_02132f7c(PTR_DAT_04cc1f10);
    FUN_02132f7c(PTR_DAT_04cc1f18);
    FUN_02132f7c(PTR_DAT_04cc1f20);
    FUN_02132f7c(PTR_DAT_04cc1f28);
    FUN_02132f7c(PTR_DAT_04cc1f30);
    bRam0000000004f9cf57 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1f30);
  Dino_Tracking_TrackingEventFeatureClose___ctor_2479b6c(lVar3,param_1);
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventFeatureBase_object___SetFeatureCategory_2f99e30
                          (lVar3,*param_2,*(undefined8 *)PTR_DAT_04cc1f08), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventFeatureBase_object___SetFeatureScheduleType_2f99e8c
                         (lVar3,param_2[1],*(undefined8 *)PTR_DAT_04cc1f18), lVar3 != 0)) &&
     (((lVar3 = Dino_Tracking_TrackingEventFeatureBase_object___SetFeatureStartDate_2f99ee8
                          (lVar3,param_2[2],*(undefined8 *)PTR_DAT_04cc1f20), lVar3 != 0 &&
       (lVar3 = Dino_Tracking_TrackingEventFeatureBase_object___SetFeatureEndDate_2f99f44
                          (lVar3,param_2[3],*(undefined8 *)PTR_DAT_04cc1f10), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventFeatureBase_object___SetPlacement_2f99fa0
                         (lVar3,param_2[4],*(undefined8 *)PTR_DAT_04cc1f28), lVar3 != 0)))) {
    *(undefined8 *)(lVar3 + 0x48) = param_2[5];
    *(undefined8 *)(lVar3 + 0x50) = param_2[6];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar4 = *plStack_28;
      lVar6 = *(long *)PTR_DAT_04cc1f00;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257dcc8;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257dcc8:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

