/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$get_HasNoAds
bool Dino_BusSand_App_Meta_NoAdsFeature__get_HasNoAds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$get_HasNoAds
   bool Dino_BusSand_App_Meta_NoAdsFeature__get_HasNoAds (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_NoAdsFeature__get_HasNoAds_2243858(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bf25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bf25 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x10) == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = *(char *)(lVar3 + 0xdc) != '\0';
  }
  return bVar2;
}

