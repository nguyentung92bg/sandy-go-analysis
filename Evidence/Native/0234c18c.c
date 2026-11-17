/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsAllScoreGot
bool Dino_BusSand_App_Meta_StreakRateFeature__IsAllScoreGot (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsAllScoreGot
   bool Dino_BusSand_App_Meta_StreakRateFeature__IsAllScoreGot
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__IsAllScoreGot_224c18c(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008();
  bVar2 = false;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x48);
    lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(param_1,lVar3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = *(int *)(lVar3 + 0x18) <= iVar1;
  }
  return bVar2;
}

