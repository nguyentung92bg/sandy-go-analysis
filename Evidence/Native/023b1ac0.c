/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$OnOpen
void Dino_BusSand_App_UI_PurchaseItemPanel__OnOpen (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$OnOpen
   void Dino_BusSand_App_UI_PurchaseItemPanel__OnOpen (Dino_BusSand_App_UI_PurchaseItemPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_PurchaseItemPanel__OnOpen_22b1ac0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uStack_b4;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c2d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb60d0);
    FUN_02132f7c(PTR_DAT_04cb60d8);
    FUN_02132f7c(PTR_DAT_04cb60e0);
    FUN_02132f7c(PTR_DAT_04cb60e8);
    FUN_02132f7c(PTR_DAT_04cb60f0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb1d38);
    FUN_02132f7c(PTR_DAT_04cad9a0);
    FUN_02132f7c(PTR_DAT_04caf5f0);
    FUN_02132f7c(PTR_DAT_04cb60f8);
    FUN_02132f7c(PTR_DAT_04cb6100);
    FUN_02132f7c(PTR_DAT_04cb6108);
    FUN_02132f7c(PTR_DAT_04cad088);
    FUN_02132f7c(PTR_DAT_04cb6110);
    FUN_02132f7c(PTR_DAT_04caffa8);
    FUN_02132f7c(PTR_DAT_04cb6118);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c2d3 = 1;
  }
  uStack_68 = 0;
  plStack_88 = (long *)0x0;
  lStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  iVar10 = 0;
  if (param_2 == (long *)0x0) {
LAB_023b1cf8:
    if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar9 = Dino_BusSand_App_Meta_Economy__ShopId_2203ca8(iVar10,0);
  }
  else {
    if (*param_2 != *(long *)(PTR_DAT_04ca9ac8 + 0x48)) {
      iVar10 = 0;
      goto LAB_023b1cf8;
    }
    piVar11 = (int *)thunk_FUN_0216e9e4(param_2);
    iVar9 = *piVar11;
    iVar10 = iVar9;
    if (0x3e6 < iVar9 - 0x7d1U) goto LAB_023b1cf8;
  }
  puVar1 = PTR_DAT_04cac498;
  if (param_1 == 0) goto LAB_023b2444;
  *(int *)(param_1 + 0x40) = iVar9;
  puVar4 = PTR_DAT_04cad088;
  puVar3 = PTR_DAT_04cac7b8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Meta_GameTracking__AdOffer_22159b0(*(undefined8 *)puVar4,0);
  uVar22 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_UI_CommerceUi__ShopGet_22ab710(uVar22);
  puVar1 = PTR_DAT_04cadda0;
  if (lVar12 == 0) goto LAB_023b2444;
  if (*(int *)(lVar12 + 0x18) < 1) {
    *(int *)(param_1 + 0x44) = iVar10;
LAB_023b1dd4:
    uVar15 = 1;
  }
  else {
    iVar10 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                       (lVar12,0,*(undefined8 *)PTR_DAT_04cadda0);
    iVar9 = *(int *)(lVar12 + 0x18);
    *(int *)(param_1 + 0x44) = iVar10;
    if (iVar9 < 1) goto LAB_023b1dd4;
    System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
              (lVar12,0,*(undefined8 *)puVar1);
    uVar15 = extraout_x1;
  }
  uVar22 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_UI_CommerceUi__ShopCost_22aba88(uVar22);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) < 1) {
      uStack_68 = 0;
    }
    else {
      System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                (lVar12,0,*(undefined8 *)puVar1);
      uStack_68 = extraout_x1_00;
    }
    uVar22 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar12 = Dino_BusSand_App_UI_CommerceUi__ShopAdGet_22ab908(uVar22);
    puVar8 = PTR_DAT_04cb60f0;
    puVar7 = PTR_DAT_04caece8;
    puVar5 = PTR_DAT_04caece0;
    puVar6 = PTR_DAT_04cad9e8;
    puVar2 = PTR_DAT_04cad568;
    puVar4 = PTR_DAT_04cad330;
    puVar3 = PTR_DAT_04caa458;
    puVar1 = PTR_DAT_04ca9d18;
    if (lVar12 != 0) {
      System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                (&lStack_b0,lVar12,*(undefined8 *)PTR_DAT_04caed00);
      lStack_90 = lStack_b0;
      lVar12 = 0;
      lStack_b0 = 0;
      plStack_88 = plStack_a8;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      plStack_a8 = &lStack_90;
      while( true ) {
        uVar13 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                           (&lStack_90,*(undefined8 *)puVar7);
        if ((uVar13 & 1) == 0) break;
        lVar18 = lStack_78;
        if (iVar10 != (int)uStack_80) {
          lVar18 = 0;
        }
        lVar12 = lVar18 + lVar12;
      }
      System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
                (&lStack_90,*(undefined8 *)puVar5);
      lVar18 = *(long *)puVar1;
      if (lVar12 < 2) {
        lVar12 = 1;
      }
      lVar16 = *(long *)(lVar18 + 0x38);
      if (lVar16 == 0) {
        FUN_0216b4cc(lVar18);
        lVar16 = *(long *)(lVar18 + 0x38);
      }
      lVar16 = *(long *)(lVar16 + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
      if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_0216b470();
      }
      lVar16 = *(long *)puVar4;
      uVar19 = **(undefined8 **)(lVar18 + 0xb8);
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar16);
      }
      uVar19 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)PTR_DAT_04cb60f8,*(undefined8 *)PTR_DAT_04cb6108,uVar19,0);
      Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(0x44260000,0x418c0000,0);
      uVar22 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
      lVar18 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                         (0x44750000,uVar22,_UNK_00e204d4,param_1,uVar19,0,1,0);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x48) != 0)) {
        lVar16 = *(long *)puVar2;
        *(undefined1 *)(*(long *)(lVar18 + 0x48) + 0x30) = 0;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar16 = *(long *)puVar2;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar16 = *(long *)puVar2;
        }
        if (**(long **)(lVar16 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__BoosterOffer_2383048(**(long **)(lVar16 + 0xb8),0);
        }
        uVar19 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        lVar16 = *(long *)puVar8;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar16);
          lVar16 = *(long *)puVar8;
        }
        puVar17 = *(undefined8 **)(lVar16 + 0xb8);
        lVar20 = puVar17[1];
        if (lVar20 == 0) {
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar16);
            puVar17 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
          }
          uVar21 = *puVar17;
          lVar20 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(lVar20,uVar21,*(undefined8 *)PTR_DAT_04cb60e8,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *plVar14 = lVar20;
          thunk_FUN_02134474(plVar14,lVar20);
        }
        if (*(int *)(*(long *)PTR_DAT_04caf420 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_KitTopBar__Build_2283ff0(0xc3000000c3000000,uVar19,lVar20,0,0,0,1,0,0);
        Dino_BusSand_App_UI_BoosterBoxes__BoosterBox_231e5b4(0x44260000,lVar18,iVar10,uVar15,0);
        uVar22 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(0x44260000,0x418c0000,0);
        uVar19 = *(undefined8 *)(lVar18 + 0x28);
        uVar15 = System_Int64__ToString_482e7e4(&uStack_68,0);
        Dino_BusSand_App_UI_KitParts__Button_2306a4c
                  (0x43ba0000,uVar22,0xc35f0000,0x42940000,0x436c0000,uVar19,*(undefined8 *)puVar6,0
                   ,uVar15,*(undefined8 *)PTR_DAT_04caf5f0,0);
        puVar2 = PTR_DAT_04ca9c20;
        uVar15 = *(undefined8 *)(lVar18 + 0x28);
        plVar14 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
        puVar1 = PTR_DAT_04ca9ac8;
        lStack_b0 = lVar12;
        lVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_b0);
        if (plVar14 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar18 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
          goto LAB_023b244c;
          if ((int)plVar14[3] == 0) goto LAB_023b2448;
          plVar14[4] = lVar12;
          thunk_FUN_02134474(plVar14 + 4,lVar12);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar19 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)PTR_DAT_04cb6110,*(undefined8 *)PTR_DAT_04cb6118,
                              plVar14,0);
          puVar5 = PTR_DAT_04cad9a0;
          Dino_BusSand_App_UI_KitParts__Button_2306a4c
                    (_UNK_00e204dc,uVar22,0x433f0000,0x42940000,0x436c0000,uVar15,
                     *(undefined8 *)PTR_DAT_04cad9a0,2,uVar19,*(undefined8 *)PTR_DAT_04caffa8,0);
          uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(uVar15,param_1,*(undefined8 *)PTR_DAT_04cb60d8,0);
          puVar4 = PTR_DAT_04cad948;
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar15,1,
                     *(undefined8 *)PTR_DAT_04cad948,0);
          uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(uVar15,param_1,*(undefined8 *)PTR_DAT_04cb60d0,0);
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)puVar6,uVar15,1,*(undefined8 *)puVar4,0);
          uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Action___ctor_47b5ed0(uVar15,param_1,*(undefined8 *)PTR_DAT_04cb60e0,0);
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)puVar5,uVar15,1,*(undefined8 *)puVar4,0);
          plVar14 = (long *)FUN_02133068(*(undefined8 *)puVar2,2);
          puVar3 = PTR_DAT_04cb1d38;
          if (plVar14 == (long *)0x0) goto LAB_023b2444;
          if ((*(long *)PTR_DAT_04cb1d38 != 0) &&
             (lVar12 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb1d38,*(undefined8 *)(*plVar14 + 0x40)
                                         ), lVar12 == 0)) {
LAB_023b244c:
            uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar15,0);
          }
          if ((int)plVar14[3] != 0) {
            plVar14[4] = *(long *)puVar3;
            thunk_FUN_02134474();
            uStack_b4 = *(undefined4 *)(param_1 + 0x40);
            lVar12 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_b4);
            if ((lVar12 != 0) &&
               (lVar18 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar18 == 0))
            goto LAB_023b244c;
            if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
              plVar14[5] = lVar12;
              thunk_FUN_02134474(plVar14 + 5,lVar12);
              if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb6100,plVar14,0);
              return;
            }
          }
LAB_023b2448:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
LAB_023b2444:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

