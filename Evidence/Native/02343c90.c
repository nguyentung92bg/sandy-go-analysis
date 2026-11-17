/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$IncrementShowCount
int32_t Dino_BusSand_App_Meta_NoAdsFeature__IncrementShowCount (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature$$IncrementShowCount
   int32_t Dino_BusSand_App_Meta_NoAdsFeature__IncrementShowCount
   (Dino_BusSand_App_Meta_NoAdsFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_NoAdsFeature__IncrementShowCount_2243c90(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04cb3918;
  if ((bRam0000000004f9bf2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3920);
    FUN_02132f7c(PTR_DAT_04cb3918);
    bRam0000000004f9bf2a = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_04cb3920;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar3);
    lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      return *(undefined4 *)(lVar2 + 0x14);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

