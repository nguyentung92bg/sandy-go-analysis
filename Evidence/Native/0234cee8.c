/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsTimeFinished
bool Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$IsTimeFinished
   bool Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bfac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3ba8);
    bRam0000000004f9bfac = 1;
  }
  if ((param_2 == 0) || (*(char *)(param_2 + 0x5d) != '\0')) {
    uVar3 = 1;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x38);
    lVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    puVar1 = PTR_DAT_04cb3ba8;
    if (lVar2 < lVar4) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      *(undefined1 *)(param_2 + 0x5d) = 1;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar1);
    }
  }
  return uVar3;
}

