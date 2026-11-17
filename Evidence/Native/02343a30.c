/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$ShouldShowHallEntry
bool Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$ShouldShowHallEntry
   bool Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry
   (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method); */

byte Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cb00a0;
  if ((bRam0000000004f9bf27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb00a0);
    bRam0000000004f9bf27 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  bVar2 = 0;
  if (**(char **)(lVar3 + 0xb8) != '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_NoAdsFeature__get_FirstInterTriggered_2243944();
    if ((uVar4 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      bVar2 = Dino_BusSand_App_Meta_NoAdsFeature__get_HasNoAds_2243858();
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2 & 1;
}

