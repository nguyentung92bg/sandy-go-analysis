/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c$$.cctor
void Dino_BusSand_App_Meta_PassportFeature___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature.<>c$$.cctor
   void Dino_BusSand_App_Meta_PassportFeature___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature___c___cctor_224ad48(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb3970;
  if ((bRam0000000004f9bf97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3970);
    bRam0000000004f9bf97 = 1;
  }
                    /* try { // try from 0234ad78 to 0244ad7b has its CatchHandler @ 0234ad88 */
                    /* catch() { ... } // from try @ 0234ac8c with catch @ 0234ad7c
                       try { // try from 0234ad7c to 0244adb7 has its CatchHandler @ 0234a9e4 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0234ac74 with catch @ 0234ad80 */
                    /* catch() { ... } // from try @ 0234ab90 with catch @ 0234ad84 */
                    /* catch() { ... } // from try @ 0234ad78 with catch @ 0234ad88 */
  System_Object___ctor_4870e5c(uVar2,0);
                    /* catch() { ... } // from try @ 0234ab68 with catch @ 0234ad8c */
                    /* catch() { ... } // from try @ 0234aaf4 with catch @ 0234ad90 */
                    /* catch() { ... } // from try @ 0234accc with catch @ 0234ad94 */
                    /* catch() { ... } // from try @ 0234aaa8 with catch @ 0234ad98 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* catch() { ... } // from try @ 0234ac38 with catch @ 0234ad9c */
                    /* catch() { ... } // from try @ 0234abc4 with catch @ 0234ada0
                       catch() { ... } // from try @ 0234acb0 with catch @ 0234ada0 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

