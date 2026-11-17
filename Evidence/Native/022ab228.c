/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel.<>c__DisplayClass21_0$$<OnBuyClick>b__0
void Dino_BusSand_App_UI_GiftPackPanel___c__DisplayClass21_0___OnBuyClick_b__0 (Dino_BusSand_App_UI_GiftPackPanel___c__DisplayClass21_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel.<>c__DisplayClass21_0$$<OnBuyClick>b__0
   void Dino_BusSand_App_UI_GiftPackPanel___c__DisplayClass21_0___OnBuyClick_b__0
   (Dino_BusSand_App_UI_GiftPackPanel___c__DisplayClass21_0_o* __this, bool ok, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GiftPackPanel___c__DisplayClass21_0___OnBuyClick_b__0_21ab228
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar1 = PTR_DAT_04caed98;
  if ((bRam0000000004f9ba5e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caeda0);
    FUN_02132f7c(PTR_DAT_04caed98);
    FUN_02132f7c(PTR_DAT_04caeda8);
    FUN_02132f7c(PTR_DAT_04caedb0);
    FUN_02132f7c(PTR_DAT_04caedb8);
    bRam0000000004f9ba5e = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_022ab538:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x44) = 0;
  if ((param_2 & 1) != 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(uVar10,0);
    if (lVar3 == 0) goto LAB_022ab538;
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = uVar4;
    thunk_FUN_02134474(puVar7,uVar4);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar9 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    lVar8 = 0;
    if ((uVar5 & 1) != 0) {
      if (lVar9 == 0) goto LAB_022ab538;
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar9,*(undefined8 *)PTR_DAT_04caeda8);
      if ((uVar5 & 1) == 0) {
        lVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar9,*(undefined8 *)PTR_DAT_04caedb8,4,0,*(undefined8 *)PTR_DAT_04caedb0
                          );
      }
      else {
        lVar8 = 0;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar5 & 1) == 0) {
      uVar4 = *puVar7;
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar10 = *puVar6;
      uVar11 = puVar6[1];
      uVar12 = puVar6[2];
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(uVar10,uVar11,uVar12,uVar4,0,0,0);
    }
    else {
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
      System_Action_Vector3____ctor_35f2828(uVar4,lVar3,*(undefined8 *)PTR_DAT_04caeda0,0);
      if (lVar8 == 0) goto LAB_022ab538;
      *(undefined8 *)(lVar8 + 0x38) = uVar4;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x38),uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_022ab538;
      if (*(char *)(lVar3 + 0x45) == '\0') {
        if ((bRam0000000004f9ba5c & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caec48);
          FUN_02132f7c(PTR_DAT_04caecc0);
          bRam0000000004f9ba5c = 1;
        }
        puVar1 = PTR_DAT_04caecc0;
        if (*(char *)(lVar3 + 0x45) == '\0') {
          *(undefined1 *)(lVar3 + 0x45) = 1;
          Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44(*(undefined8 *)puVar1,0,0,0);
          if (*(long *)(lVar3 + 0x38) == 0) {
            lVar9 = 0;
          }
          else {
            plVar2 = (long *)(*(long *)(lVar3 + 0x38) + 0x18);
            lVar9 = *plVar2;
            *plVar2 = 0;
            thunk_FUN_02134474(plVar2,0);
          }
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar3,0);
          puVar1 = PTR_DAT_04caec48;
          if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
          if ((lVar8 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar8 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
            if ((*(long *)(lVar3 + 0x38) == 0) || (lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                      (lVar8,*(undefined4 *)(*(long *)(lVar3 + 0x38) + 0x10),0);
          }
          if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022a9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
            ;
            return;
          }
        }
        return;
      }
    }
  }
  return;
}

