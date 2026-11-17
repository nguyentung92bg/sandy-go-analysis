/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackEvent
void Dino_Tracking_DinoEventTracking__TrackEvent (Dino_Common_ITrackingScript_o* script, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackEvent
   void Dino_Tracking_DinoEventTracking__TrackEvent (Dino_Common_ITrackingScript_o* script, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackEvent_247c624(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam0000000004f9cf4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1cc0);
    bRam0000000004f9cf4a = 1;
  }
  plStack_28 = (long *)0x0;
  if ((param_1 != 0) &&
     (uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28),
     plVar1 = plStack_28, (uVar2 & 1) != 0)) {
    if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *plStack_28;
    lVar5 = *(long *)PTR_DAT_04cc1cc0;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_0257c6cc;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    lVar3 = FUN_0216b7a4(plStack_28);
LAB_0257c6cc:
    lVar3 = thunk_FUN_02150f88(*(undefined8 *)(lVar3 + 8),lVar5);
    (**(code **)(lVar3 + 8))(plVar1,param_1,lVar3);
  }
  return;
}

