/* IL2CPP: Dino.BusSand.Core.StageEngine$$EmitFromGarages
void Dino_BusSand_Core_StageEngine__EmitFromGarages (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$EmitFromGarages
   void Dino_BusSand_Core_StageEngine__EmitFromGarages (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__EmitFromGarages_24231b8(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_f0;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long alStack_70 [2];
  
  if ((bRam0000000004f9cbbb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbec20);
    FUN_02132f7c(PTR_DAT_04cbec30);
    bRam0000000004f9cbbb = 1;
  }
  Dino_BusSand_Core_StageEngine__EmitFromGaragesOnly_242a534(param_1,param_2);
  if (*(long *)(param_1 + 0x38) != 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0x38) + 0x18)) {
      Dino_BusSand_Core_StageEngine__EmitFromLifts_242aa78(param_1,param_2);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x18) < 1) {
        return;
      }
      if ((bRam0000000004f9cbbd & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cbc470);
        FUN_02132f7c(PTR_DAT_04cbc480);
        FUN_02132f7c(PTR_DAT_04cbc488);
        FUN_02132f7c(PTR_DAT_04cb58d0);
        FUN_02132f7c(PTR_DAT_04cbc4a0);
        FUN_02132f7c(PTR_DAT_04cbeeb8);
        FUN_02132f7c(PTR_DAT_04cbee90);
        FUN_02132f7c(PTR_DAT_04cbec20);
        FUN_02132f7c(PTR_DAT_04cbeec0);
        FUN_02132f7c(PTR_DAT_04cbee80);
        bRam0000000004f9cbbd = 1;
      }
      puVar8 = PTR_DAT_04cbeec0;
      puVar7 = PTR_DAT_04cbeeb8;
      puVar6 = PTR_DAT_04cbc4a0;
      puVar5 = PTR_DAT_04cbc480;
      puVar4 = PTR_DAT_04cbc470;
      puVar3 = PTR_DAT_04cb58d0;
      uStack_c0 = 0;
      puStack_b8 = (undefined8 *)0x0;
      lStack_b0 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      if (*(long *)(param_1 + 0x40) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_80,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbc4a0);
        bVar2 = false;
        lStack_b0 = alStack_70[0];
        puStack_b8 = puStack_78;
        uStack_c0 = uStack_80;
        uStack_80 = 0;
        puStack_78 = &uStack_c0;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_c0,*(undefined8 *)puVar5), lVar10 = lStack_b0,
              (uVar9 & 1) != 0) {
          if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lStack_b0 + 0x30) != -1) {
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                              (*(long *)(param_1 + 0x28),*(int *)(lStack_b0 + 0x30),&uStack_c8);
            if ((uVar9 & 1) == 0) {
              bVar2 = true;
              *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_c0,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x40) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_80,*(long *)(param_1 + 0x40),*(undefined8 *)puVar6);
          lStack_b0 = alStack_70[0];
          puStack_b8 = puStack_78;
          uStack_c0 = uStack_80;
          while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_c0,*(undefined8 *)puVar5), lVar10 = lStack_b0,
                (uVar9 & 1) != 0) {
            if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = Dino_BusSand_Core_Lane__CanEmit_242fbbc
                              (lStack_b0,*(undefined8 *)(param_1 + 0x28),0);
            if ((uVar9 & 1) != 0) {
              if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar9 = System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item_39ae9d8
                                (*(long *)(lVar10 + 0x28),0,*(undefined8 *)PTR_DAT_04cbee80);
              if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_List_ValueTuple_int__Int32Enum____RemoveAt_39b0428
                        (*(long *)(lVar10 + 0x28),0,*(undefined8 *)PTR_DAT_04cbee90);
              Dino_BusSand_Core_Lane__OccupantCenter_242f388
                        (lVar10,uVar9 >> 0x20,&uStack_d0,&uStack_d8,0);
              Dino_BusSand_Core_StageEngine__Spawn_242a458
                        (uStack_d0,uStack_d8,param_1,uVar9 & 0xffffffff,
                         *(undefined4 *)(lVar10 + 0x20),uVar9 >> 0x20);
              bVar2 = true;
              *(int *)(lVar10 + 0x30) = (int)uVar9;
              *(int *)(lVar10 + 0x34) = (int)(uVar9 >> 0x20);
              if (param_2 != 0) {
                alStack_70[0] = 0;
                uStack_80 = CONCAT44(*(undefined4 *)(lVar10 + 0x10),0x1c);
                puStack_78 = (undefined8 *)(uVar9 & 0xffffffff);
                thunk_FUN_02134474(alStack_70,0);
                lVar10 = *(long *)(param_2 + 0x10);
                lVar11 = *(long *)puVar3;
                *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar1 = *(uint *)(param_2 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                  *(uint *)(param_2 + 0x18) = uVar1 + 1;
                  *(long *)(lVar10 + 0x30) = alStack_70[0];
                  *(undefined8 **)(lVar10 + 0x28) = puStack_78;
                  *(undefined8 *)(lVar10 + 0x20) = uStack_80;
                  thunk_FUN_02134474((long *)(lVar10 + 0x30),0);
                }
                else {
                  puStack_98 = puStack_78;
                  uStack_a0 = uStack_80;
                  lStack_90 = alStack_70[0];
                  System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                            (param_2,&uStack_a0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                bVar2 = true;
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_c0,*(undefined8 *)puVar4);
          if (*(long *)(param_1 + 0x40) != 0) {
            iVar12 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
            if (-1 < iVar12 + -1) {
              do {
                if (*(long *)(param_1 + 0x40) == 0) goto LAB_0252b58c;
                iVar12 = iVar12 + -1;
                lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (*(long *)(param_1 + 0x40),iVar12,*(undefined8 *)puVar8);
                if (lVar10 == 0) goto LAB_0252b58c;
                uVar9 = Dino_BusSand_Core_Lane__get_IsSpent_242ee9c(lVar10,0);
                if ((uVar9 & 1) != 0) {
                  if (param_2 != 0) {
                    if ((*(long *)(param_1 + 0x40) == 0) ||
                       (lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                           (*(long *)(param_1 + 0x40),iVar12,*(undefined8 *)puVar8),
                       lVar10 == 0)) goto LAB_0252b58c;
                    lStack_e0 = 0;
                    uStack_f0 = CONCAT44(*(undefined4 *)(lVar10 + 0x10),0x1d);
                    thunk_FUN_02134474(&lStack_e0,0);
                    lVar10 = *(long *)(param_2 + 0x10);
                    lVar11 = *(long *)puVar3;
                    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_0252b58c;
                    uVar1 = *(uint *)(param_2 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                      *(uint *)(param_2 + 0x18) = uVar1 + 1;
                      *(long *)(lVar10 + 0x30) = lStack_e0;
                      *(undefined8 *)(lVar10 + 0x28) = 0;
                      *(undefined8 *)(lVar10 + 0x20) = uStack_f0;
                      thunk_FUN_02134474((long *)(lVar10 + 0x30),0);
                    }
                    else {
                      puStack_78 = (undefined8 *)0x0;
                      uStack_80 = uStack_f0;
                      alStack_70[0] = lStack_e0;
                      System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                                (param_2,&uStack_80,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                  }
                  if (*(long *)(param_1 + 0x40) == 0) goto LAB_0252b58c;
                  System_Collections_Generic_List_object___RemoveAt_3a833a0
                            (*(long *)(param_1 + 0x40),iVar12,*(undefined8 *)puVar7);
                  bVar2 = true;
                }
              } while (0 < iVar12);
            }
            if (bVar2) {
              Dino_BusSand_Core_StageEngine__SyncBlockers_24221e0(param_1);
            }
            return;
          }
        }
      }
LAB_0252b58c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

