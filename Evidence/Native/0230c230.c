/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$.cctor
void Dino_BusSand_App_Meta_FeatureGate___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$.cctor
   void Dino_BusSand_App_Meta_FeatureGate___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_FeatureGate___cctor_220c230(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_DAT_04cb21b0;
  puVar4 = PTR_DAT_04cb21a8;
  puVar3 = PTR_DAT_04cb21a0;
  puVar2 = PTR_DAT_04cb2198;
  puVar1 = PTR_DAT_04cac458;
                    /* catch() { ... } // from try @ 0230c224 with catch @ 0230c23c */
                    /* catch() { ... } // from try @ 0230c288 with catch @ 0230c244 */
  if ((bRam0000000004f9bcf7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
                    /* try { // try from 0230c284 to 0240c287 has its CatchHandler @ 0230c29c */
                    /* try { // try from 0230c288 to 0240c2a3 has its CatchHandler @ 0230c244 */
    FUN_02132f7c(PTR_DAT_04cb2198);
    FUN_02132f7c(PTR_DAT_04cb21b0);
                    /* catch() { ... } // from try @ 0230c284 with catch @ 0230c29c */
    FUN_02132f7c(PTR_DAT_04cb21a8);
                    /* try { // try from 0230c2ac to 0240c95b has its CatchHandler @ 0230c2ac
                       catch() { ... } // from try @ 0230c2ac with catch @ 0230c2ac
                       catch() { ... } // from try @ 0230c964 with catch @ 0230c2ac */
    FUN_02132f7c(PTR_DAT_04cb21a0);
    bRam0000000004f9bcf7 = 1;
  }
  puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  *puVar8 = 0x1010101;
  *(undefined2 *)(puVar8 + 1) = 0;
  uVar6 = FUN_02133068(*(undefined8 *)puVar2,7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar3,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_HashSet_Int32Enum____ctor_37de6c0(uVar6,uVar9,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

