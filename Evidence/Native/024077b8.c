/* IL2CPP: Dino.BusSand.App.UI.SettingPanel.<>c$$<OnOpen>b__11_0
void Dino_BusSand_App_UI_SettingPanel___c___OnOpen_b__11_0 (Dino_BusSand_App_UI_SettingPanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel.<>c$$<OnOpen>b__11_0
   void Dino_BusSand_App_UI_SettingPanel___c___OnOpen_b__11_0
   (Dino_BusSand_App_UI_SettingPanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingPanel___c___OnOpen_b__11_0_23077b8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cab380;
  if ((bRam0000000004f9c506 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    bRam0000000004f9c506 = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar2 != 0) {
                    /* try { // try from 02407804 to 0250780b has its CatchHandler @ 02408760 */
                    /* WARNING: Could not recover jumptable at 0x0240780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

