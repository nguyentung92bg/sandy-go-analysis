/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$AtStake
bool Dino_BusSand_App_Meta_StreakRateFeature__AtStake (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$AtStake
   bool Dino_BusSand_App_Meta_StreakRateFeature__AtStake (Dino_BusSand_App_Meta_StreakRateFeature_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__AtStake_2250888(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char acStack_14 [4];
  
  if ((bRam0000000004f9bfc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2178);
    FUN_02132f7c(PTR_DAT_04cb2ea0);
    bRam0000000004f9bfc4 = 1;
  }
  acStack_14[0] = '\0';
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(3);
  bVar1 = false;
  if (((uVar2 & 1) != 0) &&
     (lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1),
     bVar1 = false, lVar3 != 0)) {
    lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    if ((lVar4 < *(long *)(lVar3 + 0x30)) ||
       (((uVar2 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(param_1,lVar3),
         (uVar2 & 1) != 0 || (*(char *)(lVar3 + 0x5c) != '\0')) ||
        (uVar2 = Dino_BusSand_App_Meta_StreakRateFeature__IsAllScoreGot_224c18c(param_1),
        (uVar2 & 1) != 0)))) {
      bVar1 = false;
    }
    else {
      uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__SettleRange_2250978
                        (*(undefined8 *)PTR_DAT_04cb2ea0,*(undefined8 *)PTR_DAT_04cb2178,
                         *(undefined4 *)(lVar3 + 0x14),acStack_14);
      if ((uVar2 & 1) == 0) {
        bVar1 = 0 < *(int *)(lVar3 + 0x14);
      }
      else {
        bVar1 = acStack_14[0] != '\0';
      }
    }
  }
  return bVar1;
}

