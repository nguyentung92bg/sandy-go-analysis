/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$ShouldForceShow
bool Dino_BusSand_App_Meta_NoAdsFeature__ShouldForceShow (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$ShouldForceShow
   bool Dino_BusSand_App_Meta_NoAdsFeature__ShouldForceShow (Dino_BusSand_App_Meta_NoAdsFeature_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_NoAdsFeature__ShouldForceShow_2243ac4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cb00a0;
  if ((bRam0000000004f9bf28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3918);
    FUN_02132f7c(PTR_DAT_04cb00a0);
    bRam0000000004f9bf28 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) != '\0') {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_NoAdsFeature__get_FirstInterTriggered_2243944();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_Meta_NoAdsFeature__get_HasNoAds_2243858();
      if ((uVar3 & 1) == 0) {
        lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)PTR_DAT_04cb3918);
        if (lVar2 != 0) {
          return *(char *)(lVar2 + 0x10) == '\0';
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  return false;
}

