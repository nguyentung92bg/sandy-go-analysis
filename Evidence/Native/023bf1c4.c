/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$NeedShowContinueBottom
bool Dino_BusSand_App_UI_EndOfLevelRules__NeedShowContinueBottom (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$NeedShowContinueBottom
   bool Dino_BusSand_App_UI_EndOfLevelRules__NeedShowContinueBottom (const MethodInfo* method); */

bool Dino_BusSand_App_UI_EndOfLevelRules__NeedShowContinueBottom_22bf1c4(void)

{
  long lVar1;
  
  if ((bRam0000000004f9c348 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65d8);
    bRam0000000004f9c348 = 1;
  }
  lVar1 = Dino_BusSand_App_UI_EndOfLevelRules__ContinueOrder_22c0074();
  if (lVar1 != 0) {
    return 0 < *(int *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

