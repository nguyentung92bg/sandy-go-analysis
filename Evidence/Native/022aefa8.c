/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnOpen
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnOpen (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnOpen
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnOpen
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnOpen_21aefa8(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_04caee20;
  if ((bRam0000000004f9ba80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caefa8);
    FUN_02132f7c(PTR_DAT_04caefb0);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caefb8);
    FUN_02132f7c(PTR_DAT_04caefc0);
    FUN_02132f7c(PTR_DAT_04caefc8);
    FUN_02132f7c(PTR_DAT_04caefd0);
    FUN_02132f7c(PTR_DAT_04caefd8);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04caefe0);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caee20);
    FUN_02132f7c(PTR_DAT_04caeff0);
    FUN_02132f7c(PTR_DAT_04caeff8);
    FUN_02132f7c(PTR_DAT_04cae0d0);
    FUN_02132f7c(PTR_DAT_04cae0d8);
    FUN_02132f7c(PTR_DAT_04caf000);
    FUN_02132f7c(PTR_DAT_04caf008);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04caf010);
    FUN_02132f7c(PTR_DAT_04caf018);
    FUN_02132f7c(PTR_DAT_04caf020);
    FUN_02132f7c(PTR_DAT_04caee60);
    FUN_02132f7c(PTR_DAT_04caeca0);
    FUN_02132f7c(PTR_DAT_04caeca8);
    FUN_02132f7c(PTR_DAT_04caf028);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    FUN_02132f7c(PTR_DAT_04caf030);
    FUN_02132f7c(PTR_DAT_04caf038);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04caf040);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9ba80 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  if (param_2 == (long *)0x0) {
LAB_022af208:
    param_2 = (long *)thunk_FUN_0216e89c();
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_Param___ctor_21b233c(param_2,0);
  }
  else {
    bVar8 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar8) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar8 * 8 + -8) != *(long *)puVar6))
    goto LAB_022af208;
  }
  puVar6 = PTR_DAT_04caec48;
  if (param_1 == 0) goto LAB_022afadc;
  plVar17 = (long *)(param_1 + 0x38);
  *plVar17 = (long)param_2;
  thunk_FUN_02134474(plVar17,param_2);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  plVar16 = (long *)(param_1 + 0x40);
  *plVar16 = lVar9;
  thunk_FUN_02134474(plVar16,lVar9);
  if (*plVar16 == 0) {
LAB_022af4d4:
    if (*(char *)(param_1 + 0x5d) == '\0') {
      *(undefined1 *)(param_1 + 0x5d) = 1;
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar9 = 0;
      }
      else {
        plVar17 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
        lVar9 = *plVar17;
        *plVar17 = 0;
        thunk_FUN_02134474(plVar17,0);
      }
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
      if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
        Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                  (*(long *)(param_1 + 0x40),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),0);
      }
      if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022afb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
        return;
      }
    }
    return;
  }
  if (*plVar17 == 0) goto LAB_022afadc;
  iVar1 = *(int *)(*plVar17 + 0x10);
  if ((iVar1 < 1) ||
     (lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(*plVar16,iVar1,0), lVar9 == 0))
  goto LAB_022af4d4;
  if ((*plVar17 == 0) ||
     ((*plVar16 == 0 ||
      (lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8
                         (*plVar16,*(undefined4 *)(*plVar17 + 0x10),0), lVar9 == 0))))
  goto LAB_022afadc;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar9 + 0x18);
  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_022afadc;
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                    (*(long *)(param_1 + 0x40),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),0);
  if (lVar9 < 1) goto LAB_022af4d4;
  if (*plVar17 == 0) goto LAB_022afadc;
  uVar2 = *(undefined4 *)(*plVar17 + 0x10);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(uVar2,0);
  plVar14 = (long *)(param_1 + 0x48);
  *plVar14 = lVar9;
  thunk_FUN_02134474(plVar14,lVar9);
  puVar4 = PTR_DAT_04caeff8;
  lVar15 = *plVar14;
  lVar9 = *(long *)PTR_DAT_04caeff8;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
  lVar18 = puVar13[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar19 = *puVar13;
    lVar18 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caefa8);
    System_Comparison_GiftPackFeature_GoldenStage____ctor_332a458
              (lVar18,uVar19,*(undefined8 *)PTR_DAT_04caeff0,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar14 = lVar18;
    thunk_FUN_02134474(plVar14,lVar18);
  }
  if (lVar15 == 0) goto LAB_022afadc;
  System_Collections_Generic_List_GiftPackFeature_GoldenStage___Sort_3b3c9e0
            (lVar15,lVar18,*(undefined8 *)PTR_DAT_04caefe0);
  if (*plVar16 == 0) goto LAB_022afadc;
  Dino_BusSand_App_Meta_GiftPackFeature__SyncGoldenProgress_2237278(*plVar16,0);
  if ((*plVar16 == 0) ||
     (lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*plVar16,0), lVar9 == 0))
  goto LAB_022afadc;
  lVar15 = *plVar16;
  *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x10);
  *(undefined1 *)(lVar9 + 0x40) = 1;
  puVar4 = PTR_DAT_04caefe8;
  if (lVar15 == 0) goto LAB_022afadc;
  Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar15,*(undefined8 *)PTR_DAT_04caefe8);
  puVar3 = PTR_DAT_04caba50;
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar15 = *(long *)puVar3;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar15 = **(long **)(lVar15 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
  if ((uVar10 & 1) == 0) goto LAB_022af4f4;
  if (lVar15 == 0) goto LAB_022afadc;
  if (*(char *)(lVar15 + 0x38) == '\0') {
LAB_022af4f4:
    bVar7 = false;
  }
  else {
    uVar19 = *(undefined8 *)(lVar15 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
    if ((uVar10 & 1) == 0) goto LAB_022af4f4;
    if (*(long *)(lVar15 + 0x20) == 0) goto LAB_022afadc;
    bVar7 = *(int *)(*(long *)(lVar15 + 0x20) + 0x20) == 3;
  }
  if (*plVar17 != 0) {
    uVar10 = System_String__op_Equality_46d1108
                       (*(undefined8 *)(*plVar17 + 0x20),*(undefined8 *)PTR_DAT_04caf008,0);
    if ((uVar10 & 1) == 0) {
      if (*plVar17 == 0) goto LAB_022afadc;
      bVar8 = System_String__op_Equality_46d1108
                        (*(undefined8 *)(*plVar17 + 0x20),*(undefined8 *)PTR_DAT_04caee60,0);
      bVar8 = bVar7 & bVar8;
    }
    else {
      bVar8 = 1;
    }
    lVar15 = *(long *)(param_1 + 0x38);
    *(byte *)(param_1 + 0x5e) = bVar8;
    if (lVar15 != 0) {
      if (*(char *)(lVar15 + 0x28) == '\0') {
        if ((*plVar16 == 0) ||
           (lVar15 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8
                               (*plVar16,*(undefined4 *)(lVar15 + 0x10),0), lVar15 == 0))
        goto LAB_022afadc;
        lVar18 = *plVar16;
        *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
        if (lVar18 == 0) goto LAB_022afadc;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar18,*(undefined8 *)puVar4);
      }
      uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04caf040,0);
      puVar13 = (undefined8 *)(param_1 + 0x68);
      *puVar13 = uVar19;
      thunk_FUN_02134474(puVar13,uVar19);
      uVar19 = *puVar13;
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar19,0);
      uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04caf010,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        uStack_64 = Dino_BusSand_App_UI_GiftPackUi__GoldenTotalCoins_21ac93c
                              (*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10));
        uVar11 = System_Int32__ToString_482d750(&uStack_64,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar19,uVar11);
        uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                           (param_1,*(undefined8 *)PTR_DAT_04caf020,0);
        lVar18 = *(long *)PTR_DAT_04ca9d18;
        lVar15 = *(long *)(lVar18 + 0x38);
        if (lVar15 == 0) {
          FUN_0216b4cc(lVar18);
          lVar15 = *(long *)(lVar18 + 0x38);
        }
        lVar15 = *(long *)(lVar15 + 0x10);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_0216b470();
        }
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_0216b470();
        }
        uVar11 = **(undefined8 **)(lVar15 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
        }
        uVar11 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04caf028,uVar11,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar19,uVar11);
        uVar19 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                           (param_1,*(undefined8 *)PTR_DAT_04caf038,0);
        uVar11 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748
                           (*(undefined4 *)(param_1 + 0x58),0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar19,uVar11);
        if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uStack_64 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
        uVar19 = System_Int32__ToString_482d750(&uStack_64,0);
        uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar19,0);
        Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)PTR_DAT_04caf018,uVar19,0);
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__BuildList_21afb70(param_1);
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshHeader_21b00a4(param_1);
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__RefreshAll_21b0404(param_1);
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__ScrollToProgress_21b0470(param_1);
        puVar4 = PTR_DAT_04caa458;
        uVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar19,param_1,*(undefined8 *)PTR_DAT_04caefc8,0);
        puVar5 = PTR_DAT_04cad948;
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar19,1,*(undefined8 *)PTR_DAT_04cad948,
                   0);
        uVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        System_Action___ctor_47b5ed0(uVar19,param_1,*(undefined8 *)PTR_DAT_04caefb8,0);
        Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                  (param_1,*(undefined8 *)PTR_DAT_04cad9e8,uVar19,1,*(undefined8 *)puVar5,0);
        lVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                           (param_1,*(undefined8 *)PTR_DAT_04caf030,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
        lVar18 = 0;
        if ((uVar10 & 1) != 0) {
          if (lVar15 == 0) goto LAB_022afadc;
          lVar18 = UnityEngine_Component__GetComponent_object__26f97e8
                             (lVar15,*(undefined8 *)PTR_DAT_04caefb0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar18 == 0) goto LAB_022afadc;
          lVar15 = *(long *)(lVar18 + 0x68);
          uVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae0d0);
          UnityEngine_Events_UnityAction_Vector2____ctor_303b9ac
                    (uVar19,param_1,*(undefined8 *)PTR_DAT_04caefd8,0);
          if (lVar15 == 0) goto LAB_022afadc;
          UnityEngine_Events_UnityEvent_Vector2___AddListener_303dee8
                    (lVar15,uVar19,*(undefined8 *)PTR_DAT_04cae0d8);
        }
        uVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
        System_Action_int____ctor_35ef18c(uVar19,param_1,*(undefined8 *)PTR_DAT_04caefd0,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_GiftPackFeature__add_PackInvalidated_2233d70(uVar19,0);
        uVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        System_Action___ctor_47b5ed0(uVar19,param_1,*(undefined8 *)PTR_DAT_04caefc0,0);
        Dino_BusSand_App_Meta_GiftPackFeature__add_Changed_2233bb8(uVar19,0);
        uVar19 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Countdown_21b070c(param_1);
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar19,0);
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar15 != 0) {
          uVar19 = Dino_BusSand_App_Meta_GiftPackTrack__Golden_22402c0
                             (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(lVar15 + 0x10),
                              *(undefined8 *)(lVar15 + 0x20),0);
          *(undefined8 *)(param_1 + 0x60) = uVar19;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar19);
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_GameTracking__PackSource_221773c(uVar19,&uStack_58,&uStack_60,0);
            uVar11 = uStack_58;
            uVar19 = uStack_60;
            lVar15 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,1);
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x18) != 0) {
                uVar12 = *(undefined8 *)PTR_DAT_04caeca0;
                *(undefined4 *)(lVar15 + 0x20) = *(undefined4 *)(param_1 + 0x58);
                Dino_BusSand_App_Meta_GameTracking__IapShow_221791c
                          (param_1,uVar11,uVar12,uVar19,lVar15,0);
                Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44
                          (*(undefined8 *)PTR_DAT_04caeca8,*(undefined4 *)(param_1 + 0x58),
                           *(undefined8 *)PTR_DAT_04caf000,0);
                Dino_BusSand_App_Meta_GiftPackTrack__GiftShow_223ed60
                          (*(undefined8 *)(param_1 + 0x60),0);
                if (*(char *)(lVar9 + 0x41) != '\0') {
                  uVar19 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_21b0780
                                     (param_1,1);
                  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar19,0);
                }
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
          }
        }
      }
    }
  }
LAB_022afadc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

