/* IL2CPP: Dino.BusSand.View.PackPalette$$get_HiddenShadow
UnityEngine_Color_o Dino_BusSand_View_PackPalette__get_HiddenShadow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$get_HiddenShadow
   UnityEngine_Color_o Dino_BusSand_View_PackPalette__get_HiddenShadow (const MethodInfo* method);
    */

undefined4 Dino_BusSand_View_PackPalette__get_HiddenShadow_2390858(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cb70d8;
                    /* try { // try from 0249086c to 0259086f has its CatchHandler @ 02490890 */
                    /* try { // try from 02490870 to 02590893 has its CatchHandler @ 0248fe3c */
  if ((bRam0000000004f9c8c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8c6 = 1;
  }
                    /* catch() { ... } // from try @ 0249086c with catch @ 02490890 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02490894 to 0259089b has its CatchHandler @ 024908a4 */
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_PackPalette__EnsureHidden_2390780();
                    /* try { // try from 0249089c to 025908a7 has its CatchHandler @ 0248fe3c */
                    /* catch() { ... } // from try @ 02490894 with catch @ 024908a4 */
  return *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
}

