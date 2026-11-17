/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel.<>c$$.cctor
void Dino_BusSand_App_UI_ActivityContinuePanel___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel.<>c$$.cctor
   void Dino_BusSand_App_UI_ActivityContinuePanel___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinuePanel___c___cctor_2187510(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cad930;
  if ((bRam0000000004f9b95c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad930);
    bRam0000000004f9b95c = 1;
  }
                    /* catch() { ... } // from try @ 02287490 with catch @ 02287540 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

