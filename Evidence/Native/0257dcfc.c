/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackEventStart
void Dino_Tracking_DinoEventTracking__TrackEventStart (System_String_o* eventNameIngame, Dino_Tracking_EventStartOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackEventStart
   void Dino_Tracking_DinoEventTracking__TrackEventStart (System_String_o* eventNameIngame,
   Dino_Tracking_EventStartOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackEventStart_247dcfc
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000004f9cf58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1f38);
    FUN_02132f7c(PTR_DAT_04cc1f40);
    FUN_02132f7c(PTR_DAT_04cc1f48);
    FUN_02132f7c(PTR_DAT_04cc1f50);
    FUN_02132f7c(PTR_DAT_04cc1f58);
    FUN_02132f7c(PTR_DAT_04cc1f60);
    bRam0000000004f9cf58 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1f60);
  Dino_Tracking_TrackingEventEventStart___ctor_2479a1c(lVar3,param_1);
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventEventBase_object___SetEventScheduleType_2f99ab8
                          (lVar3,*param_2,*(undefined8 *)PTR_DAT_04cc1f48), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventEventBase_object___SetEventStartDate_2f99b14
                         (lVar3,param_2[1],*(undefined8 *)PTR_DAT_04cc1f50), lVar3 != 0)) &&
     ((lVar3 = Dino_Tracking_TrackingEventEventBase_object___SetEventEndDate_2f99b70
                         (lVar3,param_2[2],*(undefined8 *)PTR_DAT_04cc1f40), lVar3 != 0 &&
      (lVar3 = Dino_Tracking_TrackingEventEventBase_object___SetPlacement_2f99bcc
                         (lVar3,param_2[3],*(undefined8 *)PTR_DAT_04cc1f58), lVar3 != 0)))) {
    *(undefined8 *)(lVar3 + 0x40) = param_2[4];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar4 = *plStack_28;
      lVar6 = *(long *)PTR_DAT_04cc1f38;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257de7c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257de7c:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

