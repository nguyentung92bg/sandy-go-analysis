/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdRequest
void Dino_Tracking_DinoEventTracking__TrackAdRequest (System_String_o* adFormat, System_String_o* placement, Dino_Tracking_AdRequestOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackAdRequest
   void Dino_Tracking_DinoEventTracking__TrackAdRequest (System_String_o* adFormat, System_String_o*
   placement, Dino_Tracking_AdRequestOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackAdRequest_247ba20
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1c08);
    FUN_02132f7c(PTR_DAT_04cc1c10);
    FUN_02132f7c(PTR_DAT_04cc1c18);
    FUN_02132f7c(PTR_DAT_04cc1c20);
    FUN_02132f7c(PTR_DAT_04cc1c28);
    bRam0000000004f9cf41 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0257bbd0 to 0267bbd7 has its CatchHandler @ 0257bd98 */
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1c28);
  Dino_Tracking_TrackingEventAdRequest___ctor_247842c(lVar3,param_1,param_2);
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdPlatform_2f99718
                          (lVar3,*param_3,*(undefined8 *)PTR_DAT_04cc1c18), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdNetwork_2f9977c
                         (lVar3,param_3[1],*(undefined8 *)PTR_DAT_04cc1c10), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId_2f997e0
                        (lVar3,param_3[2],*(undefined8 *)PTR_DAT_04cc1c20), lVar3 != 0)) {
    *(undefined2 *)(lVar3 + 0x40) = *(undefined2 *)(param_3 + 3);
    *(undefined8 *)(lVar3 + 0x44) = *(undefined8 *)((long)param_3 + 0x1c);
    *(undefined8 *)(lVar3 + 0x50) = param_3[5];
    thunk_FUN_02134474();
    *(undefined8 *)(lVar3 + 0x58) = param_3[6];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_4);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar4 = *plStack_38;
      lVar6 = *(long *)PTR_DAT_04cc1c08;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257bba8;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257bba8:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

