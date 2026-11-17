/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLoadingFinish
void Dino_Tracking_DinoEventTracking__TrackLoadingFinish (System_String_o* dataSource, System_String_o* resourceType, System_String_o* loadContext, System_String_o* result, Dino_Tracking_LoadingFinishOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackLoadingFinish
   void Dino_Tracking_DinoEventTracking__TrackLoadingFinish (System_String_o* dataSource,
   System_String_o* resourceType, System_String_o* loadContext, System_String_o* result,
   Dino_Tracking_LoadingFinishOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackLoadingFinish_247eeb4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_48;
  
  if ((bRam0000000004f9cf66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2080);
    FUN_02132f7c(PTR_DAT_04cc2088);
    FUN_02132f7c(PTR_DAT_04cc2090);
    FUN_02132f7c(PTR_DAT_04cc2098);
    FUN_02132f7c(PTR_DAT_04cc20a0);
    bRam0000000004f9cf66 = 1;
  }
  plStack_48 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_48);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc20a0);
  Dino_Tracking_TrackingEventLoadingFinish___ctor_247aea8(lVar3,param_1,param_2,param_3,param_4);
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventLoadingBase_object___SetTriggerSource_2f9ae5c
                          (lVar3,*param_5,*(undefined8 *)PTR_DAT_04cc2098), lVar3 != 0)) &&
      (lVar3 = Dino_Tracking_TrackingEventLoadingBase_object___SetLoadId_2f9aec0
                         (lVar3,param_5[1],*(undefined8 *)PTR_DAT_04cc2088), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventLoadingBase_object___SetPriority_2f9af24
                        (lVar3,param_5[2],*(undefined8 *)PTR_DAT_04cc2090), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x50) = param_5[3];
    *(undefined8 *)(lVar3 + 0x58) = param_5[4];
    thunk_FUN_02134474();
    uVar7 = param_5[5];
    *(undefined8 *)(lVar3 + 0x68) = param_5[6];
    *(undefined8 *)(lVar3 + 0x60) = uVar7;
    *(undefined8 *)(lVar3 + 0x70) = param_5[7];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_6);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      lVar4 = *plStack_48;
      lVar6 = *(long *)PTR_DAT_04cc2080;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257f050;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_48);
LAB_0257f050:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

