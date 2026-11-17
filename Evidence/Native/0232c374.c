/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$Lose
void Dino_BusSand_App_Meta_ClimbTowerFeature__Lose (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$Lose
   void Dino_BusSand_App_Meta_ClimbTowerFeature__Lose (Dino_BusSand_App_Meta_ClimbTowerFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__Lose_222c374(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9be38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be38 = 1;
  }
  uVar9 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(2,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(param_1);
  if ((uVar9 & 1) == 0) {
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__InActivityTime_2229880();
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData_222aa3c(param_1);
    uVar11 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(2,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if ((uVar11 & 1) == 0) {
      return;
    }
    *(undefined1 *)((long)param_1 + 0x1a) = 1;
    return;
  }
  uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654(param_1);
  if ((uVar9 & 1) == 0) {
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone_22298d4(param_1);
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__InActivityTime_2229880();
    puVar3 = PTR_DAT_04caf910;
    if ((uVar9 & 1) == 0) {
      return;
    }
    if ((bRam0000000004f9be2f & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb2e18);
      FUN_02132f7c(PTR_DAT_04caf910);
      bRam0000000004f9be2f = 1;
    }
    iVar8 = Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(2,0);
    lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar3);
    if (lVar17 != 0) {
      if (*(char *)(lVar17 + 0x31) != '\0') {
LAB_0232af68:
        uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData_222aa3c(param_1);
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x1a) = 1;
        }
        return;
      }
      lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                         (param_1,*(undefined8 *)puVar3);
      if (lVar17 != 0) {
        if (iVar8 <= *(int *)(lVar17 + 0x34) + 1) goto LAB_0232af68;
        lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (param_1,*(undefined8 *)puVar3);
        if (lVar17 != 0) {
          lVar10 = *(long *)PTR_DAT_04cb2e18;
          *(int *)(lVar17 + 0x34) = *(int *)(lVar17 + 0x34) + 1;
Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc:
          if ((bRam0000000004f9d943 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cac668);
            bRam0000000004f9d943 = 1;
          }
          puVar3 = PTR_DAT_04cac668;
          if (param_1[2] == 0) {
            return;
          }
          uVar14 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
          lVar17 = param_1[2];
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          puVar3 = PTR_DAT_04cabaf8;
          if ((bRam0000000004f9d81f & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cc4908,lVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20));
            FUN_02132f7c(PTR_DAT_04cc4910);
            FUN_02132f7c(PTR_DAT_04cc4918);
            FUN_02132f7c(PTR_DAT_04cc4930);
            FUN_02132f7c(PTR_DAT_04cc4920);
            FUN_02132f7c(PTR_DAT_04cb4790);
            FUN_02132f7c(PTR_DAT_04cb4798);
            FUN_02132f7c(PTR_DAT_04cabaf8);
            FUN_02132f7c(PTR_DAT_04cc4938);
            bRam0000000004f9d81f = 1;
          }
          uStack_60 = 0;
          uStack_58 = (undefined8 *)0x0;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar10 = *(long *)puVar3;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar10 != 0) {
            if (*(long *)(lVar10 + 0x130) == 0) {
              uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
              System_Collections_Generic_List_object____ctor_3a8138c
                        (uVar12,*(undefined8 *)PTR_DAT_04cb4790);
              *(undefined8 *)(lVar10 + 0x130) = uVar12;
              thunk_FUN_02134474(lVar10 + 0x130,uVar12);
            }
            uVar12 = UnityEngine_JsonUtility__ToJson_44323ac(lVar17,0);
            puVar5 = PTR_DAT_04cc4910;
            if (*(long *)(lVar10 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_78,*(long *)(lVar10 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
            lVar17 = CONCAT44(uStack_64,uStack_68);
            uStack_58 = uStack_70;
            uStack_60 = uStack_78;
            uStack_78 = 0;
            uStack_70 = &uStack_60;
            do {
              uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_60,*(undefined8 *)puVar5);
              if ((uVar9 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                lVar10 = *(long *)(lVar10 + 0x130);
                lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
                Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar17,0);
                if (lVar17 != 0) {
                  *(undefined8 *)(lVar17 + 0x10) = uVar14;
                  thunk_FUN_02134474((undefined8 *)(lVar17 + 0x10),uVar14);
                  *(undefined8 *)(lVar17 + 0x18) = uVar12;
                  thunk_FUN_02134474((undefined8 *)(lVar17 + 0x18),uVar12);
                  if (lVar10 != 0) {
                    lVar15 = *(long *)(lVar10 + 0x10);
                    lVar16 = *(long *)PTR_DAT_04cc4930;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar15 != 0) {
                      uVar2 = *(uint *)(lVar10 + 0x18);
                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                        plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar13 = lVar17;
                        thunk_FUN_02134474(plVar13,lVar17);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar10,lVar17,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                      return;
                    }
                  }
                }
                goto LAB_028ef87c;
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar9 = System_String__op_Equality_46d1108(*(undefined8 *)(lVar17 + 0x10),uVar14,0);
            } while ((uVar9 & 1) == 0);
            *(undefined8 *)(lVar17 + 0x18) = uVar12;
            thunk_FUN_02134474((undefined8 *)(lVar17 + 0x18),uVar12);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
  lVar17 = param_1[4];
  if (lVar17 != 0) {
    if (*(long *)(lVar17 + 0x18) == 0) {
      return;
    }
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimAllReward_22299e4(param_1);
    puVar3 = PTR_DAT_04caf910;
    if ((uVar9 & 1) == 0) {
      lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                         (param_1,*(undefined8 *)PTR_DAT_04caf910);
      if (lVar10 == 0) goto LAB_0232c5d4;
      if (*(int *)(lVar17 + 0x18) == 0) {
LAB_0232c5d8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(int *)(lVar10 + 0x10) != *(int *)(lVar17 + 0x20)) {
        lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (param_1,*(undefined8 *)puVar3);
        if (lVar10 == 0) goto LAB_0232c5d4;
        if (*(uint *)(lVar17 + 0x18) == 0) goto LAB_0232c5d8;
        if (*(int *)(lVar10 + 0x10) <
            *(int *)(lVar17 + ((long)(((ulong)*(uint *)(lVar17 + 0x18) << 0x20) + -0x100000000) >>
                              0x1e) + 0x20)) {
          Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast_222b058(param_1);
          lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                             (param_1,*(undefined8 *)puVar3);
          if (lVar17 != 0) {
            iVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__PreArchivePoint_2229d84
                              (param_1,*(undefined4 *)(lVar17 + 0x10),1);
            lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                               (param_1,*(undefined8 *)puVar3);
            if (lVar17 != 0) {
              Dino_BusSand_App_Meta_ClimbTowerFeature__TrackStageAdvance_222b9a4
                        (param_1,0,*(undefined4 *)(lVar17 + 0x10),iVar8,0);
              lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                 (param_1,*(undefined8 *)puVar3);
              if (lVar17 != 0) {
                if (iVar8 < *(int *)(lVar17 + 0x14)) {
                  Dino_BusSand_App_Meta_ClimbTowerFeature__ForceRecordRise_222b34c(param_1);
                }
                lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                   (param_1,*(undefined8 *)puVar3);
                if (lVar17 != 0) {
                  Dino_BusSand_App_Meta_ClimbTowerFeature__SetData_222af8c
                            (param_1,iVar8,*(undefined4 *)(lVar17 + 0x14));
                  uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__DeclinePlayed_2229c58(param_1);
                  if ((uVar9 & 1) == 0) {
                    lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                       (param_1,*(undefined8 *)puVar3);
                    if (lVar17 == 0) goto LAB_0232c5d4;
                    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsArchivePoint_2229ce4
                                      (param_1,*(undefined4 *)(lVar17 + 0x18));
                    if ((uVar9 & 1) == 0) {
                      return;
                    }
                  }
                  puVar3 = PTR_DAT_04caf910;
                  if ((bRam0000000004f9be31 & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04caf910);
                    bRam0000000004f9be31 = 1;
                  }
                  lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                     (param_1,*(undefined8 *)puVar3);
                  if (lVar17 != 0) {
                    iVar8 = *(int *)(lVar17 + 0x10);
                    lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                       (param_1,*(undefined8 *)puVar3);
                    puVar3 = PTR_DAT_04caf910;
                    if (lVar17 != 0) {
                      uVar7 = *(undefined4 *)(lVar17 + 0x10);
                      if ((bRam0000000004f9be30 & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cb2e18);
                        FUN_02132f7c(PTR_DAT_04caf910);
                        bRam0000000004f9be30 = 1;
                      }
                      lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                         (param_1,*(undefined8 *)puVar3);
                      if (lVar17 != 0) {
                        uVar14 = *(undefined8 *)puVar3;
                        *(int *)(lVar17 + 0x10) = iVar8;
                        lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                           (param_1,uVar14);
                        if (lVar17 != 0) {
                          if (*(int *)(lVar17 + 0x18) < iVar8) {
                            lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                               (param_1,*(undefined8 *)puVar3);
                            if (lVar17 == 0) goto LAB_0232b054;
                            *(int *)(lVar17 + 0x18) = iVar8;
                          }
                          lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                             (param_1,*(undefined8 *)puVar3);
                          puVar3 = PTR_DAT_04cb2e18;
                          if (lVar17 != 0) {
                            *(undefined4 *)(lVar17 + 0x14) = uVar7;
                            lVar10 = *(long *)puVar3;
                            goto Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc;
                          }
                        }
                      }
LAB_0232b054:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
          goto LAB_0232c5d4;
        }
      }
    }
    puVar3 = PTR_DAT_04caf910;
    lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (lVar17 != 0) {
      uVar7 = *(undefined4 *)(lVar17 + 0x10);
      lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                         (param_1,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_04ca9c20;
      if (lVar17 != 0) {
        uVar1 = *(undefined4 *)(lVar17 + 0x10);
        if ((bRam0000000004f9be3c & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac5c0);
          FUN_02132f7c(PTR_DAT_04caf910);
          FUN_02132f7c(PTR_DAT_04ca9c20);
          FUN_02132f7c(PTR_DAT_04cb2bb0);
          FUN_02132f7c(PTR_DAT_04cb2e30);
          FUN_02132f7c(PTR_DAT_04cb2b28);
          FUN_02132f7c(PTR_DAT_04cb2bc0);
          FUN_02132f7c(PTR_DAT_04cb2e38);
          FUN_02132f7c(PTR_DAT_04cb2b30);
          FUN_02132f7c(PTR_DAT_04cb2bd0);
          FUN_02132f7c(PTR_DAT_04cb2bd8);
          FUN_02132f7c(PTR_DAT_04cb2be0);
          FUN_02132f7c(PTR_DAT_04cb2be8);
          bRam0000000004f9be3c = 1;
        }
        plVar13 = (long *)FUN_02133068(*(undefined8 *)puVar3,0x10);
        puVar3 = PTR_DAT_04cb2b28;
        if (plVar13 == (long *)0x0) {
LAB_0232bf64:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
           (lVar17 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar13 + 0x40)),
           lVar17 == 0)) {
LAB_0232bf58:
          uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar14,0);
        }
        puVar5 = PTR_DAT_04cb2e30;
        if ((int)plVar13[3] != 0) {
          plVar13[4] = *(long *)puVar3;
          thunk_FUN_02134474();
          lVar17 = *(long *)puVar5;
          if ((lVar17 != 0) &&
             (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0))
          goto LAB_0232bf58;
          puVar3 = PTR_DAT_04cb2b30;
          if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
            plVar13[5] = *(long *)puVar5;
            thunk_FUN_02134474();
            lVar17 = *(long *)puVar3;
            if ((lVar17 != 0) &&
               (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0))
            goto LAB_0232bf58;
            if (2 < *(uint *)(plVar13 + 3)) {
              plVar13[6] = *(long *)puVar3;
              thunk_FUN_02134474();
              uVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo_222c7a4(param_1);
              puVar3 = PTR_DAT_04ca9ac8;
              uStack_58 = (undefined8 *)CONCAT44(uVar6,(undefined4)uStack_58);
              lVar17 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),(long)&uStack_58 + 4);
              if ((lVar17 != 0) &&
                 (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0)
                 ) goto LAB_0232bf58;
              puVar5 = PTR_DAT_04cb2bb0;
              if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                plVar13[7] = lVar17;
                thunk_FUN_02134474(plVar13 + 7,lVar17);
                lVar17 = *(long *)puVar5;
                if ((lVar17 != 0) &&
                   (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar17 == 0)) goto LAB_0232bf58;
                puVar4 = PTR_DAT_04cb2e38;
                if (4 < *(uint *)(plVar13 + 3)) {
                  plVar13[8] = *(long *)puVar5;
                  thunk_FUN_02134474();
                  uVar14 = *(undefined8 *)puVar4;
                  uStack_58 = (undefined8 *)CONCAT44(2,(undefined4)uStack_58);
                  lVar17 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),(long)&uStack_58 + 4);
                  if ((lVar17 != 0) &&
                     (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar10 == 0)) goto LAB_0232bf58;
                  puVar5 = PTR_DAT_04cb2be0;
                  if (5 < *(uint *)(plVar13 + 3)) {
                    plVar13[9] = lVar17;
                    thunk_FUN_02134474(plVar13 + 9,lVar17);
                    lVar17 = *(long *)puVar5;
                    if ((lVar17 != 0) &&
                       (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar17 == 0)) goto LAB_0232bf58;
                    if (6 < *(uint *)(plVar13 + 3)) {
                      plVar13[10] = *(long *)puVar5;
                      thunk_FUN_02134474();
                      uStack_58 = (undefined8 *)CONCAT44(uStack_58._4_4_,uVar7);
                      lVar17 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
                      if ((lVar17 != 0) &&
                         (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar10 == 0)) goto LAB_0232bf58;
                      puVar5 = PTR_DAT_04cb2bc0;
                      if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                        plVar13[0xb] = lVar17;
                        thunk_FUN_02134474(plVar13 + 0xb,lVar17);
                        lVar17 = *(long *)puVar5;
                        if ((lVar17 != 0) &&
                           (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar17 == 0)) goto LAB_0232bf58;
                        if (8 < *(uint *)(plVar13 + 3)) {
                          plVar13[0xc] = *(long *)puVar5;
                          thunk_FUN_02134474();
                          uStack_64 = uVar1;
                          lVar17 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_64);
                          if ((lVar17 != 0) &&
                             (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar10 == 0)) goto LAB_0232bf58;
                          puVar5 = PTR_DAT_04cb2be8;
                          if (9 < *(uint *)(plVar13 + 3)) {
                            plVar13[0xd] = lVar17;
                            thunk_FUN_02134474(plVar13 + 0xd,lVar17);
                            lVar17 = *(long *)puVar5;
                            if ((lVar17 != 0) &&
                               (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40))
                               , lVar17 == 0)) goto LAB_0232bf58;
                            puVar4 = PTR_DAT_04caf910;
                            if (10 < *(uint *)(plVar13 + 3)) {
                              plVar13[0xe] = *(long *)puVar5;
                              thunk_FUN_02134474();
                              lVar17 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                                 (param_1,*(undefined8 *)puVar4);
                              if (lVar17 == 0) goto LAB_0232bf64;
                              uStack_68 = *(undefined4 *)(lVar17 + 0x54);
                              lVar17 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_68);
                              if ((lVar17 != 0) &&
                                 (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)
                                                                      (*plVar13 + 0x40)),
                                 lVar10 == 0)) goto LAB_0232bf58;
                              puVar5 = PTR_DAT_04cb2bd8;
                              if (0xb < *(uint *)(plVar13 + 3)) {
                                plVar13[0xf] = lVar17;
                                thunk_FUN_02134474(plVar13 + 0xf,lVar17);
                                lVar17 = *(long *)puVar5;
                                if ((lVar17 != 0) &&
                                   (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar17 == 0)) goto LAB_0232bf58;
                                if (0xc < *(uint *)(plVar13 + 3)) {
                                  plVar13[0x10] = *(long *)puVar5;
                                  thunk_FUN_02134474();
                                  uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_RemainSec_222c84c
                                                    (param_1);
                                  uStack_70 = (undefined8 *)CONCAT44(uVar7,(undefined4)uStack_70);
                                  lVar17 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),
                                                        (long)&uStack_70 + 4);
                                  if ((lVar17 != 0) &&
                                     (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)
                                                                          (*plVar13 + 0x40)),
                                     lVar10 == 0)) goto LAB_0232bf58;
                                  puVar5 = PTR_DAT_04cb2bd0;
                                  if (0xd < *(uint *)(plVar13 + 3)) {
                                    plVar13[0x11] = lVar17;
                                    thunk_FUN_02134474(plVar13 + 0x11,lVar17);
                                    lVar17 = *(long *)puVar5;
                                    if ((lVar17 != 0) &&
                                       (lVar17 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)
                                                                            (*plVar13 + 0x40)),
                                       lVar17 == 0)) goto LAB_0232bf58;
                                    if (0xe < *(uint *)(plVar13 + 3)) {
                                      plVar13[0x12] = *(long *)puVar5;
                                      thunk_FUN_02134474();
                                      uStack_58 = (undefined8 *)((ulong)uStack_58 & 0xffffffff);
                                      lVar17 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),
                                                            (long)&uStack_58 + 4);
                                      if ((lVar17 != 0) &&
                                         (lVar10 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)
                                                                              (*plVar13 + 0x40)),
                                         lVar10 == 0)) goto LAB_0232bf58;
                                      puVar3 = PTR_DAT_04cac5c0;
                                      if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                        plVar13[0x13] = lVar17;
                                        thunk_FUN_02134474(plVar13 + 0x13,lVar17);
                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        Dino_BusSand_App_Analytics__Log_216d0c8(uVar14,plVar13,0);
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
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_0232c5d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

