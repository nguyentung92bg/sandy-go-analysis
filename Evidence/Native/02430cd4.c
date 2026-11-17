/* IL2CPP: Dino.BusSand.App.UI.PlayOnOffer$$get_Offered
bool Dino_BusSand_App_UI_PlayOnOffer__get_Offered (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayOnOffer$$get_Offered
   bool Dino_BusSand_App_UI_PlayOnOffer__get_Offered (const MethodInfo* method); */

bool Dino_BusSand_App_UI_PlayOnOffer__get_Offered_2330cd4(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000004f9c622 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c622 = 1;
  }
  uVar5 = Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferEnabled_2267178(0);
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      iVar3 = Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferFromLevel_226728c(0);
      if (iVar3 <= iVar2) {
        uVar4 = Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferStoreItem_2267230(0);
        if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac018);
        }
        lVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cad200,uVar4,0);
        if (lVar6 == 0) {
          return false;
        }
        uVar4 = Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferStoreItem_2267230(0);
        if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad1f0);
        }
        uVar5 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar4,0);
        if ((uVar5 & 1) != 0) {
          uVar5 = Dino_BusSand_App_Meta_Monetization__get_PlayOnOnlyWhenShort_22673bc(0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar6 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
            if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac440);
            }
            iVar2 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
            return lVar6 < iVar2;
          }
          return true;
        }
      }
    }
  }
  return false;
}

