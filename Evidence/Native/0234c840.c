/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$WinAddScore
int32_t Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$WinAddScore
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

int Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore_224c840(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    Dino_BusSand_App_Meta_StreakRateFeature__PendingLevelType_224c790();
    iVar1 = Dino_BusSand_App_Meta_StreakTowerUtil__LevelStreakRate_224c2f8();
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    return iVar1 * 5;
  }
  return 0;
}

