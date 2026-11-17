/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$get_On
bool Dino_BusSand_App_Meta_NoAdsOffer__get_On (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$get_On
   bool Dino_BusSand_App_Meta_NoAdsOffer__get_On (const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_NoAdsOffer__get_On_220ce04(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bd0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9bd0f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(5,0);
  puVar1 = PTR_DAT_04cacfd8;
  if ((uVar2 & 1) != 0) {
    if ((bRam0000000004f9c06c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cacfd8);
      bRam0000000004f9c06c = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_MonetizationSettings__get_RemoveAds_2267064();
    if (lVar3 != 0) {
      return *(undefined1 *)(lVar3 + 0x10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

