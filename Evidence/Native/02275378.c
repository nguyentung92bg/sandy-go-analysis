/* IL2CPP: Dino.BusSand.App.Analytics$$.cctor
void Dino_BusSand_App_Analytics___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Analytics$$.cctor
   void Dino_BusSand_App_Analytics___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Analytics___cctor_2175378(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_04cac5c0;
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04cab740;
  puVar1 = PTR_DAT_04ca9c30;
                    /* try { // try from 0227539c to 023753af has its CatchHandler @ 022753c4 */
  if ((bRam0000000004f9b8cf & 1) == 0) {
                    /* try { // try from 022753b0 to 023753db has its CatchHandler @ 02275324 */
    FUN_02132f7c(PTR_DAT_04cac5c0);
                    /* catch() { ... } // from try @ 0227539c with catch @ 022753c4 */
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b8cf = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar5,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar5;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar5);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
  *puVar6 = *(undefined8 *)puVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

