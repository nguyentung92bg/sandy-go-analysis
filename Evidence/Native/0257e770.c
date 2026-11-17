/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackScreenExit
void Dino_Tracking_DinoEventTracking__TrackScreenExit (Dino_Tracking_ScreenExitOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackScreenExit
   void Dino_Tracking_DinoEventTracking__TrackScreenExit (Dino_Tracking_ScreenExitOptions_o*
   options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackScreenExit_247e770
               (undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000004f9cf60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1ff8);
    FUN_02132f7c(PTR_DAT_04cc2000);
    bRam0000000004f9cf60 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc2000);
  Dino_Common_TrackingScriptBase___ctor_2447ec8(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) = *param_1;
    thunk_FUN_02134474();
    *(undefined8 *)(lVar3 + 0x20) = param_1[1];
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_2);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      lVar4 = *plStack_28;
      lVar6 = *(long *)PTR_DAT_04cc1ff8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257e868;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257e868:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

