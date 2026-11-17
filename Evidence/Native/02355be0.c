/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$RefreshBotsData
void Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$RefreshBotsData
   void Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9bfef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf718);
    FUN_02132f7c(PTR_DAT_04caf720);
    FUN_02132f7c(PTR_DAT_04caf728);
    FUN_02132f7c(PTR_DAT_04caf730);
    FUN_02132f7c(PTR_DAT_04cb3ea0);
    FUN_02132f7c(PTR_DAT_04cb11d8);
                    /* try { // try from 02355c5c to 02455c83 has its CatchHandler @ 02355f54 */
    FUN_02132f7c(PTR_DAT_04cb3ea8);
    bRam0000000004f9bfef = 1;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x2c) != 3) {
      return;
    }
    if (*(long *)(lVar12 + 0x18) != 0) {
      if (*(int *)(*(long *)(lVar12 + 0x18) + 0x18) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        return;
      }
      lVar12 = Dino_BusSand_App_Meta_RacingRobotSession__GetRankings_2263304
                         (*(long *)(param_1 + 0x58),0);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x18) == 0) {
          return;
        }
        iVar3 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(param_1,0xffffffff);
                    /* try { // try from 02355cc0 to 02455ceb has its CatchHandler @ 02355f50 */
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar5 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468
                            (*(long *)(param_1 + 0x10));
          if (lVar5 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = *(int *)(lVar5 + 0x28);
          }
          uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__CheckCanActiveBots_22563b8(param_1);
                    /* try { // try from 02355cf4 to 02455d03 has its CatchHandler @ 02355f3c */
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar5 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468
                              (*(long *)(param_1 + 0x10));
            puVar2 = PTR_DAT_04caf720;
            puVar1 = PTR_DAT_04caf718;
                    /* try { // try from 02355d04 to 02455d0f has its CatchHandler @ 02355f44 */
                    /* try { // try from 02355d10 to 02455f23 has its CatchHandler @ 02355760 */
            if (0 < *(int *)(lVar12 + 0x18)) {
              iVar13 = 0;
              do {
                auVar15 = System_Collections_Generic_List_RacingRanking___get_Item_3a9a630
                                    (lVar12,iVar13,*(undefined8 *)PTR_DAT_04cb3ea8);
                if ((*(long *)(param_1 + 0x10) == 0) ||
                   (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 == 0))
                goto LAB_02355fa8;
                System_Collections_Generic_List_object___GetEnumerator_3a825f0
                          (&uStack_98,lVar6,*(undefined8 *)PTR_DAT_04caf730);
                uStack_80 = uStack_98;
                uStack_98 = 0;
                puStack_78 = puStack_90;
                lStack_70 = lStack_88;
                puStack_90 = &uStack_80;
                do {
                  uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&uStack_80,*(undefined8 *)puVar2);
                  lVar6 = lStack_70;
                  if ((uVar7 & 1) == 0) {
                    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                              (&uStack_80,*(undefined8 *)puVar1);
                    goto LAB_02355ec4;
                  }
                  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                } while (*(int *)(lStack_70 + 0x10) != auVar15._0_4_);
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_80,*(undefined8 *)puVar1);
                *(int *)(lVar6 + 0x14) = auVar15._4_4_;
                *(int *)(lVar6 + 0x28) = iVar13 + 1;
                if (iVar3 <= auVar15._4_4_) {
                  if ((auVar15._8_8_ & 1) == 0) {
                    if (lVar5 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = *(undefined4 *)(lVar5 + 0x14);
                    }
                    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355fa8;
                    lVar8 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
                    if (lVar8 == 0) {
                      uVar10 = 0xffffffff;
                    }
                    else {
                      uVar10 = *(undefined4 *)(lVar8 + 0x28);
                    }
                    Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c
                              (param_1,3,uVar14,uVar14,iVar11,uVar10,0);
                    uVar9 = 5;
                  }
                  else {
                    Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c
                              (param_1,1,iVar3 + -1,iVar3,iVar11,1,1);
                    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355fa8;
                    uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x78);
                    lVar8 = Dino_BusSand_App_Meta_YachtRacingCore__StageInfo_2254fe0(param_1,uVar14)
                    ;
                    if (lVar8 == 0) {
                      uVar10 = 0xffffffff;
                    }
                    else {
                      uVar10 = *(undefined4 *)(lVar8 + 0x14);
                    }
                    Dino_BusSand_App_Meta_YachtRacingCore__TrackReward_225709c
                              (param_1,0,uVar14,uVar10);
                    uVar9 = 6;
                  }
                  Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,uVar9);
                }
                if (*(char *)(lVar6 + 0x2d) == '\0' && ((uVar4 ^ 0xffffffff) & 1) == 0) {
                  *(undefined1 *)(lVar6 + 0x2d) = 1;
                }
