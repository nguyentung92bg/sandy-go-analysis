/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_GiftShown
bool Dino_BusSand_App_UI_LiveOpsHome__get_GiftShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_GiftShown
   bool Dino_BusSand_App_UI_LiveOpsHome__get_GiftShown (const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome__get_GiftShown_2321dd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    bRam0000000004f9c5c2 = 1;
  }
  lVar8 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar9 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(6,0);
  if ((((uVar9 & 1) != 0) && (lVar8 != 0)) &&
     (uVar9 = Dino_BusSand_App_Meta_GiftPackFeature__IsPackActive_223a610(lVar8,0x3ec,0),
     (uVar9 & 1) != 0)) {
    uVar6 = Dino_BusSand_App_UI_LiveOpsHome__get_GiftStoreItem_23228b4();
    if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad1f0);
    }
    puVar1 = PTR_DAT_04cac018;
    if ((bRam0000000004f9b901 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad1f0,0);
      FUN_02132f7c(PTR_DAT_04cac018);
      FUN_02132f7c(PTR_DAT_04cad238);
      FUN_02132f7c(PTR_DAT_04cad200);
      bRam0000000004f9b901 = 1;
    }
    puVar2 = PTR_DAT_04cad200;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,uVar6,0);
    bVar3 = false;
    if (lVar8 != 0) {
      uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,*(undefined8 *)PTR_DAT_04cad238,0);
      iVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
      if (iVar4 < 1) {
        bVar3 = true;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar5 = Dino_BusSand_App_Iap__PurchasedCount_217a53c(uVar6);
        bVar3 = iVar5 < iVar4;
      }
    }
    return bVar3;
  }
  return false;
}

