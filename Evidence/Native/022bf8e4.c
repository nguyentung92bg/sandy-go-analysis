/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel.<>c$$.cctor
void Dino_BusSand_App_UI_EventIntroPanel___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel.<>c$$.cctor
   void Dino_BusSand_App_UI_EventIntroPanel___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_EventIntroPanel___c___cctor_21bf8e4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cafb88;
  if ((bRam0000000004f9bad9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafb88);
    bRam0000000004f9bad9 = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
                    /* try { // try from 022bf930 to 023bf95b has its CatchHandler @ 022bf930
                       catch() { ... } // from try @ 022bf930 with catch @ 022bf930
                       catch() { ... } // from try @ 022bf96c with catch @ 022bf930 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

