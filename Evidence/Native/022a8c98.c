/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$OnOpen
void Dino_BusSand_App_UI_GiftPackPanel__OnOpen (Dino_BusSand_App_UI_GiftPackPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$OnOpen
   void Dino_BusSand_App_UI_GiftPackPanel__OnOpen (Dino_BusSand_App_UI_GiftPackPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackPanel__OnOpen_21a8c98(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = PTR_DAT_04caec40;
  if ((bRam0000000004f9ba53 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec50);
    FUN_02132f7c(PTR_DAT_04caec58);
    FUN_02132f7c(PTR_DAT_04caec60);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caec40);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04caec78);
    FUN_02132f7c(PTR_DAT_04caec80);
    FUN_02132f7c(PTR_DAT_04caec88);
    FUN_02132f7c(PTR_DAT_04caec90);
    FUN_02132f7c(PTR_DAT_04caec98);
    FUN_02132f7c(PTR_DAT_04caeca0);
    FUN_02132f7c(PTR_DAT_04caeca8);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04cabc50);
    FUN_02132f7c(PTR_DAT_04cad9e8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad200);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caecb8);
    bRam0000000004f9ba53 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_2 == (long *)0x0) {
LAB_022a8e60:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6))
    goto LAB_022a8e60;
  }
  puVar6 = PTR_DAT_04caec48;
  if (param_1 == 0) {
LAB_022a93cc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar13 = (long *)(param_1 + 0x38);
  *plVar13 = (long)param_2;
  thunk_FUN_02134474(plVar13,param_2);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
  if (lVar8 != 0) {
    if (*plVar13 == 0) goto LAB_022a93cc;
    lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8
                      (lVar8,*(undefined4 *)(*plVar13 + 0x10),0);
    if (lVar9 != 0) {
      lVar10 = *(long *)puVar6;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar6;
      }
      if (**(char **)(lVar10 + 0xb8) != '\0') {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar9 + 0x18);
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme_22357ac
                            (lVar8,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),0);
          if ((lVar9 != 0) &&
             (uVar11 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar9 + 0x30),0),
             (uVar11 & 1) == 0)) {
            uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_1,*(undefined8 *)PTR_DAT_04caecb8,0);
            uVar14 = *(undefined8 *)(lVar9 + 0x30);
            lVar10 = *(long *)PTR_DAT_04ca9d18;
            lVar9 = *(long *)(lVar10 + 0x38);
            if (lVar9 == 0) {
              FUN_0216b4cc(lVar10);
              lVar9 = *(long *)(lVar10 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0216b470();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0216b470();
            }
            uVar15 = **(undefined8 **)(lVar9 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
            }
            uVar14 = Dino_BusSand_App_Lang__Get_215f9c0(uVar14,uVar15,0);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar12,uVar14);
          }
          uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                             (param_1,*(undefined8 *)PTR_DAT_04caec98,0);
          uVar14 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748
                             (*(undefined4 *)(param_1 + 0x40),0);
          puVar4 = PTR_DAT_04caec68;
          if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
          }
          Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar12,uVar14);
          uVar2 = *(undefined4 *)(param_1 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cad200,uVar2,0);
          uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,*(undefined8 *)PTR_DAT_04caecb0,0);
          uVar12 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar12,*(undefined8 *)PTR_DAT_04ca9c30,0);
          lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                            (param_1,*(undefined8 *)PTR_DAT_04caec88,0);
          uVar7 = System_String__IsNullOrEmpty_46d2084(uVar12,0);
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar9,(uVar7 ^ 0xffffffff) & 1);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
          if (((uVar11 & 1) != 0) &&
             (uVar11 = System_String__IsNullOrEmpty_46d2084(uVar12,0), (uVar11 & 1) == 0)) {
            if (lVar9 == 0) goto LAB_022a93cc;
            uVar14 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cabc50,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar12 = Dino_BusSand_App_UI_GiftPackUi__DiscountText_21a96c0(uVar12);
            Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar14,uVar12);
          }
          Dino_BusSand_App_UI_GiftPackPanel__BuildItems_21a972c(param_1);
          puVar4 = PTR_DAT_04caa458;
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)PTR_DAT_04caec58,0);
          puVar5 = PTR_DAT_04cad948;
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar12,1,
                     *(undefined8 *)PTR_DAT_04cad948,0);
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Action___ctor_47b5ed0(uVar12,param_1,*(undefined8 *)PTR_DAT_04caec50,0);
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (param_1,*(undefined8 *)PTR_DAT_04cad9e8,uVar12,1,*(undefined8 *)puVar5,0);
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
          System_Action_int____ctor_35ef18c(uVar12,param_1,*(undefined8 *)PTR_DAT_04caec60,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_GiftPackFeature__add_PackInvalidated_2233d70(uVar12,0);
          uVar12 = Dino_BusSand_App_UI_GiftPackPanel__Countdown_21a9fe0(param_1);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar12,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar11 = System_String__IsNullOrEmpty_46d2084
                               (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),0);
            lVar9 = *plVar13;
            if ((uVar11 & 1) == 0) {
              if (lVar9 == 0) goto LAB_022a93cc;
              uVar12 = *(undefined8 *)(lVar9 + 0x20);
            }
            else {
              if (lVar9 == 0) goto LAB_022a93cc;
              puVar1 = (undefined8 *)PTR_DAT_04caec80;
              if (*(long *)(lVar9 + 0x18) != 0) {
                puVar1 = (undefined8 *)PTR_DAT_04caec90;
              }
              uVar12 = *puVar1;
            }
            uVar14 = Dino_BusSand_App_Meta_GiftPackTrack__BreakIce_2240154
                               (lVar8,*(undefined4 *)(lVar9 + 0x10),uVar12,0);
            *(undefined8 *)(param_1 + 0x48) = uVar14;
            thunk_FUN_02134474();
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_GameTracking__PackSource_221773c(uVar12,&uStack_48,&uStack_50,0);
            uVar14 = uStack_48;
            uVar12 = uStack_50;
            lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,1);
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              uVar15 = *(undefined8 *)PTR_DAT_04caeca0;
              *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x40);
              Dino_BusSand_App_Meta_GameTracking__IapShow_221791c
                        (param_1,uVar14,uVar15,uVar12,lVar8,0);
              Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44
                        (*(undefined8 *)PTR_DAT_04caeca8,*(undefined4 *)(param_1 + 0x40),
                         *(undefined8 *)PTR_DAT_04caec78,0);
              Dino_BusSand_App_Meta_GiftPackTrack__GiftShow_223ed60
                        (*(undefined8 *)(param_1 + 0x48),0);
              return;
            }
          }
        }
        goto LAB_022a93cc;
      }
    }
  }
  if ((bRam0000000004f9ba5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caecc0);
    bRam0000000004f9ba5c = 1;
  }
  puVar6 = PTR_DAT_04caecc0;
  if (*(char *)(param_1 + 0x45) == '\0') {
    *(undefined1 *)(param_1 + 0x45) = 1;
    Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44(*(undefined8 *)puVar6,0,0,0);
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar8 = 0;
    }
    else {
      plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar8 = *plVar13;
      *plVar13 = 0;
      thunk_FUN_02134474(plVar13,0);
    }
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    puVar6 = PTR_DAT_04caec48;
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if ((lVar9 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
      if ((*(long *)(param_1 + 0x38) == 0) || (lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                (lVar9,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),0);
    }
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022a9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      return;
    }
  }
  return;
}

