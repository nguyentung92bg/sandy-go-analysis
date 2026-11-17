/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$OnLevelWin
void Dino_BusSand_App_Meta_ClimbTowerFeature__OnLevelWin (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t type, int32_t clearedLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$OnLevelWin
   void Dino_BusSand_App_Meta_ClimbTowerFeature__OnLevelWin
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t type, int32_t clearedLevel, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__OnLevelWin_222b6b0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 auStack_44 [3];
  
  if ((bRam0000000004f9be37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be37 = 1;
  }
  uVar9 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(2,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__CountLevelResult_222b618(param_1);
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
    puVar4 = PTR_DAT_04caf910;
    if ((uVar9 & 1) == 0) {
      return;
    }
    if ((bRam0000000004f9be2f & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb2e18);
      FUN_02132f7c(PTR_DAT_04caf910);
      bRam0000000004f9be2f = 1;
    }
    iVar6 = Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(2,0);
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar4);
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x31) != '\0') {
LAB_0232af68:
        uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData_222aa3c(param_1);
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x1a) = 1;
        }
        return;
      }
      lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                         (param_1,*(undefined8 *)puVar4);
      if (lVar10 != 0) {
        if (iVar6 <= *(int *)(lVar10 + 0x34) + 1) goto LAB_0232af68;
        lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (param_1,*(undefined8 *)puVar4);
        if (lVar10 != 0) {
          lVar13 = *(long *)PTR_DAT_04cb2e18;
          *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
          if ((bRam0000000004f9d943 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cac668);
            bRam0000000004f9d943 = 1;
          }
          puVar4 = PTR_DAT_04cac668;
          if (param_1[2] == 0) {
            return;
          }
          uVar15 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
          lVar10 = param_1[2];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          puVar4 = PTR_DAT_04cabaf8;
          if ((bRam0000000004f9d81f & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cc4908,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20));
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
          puStack_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar13 = *(long *)puVar4;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar4;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
          if (lVar13 != 0) {
            if (*(long *)(lVar13 + 0x130) == 0) {
              uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
              System_Collections_Generic_List_object____ctor_3a8138c
                        (uVar14,*(undefined8 *)PTR_DAT_04cb4790);
              *(undefined8 *)(lVar13 + 0x130) = uVar14;
              thunk_FUN_02134474(lVar13 + 0x130,uVar14);
            }
            uVar14 = UnityEngine_JsonUtility__ToJson_44323ac(lVar10,0);
            puVar5 = PTR_DAT_04cc4910;
            if (*(long *)(lVar13 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_78,*(long *)(lVar13 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
            uStack_50 = lStack_68;
            puStack_58 = puStack_70;
            uStack_60 = uStack_78;
            uStack_78 = 0;
            puStack_70 = &uStack_60;
            do {
              uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_60,*(undefined8 *)puVar5);
              lVar10 = uStack_50;
              if ((uVar9 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                lVar13 = *(long *)(lVar13 + 0x130);
                lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
                Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar10,0);
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x10) = uVar15;
                  thunk_FUN_02134474((undefined8 *)(lVar10 + 0x10),uVar15);
                  *(undefined8 *)(lVar10 + 0x18) = uVar14;
                  thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar14);
                  if (lVar13 != 0) {
                    lVar16 = *(long *)(lVar13 + 0x10);
                    lVar17 = *(long *)PTR_DAT_04cc4930;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar16 != 0) {
                      uVar7 = *(uint *)(lVar13 + 0x18);
                      if (uVar7 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar7 + 1;
                        plVar12 = (long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
                        *plVar12 = lVar10;
                        thunk_FUN_02134474(plVar12,lVar10);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar13,lVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                      return;
                    }
                  }
                }
                goto LAB_028ef87c;
              }
              if (uStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar9 = System_String__op_Equality_46d1108(*(undefined8 *)(uStack_50 + 0x10),uVar15,0)
              ;
            } while ((uVar9 & 1) == 0);
            *(undefined8 *)(lVar10 + 0x18) = uVar14;
            thunk_FUN_02134474((undefined8 *)(lVar10 + 0x18),uVar14);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
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
  iVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint_2229364(param_1);
  puVar4 = PTR_DAT_04caf910;
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)PTR_DAT_04caf910);
  if (lVar10 == 0) {
LAB_0232b9a0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar10 + 0x10);
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_0232b9a0;
  iVar2 = *(int *)(lVar10 + 0x10);
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  if (iVar2 < iVar6) {
    if (lVar10 == 0) goto LAB_0232b9a0;
    iVar6 = *(int *)(lVar10 + 0x10);
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone_22298d4(param_1);
    if (((uVar9 & 1) != 0) &&
       (((uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68(param_1,iVar6 + 1),
         (uVar9 & 1) != 0 &&
         (uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimed_2229a78(param_1,iVar6 + 1),
         (uVar9 & 1) == 0)) ||
        (uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68(param_1,iVar6 + 1),
        (uVar9 & 1) == 0)))) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
    uVar15 = *(undefined8 *)puVar4;
    *(undefined1 *)((long)param_1 + 0x1b) = 1;
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar15);
    if (lVar10 == 0) goto LAB_0232b9a0;
    uVar3 = *(undefined4 *)(lVar10 + 0x10);
    uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__RisePlayed_2229bd4(param_1,iVar6 + 1);
    if ((uVar9 & 1) == 0) {
      uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68(param_1,iVar6 + 1);
    }
    else {
      uVar7 = 0;
    }
    Dino_BusSand_App_Meta_ClimbTowerFeature__TrackStageAdvance_222b9a4
              (param_1,1,uVar3,iVar6 + 1,uVar7 & 1);
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar4);
    if (lVar10 == 0) goto LAB_0232b9a0;
    iVar6 = *(int *)(lVar10 + 0x10);
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar4);
    if (lVar10 == 0) goto LAB_0232b9a0;
    Dino_BusSand_App_Meta_ClimbTowerFeature__SetData_222af8c
              (param_1,iVar6 + 1,*(undefined4 *)(lVar10 + 0x14));
  }
  else {
    if (lVar10 == 0) goto LAB_0232b9a0;
    uVar3 = *(undefined4 *)(lVar10 + 0x10);
    lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar4);
    if (lVar10 == 0) goto LAB_0232b9a0;
    Dino_BusSand_App_Meta_ClimbTowerFeature__TrackStageAdvance_222b9a4
              (param_1,1,uVar3,*(undefined4 *)(lVar10 + 0x10),0);
  }
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_0232b9a0;
  if (*(int *)(lVar10 + 0x10) <= iVar1) {
    return;
  }
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_0232b9a0;
  uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__RisePlayed_2229bd4
                    (param_1,*(undefined4 *)(lVar10 + 0x10));
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_0232b9a0;
  uVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                    (param_1,*(undefined4 *)(lVar10 + 0x10));
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar15 = *(undefined8 *)puVar4;
  *(undefined1 *)((long)param_1 + 0x1a) = 1;
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar15);
  if (lVar10 == 0) goto LAB_0232b9a0;
  iVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex_2229ef0
                    (param_1,*(undefined4 *)(lVar10 + 0x10));
  if (iVar6 < 0) {
    return;
  }
  lVar10 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_0232b9a0;
  uVar3 = *(undefined4 *)(lVar10 + 0x10);
  uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__RewardIdAt_2229444(param_1,iVar6);
  puVar4 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9be3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb2e40);
    FUN_02132f7c(PTR_DAT_04cb2b18);
    FUN_02132f7c(PTR_DAT_04cb2e30);
    FUN_02132f7c(PTR_DAT_04cb2e48);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    bRam0000000004f9be3d = 1;
  }
  plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar4,10);
  puVar4 = PTR_DAT_04cb2b28;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar12 + 0x40)),
     lVar10 == 0)) goto LAB_0232c34c;
  puVar5 = PTR_DAT_04cb2e30;
  if ((int)plVar12[3] == 0) goto LAB_0232c348;
  plVar12[4] = *(long *)puVar4;
  thunk_FUN_02134474();
  lVar10 = *(long *)puVar5;
  if ((lVar10 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
  goto LAB_0232c34c;
  puVar4 = PTR_DAT_04cb2b30;
  if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_0232c348;
  plVar12[5] = *(long *)puVar5;
  thunk_FUN_02134474();
  lVar10 = *(long *)puVar4;
  if ((lVar10 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
  goto LAB_0232c34c;
  if (*(uint *)(plVar12 + 3) < 3) goto LAB_0232c348;
  plVar12[6] = *(long *)puVar4;
  thunk_FUN_02134474();
  auStack_44[0] = Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo_222c7a4(param_1);
  puVar4 = PTR_DAT_04ca9ac8;
  lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_44);
  if ((lVar10 != 0) &&
     (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
  goto LAB_0232c34c;
  puVar5 = PTR_DAT_04cb2bb0;
  if ((*(uint *)(plVar12 + 3) & 0xfffffffc) == 0) goto LAB_0232c348;
  plVar12[7] = lVar10;
  thunk_FUN_02134474(plVar12 + 7,lVar10);
  lVar10 = *(long *)puVar5;
  if ((lVar10 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
  goto LAB_0232c34c;
  if (*(uint *)(plVar12 + 3) < 5) goto LAB_0232c348;
  plVar12[8] = *(long *)puVar5;
  thunk_FUN_02134474();
  uStack_48 = 0;
  lVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_48);
  if ((lVar10 != 0) &&
     (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
  goto LAB_0232c34c;
  puVar5 = PTR_DAT_04cb2e48;
  if (*(uint *)(plVar12 + 3) < 6) goto LAB_0232c348;
  plVar12[9] = lVar10;
  thunk_FUN_02134474(plVar12 + 9,lVar10);
  lVar10 = *(long *)puVar5;
  if ((lVar10 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
  goto LAB_0232c34c;
  if (*(uint *)(plVar12 + 3) < 7) goto LAB_0232c348;
  plVar12[10] = *(long *)puVar5;
  thunk_FUN_02134474();
  uStack_50 = CONCAT44(uVar3,(undefined4)uStack_50);
  lVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),(long)&uStack_50 + 4);
  if ((lVar10 != 0) &&
     (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
  goto LAB_0232c34c;
  puVar4 = PTR_DAT_04cb2b18;
  if ((*(uint *)(plVar12 + 3) & 0xfffffff8) == 0) goto LAB_0232c348;
  plVar12[0xb] = lVar10;
  thunk_FUN_02134474(plVar12 + 0xb,lVar10);
  lVar10 = *(long *)puVar4;
  if ((lVar10 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
  goto LAB_0232c34c;
  puVar5 = PTR_DAT_04cb2e40;
  if (*(uint *)(plVar12 + 3) < 9) goto LAB_0232c348;
  plVar12[0xc] = *(long *)puVar4;
  thunk_FUN_02134474();
  lVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__TrackRewardItems_22501d0(uVar8,0);
  uVar15 = *(undefined8 *)puVar5;
  if (lVar10 == 0) {
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)PTR_DAT_04ca9b98);
    if (lVar10 != 0) goto LAB_0232c2d8;
  }
  else {
LAB_0232c2d8:
    lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40));
    if (lVar13 == 0) {
LAB_0232c34c:
      uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar15,0);
    }
  }
  puVar4 = PTR_DAT_04cac5c0;
  if (9 < *(uint *)(plVar12 + 3)) {
    plVar12[0xd] = lVar10;
    thunk_FUN_02134474(plVar12 + 0xd,lVar10);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Analytics__Log_216d0c8(uVar15,plVar12,0);
    return;
  }
LAB_0232c348:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

