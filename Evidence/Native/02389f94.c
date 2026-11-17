/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$SetAlpha
void Dino_BusSand_App_UI_ScreenFade__SetAlpha (Dino_BusSand_App_UI_ScreenFade_o* __this, float a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$SetAlpha
   void Dino_BusSand_App_UI_ScreenFade__SetAlpha (Dino_BusSand_App_UI_ScreenFade_o* __this, float a,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenFade__SetAlpha_2289f94(undefined4 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02389fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
               *(undefined4 *)(param_2 + 0x34),param_1,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

