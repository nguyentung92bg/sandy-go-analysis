/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$ReselectCompeting
void Dino_BusSand_App_Meta_RacingRobotSession__ReselectCompeting (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, System_Collections_Generic_List_RacingRobotAgent__o* candidates, int32_t playerProgress, System_Collections_Generic_HashSet_RacingRobotAgent__o* old, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$ReselectCompeting
   void Dino_BusSand_App_Meta_RacingRobotSession__ReselectCompeting
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this,
   System_Collections_Generic_List_RacingRobotAgent__o* candidates, int32_t playerProgress,
   System_Collections_Generic_HashSet_RacingRobotAgent__o* old, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__ReselectCompeting_22640b4
               (long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c04a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4590);
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4598);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb45a0);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb45a8);
    FUN_02132f7c(PTR_DAT_04cb45b0);
    FUN_02132f7c(PTR_DAT_04cb4588);
    FUN_02132f7c(PTR_DAT_04cb44f8);
    FUN_02132f7c(PTR_DAT_04cb45b8);
    FUN_02132f7c(PTR_DAT_04cb45c0);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04cb45c8);
    FUN_02132f7c(PTR_DAT_04cb45d0);
    FUN_02132f7c(PTR_DAT_04cb4458);
    FUN_02132f7c(PTR_DAT_04cb4410);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb45d8);
    FUN_02132f7c(PTR_DAT_04cb45e0);
    bRam0000000004f9c04a = 1;
  }
  lVar15 = *(long *)(param_1 + 0x20);
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  if (((lVar15 != 0) && (plVar12 = *(long **)(param_1 + 0x38), plVar12 != (long *)0x0)) &&
     (uVar10 = (**(code **)(*plVar12 + 0x198))
                         (plVar12,*(undefined4 *)(lVar15 + 0x30),*(int *)(lVar15 + 0x34) + 1,
                          *(undefined8 *)(*plVar12 + 0x1a0)), param_2 != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar11 = System_Math__Min_4831118(uVar10,uVar3,0);
    puVar9 = PTR_DAT_04cb45a0;
    puVar8 = PTR_DAT_04cb44f8;
    puVar7 = PTR_DAT_04cb4478;
    puVar6 = PTR_DAT_04cb4468;
    lVar15 = *(long *)(param_1 + 0x20);
    if ((lVar15 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      if (*(long *)(param_1 + 0x48) != 0) {
        iVar4 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
        iVar1 = *(int *)(lVar15 + 0x38);
        iVar2 = *(int *)(lVar15 + 0x3c);
        System_Collections_Generic_HashSet_object___Clear_37e59fc
                  (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb4588);
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_b8,param_2,*(undefined8 *)puVar7);
        lStack_70 = lStack_a8;
        puStack_78 = puStack_b0;
        uStack_80 = uStack_b8;
        uStack_b8 = 0;
        puStack_b0 = &uStack_80;
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar6), lVar15 = lStack_70,
              (uVar13 & 1) != 0) {
          if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (iVar11 <= *(int *)(*(long *)(param_1 + 0x48) + 0x20)) break;
          if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar13 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                             (param_4,lStack_70,*(undefined8 *)puVar8);
          if ((uVar13 & 1) != 0) {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar5 = *(int *)(lVar15 + 0x9c) - param_3;
            if ((iVar1 <= iVar5) && (iVar5 <= iVar2)) {
              if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_HashSet_object___Add_37e654c
                        (*(long *)(param_1 + 0x48),lVar15,*(undefined8 *)PTR_DAT_04cb45b0);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
        if (*(long *)(param_1 + 0x48) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) < iVar11) {
            lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4410);
            System_Collections_Generic_List_object____ctor_3a814c8
                      (lVar15,param_2,*(undefined8 *)PTR_DAT_04cb45d0);
            uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb45d8);
            System_Predicate_object____ctor_2c4e748
                      (uVar14,param_1,*(undefined8 *)PTR_DAT_04cb45e0,0);
            if (lVar15 == 0) goto LAB_0236465c;
            System_Collections_Generic_List_object___RemoveAll_3a83234
                      (lVar15,uVar14,*(undefined8 *)PTR_DAT_04cb45c8);
            Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_object__26ec150
                      (lVar15,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb4590);
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_b8,lVar15,*(undefined8 *)PTR_DAT_04cb4478);
            puVar7 = PTR_DAT_04cb45b0;
            lStack_70 = lStack_a8;
            puStack_78 = puStack_b0;
            uStack_80 = uStack_b8;
            uStack_b8 = 0;
            puStack_b0 = &uStack_80;
            while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_80,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
              lVar15 = *(long *)(param_1 + 0x48);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (iVar11 <= *(int *)(lVar15 + 0x20)) break;
              System_Collections_Generic_HashSet_object___Add_37e654c
                        (lVar15,lStack_70,*(undefined8 *)puVar7);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            System_Collections_Generic_HashSet_object___GetEnumerator_37e5ed0
                      (&uStack_b8,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb45b8);
            lStack_90 = lStack_a8;
            puStack_98 = puStack_b0;
            uStack_a0 = uStack_b8;
            uStack_b8 = 0;
            puStack_b0 = &uStack_a0;
            while (uVar13 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext_35d6004
                                      (&uStack_a0,*(undefined8 *)puVar9), lVar15 = lStack_90,
                  puVar6 = PTR_DAT_04cb4598, (uVar13 & 1) != 0) {
              if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar11 = *(int *)(lStack_90 + 0x9c) - param_3;
              if ((iVar11 < iVar1) || (iVar2 < iVar11)) {
                plVar12 = *(long **)(param_1 + 0x38);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                iVar11 = (**(code **)(*plVar12 + 0x198))
                                   (plVar12,iVar1,iVar2 + 1,*(undefined8 *)(*plVar12 + 0x1a0));
                if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar10 = System_Math__Min_4831118(iVar4 + -1,iVar11 + param_3,0);
                uVar10 = System_Math__Max_4830fc8(0,uVar10,0);
                Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lVar15,uVar10,0);
              }
              *(undefined4 *)(lVar15 + 0xa0) = 3;
            }
            System_Collections_Generic_HashSet_Enumerator_object___Dispose_35d6000
                      (&uStack_a0,*(undefined8 *)PTR_DAT_04cb4598);
            if (param_4 != 0) {
              System_Collections_Generic_HashSet_object___GetEnumerator_37e5ed0
                        (&uStack_b8,param_4,*(undefined8 *)PTR_DAT_04cb45b8);
              lStack_90 = lStack_a8;
              puStack_98 = puStack_b0;
              uStack_a0 = uStack_b8;
              uStack_b8 = 0;
              puStack_b0 = &uStack_a0;
              while( true ) {
                uVar13 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext_35d6004
                                   (&uStack_a0,*(undefined8 *)puVar9);
                lVar15 = lStack_90;
                if ((uVar13 & 1) == 0) {
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose_35d6000
                            (&uStack_a0,*(undefined8 *)puVar6);
                  return;
                }
                if (*(long *)(param_1 + 0x48) == 0) break;
                uVar13 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                                   (*(long *)(param_1 + 0x48),lStack_90,*(undefined8 *)puVar8);
                if ((uVar13 & 1) == 0) {
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (param_3 < *(int *)(lVar15 + 0x9c)) {
                    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar10 = System_Math__Max_4830fc8(0,param_3 + -1,0);
                    Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lVar15,uVar10,0);
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
    }
  }
LAB_0236465c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

