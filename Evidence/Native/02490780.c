/* IL2CPP: Dino.BusSand.View.PackPalette$$EnsureHidden
void Dino_BusSand_View_PackPalette__EnsureHidden (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$EnsureHidden
   void Dino_BusSand_View_PackPalette__EnsureHidden (const MethodInfo* method); */

void Dino_BusSand_View_PackPalette__EnsureHidden_2390780(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb70d8;
  if ((bRam0000000004f9c8c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cb1920);
    bRam0000000004f9c8c7 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar4 = *(long *)(lVar3 + 0xb8);
  if (*(char *)(lVar4 + 0x40) == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    puVar1 = PTR_DAT_04cb1920;
    *(undefined1 *)(lVar4 + 0x40) = 1;
    lVar3 = Dino_BusSand_View_PackPalette__Find_238fe88(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
                    /* try { // try from 02490810 to 02590813 has its CatchHandler @ 02490844 */
                    /* try { // try from 02490814 to 02590817 has its CatchHandler @ 0249083c */
      lVar4 = *(long *)puVar2;
                    /* try { // try from 02490818 to 0259081b has its CatchHandler @ 0249082c */
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
                    /* try { // try from 0249081c to 0259081f has its CatchHandler @ 02490828 */
                    /* catch() { ... } // from try @ 024902e0 with catch @ 02490820
                       try { // try from 02490820 to 0259086b has its CatchHandler @ 0248fe3c */
                    /* catch() { ... } // from try @ 024902e4 with catch @ 02490824 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0249081c with catch @ 02490828 */
        thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 02490818 with catch @ 0249082c */
        lVar4 = *(long *)puVar2;
      }
                    /* catch() { ... } // from try @ 0249030c with catch @ 02490830 */
      lVar5 = *(long *)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 0249029c with catch @ 02490834 */
                    /* catch() { ... } // from try @ 024902bc with catch @ 02490838 */
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
                    /* catch() { ... } // from try @ 02490814 with catch @ 0249083c */
      lVar4 = *(long *)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 02490270 with catch @ 02490840 */
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 02490810 with catch @ 02490844 */
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar4 + 0x30) = uVar6;
    }
  }
                    /* catch() { ... } // from try @ 024902a0 with catch @ 02490848 */
                    /* catch() { ... } // from try @ 02490274 with catch @ 0249084c */
                    /* catch() { ... } // from try @ 02490254 with catch @ 02490850 */
  return;
}

