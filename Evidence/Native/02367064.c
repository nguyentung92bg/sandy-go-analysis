/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$get_RemoveAds
Dino_BusSand_App_Meta_RemoveAdsSettings_o* Dino_BusSand_App_Meta_MonetizationSettings__get_RemoveAds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$get_RemoveAds
   Dino_BusSand_App_Meta_RemoveAdsSettings_o*
   Dino_BusSand_App_Meta_MonetizationSettings__get_RemoveAds (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_MonetizationSettings__get_RemoveAds_2267064(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c0a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c0a8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_MonetizationSettings__get_Asset_226929c();
  if (lVar2 != 0) {
    return *(undefined8 *)(lVar2 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

