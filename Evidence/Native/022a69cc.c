/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<CloseNextFrame>d__33$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerPanel__CloseNextFrame_d__33__MoveNext (Dino_BusSand_App_UI_ClimbTowerPanel__CloseNextFrame_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<CloseNextFrame>d__33$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerPanel__CloseNextFrame_d__33__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerPanel__CloseNextFrame_d__33_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_ClimbTowerPanel__CloseNextFrame_d__33__MoveNext_21a69cc(long param_1)

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
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(*(long *)(param_1 + 0x20),0);
  }
  return iVar1 == 0;
}

