/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Raw
UnityEngine_Rect_o Dino_BusSand_App_UI_ScreenSafe__get_Raw (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$get_Raw
   UnityEngine_Rect_o Dino_BusSand_App_UI_ScreenSafe__get_Raw (const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_ScreenSafe__get_Raw_21ff5ac(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_04cafcc0;
  if ((bRam0000000004f9bc83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b90);
    FUN_02132f7c(PTR_DAT_04cb1b98);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9bc83 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) == '\0') {
    UnityEngine_Screen__get_safeArea_436a810(0);
    uVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_00;
  }
  else {
    uVar3 = *(undefined4 *)(*(char **)(lVar2 + 0xb8) + 4);
    uVar5 = 0;
    uVar6 = 0;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}

