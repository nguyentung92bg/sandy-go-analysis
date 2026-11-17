/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$.cctor
void Dino_BusSand_App_Meta_BoosterIntro___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro.<>c$$.cctor
   void Dino_BusSand_App_Meta_BoosterIntro___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BoosterIntro___c___cctor_22039a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb1c90;
  if ((bRam0000000004f9bcb7 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303990 with catch @ 023039c0
                        */
    FUN_02132f7c(PTR_DAT_04cb1c90);
    bRam0000000004f9bcb7 = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 023039e0 to 02403a07 has its CatchHandler @ 02303a14 */
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

