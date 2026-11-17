/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_ScoreMaxIndex
int32_t Dino_BusSand_App_Meta_StreakRateFeature__get_ScoreMaxIndex (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_ScoreMaxIndex
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__get_ScoreMaxIndex
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_StreakRateFeature__get_ScoreMaxIndex_224c160(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008();
  lVar2 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(param_1,uVar1);
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

