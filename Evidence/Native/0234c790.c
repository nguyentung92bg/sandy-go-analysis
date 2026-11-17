/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$PendingLevelType
int32_t Dino_BusSand_App_Meta_StreakRateFeature__PendingLevelType (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$PendingLevelType
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__PendingLevelType
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

uint Dino_BusSand_App_Meta_StreakRateFeature__PendingLevelType_224c790
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((bRam0000000004f9bfa6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfa6 = 1;
  }
  puVar1 = PTR_DAT_04cacb18;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x54) != '\0')) {
    return *(uint *)(param_2 + 0x58);
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar2,0);
  if (9 < (int)uVar3) {
    if (uVar3 == 10) {
      return 1;
    }
    if (0xe < uVar3) {
      if (0x19999999 < (uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000)) {
        return (uint)(uVar3 * -0x33333333 < 0x33333334);
      }
      return 2;
    }
  }
  return 0;
}

