/* IL2CPP: Dino.BusSand.App.UI.RoyaleView$$get_SecondsLeft
int64_t Dino_BusSand_App_UI_RoyaleView__get_SecondsLeft (Dino_BusSand_App_UI_RoyaleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RoyaleView$$get_SecondsLeft
   int64_t Dino_BusSand_App_UI_RoyaleView__get_SecondsLeft (Dino_BusSand_App_UI_RoyaleView_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_RoyaleView__get_SecondsLeft_21ba914(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RemainDurationSeconds_222127c
                      (*(long *)(param_1 + 0x10),0);
                    /* try { // try from 022ba92c to 023ba933 has its CatchHandler @ 022ba934 */
    return (long)iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022ba92c with catch @ 022ba934
                       try { // try from 022ba934 to 023ba963 has its CatchHandler @ 022ba890 */
  FUN_02133224();
}

