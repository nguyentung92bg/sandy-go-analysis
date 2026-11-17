/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$OnDisable
void Dino_BusSand_App_UI_ScreenFade__OnDisable (Dino_BusSand_App_UI_ScreenFade_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenFade$$OnDisable
   void Dino_BusSand_App_UI_ScreenFade__OnDisable (Dino_BusSand_App_UI_ScreenFade_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenFade__OnDisable_2289fc4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c16f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c16f = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    Dino_BusSand_App_UI_ScreenFade__SetAlpha_2289f94(0,param_1);
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plVar3 + 0x2c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x2d0));
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

