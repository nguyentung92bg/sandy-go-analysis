/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<CloseNextFrame>d__15$$MoveNext
bool Dino_BusSand_App_UI_StreakRatePanel__CloseNextFrame_d__15__MoveNext (Dino_BusSand_App_UI_StreakRatePanel__CloseNextFrame_d__15_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<CloseNextFrame>d__15$$MoveNext
   bool Dino_BusSand_App_UI_StreakRatePanel__CloseNextFrame_d__15__MoveNext
   (Dino_BusSand_App_UI_StreakRatePanel__CloseNextFrame_d__15_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_StreakRatePanel__CloseNextFrame_d__15__MoveNext_21e5724(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
                    /* try { // try from 022e5744 to 023e5823 has its CatchHandler @ 022e5a80 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(*(long *)(param_1 + 0x20),0);
  }
  return iVar1 == 0;
}

