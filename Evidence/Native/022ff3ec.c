/* IL2CPP: Dino.BusSand.App.UI.UIManager.<>c$$.cctor
void Dino_BusSand_App_UI_UIManager___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager.<>c$$.cctor
   void Dino_BusSand_App_UI_UIManager___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager___c___cctor_21ff3ec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb1aa0;
                    /* try { // try from 022ff3f8 to 023ff403 has its CatchHandler @ 022ff53c */
                    /* try { // try from 022ff404 to 023ff40f has its CatchHandler @ 022ff490 */
  if ((bRam0000000004f9bc80 & 1) == 0) {
                    /* try { // try from 022ff410 to 023ff427 has its CatchHandler @ 022ff464 */
    FUN_02132f7c(PTR_DAT_04cb1aa0);
    bRam0000000004f9bc80 = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
                    /* try { // try from 022ff43c to 023ff43f has its CatchHandler @ 022ff44c */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 022ff440 to 023ff44b has its CatchHandler @ 022ff514 */
                    /* catch() { ... } // from try @ 022ff43c with catch @ 022ff44c
                       try { // try from 022ff44c to 023ff54f has its CatchHandler @ 022ff118 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

