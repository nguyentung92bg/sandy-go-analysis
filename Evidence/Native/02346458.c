/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$NeedShowPassportOpen
bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportOpen (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$NeedShowPassportOpen
   bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportOpen
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportOpen_2246458(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf5b = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (((*(char *)(lVar2 + 0x60) != '\0') &&
        (uVar3 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(6), (uVar3 & 1) != 0)) &&
       (*(int *)(lVar2 + 0x14) == 0)) {
      lVar2 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(param_1);
      return 0 < lVar2;
    }
  }
  return false;
}

