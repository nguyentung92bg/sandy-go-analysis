/* IL2CPP: Dino.BusSand.View.PackPalette$$get_HiddenMain
UnityEngine_Color_o Dino_BusSand_View_PackPalette__get_HiddenMain (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$get_HiddenMain
   UnityEngine_Color_o Dino_BusSand_View_PackPalette__get_HiddenMain (const MethodInfo* method); */

undefined4 Dino_BusSand_View_PackPalette__get_HiddenMain_2390720(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cb70d8;
  if ((bRam0000000004f9c8c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8c5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_PackPalette__EnsureHidden_2390780();
  return *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
}

