/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_Golden
Dino_BusSand_App_Meta_GoldenGiftState_o* Dino_BusSand_App_Meta_GiftPackFeature__get_Golden (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$get_Golden
   Dino_BusSand_App_Meta_GoldenGiftState_o* Dino_BusSand_App_Meta_GiftPackFeature__get_Golden
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb3390;
  if ((bRam0000000004f9bed4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9bed4 = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return *(undefined8 *)(lVar2 + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

