/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsStageUnlocked
bool Dino_BusSand_App_Meta_PassportFeature__IsStageUnlocked (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsStageUnlocked
   bool Dino_BusSand_App_Meta_PassportFeature__IsStageUnlocked
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__IsStageUnlocked_2246c88(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf68 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    return param_2 < *(int *)(lVar2 + 0x2c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

