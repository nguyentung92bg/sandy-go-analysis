/* IL2CPP: Dino.BusSand.Core.StageEngine$$EmitFromGaragesOnly
void Dino_BusSand_Core_StageEngine__EmitFromGaragesOnly (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$EmitFromGaragesOnly
   void Dino_BusSand_Core_StageEngine__EmitFromGaragesOnly (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__EmitFromGaragesOnly_242a534(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
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
  
  if ((bRam0000000004f9cbbe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbc368);
    FUN_02132f7c(PTR_DAT_04cbee88);
    FUN_02132f7c(PTR_DAT_04cbee90);
    FUN_02132f7c(PTR_DAT_04cbec40);
    FUN_02132f7c(PTR_DAT_04cbee98);
    FUN_02132f7c(PTR_DAT_04cbee80);
    bRam0000000004f9cbbe = 1;
  }
  puVar8 = PTR_DAT_04cbee90;
  puVar7 = PTR_DAT_04cbee80;
  puVar6 = PTR_DAT_04cbc368;
  puVar5 = PTR_DAT_04cbc308;
  puVar4 = PTR_DAT_04cbc300;
  lVar9 = *(long *)(param_1 + 0x30);
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
      return;
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_80,lVar9,*(undefined8 *)PTR_DAT_04cbc368);
    lStack_b0 = alStack_70[0];
    puStack_b8 = puStack_78;
    uStack_c0 = uStack_80;
    uStack_80 = 0;
    puStack_78 = &uStack_c0;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_c0,*(undefined8 *)puVar5), lVar9 = lStack_b0,
          (uVar10 & 1) != 0) {
      if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_b0 + 0x38) != -1) {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                           (*(long *)(param_1 + 0x28),*(int *)(lStack_b0 + 0x38),&uStack_c8);
        if ((uVar10 & 1) == 0) {
          *(undefined4 *)(lVar9 + 0x38) = 0xffffffff;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_c0,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x30) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_80,*(long *)(param_1 + 0x30),*(undefined8 *)puVar6);
      lStack_b0 = alStack_70[0];
      puStack_b8 = puStack_78;
      uStack_c0 = uStack_80;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_c0,*(undefined8 *)puVar5), lVar9 = lStack_b0,
            (uVar10 & 1) != 0) {
        if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = Dino_BusSand_Core_Garage__CanEmit_242a31c
                           (lStack_b0,*(undefined8 *)(param_1 + 0x28));
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar10 = System_Collections_Generic_List_ValueTuple_int__Int32Enum____get_Item_39ae9d8
                             (*(long *)(lVar9 + 0x30),0,*(undefined8 *)puVar7);
          if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_ValueTuple_int__Int32Enum____RemoveAt_39b0428
                    (*(long *)(lVar9 + 0x30),0,*(undefined8 *)puVar8);
          Dino_BusSand_Core_Garage__ExitCenter_242b678(lVar9,uVar10 >> 0x20,&uStack_d0,&uStack_d8);
          Dino_BusSand_Core_StageEngine__Spawn_242a458
                    (uStack_d0,uStack_d8,param_1,uVar10 & 0xffffffff,*(undefined4 *)(lVar9 + 0x28),
                     uVar10 >> 0x20);
          *(int *)(lVar9 + 0x38) = (int)uVar10;
          if (param_2 != 0) {
            alStack_70[0] = 0;
            uStack_80 = CONCAT44(*(undefined4 *)(lVar9 + 0x10),4);
            puStack_78 = (undefined8 *)(uVar10 & 0xffffffff);
            thunk_FUN_02134474(alStack_70,0);
            lVar9 = *(long *)(param_2 + 0x10);
            lVar11 = *(long *)PTR_DAT_04cb58d0;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar2 = *(uint *)(param_2 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar2 * 0x18;
              *(uint *)(param_2 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + 0x30) = alStack_70[0];
              *(undefined8 **)(lVar9 + 0x28) = puStack_78;
              *(undefined8 *)(lVar9 + 0x20) = uStack_80;
              thunk_FUN_02134474((long *)(lVar9 + 0x30),0);
            }
            else {
              puStack_98 = puStack_78;
              uStack_a0 = uStack_80;
              lStack_90 = alStack_70[0];
              System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                        (param_2,&uStack_a0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_c0,*(undefined8 *)PTR_DAT_04cbc300);
      puVar5 = PTR_DAT_04cbee98;
      puVar4 = PTR_DAT_04cbee88;
      if (*(long *)(param_1 + 0x30) != 0) {
        iVar13 = *(int *)(*(long *)(param_1 + 0x30) + 0x18) + -1;
        if (iVar13 < 0) {
          return;
        }
        bVar3 = false;
        do {
          while( true ) {
            iVar12 = iVar13 + -1;
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (*(long *)(param_1 + 0x30),iVar13,*(undefined8 *)puVar5),
               lVar9 == 0)) goto LAB_0252a994;
            uVar10 = Dino_BusSand_Core_Garage__get_IsSpent_242b764();
            if ((uVar10 & 1) != 0) break;
            bVar1 = iVar13 < 1;
            iVar13 = iVar12;
            if (bVar1) {
              if (!bVar3) {
                return;
              }
              goto LAB_0252a96c;
            }
          }
          if (param_2 != 0) {
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (*(long *)(param_1 + 0x30),iVar13,*(undefined8 *)puVar5),
               lVar9 == 0)) goto LAB_0252a994;
            lStack_e0 = 0;
            uStack_f0 = CONCAT44(*(undefined4 *)(lVar9 + 0x10),5);
            thunk_FUN_02134474(&lStack_e0,0);
            lVar9 = *(long *)(param_2 + 0x10);
            lVar11 = *(long *)PTR_DAT_04cb58d0;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0252a994;
            uVar2 = *(uint *)(param_2 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar2 * 0x18;
              *(uint *)(param_2 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + 0x30) = lStack_e0;
              *(undefined8 *)(lVar9 + 0x28) = 0;
              *(undefined8 *)(lVar9 + 0x20) = uStack_f0;
              thunk_FUN_02134474((long *)(lVar9 + 0x30),0);
            }
            else {
              puStack_78 = (undefined8 *)0x0;
              uStack_80 = uStack_f0;
              alStack_70[0] = lStack_e0;
              System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                        (param_2,&uStack_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_0252a994;
          System_Collections_Generic_List_object___RemoveAt_3a833a0
                    (*(long *)(param_1 + 0x30),iVar13,*(undefined8 *)puVar4);
          bVar3 = true;
          iVar13 = iVar12;
        } while (iVar12 != -1);
LAB_0252a96c:
        Dino_BusSand_Core_StageEngine__SyncBlockers_24221e0(param_1);
        return;
      }
    }
  }
LAB_0252a994:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

