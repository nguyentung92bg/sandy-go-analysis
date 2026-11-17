/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnCloseClick
void Dino_BusSand_App_UI_YachtRacingStartPanel__OnCloseClick (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnCloseClick
   void Dino_BusSand_App_UI_YachtRacingStartPanel__OnCloseClick
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__OnCloseClick_21f32ec(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) &&
     (*(char *)(param_1 + 0x60) == '\0')) {
    *(undefined1 *)(param_1 + 0x61) = 1;
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    lVar2 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f3360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

