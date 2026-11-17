/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OnStoreItemClick
bool Dino_BusSand_App_UI_GiftPackUi__OnStoreItemClick (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OnStoreItemClick
   bool Dino_BusSand_App_UI_GiftPackUi__OnStoreItemClick (int32_t storeItemId, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_GiftPackUi__OnStoreItemClick_21ac208(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9ba65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04caee60);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9ba65 = 1;
  }
  puVar3 = PTR_DAT_04cad270;
  puVar2 = PTR_DAT_04cad200;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,*(undefined8 *)puVar3,0);
  iVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar5,0,0);
  if (iVar4 == 7) {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if (((lVar6 != 0) &&
        (iVar4 = Dino_BusSand_App_Meta_GiftPackFeature__PackIdByShopItem_2234d90(lVar6,param_1,0),
        0 < iVar4)) &&
       (uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(lVar6,iVar4,0),
       (uVar7 & 1) != 0)) {
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_GiftPackUi__OpenGoldenPanel_21abec4
                (iVar4,0,*(undefined8 *)PTR_DAT_04caee60,0);
    }
  }
  else {
    if (iVar4 != 4) {
      return 0;
    }
    Dino_BusSand_App_UI_PassportUi__OpenBuy_21d75ac(param_1,*(undefined8 *)PTR_DAT_04caee60,0);
  }
  return 1;
}

