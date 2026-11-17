/* IL2CPP: Dino.BusSand.Core.StageEngine$$EmitFromLifts
void Dino_BusSand_Core_StageEngine__EmitFromLifts (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0252ae5c) */
/* WARNING: Removing unreachable block (ram,0x0252ae60) */
/* WARNING: Removing unreachable block (ram,0x0252b054) */
/* WARNING: Removing unreachable block (ram,0x0252aef0) */
/* WARNING: Removing unreachable block (ram,0x0252b120) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$EmitFromLifts
   void Dino_BusSand_Core_StageEngine__EmitFromLifts (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__EmitFromLifts_242aa78(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 uStack_148;
  ulong auStack_138 [2];
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  if ((bRam0000000004f9cbbc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeda0);
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cbedb0);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbedc0);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cbedd8);
    FUN_02132f7c(PTR_DAT_04cbd060);
    FUN_02132f7c(PTR_DAT_04cbeea0);
    FUN_02132f7c(PTR_DAT_04cbeea8);
    FUN_02132f7c(PTR_DAT_04cbec30);
    FUN_02132f7c(PTR_DAT_04cbec60);
    FUN_02132f7c(PTR_DAT_04cbeeb0);
    bRam0000000004f9cbbc = 1;
  }
  puVar6 = PTR_DAT_04cbedb0;
  puVar5 = PTR_DAT_04cbd060;
  puVar4 = PTR_DAT_04cbd050;
  puVar3 = PTR_DAT_04cbd048;
  puVar2 = PTR_DAT_04caa160;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_120,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cbd060);
    uStack_90 = uStack_110;
    puStack_98 = puStack_118;
    uStack_a0 = uStack_120;
    uStack_120 = 0;
    puStack_118 = &uStack_a0;
    while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      if (uStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_Core_Lift__Prune_242e5d0(uStack_90,*(undefined8 *)(param_1 + 0x28),0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_a0,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_120,*(long *)(param_1 + 0x38),*(undefined8 *)puVar5);
      uStack_90 = uStack_110;
      puStack_98 = puStack_118;
      uStack_a0 = uStack_120;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_a0,*(undefined8 *)PTR_DAT_04cbd050), uVar8 = uStack_90,
            (uVar9 & 1) != 0) {
        if (uStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar9 = Dino_BusSand_Core_Lift__CanEmit_242e6b0(uStack_90,*(undefined8 *)(param_1 + 0x28),0)
        ;
        if ((uVar9 & 1) != 0) {
          if (*(long *)(uVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                             (*(long *)(uVar8 + 0x30),0,*(undefined8 *)PTR_DAT_04cbeeb0);
          if ((*(long *)(uVar8 + 0x30) == 0) ||
             (System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (*(long *)(uVar8 + 0x30),0,*(undefined8 *)PTR_DAT_04cbeea8), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_LiftCar___GetEnumerator_3a3c3ac
                    (&uStack_120,lVar10,*(undefined8 *)PTR_DAT_04cbedd8);
          lStack_b0 = lStack_f0;
          puStack_128 = &uStack_e0;
          puStack_d8 = puStack_118;
          uStack_e0 = uStack_120;
          uStack_c8 = uStack_108;
          uStack_d0 = uStack_110;
          uStack_b8 = uStack_f8;
          uStack_c0 = uStack_100;
          auStack_138[1] = 0;
          while (uVar11 = System_Collections_Generic_List_Enumerator_LiftCar___MoveNext_35d2d68
                                    (&uStack_e0,*(undefined8 *)puVar6), lVar10 = lStack_b0,
                uVar9 = uStack_d0, (uVar11 & 1) != 0) {
            uVar7 = (undefined4)uStack_d0;
            lVar12 = Dino_BusSand_Core_StageEngine__Spawn_242a458
                               (uStack_c8,uStack_c0,param_1,uStack_d0 & 0xffffffff,
                                uStack_b8 & 0xffffffff,uStack_d0._4_4_);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            *(undefined4 *)(lVar12 + 0x48) = *(undefined4 *)(uVar8 + 0x10);
            if (lVar10 != 0) {
              Dino_BusSand_Core_StageEngine__ApplyLiftDef_24220ec(lVar12,lVar10);
            }
            lVar10 = *(long *)(uVar8 + 0x68);
            if (lVar10 == 0) {
LAB_0252ae64:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar12 = *(long *)(lVar10 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_0252ae64;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar9 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if (param_2 != 0) {
              uStack_110 = 0;
              uStack_120 = CONCAT44(*(undefined4 *)(uVar8 + 0x10),0x1a);
              puStack_118 = (undefined8 *)(uVar9 & 0xffffffff);
              thunk_FUN_02134474(&uStack_110,0);
              lVar10 = *(long *)(param_2 + 0x10);
              lVar12 = *(long *)PTR_DAT_04cb58d0;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                *(ulong *)(lVar10 + 0x30) = uStack_110;
                *(undefined8 **)(lVar10 + 0x28) = puStack_118;
                *(undefined8 *)(lVar10 + 0x20) = uStack_120;
                thunk_FUN_02134474((ulong *)(lVar10 + 0x30),0);
              }
              else {
                puStack_78 = puStack_118;
                uStack_80 = uStack_120;
                uStack_70 = uStack_110;
                System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_2,&uStack_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          System_Collections_Generic_List_Enumerator_LiftCar___Dispose_35d2d64
                    (&uStack_e0,*(undefined8 *)PTR_DAT_04cbeda0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_a0,*(undefined8 *)PTR_DAT_04cbd048);
      puVar3 = PTR_DAT_04cbeea0;
      puVar2 = PTR_DAT_04cbec60;
      if (*(long *)(param_1 + 0x38) != 0) {
        iVar14 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
        if (-1 < iVar14 + -1) {
          do {
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_0252b044;
            iVar14 = iVar14 + -1;
            lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(param_1 + 0x38),iVar14,*(undefined8 *)puVar2);
            if (lVar10 == 0) goto LAB_0252b044;
            uVar8 = Dino_BusSand_Core_Lift__get_IsSpent_242e42c(lVar10,0);
            if ((uVar8 & 1) != 0) {
              if (param_2 != 0) {
                if ((*(long *)(param_1 + 0x38) == 0) ||
                   (lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                       (*(long *)(param_1 + 0x38),iVar14,*(undefined8 *)puVar2),
                   lVar10 == 0)) goto LAB_0252b044;
                auStack_138[0] = 0;
                uStack_148 = CONCAT44(*(undefined4 *)(lVar10 + 0x10),0x1b);
                thunk_FUN_02134474(auStack_138,0);
                lVar10 = *(long *)(param_2 + 0x10);
                lVar12 = *(long *)PTR_DAT_04cb58d0;
                *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_0252b044;
                uVar1 = *(uint *)(param_2 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
                  *(uint *)(param_2 + 0x18) = uVar1 + 1;
                  *(ulong *)(lVar10 + 0x30) = auStack_138[0];
                  *(undefined8 *)(lVar10 + 0x28) = 0;
                  *(undefined8 *)(lVar10 + 0x20) = uStack_148;
                  thunk_FUN_02134474((ulong *)(lVar10 + 0x30),0);
                }
                else {
                  puStack_118 = (undefined8 *)0x0;
                  uStack_120 = uStack_148;
                  uStack_110 = auStack_138[0];
                  System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                            (param_2,&uStack_120,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (*(long *)(param_1 + 0x38) == 0) goto LAB_0252b044;
              System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (*(long *)(param_1 + 0x38),iVar14,*(undefined8 *)puVar3);
            }
          } while (0 < iVar14);
        }
        return;
      }
    }
  }
LAB_0252b044:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

