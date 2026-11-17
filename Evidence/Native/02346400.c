/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_HavePurchasedPassport
bool Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_HavePurchasedPassport
   bool Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined1
Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport_2246400(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf5a = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x61);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

