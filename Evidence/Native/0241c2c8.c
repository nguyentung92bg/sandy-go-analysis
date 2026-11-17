/* IL2CPP: Dino.BusSand.App.UI.QuitPanel.<>c$$.cctor
void Dino_BusSand_App_UI_QuitPanel___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.QuitPanel.<>c$$.cctor
   void Dino_BusSand_App_UI_QuitPanel___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_QuitPanel___c___cctor_231c2c8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb8730;
                    /* try { // try from 0241c2e0 to 0251c2e3 has its CatchHandler @ 0241c408 */
  if ((bRam0000000004f9c58f & 1) == 0) {
                    /* try { // try from 0241c2e4 to 0251c2eb has its CatchHandler @ 0241c410 */
    FUN_02132f7c(PTR_DAT_04cb8730);
    bRam0000000004f9c58f = 1;
  }
                    /* try { // try from 0241c2fc to 0251c2ff has its CatchHandler @ 0241c3f0 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 0241c31c to 0251c34b has its CatchHandler @ 0241c3f4 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

