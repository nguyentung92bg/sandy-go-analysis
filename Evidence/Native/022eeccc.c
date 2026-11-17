/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<ShowTrophyTipsNextFrame>d__33$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_d__33__MoveNext (Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel.<ShowTrophyTipsNextFrame>d__33$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_d__33__MoveNext
   (Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_d__33_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_d__33__MoveNext_21eeccc
               (long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* try { // try from 022eed0c to 023eedbb has its CatchHandler @ 022eed0c
                       catch() { ... } // from try @ 022eed0c with catch @ 022eed0c
                       catch() { ... } // from try @ 022eedc4 with catch @ 022eed0c */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
                    /* catch() { ... } // from try @ 022eec78 with catch @ 022eece0 */
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x91) == '\0') {
        Dino_BusSand_App_UI_YachtRacingPanel__OnClickTrophy_21ed8f0();
      }
    }
  }
  return iVar1 == 0;
}

