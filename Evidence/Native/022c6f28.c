/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<>c$$.cctor
void Dino_BusSand_App_UI_TowerEventPanel___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<>c$$.cctor
   void Dino_BusSand_App_UI_TowerEventPanel___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_TowerEventPanel___c___cctor_21c6f28(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 022c6f28 to 023c6f2f has its CatchHandler @ 022c6f58 */
  puVar1 = PTR_DAT_04caff00;
                    /* try { // try from 022c6f30 to 023c6f6f has its CatchHandler @ 022c6db8 */
  if ((bRam0000000004f9bb00 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caff00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6eec with catch @ 022c6f54
                        */
    bRam0000000004f9bb00 = 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6f28 with catch @ 022c6f58
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6dd8 with catch @ 022c6f5c
                        */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
                    /* try { // try from 022c6f70 to 023c6f77 has its CatchHandler @ 022c6f80 */
                    /* try { // try from 022c6f78 to 023c6f83 has its CatchHandler @ 022c6db8 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c6f70 with catch @ 022c6f80
                        */
                    /* try { // try from 022c6f84 to 023c6f87 has its CatchHandler @ 022c6fb8 */
                    /* try { // try from 022c6f88 to 023c6f9b has its CatchHandler @ 022c6db8 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

