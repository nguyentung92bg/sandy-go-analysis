/* IL2CPP: Dino.BusSand.App.Iap$$.cctor
void Dino_BusSand_App_Iap___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$.cctor
   void Dino_BusSand_App_Iap___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Iap___cctor_217c52c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04cad1f0;
  puVar1 = PTR_DAT_04cad1c8;
  if ((bRam0000000004f9b908 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad1c8);
                    /* try { // try from 0227c568 to 0237c597 has its CatchHandler @ 0227c568
                       catch() { ... } // from try @ 0227c568 with catch @ 0227c568
                       catch() { ... } // from try @ 0227c5bc with catch @ 0227c568 */
    bRam0000000004f9b908 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
                    /* try { // try from 0227c598 to 0237c5bb has its CatchHandler @ 0227c5e4 */
  uVar4 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

