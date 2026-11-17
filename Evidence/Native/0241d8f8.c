/* IL2CPP: Dino.BusSand.App.UI.PausePanel.<>c$$<OnOpen>b__3_2
void Dino_BusSand_App_UI_PausePanel___c___OnOpen_b__3_2 (Dino_BusSand_App_UI_PausePanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PausePanel.<>c$$<OnOpen>b__3_2
   void Dino_BusSand_App_UI_PausePanel___c___OnOpen_b__3_2 (Dino_BusSand_App_UI_PausePanel___c_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PausePanel___c___OnOpen_b__3_2_231d8f8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab380;
  if ((bRam0000000004f9c597 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    bRam0000000004f9c597 = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0241d94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

