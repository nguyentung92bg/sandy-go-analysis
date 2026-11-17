/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$Build
System_Collections_Generic_List_RacingRobotAgent__o* Dino_BusSand_App_Meta_RacingRobotLineup__Build (int32_t stage, float userScore, Dino_BusSand_App_Meta_RacingStageConfig_o* stageCfg, System_Collections_Generic_List_RacingRobotGroupConfig__o* groups, float userAvgTime, System_Random_o* rng, int32_t* groupId, float s1, float s2, float s3, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotLineup$$Build
   System_Collections_Generic_List_RacingRobotAgent__o*
   Dino_BusSand_App_Meta_RacingRobotLineup__Build (int32_t stage, float userScore,
   Dino_BusSand_App_Meta_RacingStageConfig_o* stageCfg,
   System_Collections_Generic_List_RacingRobotGroupConfig__o* groups, float userAvgTime,
   System_Random_o* rng, int32_t* groupId, float s1, float s2, float s3, const MethodInfo* method);
    */

long Dino_BusSand_App_Meta_RacingRobotLineup__Build_2260700
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8,undefined8 param_9,
               undefined4 *param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  
  puVar5 = PTR_DAT_04cb42f0;
  puVar4 = PTR_DAT_04cb42e8;
  if ((bRam0000000004f9c050 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4428);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cb4430);
    FUN_02132f7c(PTR_DAT_04cb4438);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cb42f8);
    FUN_02132f7c(PTR_DAT_04cb4400);
    FUN_02132f7c(PTR_DAT_04cb4440);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cb4448);
    FUN_02132f7c(PTR_DAT_04cb4408);
    FUN_02132f7c(PTR_DAT_04cb42f0);
    FUN_02132f7c(PTR_DAT_04cb4450);
    FUN_02132f7c(PTR_DAT_04cb4458);
    FUN_02132f7c(PTR_DAT_04cb42e8);
    FUN_02132f7c(PTR_DAT_04cb4410);
    FUN_02132f7c(PTR_DAT_04cb4418);
    bRam0000000004f9c050 = 1;
  }
  *param_10 = 0;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)puVar5);
  puVar8 = PTR_DAT_04cb4430;
  puVar7 = PTR_DAT_04cb4418;
  puVar6 = PTR_DAT_04cb4400;
  puVar5 = PTR_DAT_04cb42f8;
  puVar4 = PTR_DAT_04cad890;
  if (param_8 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_e8,param_8,*(undefined8 *)PTR_DAT_04cb4440);
    uStack_a0 = uStack_d8;
    puStack_a8 = puStack_e0;
    uStack_b0 = uStack_e8;
    uStack_e8 = 0;
    puStack_e0 = &uStack_b0;
