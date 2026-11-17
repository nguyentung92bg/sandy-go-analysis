/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$LoseOnce
void Dino_BusSand_App_Meta_StreakRateFeature__LoseOnce (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$LoseOnce
   void Dino_BusSand_App_Meta_StreakRateFeature__LoseOnce
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__LoseOnce_224dfc4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plStack_78;
  long **pplStack_70;
  long lStack_68;
  long *plStack_60;
  long **pplStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  
  uVar3 = Dino_BusSand_App_Meta_StreakRateFeature__CanMutateAfterGuide_224de7c();
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if (lVar4 == 0) {
    bVar9 = true;
  }
  else {
    lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    if (lVar5 < *(long *)(lVar4 + 0x30)) {
      return;
    }
    uVar3 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(param_1,lVar4);
    if ((uVar3 & 1) == 0) {
      if ((bRam0000000004f9bfb3 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb3ba8);
        bRam0000000004f9bfb3 = 1;
      }
      Dino_BusSand_App_Meta_StreakRateFeature__AutoExecutePendingCommand_224e360(param_1,lVar4,1);
      puVar1 = PTR_DAT_04cb3ba8;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar4 + 0x14) = 0;
      *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
      Dino_BusSand_App_Meta_StreakRateFeature__TrackLose_224e5d8(param_1,lVar4);
      lVar4 = *(long *)puVar1;
      if ((bRam0000000004f9d943 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac668);
        bRam0000000004f9d943 = 1;
      }
      puVar1 = PTR_DAT_04cac668;
      if (param_1[2] == 0) {
        return;
      }
      uVar8 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      lVar5 = param_1[2];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_04cabaf8;
      if ((bRam0000000004f9d81f & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc4908,lVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x20));
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
      plStack_60 = (long *)0x0;
      pplStack_58 = (long **)0x0;
      lStack_50 = 0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x130) == 0) {
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (uVar6,*(undefined8 *)PTR_DAT_04cb4790);
          *(undefined8 *)(lVar4 + 0x130) = uVar6;
          thunk_FUN_02134474(lVar4 + 0x130,uVar6);
        }
        uVar6 = UnityEngine_JsonUtility__ToJson_44323ac(lVar5,0);
        puVar2 = PTR_DAT_04cc4910;
        if (*(long *)(lVar4 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&plStack_78,*(long *)(lVar4 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
        lStack_50 = lStack_68;
        pplStack_58 = pplStack_70;
        plStack_60 = plStack_78;
        plStack_78 = (long *)0x0;
        pplStack_70 = &plStack_60;
        do {
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&plStack_60,*(undefined8 *)puVar2);
          lVar5 = lStack_50;
          if ((uVar3 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&plStack_60,*(undefined8 *)PTR_DAT_04cc4908);
            lVar5 = *(long *)(lVar4 + 0x130);
            lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
            Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar4,0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = uVar8;
              thunk_FUN_02134474((undefined8 *)(lVar4 + 0x10),uVar8);
              *(undefined8 *)(lVar4 + 0x18) = uVar6;
              thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),uVar6);
              if (lVar5 != 0) {
                lVar11 = *(long *)(lVar5 + 0x10);
                lVar12 = *(long *)PTR_DAT_04cc4930;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar10 = *(uint *)(lVar5 + 0x18);
                  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar10 + 1;
                    plVar7 = (long *)(lVar11 + (long)(int)uVar10 * 8 + 0x20);
                    *plVar7 = lVar4;
                    thunk_FUN_02134474(plVar7,lVar4);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar5,lVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                  return;
                }
              }
            }
            goto LAB_028ef87c;
          }
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar3 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar8,0);
        } while ((uVar3 & 1) == 0);
        *(undefined8 *)(lVar5 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),uVar6);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&plStack_60,*(undefined8 *)PTR_DAT_04cc4908);
      }
      return;
    }
    bVar9 = false;
  }
  if ((bRam0000000004f9bfb2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3b50,0);
    FUN_02132f7c(PTR_DAT_04cb3b58);
    FUN_02132f7c(PTR_DAT_04cb3b60);
    FUN_02132f7c(PTR_DAT_04cb3b68);
    FUN_02132f7c(PTR_DAT_04cb3bd0);
    FUN_02132f7c(PTR_DAT_04cb3ba8);
    FUN_02132f7c(PTR_DAT_04cb3b48);
    bRam0000000004f9bfb2 = 1;
  }
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  lStack_40 = 0;
  lVar4 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if ((lVar4 != 0) &&
     (uVar3 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(param_1,lVar4),
     (uVar3 & 1) == 0)) {
    return;
  }
  puVar1 = PTR_DAT_04cb3b48;
  lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb3b58;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&lStack_68,*(long *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_04cb3b68);
    lStack_40 = (long)pplStack_58;
    plStack_48 = plStack_60;
    lStack_50 = lStack_68;
    lStack_68 = 0;
    plStack_60 = &lStack_50;
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&lStack_50,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(long *)(lStack_40 + 0x30) <= lVar4) && (lVar4 <= *(long *)(lStack_40 + 0x38))) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&lStack_50,*(undefined8 *)PTR_DAT_04cb3b50);
        return;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&lStack_50,*(undefined8 *)PTR_DAT_04cb3b50);
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        if (lVar4 == 0) goto LAB_0234e2fc;
        uVar8 = *(undefined8 *)PTR_DAT_04cb3ba8;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar8);
      }
      if (bVar9) {
        lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_04cb3ba8;
        if (lVar4 == 0) goto LAB_0234e2fc;
        *(undefined4 *)(lVar4 + 0x18) = 0;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
      }
      lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0x18)) {
          return;
        }
        lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        if (((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) &&
           (lVar4 = System_Collections_Generic_List_object___ToArray_3a83728
                              (*(long *)(lVar4 + 0x10),*(undefined8 *)PTR_DAT_04cb3bd0), lVar4 != 0)
           ) {
          uVar10 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar10) {
            uVar13 = 0;
            do {
              if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              lVar5 = *(long *)(lVar4 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar5 == 0) goto LAB_0234e2fc;
              if ((*(int *)(lVar5 + 0x28) == 0) ||
                 ((*(int *)(lVar5 + 0x28) == 2 &&
                  (uVar3 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8
                                     (param_1,lVar5), (uVar3 & 1) != 0)))) {
                Dino_BusSand_App_Meta_StreakRateFeature__MarkFinished_224d208(param_1,lVar5);
              }
              uVar10 = *(uint *)(lVar4 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar10);
          }
          Dino_BusSand_App_Meta_StreakRateFeature__AutoAddNewOne_224d2c4(param_1);
          return;
        }
      }
    }
  }
LAB_0234e2fc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

