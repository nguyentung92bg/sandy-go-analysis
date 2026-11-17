/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_DoneThisMonth
int32_t Dino_BusSand_App_Meta_DailyChallengeFeature__get_DoneThisMonth (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_DoneThisMonth
   int32_t Dino_BusSand_App_Meta_DailyChallengeFeature__get_DoneThisMonth
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_DailyChallengeFeature__get_DoneThisMonth_222fb24(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Model_222f838();
  uVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9be56 = 1;
  }
  Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(lVar1,uVar2);
  if ((*(long *)(lVar1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + 0x20), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

