/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules.<>c$$.cctor
void Dino_BusSand_App_UI_EndOfLevelRules___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules.<>c$$.cctor
   void Dino_BusSand_App_UI_EndOfLevelRules___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_EndOfLevelRules___c___cctor_22c3bac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb67a0;
  if ((bRam0000000004f9c34b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb67a0);
    bRam0000000004f9c34b = 1;
  }
                    /* try { // try from 023c3bdc to 024c3be3 has its CatchHandler @ 023c4660 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
                    /* try { // try from 023c3bf0 to 024c3bf7 has its CatchHandler @ 023c4658 */
                    /* try { // try from 023c3bfc to 024c3c07 has its CatchHandler @ 023c4700 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

