/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$get_HomeButton
bool Dino_BusSand_App_Meta_NoAdsOffer__get_HomeButton (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$get_HomeButton
   bool Dino_BusSand_App_Meta_NoAdsOffer__get_HomeButton (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_NoAdsOffer__get_HomeButton_220d208(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if ((bRam0000000004f9bd14 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd14 = 1;
  }
  uVar8 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsHomeButton_226711c(0);
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar1;
      }
      lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(lVar10 + 0xdc) == '\0') {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
        iVar5 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsFromLevel_2267734(0);
        if ((iVar5 <= iVar4) &&
           (uVar8 = Dino_BusSand_App_Meta_OfferScheduler__get_Allowed_220c3e8(), (uVar8 & 1) != 0))
        {
          uVar6 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsStoreItem_22670c0(0);
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
          lVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,uVar6,0);
          bVar3 = false;
          if (lVar9 != 0) {
            uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar9,*(undefined8 *)PTR_DAT_04cad238,0);
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
      }
    }
  }
  return false;
}

