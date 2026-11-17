/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsAllStageMaxed
bool Dino_BusSand_App_Meta_PassportFeature__IsAllStageMaxed (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsAllStageMaxed
   bool Dino_BusSand_App_Meta_PassportFeature__IsAllStageMaxed
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__IsAllStageMaxed_2246d38(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf69 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x2c);
    iVar3 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50(param_1);
    return iVar4 + iVar3 <= iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

