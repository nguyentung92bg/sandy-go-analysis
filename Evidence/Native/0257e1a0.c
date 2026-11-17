/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackNotiReceive
void Dino_Tracking_DinoEventTracking__TrackNotiReceive (System_String_o* notiCate, System_String_o* notiName, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackNotiReceive
   void Dino_Tracking_DinoEventTracking__TrackNotiReceive (System_String_o* notiCate,
   System_String_o* notiName, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackNotiReceive_247e1a0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000004f9cf5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1fa8);
    FUN_02132f7c(PTR_DAT_04cc1fb0);
    bRam0000000004f9cf5b = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1fb0);
  Dino_Tracking_TrackingEventNotiReceive___ctor_2479fc0(lVar3,param_1,param_2);
  if ((lVar3 == 0) ||
     (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_3), plVar1 = plStack_28
     , plStack_28 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plStack_28;
  lVar6 = *(long *)PTR_DAT_04cc1fa8;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257e288;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  lVar4 = FUN_0216b7a4(plStack_28);
LAB_0257e288:
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

