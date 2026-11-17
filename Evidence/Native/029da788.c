/* IL2CPP: Dino.Tracking.TrackingService$$TrackEvent<object>
void Dino_Tracking_TrackingService__TrackEvent_object_ (Dino_Tracking_TrackingService_o* __this, Il2CppObject* script, const MethodInfo_28DA788* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$TrackEvent<object>
   void Dino_Tracking_TrackingService__TrackEvent_object_ (Dino_Tracking_TrackingService_o* __this,
   Il2CppObject* script, const MethodInfo_28DA788* method); */

void Dino_Tracking_TrackingService__TrackEvent_object__28da788
               (long param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar11 = (long *)PTR_DAT_04cc5180;
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cc5180);
    FUN_02132f7c(PTR_DAT_04cc4390);
    FUN_02132f7c(PTR_DAT_04cbf448);
    FUN_02132f7c(PTR_DAT_04cc18e8);
    plVar11 = (long *)PTR_DAT_04cc5180;
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0216b4cc(param_3);
      plVar11 = (long *)PTR_DAT_04cc5180;
    }
  }
  PTR_DAT_04cc5180 = (undefined *)plVar11;
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar11) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_029da838;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(param_2,*plVar11,0);
LAB_029da838:
    uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    uVar9 = System_String__IsNullOrEmpty_46d2084(uVar5,0);
    if ((uVar9 & 1) == 0) {
      if ((*(char *)(param_1 + 0x24) == '\0') || (*(char *)(param_1 + 0x25) == '\0')) {
        lVar8 = *(long *)(param_1 + 0x48);
        if (lVar8 != 0) {
          iVar1 = *(int *)(lVar8 + 0x18);
          *(undefined4 *)(lVar8 + 0x18) = 0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear_4851dc8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
            lVar8 = *(long *)(param_1 + 0x48);
          }
          lVar7 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *plVar11) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_029da924;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_0216b7a4(param_2,*plVar11,1);
LAB_029da924:
          (*(code *)*puVar4)(param_2,lVar8,puVar4[1]);
          lVar8 = *(long *)(param_1 + 0x48);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = System_Collections_Generic_List_DinoTrackingParameter___ToArray_3a16828
                                (lVar8,*(undefined8 *)PTR_DAT_04cbf448);
            }
            if ((bRam0000000004f9cf98 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04caaba0,uVar5,uVar6,0);
              FUN_02132f7c(PTR_DAT_04cc2218);
              FUN_02132f7c(PTR_DAT_04cc2220);
              FUN_02132f7c(PTR_DAT_04cc2228);
              FUN_02132f7c(PTR_DAT_04cc2230);
              FUN_02132f7c(PTR_DAT_04cc0168);
              bRam0000000004f9cf98 = 1;
            }
            lVar8 = *(long *)(param_1 + 0x38);
            if (lVar8 != 0) {
              if (0x3f < *(int *)(lVar8 + 0x20)) {
                System_Collections_Generic_Queue_TrackingService_PendingEvent___Dequeue_2ce72c0
                          (lVar8,*(undefined8 *)PTR_DAT_04cc2218);
                uStack_40 = CONCAT44(uStack_40._4_4_,0x40);
                uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_40);
                uVar3 = System_String__Format_46c8eb8(*(undefined8 *)PTR_DAT_04cc2230,uVar3,0);
                if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04caaba0);
                }
                Dino_Debugger__LogWarning_2481e30(uVar3,*(undefined8 *)PTR_DAT_04cc0168,0);
                lVar8 = *(long *)(param_1 + 0x38);
              }
              uStack_38 = 0;
              uStack_40 = uVar5;
              thunk_FUN_02134474(&uStack_40,uVar5);
              uStack_38 = uVar6;
              thunk_FUN_02134474(&uStack_38,uVar6);
              if (lVar8 != 0) {
                System_Collections_Generic_Queue_TrackingService_PendingEvent___Enqueue_2ce715c
                          (lVar8,uStack_40,uStack_38,*(undefined8 *)PTR_DAT_04cc2220);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if (*(long *)(lVar8 + 0x38) == 0) {
        FUN_0216b4cc(lVar8);
      }
      plVar11 = *(long **)(param_1 + 0x28);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        lVar13 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)(lVar13 + 0x20)) {
              lVar7 = lVar7 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 +
                      0x138;
              goto LAB_029da41c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar7 = FUN_0216b7a4(plVar11);
LAB_029da41c:
        lVar7 = thunk_FUN_02150f88(*(undefined8 *)(lVar7 + 8),lVar13);
        (**(code **)(lVar7 + 8))(plVar11,param_2,lVar7);
        lVar7 = *(long *)(param_1 + 0x30);
        if (lVar7 != 0) {
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (0 < (int)uVar2) {
            uVar14 = 0;
            do {
              if (uVar2 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar11 = *(long **)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
              if (plVar11 == (long *)0x0) goto LAB_029da504;
              lVar13 = *plVar11;
              lVar12 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
              uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar13 = lVar13 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_029da4c0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              lVar13 = FUN_0216b7a4(plVar11);
LAB_029da4c0:
              lVar13 = thunk_FUN_02150f88(*(undefined8 *)(lVar13 + 8),lVar12);
              (**(code **)(lVar13 + 8))(plVar11,param_2,lVar13);
              uVar2 = *(uint *)(lVar7 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar2);
          }
          return;
        }
      }
LAB_029da504:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