LAB_02355ec4:
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(lVar12 + 0x18));
            }
            if (*(long *)(param_1 + 0x10) != 0) {
              lVar12 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
                    /* try { // try from 02355f24 to 02455f27 has its CatchHandler @ 02355fa0 */
              if (lVar12 == 0) {
                    /* try { // try from 02355f30 to 02455f33 has its CatchHandler @ 02355f40 */
                iVar3 = -1;
              }
              else {
                    /* try { // try from 02355f28 to 02455f2b has its CatchHandler @ 02355f98 */
                iVar3 = *(int *)(lVar12 + 0x28);
                    /* try { // try from 02355f2c to 02455f2f has its CatchHandler @ 02355f48 */
              }
                    /* try { // try from 02355f34 to 02455f6f has its CatchHandler @ 02355760 */
                    /* catch() { ... } // from try @ 02355cf4 with catch @ 02355f3c */
              if (iVar11 != iVar3) {
                    /* catch() { ... } // from try @ 02355f30 with catch @ 02355f40 */
                    /* catch() { ... } // from try @ 02355d04 with catch @ 02355f44 */
                    /* catch() { ... } // from try @ 02355f2c with catch @ 02355f48 */
                    /* catch() { ... } // from try @ 02355ad0 with catch @ 02355f4c */
                if ((*(long *)(param_1 + 0x10) == 0) ||
                   (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar12 == 0))
                goto LAB_02355fa8;
                    /* catch() { ... } // from try @ 02355cc0 with catch @ 02355f50 */
                    /* catch() { ... } // from try @ 02355c5c with catch @ 02355f54 */
                System_Collections_Generic_List_object___GetEnumerator_3a825f0
                          (&uStack_98,lVar12,*(undefined8 *)PTR_DAT_04caf730);
                puVar1 = PTR_DAT_04caf720;
                    /* try { // try from 02355f70 to 02455f73 has its CatchHandler @ 02355f80 */
                puStack_78 = puStack_90;
                uStack_80 = uStack_98;
                lStack_70 = lStack_88;
                    /* catch() { ... } // from try @ 02355f70 with catch @ 02355f80 */
                    /* try { // try from 02355f84 to 02455f8b has its CatchHandler @ 02355fe8 */
                uStack_98 = 0;
                puStack_90 = &uStack_80;
                    /* try { // try from 02355f8c to 02455fc3 has its CatchHandler @ 02355760 */
                    /* catch() { ... } // from try @ 02355ae0 with catch @ 02355f90 */
                    /* catch() { ... } // from try @ 02355afc with catch @ 02355f94 */
                while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                         (&uStack_80,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 02355f28 with catch @ 02355f98 */
                    /* catch() { ... } // from try @ 02355aec with catch @ 02355f9c */
                  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                    /* catch() { ... } // from try @ 02355f24 with catch @ 02355fa0 */
                  *(undefined1 *)(lStack_70 + 0x2d) = 1;
                    /* catch() { ... } // from try @ 02355a9c with catch @ 02355fa4 */
                }
                    /* catch() { ... } // from try @ 02355f84 with catch @ 02355fe8
                       catch() { ... } // from try @ 02355fd8 with catch @ 02355fe8 */
                FUN_01e784d8(&uStack_98);
              }
              lVar12 = *(long *)(param_1 + 0x28);
              if (lVar12 != 0) {
                (**(code **)(lVar12 + 0x18))
                          (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
              }
              lVar12 = *(long *)(param_1 + 0x38);
              if (lVar12 == 0) {
                return;
              }
              (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_02355fa8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02355a38 with catch @ 02355fa8 */
  FUN_02133224();
}

