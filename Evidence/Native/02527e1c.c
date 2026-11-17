/* IL2CPP: Dino.BusSand.Core.StageEngine$$CommitExit
void Dino_BusSand_Core_StageEngine__CommitExit (Dino_BusSand_Core_StageEngine_o* __this, Dino_BusSand_Core_Truck_o* t, bool byPickup, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$CommitExit
   void Dino_BusSand_Core_StageEngine__CommitExit (Dino_BusSand_Core_StageEngine_o* __this,
   Dino_BusSand_Core_Truck_o* t, bool byPickup, System_Collections_Generic_List_SimEvent__o* evts,
   const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__CommitExit_2427e1c
               (long param_1,long param_2,ulong param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f9cbae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cb2d98);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cbae = 1;
  }
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (Dino_BusSand_Core_TruckGrid__Remove_2428d44(*(long *)(param_1 + 0x28),param_2), param_2 != 0)
      ) && (*(long *)(param_1 + 0x90) != 0)) {
    System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
              (*(long *)(param_1 + 0x90),*(undefined4 *)(param_2 + 0x10),
               *(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0x8c),
               *(undefined8 *)PTR_DAT_04cb2d98);
    uStack_78 = 0;
    uStack_88 = CONCAT44(*(undefined4 *)(param_2 + 0x10),2);
    uStack_80 = param_3 & 1;
    thunk_FUN_02134474(&uStack_78,0);
    puVar2 = PTR_DAT_04cb58d0;
    if (param_4 != 0) {
      lVar6 = *(long *)(param_4 + 0x10);
      lVar7 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x30) = uStack_78;
          *(ulong *)(lVar6 + 0x28) = uStack_80;
          *(undefined8 *)(lVar6 + 0x20) = uStack_88;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),0);
        }
        else {
          uStack_68 = uStack_80;
          uStack_70 = uStack_88;
          uStack_60 = uStack_78;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (param_4,&uStack_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar4 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                            (*(long *)(param_1 + 0x50),*(undefined4 *)(param_2 + 0x10),
                             *(undefined8 *)PTR_DAT_04cbc448);
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar5 = Dino_BusSand_Core_Road__CreateBus_24129e8
                              (*(long *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x10),uVar4,
                               *(undefined4 *)(param_2 + 0x2c),uVar4 >> 0x20,
                               *(undefined4 *)(param_2 + 0x40),0);
            lVar6 = *(long *)(param_1 + 0x20);
            uVar8 = *(undefined8 *)(param_1 + 0x78);
            if (((param_3 & 1) == 0) && (lVar7 = *(long *)(param_1 + 0x130), lVar7 != 0)) {
              uVar3 = (**(code **)(lVar7 + 0x18))
                                (*(undefined8 *)(lVar7 + 0x40),*(undefined4 *)(param_2 + 0x10),
                                 *(undefined8 *)(lVar7 + 0x28));
            }
            else {
              uVar3 = 0;
            }
            if (lVar6 != 0) {
              Dino_BusSand_Core_Road__Enqueue_2412aec(lVar6,uVar5,uVar8,uVar3,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                uVar3 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0)
                ;
                if (*(long *)(param_1 + 0x20) != 0) {
                  uStack_88 = CONCAT44(uVar3,0xf);
                  uStack_78 = 0;
                  uStack_80 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x38);
                  thunk_FUN_02134474(&uStack_78,0);
                  lVar6 = *(long *)(param_4 + 0x10);
                  lVar7 = *(long *)puVar2;
                  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(param_4 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
                      *(uint *)(param_4 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar6 + 0x30) = uStack_78;
                      *(ulong *)(lVar6 + 0x28) = uStack_80;
                      *(undefined8 *)(lVar6 + 0x20) = uStack_88;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),0);
                    }
                    else {
                      uStack_68 = uStack_80;
                      uStack_70 = uStack_88;
                      uStack_60 = uStack_78;
                      System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                                (param_4,&uStack_70,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    }
                    if (*(long *)(param_1 + 0x60) != 0) {
                      uVar4 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                                        (*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x10),
                                         *(undefined8 *)PTR_DAT_04cae220);
                      if ((uVar4 & 1) != 0) {
                        if (*(long *)(param_1 + 0x68) == 0) goto LAB_025281d4;
                        uVar4 = System_Collections_Generic_HashSet_int___Add_37dc0f0
                                          (*(long *)(param_1 + 0x68),*(undefined4 *)(param_2 + 0x10)
                                           ,*(undefined8 *)PTR_DAT_04cae218);
                        if ((uVar4 & 1) != 0) {
                          uStack_78 = 0;
                          uStack_88 = CONCAT44(*(undefined4 *)(param_2 + 0x10),6);
                          thunk_FUN_02134474(&uStack_78,0);
                          lVar6 = *(long *)(param_4 + 0x10);
                          lVar7 = *(long *)puVar2;
                          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                          if (lVar6 == 0) goto LAB_025281d4;
                          uVar1 = *(uint *)(param_4 + 0x18);
                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                            lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
                            *(uint *)(param_4 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar6 + 0x30) = uStack_78;
                            *(undefined8 *)(lVar6 + 0x28) = 0;
                            *(undefined8 *)(lVar6 + 0x20) = uStack_88;
                            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),0);
                          }
                          else {
                            uStack_68 = 0;
                            uStack_70 = uStack_88;
                            uStack_60 = uStack_78;
                            System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                                      (param_4,&uStack_70,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_025281d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

