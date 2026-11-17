/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnPackTriggered
void Dino_BusSand_App_Meta_GiftPackFeature__OnPackTriggered (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnPackTriggered
   void Dino_BusSand_App_Meta_GiftPackFeature__OnPackTriggered
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnPackTriggered_2238604(undefined8 param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9beb6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9beb6 = 1;
  }
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  if (((lVar9 != 0) && (*(int *)(lVar9 + 0x40) != 0)) &&
     (uVar10 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackDisabled_2234ee8(param_1,param_2),
     (uVar10 & 1) == 0)) {
    Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(param_1);
    lVar11 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
    puVar3 = PTR_DAT_04caec48;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar11 + 0x30) == '\0') {
      lVar12 = *(long *)PTR_DAT_04caec48;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        lVar12 = thunk_FUN_0218fdac();
      }
      if (((*(int *)(lVar9 + 0x20) < 1) || (*(int *)(lVar11 + 0x1c) < *(int *)(lVar9 + 0x20))) &&
         ((uVar10 = Dino_BusSand_App_Meta_GiftPackFeature__IsInCooldown_22387b4(lVar12,lVar9,lVar11)
          , (uVar10 & 1) == 0 &&
          (uVar10 = Dino_BusSand_App_Meta_GiftPackFeature__HasActivatedCurrentCycle_22389e0
                              (uVar10,lVar9,lVar11), (uVar10 & 1) == 0)))) {
        iVar18 = *(int *)(lVar11 + 0x14);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        uVar10 = Dino_BusSand_App_Meta_GiftPackCycle__IsInCycleTimeWindow_22320ec
                           (lVar9,lVar11 / 1000,iVar18 == 0);
        if (((uVar10 & 1) != 0) &&
           (uVar10 = Dino_BusSand_App_Meta_GiftPackFeature__EvaluateCondition_2238aa4
                               (param_1,lVar9,iVar18 == 0,&stack0xffffffffffffffcc),
           puVar3 = PTR_DAT_04cb3390, (uVar10 & 1) != 0)) {
          if ((bRam0000000004f9beba & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cb3560);
            FUN_02132f7c(PTR_DAT_04cb3568);
            FUN_02132f7c(PTR_DAT_04cb3570);
            FUN_02132f7c(PTR_DAT_04caec48);
            FUN_02132f7c(PTR_DAT_04cb3578);
            FUN_02132f7c(PTR_DAT_04cb3580);
            FUN_02132f7c(PTR_DAT_04cb3588);
            FUN_02132f7c(PTR_DAT_04cb3498);
            FUN_02132f7c(PTR_DAT_04cb34a0);
            FUN_02132f7c(PTR_DAT_04cb3390);
            FUN_02132f7c(PTR_DAT_04ca9c30);
            bRam0000000004f9beba = 1;
          }
          uStack_80 = 0;
          puStack_78 = (undefined8 *)0x0;
          lStack_70 = 0;
          lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar3);
          puVar8 = PTR_DAT_04cb3588;
          puVar7 = PTR_DAT_04cb3578;
          puVar6 = PTR_DAT_04cb3568;
          puVar5 = PTR_DAT_04cb3560;
          puVar4 = PTR_DAT_04cb34a0;
          puVar3 = PTR_DAT_04caec48;
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_98,*(long *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_04cb3580);
            lStack_70 = lStack_88;
            puStack_78 = puStack_90;
            uStack_80 = uStack_98;
            uStack_98 = 0;
            puStack_90 = &uStack_80;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
              if ((lStack_70 != 0) && (*(int *)(lStack_70 + 0x10) == param_2)) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_80,*(undefined8 *)puVar5);
                return;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)puVar5);
            lVar11 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
            if (lVar11 == 0) {
              iVar18 = 0x7fffffff;
            }
            else {
              iVar18 = *(int *)(lVar11 + 0x3c);
            }
            lVar12 = *(long *)(lVar9 + 0x18);
            if (lVar12 != 0) {
              iVar2 = *(int *)(lVar12 + 0x18);
              iVar16 = 0;
              do {
                iVar15 = iVar2;
                if (*(int *)(lVar12 + 0x18) <= iVar16) {
LAB_02339038:
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar12 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                  if (lVar11 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = (long)*(int *)(lVar11 + 0x24);
                  }
                  lVar14 = *(long *)(lVar9 + 0x18);
                  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
                  Dino_BusSand_App_Meta_GiftPendingRec___ctor_22337ac();
                  if (lVar9 != 0) {
                    *(int *)(lVar9 + 0x10) = param_2;
                    *(int *)(lVar9 + 0x14) = iVar18;
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                    lVar12 = lVar12 / 1000;
                    lVar1 = lVar17 + lVar12;
                    if (lVar17 < 1) {
                      lVar1 = 0;
                    }
                    *(long *)(lVar9 + 0x20) = lVar12;
                    *(long *)(lVar9 + 0x28) = lVar1;
                    uVar10 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(lVar11);
                    if ((uVar10 & 1) == 0) {
                      uVar13 = *(undefined8 *)PTR_DAT_04ca9c30;
                    }
                    else {
                      uVar13 = Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey_22322cc
                                         (lVar11,lVar12);
                    }
                    *(undefined8 *)(lVar9 + 0x30) = uVar13;
                    thunk_FUN_02134474();
                    if (lVar14 != 0) {
                      System_Collections_Generic_List_object___Insert_3a828b4
                                (lVar14,iVar15,lVar9,*(undefined8 *)puVar8);
                      return;
                    }
                  }
                  break;
                }
                lVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar12,iVar16,*(undefined8 *)puVar4);
                if (lVar12 == 0) break;
                iVar15 = iVar16;
                if (iVar18 < *(int *)(lVar12 + 0x14)) goto LAB_02339038;
                lVar12 = *(long *)(lVar9 + 0x18);
                iVar16 = iVar16 + 1;
              } while (lVar12 != 0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
  return;
}

