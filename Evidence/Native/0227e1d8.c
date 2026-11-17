/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$.cctor
void Dino_BusSand_App_UI_UIParticleSorting___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$.cctor
   void Dino_BusSand_App_UI_UIParticleSorting___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_UIParticleSorting___cctor_217e1d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cab1e0;
  puVar2 = PTR_DAT_04cab1d8;
  puVar1 = PTR_DAT_04cab188;
  if ((bRam0000000004f9b913 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1d8);
    FUN_02132f7c(PTR_DAT_04cab1e0);
    FUN_02132f7c(PTR_DAT_04cab188);
    bRam0000000004f9b913 = 1;
  }
                    /* try { // try from 0227e234 to 0237e23b has its CatchHandler @ 0227e24c */
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e234 with catch @ 0227e24c
                        */
                    /* try { // try from 0227e250 to 0237e2eb has its CatchHandler @ 0227e250
                       catch(type#1 @ 00000000) { ... } // from try @ 0227e250 with catch @ 0227e250
                       catch(type#1 @ 00000000) { ... } // from try @ 0227e35c with catch @ 0227e250
                        */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

