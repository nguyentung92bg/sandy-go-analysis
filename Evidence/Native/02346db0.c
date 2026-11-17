/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsStageMaxed
bool Dino_BusSand_App_Meta_PassportFeature__IsStageMaxed (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsStageMaxed
   bool Dino_BusSand_App_Meta_PassportFeature__IsStageMaxed
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t idx, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__IsStageMaxed_2246db0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0();
  iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50(param_1);
  return iVar2 + iVar1 <= param_2;
}

