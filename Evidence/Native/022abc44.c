/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OpenPack
bool Dino_BusSand_App_UI_GiftPackUi__OpenPack (int32_t packId, System_String_o* prefab, int32_t type, System_String_o* source, System_Action_o* onClosed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OpenPack
   bool Dino_BusSand_App_UI_GiftPackUi__OpenPack (int32_t packId, System_String_o* prefab, int32_t
   type, System_String_o* source, System_Action_o* onClosed, const MethodInfo* method); */

uint Dino_BusSand_App_UI_GiftPackUi__OpenPack_21abc44
               (undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9ba62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caec40);
    FUN_02132f7c(PTR_DAT_04caee18);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9ba62 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  puVar2 = PTR_DAT_04caec48;
  if ((uVar5 & 1) == 0) {
    if (param_3 != 5) {
      if (param_3 == 3) {
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if ((bRam0000000004f9ba63 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04caee20);
          FUN_02132f7c(PTR_DAT_04caee28);
          FUN_02132f7c(PTR_DAT_04caee30);
          FUN_02132f7c(PTR_DAT_04caee38);
          bRam0000000004f9ba63 = 1;
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
        lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        if (lVar7 == 0) {
LAB_022ac074:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (lVar7,*(undefined8 *)PTR_DAT_04caee28);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caee20);
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_Param___ctor_21b233c(lVar6,0);
        if (lVar6 == 0) goto LAB_022ac074;
        *(undefined4 *)(lVar6 + 0x10) = param_1;
        *(undefined8 *)(lVar6 + 0x18) = param_5;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),param_5);
        *(undefined8 *)(lVar6 + 0x20) = param_4;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),param_4);
        puVar3 = PTR_DAT_04caee38;
        puVar2 = PTR_DAT_04caee30;
        *(undefined1 *)(lVar6 + 0x28) = 1;
        uVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar7,*(undefined8 *)puVar3,2,lVar6,*(undefined8 *)puVar2);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        goto UnityEngine_Object__op_Inequality_43c8dec;
      }
      if (param_3 != 1) {
        return 0;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if (lVar6 != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
      if (lVar6 == 0) {
LAB_022abec0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__CurrentTheme_22357ac(lVar6,param_1,0);
      if ((lVar6 != 0) &&
         (uVar5 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar6 + 0x20),0),
         (uVar5 & 1) == 0)) {
        uVar8 = *(undefined8 *)(lVar6 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(uVar8,0);
        if ((uVar5 & 1) != 0) {
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
          lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caec40);
          System_Object___ctor_4870e5c(lVar6,0);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x10) = param_1;
            *(undefined8 *)(lVar6 + 0x18) = param_5;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),param_5);
            *(undefined8 *)(lVar6 + 0x20) = param_4;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),param_4);
            if (lVar7 != 0) {
              uVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                (lVar7,uVar8,2,lVar6,*(undefined8 *)PTR_DAT_04caee18);
              lVar7 = *(long *)puVar1;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar7);
              }
UnityEngine_Object__op_Inequality_43c8dec:
              puVar1 = PTR_DAT_04ca9ae8;
              if ((bRam0000000004fa8638 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
                bRam0000000004fa8638 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar8,0);
              return (uVar4 ^ 0xffffffff) & 1;
            }
          }
          goto LAB_022abec0;
        }
      }
    }
  }
  return 0;
}

