/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnClose
void Dino_BusSand_App_UI_YachtRacingStartPanel__OnClose (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnClose
   void Dino_BusSand_App_UI_YachtRacingStartPanel__OnClose
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__OnClose_21f3288(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x61) == '\0') {
    *(undefined1 *)(param_1 + 0x61) = 1;
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar2 = *plVar1;
      *plVar1 = 0;
      thunk_FUN_02134474(plVar1,0);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f32d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
  }
  return;
}

