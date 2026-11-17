/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapClose
void Dino_Tracking_DinoEventTracking__TrackIapClose (System_String_o* placement, Dino_Tracking_IapCloseOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapClose
   void Dino_Tracking_DinoEventTracking__TrackIapClose (System_String_o* placement,
   Dino_Tracking_IapCloseOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo*
   method); */

void Dino_Tracking_DinoEventTracking__TrackIapClose_247cd30
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000004f9cf50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1d48);
    FUN_02132f7c(PTR_DAT_04cc1d50);
    FUN_02132f7c(PTR_DAT_04cc1d58);
    FUN_02132f7c(PTR_DAT_04cc1d60);
    bRam0000000004f9cf50 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1d60);
  Dino_Tracking_TrackingEventIapClose___ctor_2478794(lVar3,param_1);
  if (((lVar3 != 0) &&
      (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetShowType_2f9a248
                         (lVar3,*param_2,*(undefined8 *)PTR_DAT_04cc1d50), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetTriggerType_2f9a2a4
                        (lVar3,param_2[1],*(undefined8 *)PTR_DAT_04cc1d58), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x30) = param_2[2];
    thunk_FUN_02134474();
    *(undefined8 *)(lVar3 + 0x38) = param_2[3];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar4 = *plStack_28;
      lVar6 = *(long *)PTR_DAT_04cc1d48;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257ce78;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257ce78:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

