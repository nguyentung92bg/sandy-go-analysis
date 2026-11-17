/* IL2CPP: Dino.BusSand.App.UI.HomeEntries.<>c$$.cctor
void Dino_BusSand_App_UI_HomeEntries___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeEntries.<>c$$.cctor
   void Dino_BusSand_App_UI_HomeEntries___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeEntries___c___cctor_22e799c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb7398;
  if ((bRam0000000004f9c430 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7398);
                    /* try { // try from 023e79c8 to 024e79d7 has its CatchHandler @ 023e79d8 */
    bRam0000000004f9c430 = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 023e796c with catch @ 023e79d8
                       catch() { ... } // from try @ 023e79c8 with catch @ 023e79d8 */
                    /* try { // try from 023e79dc to 024e79df has its CatchHandler @ 023e79e8 */
  System_Object___ctor_4870e5c(uVar2,0);
                    /* try { // try from 023e79e0 to 024e79eb has its CatchHandler @ 023e7834 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023e79dc with catch @ 023e79e8
                        */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

