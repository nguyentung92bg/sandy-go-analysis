/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CanMutateAfterGuide
bool Dino_BusSand_App_Meta_StreakRateFeature__CanMutateAfterGuide (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CanMutateAfterGuide
   bool Dino_BusSand_App_Meta_StreakRateFeature__CanMutateAfterGuide
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__CanMutateAfterGuide_224de7c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(3);
  if ((uVar1 & 1) != 0) {
    uVar1 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(3);
    if ((uVar1 & 1) != 0) {
      return true;
    }
    lVar2 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if (lVar2 == 0) {
      return false;
    }
    if (*(int *)(lVar2 + 0x28) == 0) {
      lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
      return *(long *)(lVar2 + 0x30) <= lVar3;
    }
  }
  return false;
}

