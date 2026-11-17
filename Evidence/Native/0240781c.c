/* IL2CPP: Dino.BusSand.App.UI.SettingPanel.<>c$$<OnOpen>b__11_2
void Dino_BusSand_App_UI_SettingPanel___c___OnOpen_b__11_2 (Dino_BusSand_App_UI_SettingPanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel.<>c$$<OnOpen>b__11_2
   void Dino_BusSand_App_UI_SettingPanel___c___OnOpen_b__11_2
   (Dino_BusSand_App_UI_SettingPanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingPanel___c___OnOpen_b__11_2_230781c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cab1e8;
                    /* try { // try from 02407820 to 02507823 has its CatchHandler @ 02408744 */
  if ((bRam0000000004f9c507 & 1) == 0) {
                    /* try { // try from 02407840 to 0250784b has its CatchHandler @ 0240875c */
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad1e8);
                    /* try { // try from 02407850 to 0250785b has its CatchHandler @ 02408748 */
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c507 = 1;
  }
  puVar3 = PTR_DAT_04cad948;
  puVar2 = PTR_DAT_04cad1e8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02407880 to 02507883 has its CatchHandler @ 02408700 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0240788c to 025078ab has its CatchHandler @ 02408738 */
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar3,0);
  lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar4 != 0) {
                    /* try { // try from 024078ac to 025078b7 has its CatchHandler @ 02408734 */
                    /* WARNING: Could not recover jumptable at 0x024078bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),0,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

