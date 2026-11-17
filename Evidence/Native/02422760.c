/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_StreakShown
bool Dino_BusSand_App_UI_LiveOpsHome__get_StreakShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_StreakShown
   bool Dino_BusSand_App_UI_LiveOpsHome__get_StreakShown (const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome__get_StreakShown_2322760(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c5c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    bRam0000000004f9c5c0 = 1;
  }
  lVar3 = Dino_BusSand_App_UI_LiveOpsHome__get_Streak_2321798();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(7,0);
  bVar2 = false;
  if (((uVar4 & 1) != 0) && (lVar3 != 0)) {
    uVar4 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(lVar3,0);
    if ((uVar4 & 1) == 0) {
      bVar2 = false;
    }
    else {
      lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar3,0);
      bVar2 = lVar3 != 0;
    }
  }
  return bVar2;
}

