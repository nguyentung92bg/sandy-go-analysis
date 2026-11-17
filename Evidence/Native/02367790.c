/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RemoveAdsPopupEvery
int32_t Dino_BusSand_App_Meta_Monetization__get_RemoveAdsPopupEvery (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RemoveAdsPopupEvery
   int32_t Dino_BusSand_App_Meta_Monetization__get_RemoveAdsPopupEvery (const MethodInfo* method);
    */

int Dino_BusSand_App_Meta_Monetization__get_RemoveAdsPopupEvery_2267790(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c07b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c07b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_MonetizationSettings__get_RemoveAds_2267064();
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0x24);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
    }
    iVar1 = 1;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

