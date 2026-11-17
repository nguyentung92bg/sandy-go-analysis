/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$NeedShowPassportContinue
bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportContinue (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$NeedShowPassportContinue
   bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportContinue
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportContinue_22466cc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9bf5f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf5f = 1;
  }
  uVar2 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  puVar1 = PTR_DAT_04cb01b0;
  if ((uVar2 & 1) != 0) {
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar3 == 0) {
LAB_02346764:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar3 + 0x1c) == '\0') {
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar3 == 0) goto LAB_02346764;
      if (*(int *)(lVar3 + 0x14) == 1) {
        lVar3 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(param_1);
        return 0 < lVar3;
      }
    }
  }
  return false;
}

