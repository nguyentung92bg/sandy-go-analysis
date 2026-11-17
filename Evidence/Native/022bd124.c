/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi.BusTowerStake$$AtStake
bool Dino_BusSand_App_UI_EventStakeUi_BusTowerStake__AtStake (Dino_BusSand_App_UI_EventStakeUi_BusTowerStake_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi.BusTowerStake$$AtStake
   bool Dino_BusSand_App_UI_EventStakeUi_BusTowerStake__AtStake
   (Dino_BusSand_App_UI_EventStakeUi_BusTowerStake_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_EventStakeUi_BusTowerStake__AtStake_21bd124(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
  if (iVar1 != 3) {
    return false;
  }
  lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar2 != 0) {
    iVar1 = Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc
                      (*(undefined4 *)(lVar2 + 0x18));
    lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
    if (lVar2 != 0) {
      return iVar1 < *(int *)(lVar2 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

