/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsInTime
bool Dino_BusSand_App_Meta_StreakRateFeature__IsInTime (Dino_BusSand_App_Meta_StreakRateSlot_o* s, int64_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsInTime
   bool Dino_BusSand_App_Meta_StreakRateFeature__IsInTime (Dino_BusSand_App_Meta_StreakRateSlot_o*
   s, int64_t t, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__IsInTime_224cf74(long param_1,long param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_2 < *(long *)(param_1 + 0x30)) {
    return false;
  }
  return param_2 <= *(long *)(param_1 + 0x38);
}

