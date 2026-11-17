/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceEarn
void Dino_Tracking_DinoEventTracking__TrackResourceEarn (int32_t resourceType, System_String_o* resourceName, int64_t resourceAmount, Dino_Tracking_ResourceEarnOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackResourceEarn
   void Dino_Tracking_DinoEventTracking__TrackResourceEarn (int32_t resourceType, System_String_o*
   resourceName, int64_t resourceAmount, Dino_Tracking_ResourceEarnOptions_o* options,
   Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackResourceEarn_247e89c
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_38;
  
  if ((bRam0000000004f9cf61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2008);
    FUN_02132f7c(PTR_DAT_04cc2010);
    FUN_02132f7c(PTR_DAT_04cc2018);
    FUN_02132f7c(PTR_DAT_04cc2020);
    FUN_02132f7c(PTR_DAT_04cc2028);
    bRam0000000004f9cf61 = 1;
  }
  plStack_38 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_38);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc2028);
  Dino_Tracking_TrackingEventResourceEarn___ctor_247a9f0(lVar3,param_1,param_2,param_3);
  if ((((lVar3 != 0) &&
       (lVar3 = Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance_2f9b4f4
                          (lVar3,*param_4,param_4[1],*(undefined8 *)PTR_DAT_04cc2020), lVar3 != 0))
      && (lVar3 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacement_2f9b550
                            (lVar3,param_4[2],*(undefined8 *)PTR_DAT_04cc2018), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventResourceBase_object___SetPlacementDetail_2f9b5b4
                        (lVar3,param_4[3],*(undefined8 *)PTR_DAT_04cc2010), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x50) = param_4[4];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_5);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      lVar4 = *plStack_38;
      lVar6 = *(long *)PTR_DAT_04cc2008;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257ea0c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_38);
LAB_0257ea0c:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

