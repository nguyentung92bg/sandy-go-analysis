/* IL2CPP: Dino.BusSand.App.UI.EventContinuePanel.<>c$$.cctor
void Dino_BusSand_App_UI_EventContinuePanel___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventContinuePanel.<>c$$.cctor
   void Dino_BusSand_App_UI_EventContinuePanel___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_EventContinuePanel___c___cctor_21c8d48(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04caff80;
  if ((bRam0000000004f9bb05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caff80);
    bRam0000000004f9bb05 = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c8cfc with catch @ 022c8d7c
                        */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c8d08 with catch @ 022c8d84
                        */
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

