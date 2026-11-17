/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsInStreakRate
bool Dino_BusSand_App_Meta_StreakRateFeature__IsInStreakRate (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsInStreakRate
   bool Dino_BusSand_App_Meta_StreakRateFeature__IsInStreakRate
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__IsInStreakRate_224cfa4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(3);
  if ((uVar1 & 1) != 0) {
    lVar2 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if (lVar2 == 0) {
      return false;
    }
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    if (*(long *)(lVar2 + 0x30) <= lVar3) {
      return *(int *)(lVar2 + 0x28) == 0;
    }
  }
  return false;
}

