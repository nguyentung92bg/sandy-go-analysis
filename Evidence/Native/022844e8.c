/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs.<>c$$.cctor
void Dino_BusSand_App_UI_KitPrefabs___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs.<>c$$.cctor
   void Dino_BusSand_App_UI_KitPrefabs___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPrefabs___c___cctor_21844e8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cad830;
  if ((bRam0000000004f9b93c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad830);
                    /* try { // try from 02284514 to 02384543 has its CatchHandler @ 02284514
                       catch() { ... } // from try @ 02284514 with catch @ 02284514
                       catch() { ... } // from try @ 022845d0 with catch @ 02284514 */
    bRam0000000004f9b93c = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 02284544 to 0238455f has its CatchHandler @ 022845ec */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

