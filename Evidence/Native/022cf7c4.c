/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$Revive
void Dino_BusSand_App_UI_PassportContinuePanel__Revive (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, int32_t buses, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$Revive
   void Dino_BusSand_App_UI_PassportContinuePanel__Revive
   (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, int32_t buses, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_PassportContinuePanel__Revive_21cf7c4(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
    lVar3 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
      *puVar2 = 0;
      thunk_FUN_02134474(puVar2,0);
      Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose_22bf694(1,0);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
      if (lVar3 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x022cf850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_2,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

