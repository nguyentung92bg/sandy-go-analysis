/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_WouldLoseProgress
bool Dino_BusSand_App_Meta_WinStreak__get_WouldLoseProgress (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_WouldLoseProgress
   bool Dino_BusSand_App_Meta_WinStreak__get_WouldLoseProgress (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WinStreak__get_WouldLoseProgress_229451c(void)

{
  int iVar1;
  long lVar2;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023944b0 with catch @ 0239451c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023944c4 with catch @ 02394520
                        */
  iVar1 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690();
  if (iVar1 != 3) {
                    /* catch() { ... } // from try @ 0239453c with catch @ 02394558 */
                    /* try { // try from 0239455c to 02494563 has its CatchHandler @ 0239456c */
    return false;
  }
  lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar2 != 0) {
    iVar1 = Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc
                      (*(undefined4 *)(lVar2 + 0x18));
                    /* try { // try from 0239453c to 0249453f has its CatchHandler @ 02394558 */
                    /* try { // try from 02394540 to 0249455b has its CatchHandler @ 023941cc */
    lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if (lVar2 != 0) {
      return iVar1 < *(int *)(lVar2 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02394564 to 0249456f has its CatchHandler @ 023941cc */
  FUN_02133224();
}

