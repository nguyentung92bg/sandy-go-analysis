/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnStorePurchaseCompleted
void Dino_BusSand_App_Meta_GiftPackFeature__OnStorePurchaseCompleted (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnStorePurchaseCompleted
   void Dino_BusSand_App_Meta_GiftPackFeature__OnStorePurchaseCompleted
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t storeItemId, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_GiftPackFeature__OnStorePurchaseCompleted_2237c4c
               (long *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar3 = PTR_DAT_04cb34f0;
  puVar2 = PTR_DAT_04cb3390;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337c38 with catch @ 02337c54
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337c1c with catch @ 02337c58
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337c18 with catch @ 02337c5c
                        */
                    /* try { // try from 02337c74 to 02437c8b has its CatchHandler @ 02337cc8 */
  if ((bRam0000000004f9beb3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
                    /* try { // try from 02337c8c to 02437cb7 has its CatchHandler @ 02337c00 */
    FUN_02132f7c(PTR_DAT_04cb34d0);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cb34d8);
                    /* try { // try from 02337cb8 to 02437cc7 has its CatchHandler @ 02337cc8 */
    FUN_02132f7c(PTR_DAT_04cb3468);
    FUN_02132f7c(PTR_DAT_04caefe8);
                    /* catch() { ... } // from try @ 02337c74 with catch @ 02337cc8
                       catch() { ... } // from try @ 02337cb8 with catch @ 02337cc8 */
                    /* try { // try from 02337ccc to 02437ccf has its CatchHandler @ 02337cd8 */
                    /* try { // try from 02337cd0 to 02437cdb has its CatchHandler @ 02337c00 */
    FUN_02132f7c(PTR_DAT_04cb3390);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02337ccc with catch @ 02337cd8
                        */
                    /* try { // try from 02337cdc to 02437d93 has its CatchHandler @ 02337cdc
                       catch() { ... } // from try @ 02337cdc with catch @ 02337cdc
                       catch() { ... } // from try @ 02337eac with catch @ 02337cdc
                       catch() { ... } // from try @ 02337f44 with catch @ 02337cdc
                       catch() { ... } // from try @ 02337fa0 with catch @ 02337cdc
                       catch() { ... } // from try @ 02337fd0 with catch @ 02337cdc */
    FUN_02132f7c(PTR_DAT_04cb3480);
    FUN_02132f7c(PTR_DAT_04cb34f8);
    FUN_02132f7c(PTR_DAT_04cb34f0);
    bRam0000000004f9beb3 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar7,0);
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
  lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  puVar3 = PTR_DAT_04caec48;
  if (lVar8 != 0) {
    lVar14 = *(long *)(lVar8 + 0x68);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb34d0);
    System_Object___ctor_4870e5c(lVar8,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    puVar3 = PTR_DAT_04cad1f0;
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x18) = param_2;
      iVar4 = *(int *)(*(long *)puVar3 + 0xe4);
                    /* try { // try from 02337d94 to 02437daf has its CatchHandler @ 02337f48 */
      *(long *)(lVar8 + 0x10) = lVar9 / 1000;
      if (iVar4 == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = Dino_BusSand_App_Iap__PriceUsd_217a220(param_2,0);
      *(undefined8 *)(lVar8 + 0x20) = uVar15;
      if (lVar14 != 0) {
        lVar9 = *(long *)(lVar14 + 0x10);
        lVar13 = *(long *)PTR_DAT_04cb34d8;
                    /* try { // try from 02337dd0 to 02437e13 has its CatchHandler @ 02337f60 */
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = lVar8;
            thunk_FUN_02134474(plVar10,lVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar14,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
          if (lVar7 != 0) {
            uVar15 = *(undefined8 *)puVar2;
                    /* try { // try from 02337e38 to 02437e3f has its CatchHandler @ 02337f44 */
            *(long *)(lVar7 + 0x10) = lVar8 / 1000 + -0xa8c00;
            lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar15);
            puVar2 = PTR_DAT_04cb34f8;
            if (lVar8 != 0) {
              lVar8 = *(long *)(lVar8 + 0x68);
              uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3480);
              System_Predicate_object____ctor_2c4e748(uVar15,lVar7,*(undefined8 *)puVar2,0);
              if (lVar8 != 0) {
                    /* try { // try from 02337e84 to 02437eab has its CatchHandler @ 02337f54 */
                System_Collections_Generic_List_object___RemoveAll_3a83234
                          (lVar8,uVar15,*(undefined8 *)PTR_DAT_04cb3468);
                iVar4 = Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem_2234d90
                                  (param_1,param_2);
                    /* try { // try from 02337eac to 02437f37 has its CatchHandler @ 02337cdc */
                if (iVar4 < 1) {
                  Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
                  lVar7 = *(long *)PTR_DAT_04caefe8;
                  if ((bRam0000000004f9d943 & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cac668);
                    bRam0000000004f9d943 = 1;
                  }
                  puVar2 = PTR_DAT_04cac668;
                  if (param_1[2] == 0) {
                    return;
                  }
                  uVar15 = (**(code **)(*param_1 + 0x208))
                                     (param_1,*(undefined8 *)(*param_1 + 0x210));
                  lVar8 = param_1[2];
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  puVar2 = PTR_DAT_04cabaf8;
                  if ((bRam0000000004f9d81f & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cc4908,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x20));
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
                  lStack_50 = 0;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar7 = *(long *)puVar2;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar7 = *(long *)puVar2;
                  }
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                  if (lVar7 != 0) {
                    if (*(long *)(lVar7 + 0x130) == 0) {
                      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
                      System_Collections_Generic_List_object____ctor_3a8138c
                                (uVar11,*(undefined8 *)PTR_DAT_04cb4790);
                      *(undefined8 *)(lVar7 + 0x130) = uVar11;
                      thunk_FUN_02134474(lVar7 + 0x130,uVar11);
                    }
                    uVar11 = UnityEngine_JsonUtility__ToJson_44323ac(lVar8,0);
                    puVar3 = PTR_DAT_04cc4910;
                    if (*(long *)(lVar7 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    System_Collections_Generic_List_object___GetEnumerator_3a825f0
                              (&uStack_78,*(long *)(lVar7 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
                    lStack_50 = lStack_68;
                    puStack_58 = puStack_70;
                    uStack_60 = uStack_78;
                    uStack_78 = 0;
                    puStack_70 = &uStack_60;
                    do {
                      uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                         (&uStack_60,*(undefined8 *)puVar3);
                      lVar8 = lStack_50;
                      if ((uVar12 & 1) == 0) {
                        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                        lVar8 = *(long *)(lVar7 + 0x130);
                        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
                        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x10) = uVar15;
                          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),uVar15);
                          *(undefined8 *)(lVar7 + 0x18) = uVar11;
                          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar11);
                          if (lVar8 != 0) {
                            lVar14 = *(long *)(lVar8 + 0x10);
                            lVar9 = *(long *)PTR_DAT_04cc4930;
                            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar10 = lVar7;
                                thunk_FUN_02134474(plVar10,lVar7);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                          (lVar8,lVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
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
                      uVar12 = System_String__op_Equality_46d1108
                                         (*(undefined8 *)(lStack_50 + 0x10),uVar15,0);
                    } while ((uVar12 & 1) == 0);
                    *(undefined8 *)(lVar8 + 0x18) = uVar11;
                    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar11);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
                    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
                  }
                  return;
                }
                if ((bRam0000000004f9beb4 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04caec48);
                  FUN_02132f7c(PTR_DAT_04caefe8);
                  FUN_02132f7c(PTR_DAT_04cb3390);
                  FUN_02132f7c(PTR_DAT_04caa200);
                  bRam0000000004f9beb4 = 1;
                }
                Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
                lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,iVar4);
                lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,iVar4);
                puVar3 = PTR_DAT_04cb3390;
                puVar2 = PTR_DAT_04caec48;
                if (lVar8 != 0) {
                  *(undefined1 *)(lVar8 + 0x6c) = 1;
                  uVar15 = *(undefined8 *)puVar3;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  lVar14 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                     (param_1,uVar15);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  lVar9 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                  if (lVar14 != 0) {
                    *(long *)(lVar14 + 0x38) = lVar9 / 1000;
                    lVar14 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                    uVar5 = Dino_BusSand_App_Meta_GiftPackCycle__DayKey_2233654(lVar14 / 1000);
                    *(undefined4 *)(lVar8 + 0x48) = uVar5;
                    if (lVar7 != 0) {
                      if (*(int *)(lVar7 + 0x1c) == 0) {
                        lVar14 = *(long *)puVar2;
                        *(undefined1 *)(lVar8 + 0x30) = 0;
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        lVar14 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
                        uVar5 = *(undefined4 *)(lVar7 + 0x30);
                        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        iVar6 = System_Math__Max_4830fc8(0,uVar5,0);
                        lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                        *(long *)(lVar8 + 0x28) = lVar14 / 1000 + (long)iVar6 * 0x3c;
                        if (lVar9 != 0) {
                          (**(code **)(lVar9 + 0x18))
                                    (*(undefined8 *)(lVar9 + 0x40),iVar4,
                                     *(undefined8 *)(lVar9 + 0x28));
                        }
                      }
                      if (*(int *)(lVar7 + 0x54) == 3) {
                        lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                          (param_1,*(undefined8 *)puVar3);
                        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x70) == 0)) goto LAB_02338160;
                        *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0x28) = 1;
                        Dino_BusSand_App_Meta_GiftPackFeature__TrackGoldenPurchaseUnlock_2238164
                                  (param_1,iVar4);
                      }
                    }
                    puVar3 = PTR_DAT_04caefe8;
                    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                              (param_1,*(undefined8 *)PTR_DAT_04caefe8);
                    Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
                    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                              (param_1,*(undefined8 *)puVar3);
                    lVar7 = *(long *)puVar2;
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                    if (lVar7 == 0) {
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x02338144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
                    return;
                  }
                }
LAB_02338160:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

