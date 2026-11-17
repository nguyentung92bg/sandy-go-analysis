/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$RollbackStackedAgents
void Dino_BusSand_App_Meta_RacingRobotSession__RollbackStackedAgents (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, System_Int32_array* pre, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02361a40) */
/* WARNING: Removing unreachable block (ram,0x02361c6c) */
/* WARNING: Removing unreachable block (ram,0x02361c84) */
/* WARNING: Removing unreachable block (ram,0x02361b4c) */
/* WARNING: Removing unreachable block (ram,0x02361b50) */
/* WARNING: Removing unreachable block (ram,0x02361c74) */
/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$RollbackStackedAgents
   void Dino_BusSand_App_Meta_RacingRobotSession__RollbackStackedAgents
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, System_Int32_array* pre, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSession__RollbackStackedAgents_2261548
               (long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long extraout_x1;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  if ((bRam0000000004f9c045 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c80);
    FUN_02132f7c(PTR_DAT_04cb4490);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cb4498);
    FUN_02132f7c(PTR_DAT_04cb44a0);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cb44a8);
    FUN_02132f7c(PTR_DAT_04cb44b0);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb30e8);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb4458);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cb4488);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb44b8);
    FUN_02132f7c(PTR_DAT_04cb44c0);
    FUN_02132f7c(PTR_DAT_04cb44c8);
    FUN_02132f7c(PTR_DAT_04cb44d0);
    FUN_02132f7c(PTR_DAT_04cb44d8);
    FUN_02132f7c(PTR_DAT_04cb44e0);
    bRam0000000004f9c045 = 1;
  }
  puVar7 = PTR_DAT_04cb44d0;
  lVar17 = *(long *)(param_1 + 0x18);
  lStack_68 = 0;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  if (lVar17 != 0) {
    iVar2 = *(int *)(lVar17 + 0x20);
    iVar3 = *(int *)(lVar17 + 0x24);
    lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb44e0);
    System_Collections_Generic_SortedDictionary_int__object____ctor_2e6bf58
              (lVar17,*(undefined8 *)puVar7);
    puVar8 = PTR_DAT_04cb44c8;
    puVar10 = PTR_DAT_04cb4488;
    puVar9 = PTR_DAT_04cad890;
    puVar7 = PTR_DAT_04caa160;
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 != 0) {
      iVar12 = 0;
      while (iVar12 < *(int *)(lVar13 + 0x18)) {
        lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar13,iVar12,*(undefined8 *)puVar10);
        if (lVar13 == 0) goto LAB_0236181c;
        if (*(int *)(lVar13 + 0xa0) == 0) {
          if (((*(long *)(param_1 + 0x28) == 0) ||
              (lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (*(long *)(param_1 + 0x28),iVar12,*(undefined8 *)puVar10),
              lVar13 == 0)) || (lVar17 == 0)) goto LAB_0236181c;
          uVar4 = *(undefined4 *)(lVar13 + 0x9c);
          uVar14 = System_Collections_Generic_SortedDictionary_int__object___TryGetValue_2e6c840
                             (lVar17,uVar4,&lStack_68,*(undefined8 *)puVar8);
          if ((uVar14 & 1) == 0) {
            lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
            System_Collections_Generic_List_int____ctor_3a2b7dc
                      (lVar13,*(undefined8 *)PTR_DAT_04cad6e8);
            lStack_68 = lVar13;
            System_Collections_Generic_SortedDictionary_int__object___set_Item_2e6c234
                      (lVar17,uVar4,lVar13,*(undefined8 *)PTR_DAT_04cb44d8);
          }
          if (lStack_68 == 0) goto LAB_0236181c;
          lVar13 = *(long *)(lStack_68 + 0x10);
          lVar18 = *(long *)puVar7;
          *(int *)(lStack_68 + 0x1c) = *(int *)(lStack_68 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_0236181c;
          uVar5 = *(uint *)(lStack_68 + 0x18);
          if (uVar5 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lStack_68 + 0x18) = uVar5 + 1;
            *(int *)(lVar13 + (long)(int)uVar5 * 4 + 0x20) = iVar12;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lStack_68,iVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar13 = *(long *)(param_1 + 0x28);
        iVar12 = iVar12 + 1;
        if (lVar13 == 0) goto LAB_0236181c;
      }
      if (lVar17 != 0) {
        System_Collections_Generic_SortedDictionary_int__object___GetEnumerator_2e6c75c
                  (&uStack_f0,lVar17,*(undefined8 *)PTR_DAT_04cb44c0);
        puStack_98 = puStack_e8;
        uStack_a0 = uStack_f0;
        uStack_88 = uStack_d8;
        uStack_90 = uStack_e0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        do {
          do {
            uVar14 = System_Collections_Generic_SortedDictionary_Enumerator_int__object___MoveNext_3631c38
                               (&uStack_a0,*(undefined8 *)PTR_DAT_04cb4498);
            if ((uVar14 & 1) == 0) {
              System_Collections_Generic_SortedDictionary_Enumerator_int__object___Dispose_3631cb4
                        (&uStack_a0,*(undefined8 *)PTR_DAT_04cb4490);
              return;
            }
            iVar12 = System_Collections_Generic_SortedDictionary_Enumerator_int__object___get_Current_3631d30
                               (&uStack_a0,*(undefined8 *)PTR_DAT_04cb44a0);
            puVar8 = PTR_DAT_04caa1c8;
            if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar20 = *(int *)(extraout_x1 + 0x18);
            bVar11 = *(int *)(param_1 + 0x50) != iVar12;
          } while ((iVar20 <= iVar2) && (bVar11 || iVar20 <= iVar3));
          if (iVar20 <= iVar2 || (bVar11 || iVar20 <= iVar3)) {
            iVar12 = iVar3;
            if (bVar11 || iVar20 <= iVar3) {
              iVar12 = iVar2;
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            iVar12 = System_Math__Min_4831118(iVar2,iVar3,0);
          }
          lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
          System_Collections_Generic_List_int____ctor_3a2b7dc
                    (lVar17,*(undefined8 *)PTR_DAT_04cad6e8);
          lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
          System_Collections_Generic_List_int____ctor_3a2b7dc
                    (lVar13,*(undefined8 *)PTR_DAT_04cad6e8);
          System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                    (&uStack_f0,extraout_x1,*(undefined8 *)PTR_DAT_04cad8a0);
          uStack_b0 = uStack_e0;
          puStack_b8 = puStack_e8;
          uStack_c0 = uStack_f0;
          uStack_f0 = 0;
          puStack_e8 = &uStack_c0;
          while (uVar15 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                    (&uStack_c0,*(undefined8 *)puVar9), uVar14 = uStack_b0,
                (uVar15 & 1) != 0) {
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar5 = (uint)uStack_b0;
            lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(param_1 + 0x28),uStack_b0 & 0xffffffff,
                                *(undefined8 *)puVar10);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(uint *)(param_2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar1 = lVar13;
            if (*(int *)(lVar18 + 0x9c) != *(int *)(param_2 + (long)(int)uVar5 * 4 + 0x20)) {
              lVar1 = lVar17;
            }
            if (lVar1 == 0) {
LAB_02361b54:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar18 = *(long *)(lVar1 + 0x10);
            lVar19 = *(long *)puVar7;
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_02361b54;
            uVar6 = *(uint *)(lVar1 + 0x18);
            if (uVar6 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar1 + 0x18) = uVar6 + 1;
              *(uint *)(lVar18 + (long)(int)uVar6 * 4 + 0x20) = uVar5;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar1,uVar14 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                    (&uStack_c0,*(undefined8 *)PTR_DAT_04cad8c8);
          uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1c80);
          System_Comparison_int____ctor_3325d5c(uVar16,param_1,*(undefined8 *)PTR_DAT_04cb44b8,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_int___Sort_3a2da68
                    (lVar17,uVar16,*(undefined8 *)PTR_DAT_04cb30e8);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          iVar20 = *(int *)(lVar13 + 0x18);
          System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                    (&uStack_f0,lVar17,*(undefined8 *)PTR_DAT_04cad8a0);
          uStack_b0 = uStack_e0;
          puStack_b8 = puStack_e8;
          uStack_c0 = uStack_f0;
          uStack_f0 = 0;
          puStack_e8 = &uStack_c0;
          while (uVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                    (&uStack_c0,*(undefined8 *)puVar9), (uVar14 & 1) != 0) {
            if (iVar20 < iVar12) {
              iVar20 = iVar20 + 1;
            }
            else {
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar5 = (uint)uStack_b0;
              lVar13 = (long)(int)(uint)uStack_b0;
              lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (*(long *)(param_1 + 0x28),uStack_b0 & 0xffffffff,
                                  *(undefined8 *)puVar10);
              if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(uint *)(param_2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0
                        (lVar17,*(undefined4 *)(param_2 + lVar13 * 4 + 0x20),1);
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                    (&uStack_c0,*(undefined8 *)PTR_DAT_04cad8c8);
        } while( true );
      }
    }
  }
LAB_0236181c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

