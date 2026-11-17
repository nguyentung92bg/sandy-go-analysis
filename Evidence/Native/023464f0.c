/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$NeedShowPassportResult
bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportResult (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$NeedShowPassportResult
   bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportResult
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportResult_22464f0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000004f9bf5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf5c = 1;
  }
  uVar1 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((uVar1 & 1) != 0) {
    lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar2 + 0x14) == 1) {
      lVar2 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(param_1);
      return lVar2 < 1;
    }
  }
  return false;
}

