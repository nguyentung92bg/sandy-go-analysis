/* IL2CPP: Dino.Tracking.TrackingService$$TrackEvent
void Dino_Tracking_TrackingService__TrackEvent (Dino_Tracking_TrackingService_o* __this, System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$TrackEvent
   void Dino_Tracking_TrackingService__TrackEvent (Dino_Tracking_TrackingService_o* __this,
   System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const
   MethodInfo* method); */

void Dino_Tracking_TrackingService__TrackEvent_247f930
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x24) == '\0') || (*(char *)(param_1 + 0x25) == '\0')) {
    if ((bRam0000000004f9cf98 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caaba0);
      FUN_02132f7c(PTR_DAT_04cc2218);
      FUN_02132f7c(PTR_DAT_04cc2220);
      FUN_02132f7c(PTR_DAT_04cc2228);
      FUN_02132f7c(PTR_DAT_04cc2230);
      FUN_02132f7c(PTR_DAT_04cc0168);
      bRam0000000004f9cf98 = 1;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      if (0x3f < *(int *)(lVar6 + 0x20)) {
        System_Collections_Generic_Queue_TrackingService_PendingEvent___Dequeue_2ce72c0
                  (lVar6,*(undefined8 *)PTR_DAT_04cc2218);
        uStack_40 = CONCAT44(uStack_40._4_4_,0x40);
        uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_40);
        uVar5 = System_String__Format_46c8eb8(*(undefined8 *)PTR_DAT_04cc2230,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caaba0);
        }
        Dino_Debugger__LogWarning_2481e30(uVar5,*(undefined8 *)PTR_DAT_04cc0168,0);
        lVar6 = *(long *)(param_1 + 0x38);
      }
      uStack_38 = 0;
      uStack_40 = param_2;
      thunk_FUN_02134474(&uStack_40,param_2);
      uStack_38 = param_3;
      thunk_FUN_02134474(&uStack_38,param_3);
      if (lVar6 != 0) {
        System_Collections_Generic_Queue_TrackingService_PendingEvent___Enqueue_2ce715c
                  (lVar6,uStack_40,uStack_38,*(undefined8 *)PTR_DAT_04cc2220);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9cf97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf428);
    bRam0000000004f9cf97 = 1;
  }
  puVar2 = PTR_DAT_04cbf428;
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cbf428) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0257fa3c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cbf428,2);
LAB_0257fa3c:
    (*(code *)*puVar4)(plVar9,param_2,param_3,puVar4[1]);
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar9 = *(long **)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_0257fb04;
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_0257facc;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar2,2);
LAB_0257facc:
          (*(code *)*puVar4)(plVar9,param_2,param_3,puVar4[1]);
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      return;
    }
  }
LAB_0257fb04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

