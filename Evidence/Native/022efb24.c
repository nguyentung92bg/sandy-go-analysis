/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$OnClose
void Dino_BusSand_App_UI_YachtRacingRewardPanel__OnClose (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$OnClose
   void Dino_BusSand_App_UI_YachtRacingRewardPanel__OnClose
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel__OnClose_21efb24(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + 0x6a) == '\0') && (*(long *)(param_1 + 0x38) != 0)) {
    *(undefined1 *)(param_1 + 0x6a) = 1;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    *puVar1 = 0;
    thunk_FUN_02134474(puVar1,0);
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    lVar3 = *plVar2;
    *plVar2 = 0;
    thunk_FUN_02134474(plVar2,0);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022efb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

