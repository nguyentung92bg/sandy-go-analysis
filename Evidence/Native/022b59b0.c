/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar.<>c$$.cctor
void Dino_BusSand_App_UI_StreakHomeBar___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar.<>c$$.cctor
   void Dino_BusSand_App_UI_StreakHomeBar___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakHomeBar___c___cctor_21b59b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04caf360;
                    /* try { // try from 022b59c4 to 023b59e3 has its CatchHandler @ 022b59c4
                       catch() { ... } // from try @ 022b59c4 with catch @ 022b59c4
                       catch() { ... } // from try @ 022b59ec with catch @ 022b59c4 */
  if ((bRam0000000004f9baa3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf360);
    bRam0000000004f9baa3 = 1;
  }
                    /* try { // try from 022b59e4 to 023b59eb has its CatchHandler @ 022b5a04 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 022b59ec to 023b5a17 has its CatchHandler @ 022b59c4 */
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* catch() { ... } // from try @ 022b59e4 with catch @ 022b5a04 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

