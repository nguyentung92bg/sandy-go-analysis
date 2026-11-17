/* IL2CPP: Dino.Tracking.TrackingService$$Forward<object>
void Dino_Tracking_TrackingService__Forward_object_ (Dino_Tracking_TrackingService_o* __this, Il2CppObject* script, const MethodInfo_28DA390* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$Forward<object>
   void Dino_Tracking_TrackingService__Forward_object_ (Dino_Tracking_TrackingService_o* __this,
   Il2CppObject* script, const MethodInfo_28DA390* method); */

void Dino_Tracking_TrackingService__Forward_object__28da390
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0216b4cc(param_3);
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_029da41c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_0216b7a4(plVar5);
LAB_029da41c:
    lVar2 = thunk_FUN_02150f88(*(undefined8 *)(lVar2 + 8),lVar7);
    (**(code **)(lVar2 + 8))(plVar5,param_2,lVar2);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar5 = *(long **)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_029da504;
          lVar7 = *plVar5;
          lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *(long *)(lVar6 + 0x20)) {
                lVar7 = lVar7 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_029da4c0;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar3 != 0);
          }
          lVar7 = FUN_0216b7a4(plVar5);
LAB_029da4c0:
          lVar7 = thunk_FUN_02150f88(*(undefined8 *)(lVar7 + 8),lVar6);
          (**(code **)(lVar7 + 8))(plVar5,param_2,lVar7);
          uVar1 = *(uint *)(lVar2 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      return;
    }
  }
LAB_029da504:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

