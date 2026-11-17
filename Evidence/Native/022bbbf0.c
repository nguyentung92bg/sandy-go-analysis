/* IL2CPP: Dino.BusSand.App.UI.CupView$$get_SecondsLeft
int64_t Dino_BusSand_App_UI_CupView__get_SecondsLeft (Dino_BusSand_App_UI_CupView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CupView$$get_SecondsLeft
   int64_t Dino_BusSand_App_UI_CupView__get_SecondsLeft (Dino_BusSand_App_UI_CupView_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_CupView__get_SecondsLeft_21bbbf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022bbc04 to 023bbc0b has its CatchHandler @ 022bbc0c */
    FUN_02133224();
  }
  lVar1 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0(*(long *)(param_1 + 0x10),0);
  uVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar1 != 0) {
    lVar1 = Dino_BusSand_App_Meta_WeeklyCupModel__RemainingMs_2230570(lVar1,uVar2);
    return lVar1 / 1000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

