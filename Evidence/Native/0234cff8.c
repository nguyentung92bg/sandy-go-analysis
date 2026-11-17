/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_CurrentEndMs
int64_t Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentEndMs (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_CurrentEndMs
   int64_t Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentEndMs
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentEndMs_224cff8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008();
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
  }
  return uVar2;
}