LAB_023608d4:
    uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_b0,*(undefined8 *)puVar8);
    uVar12 = uStack_a0;
    if ((uVar10 & 1) != 0) {
      if (uStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar10 = Dino_BusSand_App_Meta_RacingRobotLineup__StageMatches_2264a2c
                         (*(undefined8 *)(uStack_a0 + 0x38),param_6);
      if ((((uVar10 & 1) != 0) && (*(float *)(uVar12 + 0x2c) <= param_1)) &&
         (param_1 <= *(float *)(uVar12 + 0x30))) {
        if (lVar9 != 0) {
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar16 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar3 = *(uint *)(lVar9 + 0x18);
            if (uVar3 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              puVar11 = (ulong *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
              *puVar11 = uVar12;
              thunk_FUN_02134474(puVar11,uVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar9,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023608d4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023608d4;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_b0,*(undefined8 *)PTR_DAT_04cb4428);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_e8,param_8,*(undefined8 *)PTR_DAT_04cb4440);
        uStack_a0 = uStack_d8;
        puStack_a8 = puStack_e0;
        uStack_b0 = uStack_e8;
        uStack_e8 = 0;
        puStack_e0 = &uStack_b0;
        while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_b0,*(undefined8 *)puVar8), uVar12 = uStack_a0,
              (uVar10 & 1) != 0) {
          if (uStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar10 = Dino_BusSand_App_Meta_RacingRobotLineup__StageMatches_2264a2c
                             (*(undefined8 *)(uStack_a0 + 0x38),param_6);
          if ((uVar10 & 1) != 0) {
            lVar15 = *(long *)(lVar9 + 0x10);
            lVar16 = *(long *)puVar5;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar3 = *(uint *)(lVar9 + 0x18);
            if (uVar3 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              puVar11 = (ulong *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
              *puVar11 = uVar12;
              thunk_FUN_02134474(puVar11,uVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar9,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_b0,*(undefined8 *)PTR_DAT_04cb4428);
        if (*(int *)(lVar9 + 0x18) == 0) {
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4410);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (lVar9,*(undefined8 *)PTR_DAT_04cb4408);
          return lVar9;
        }
      }
      lVar9 = Dino_BusSand_App_Meta_RacingRobotLineup__PickByWeight_2264af4(lVar9,param_9);
      lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4410);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar15,*(undefined8 *)PTR_DAT_04cb4408)
      ;
      if ((lVar9 != 0) &&
         (lVar16 = Dino_BusSand_App_Meta_RacingRobotLineup__ParseIds_2264df0
                             (*(undefined8 *)(lVar9 + 0x40)), lVar16 != 0)) {
        System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                  (&uStack_e8,lVar16,*(undefined8 *)PTR_DAT_04cad8a0);
        uStack_c0 = uStack_d8;
        puStack_c8 = puStack_e0;
        uStack_d0 = uStack_e8;
        uStack_e8 = 0;
        puStack_e0 = &uStack_d0;
LAB_02360ae0:
        uVar12 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                           (&uStack_d0,*(undefined8 *)puVar4);
        if ((uVar12 & 1) != 0) {
          lVar16 = Dino_BusSand_App_Meta_RacingRobotConfig__Load_225cfe8(uStack_c0 & 0xffffffff);
          if (lVar16 != 0) {
            if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar18 = Dino_BusSand_App_Meta_RacingRobotLineup__CalcRobotScore_2264f58
                               (param_2,param_1,lVar16,*(undefined4 *)(param_7 + 0x18),param_9);
            uVar1 = *(undefined4 *)(param_7 + 0x18);
            uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
            Dino_BusSand_App_Meta_RacingRobotAgent___ctor_225ed6c
                      (param_1,uVar18,0,param_3,param_4,param_5,uVar13,lVar16,uVar1,param_9,0);
            if (lVar15 != 0) {
              lVar16 = *(long *)(lVar15 + 0x10);
              lVar17 = *(long *)puVar6;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar16 != 0) {
                uVar3 = *(uint *)(lVar15 + 0x18);
                if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                  puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar14 = uVar13;
                  thunk_FUN_02134474(puVar14,uVar13);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar15,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_02360ae0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_02360ae0;
        }
        System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                  (&uStack_d0,*(undefined8 *)PTR_DAT_04cad8c8);
        if ((0 < *(int *)(lVar9 + 0x1c)) &&
           (uVar12 = System_String__IsNullOrWhiteSpace_46d20a0(*(undefined8 *)(lVar9 + 0x50),0),
           (uVar12 & 1) == 0)) {
          uVar13 = Dino_BusSand_App_Meta_RacingRobotLineup__ParseIds_2264df0
                             (*(undefined8 *)(lVar9 + 0x50));
          Dino_BusSand_App_Meta_RacingRobotLineup__FillThreatRobots_2265034
                    (param_1,param_2,param_3,param_4,param_5,lVar15,lVar9,uVar13,param_7,param_9);
        }
        puVar4 = PTR_DAT_04cb4448;
        if ((lVar15 != 0) && (param_7 != 0)) {
          iVar2 = *(int *)(lVar15 + 0x18);
          if (*(int *)(param_7 + 0x1c) < iVar2) {
            do {
              System_Collections_Generic_List_object___RemoveAt_3a833a0
                        (lVar15,iVar2 + -1,*(undefined8 *)puVar4);
              iVar2 = *(int *)(lVar15 + 0x18);
            } while (*(int *)(param_7 + 0x1c) < iVar2);
          }
          *param_10 = *(undefined4 *)(lVar9 + 0x10);
          return lVar15;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

