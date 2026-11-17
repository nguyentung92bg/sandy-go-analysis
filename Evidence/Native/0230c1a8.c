/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$AllOn
void Dino_BusSand_App_Meta_FeatureGate__AllOn (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$AllOn
   void Dino_BusSand_App_Meta_FeatureGate__AllOn (const MethodInfo* method); */

void Dino_BusSand_App_Meta_FeatureGate__AllOn_220c1a8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar2 = PTR_DAT_04cac458;
                    /* try { // try from 0230c1c0 to 0240c1c7 has its CatchHandler @ 0230c1dc */
  if ((bRam0000000004f9bcf5 & 1) == 0) {
                    /* try { // try from 0230c1c8 to 0240c1e3 has its CatchHandler @ 0230c180 */
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2158);
                    /* catch() { ... } // from try @ 0230c1c0 with catch @ 0230c1dc */
    bRam0000000004f9bcf5 = 1;
  }
                    /* catch() { ... } // from try @ 0230c228 with catch @ 0230c1e4 */
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined4 **)(lVar4 + 0xb8);
  *(undefined2 *)(puVar6 + 1) = 0x101;
  *puVar6 = 0x1010101;
  if (*(long *)(puVar6 + 4) != 0) {
    System_Collections_Generic_HashSet_Int32Enum___Clear_37dec74
              (*(long *)(puVar6 + 4),*(undefined8 *)PTR_DAT_04cb2158);
    puVar2 = PTR_DAT_04cac458;
                    /* try { // try from 0230c224 to 0240c227 has its CatchHandler @ 0230c23c */
                    /* try { // try from 0230c228 to 0240c243 has its CatchHandler @ 0230c1e4 */
    if ((bRam0000000004f9bcf6 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac458);
      FUN_02132f7c(PTR_DAT_04cac668);
      bRam0000000004f9bcf6 = 1;
    }
    puVar3 = PTR_DAT_04cac668;
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar5 = *(long *)puVar3;
    uVar1 = **(undefined1 **)(lVar4 + 0xb8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar5);
      lVar5 = *(long *)puVar3;
    }
    *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

