/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsCheat
bool Dino_BusSand_App_Meta_StreakRateFeature__IsCheat (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsCheat
   bool Dino_BusSand_App_Meta_StreakRateFeature__IsCheat (Dino_BusSand_App_Meta_StreakRateFeature_o*
   __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__IsCheat_224ceb8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    return lVar1 < *(long *)(param_2 + 0x30);
  }
  return false;
}

