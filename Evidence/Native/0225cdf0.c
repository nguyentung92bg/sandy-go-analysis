/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$.cctor
void Dino_BusSand_App_QaPilot_Runner___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$.cctor
   void Dino_BusSand_App_QaPilot_Runner___cctor (const MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner___cctor_215cdf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04cab800;
                    /* try { // try from 0225cdf0 to 0235cdfb has its CatchHandler @ 0225cea8 */
  puVar1 = PTR_DAT_04cab7f0;
  if ((bRam0000000004f9b800 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cab7f0);
    FUN_02132f7c(PTR_DAT_04cab800);
    FUN_02132f7c(PTR_DAT_04caba98);
                    /* try { // try from 0225ce4c to 0235ce4f has its CatchHandler @ 0225cea4 */
                    /* try { // try from 0225ce50 to 0235cebb has its CatchHandler @ 0225cd80 */
    FUN_02132f7c(PTR_DAT_04cabe40);
    FUN_02132f7c(PTR_DAT_04cabe48);
    FUN_02132f7c(PTR_DAT_04cabe50);
    FUN_02132f7c(PTR_DAT_04cabe58);
    bRam0000000004f9b800 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet_object____ctor_37e5358(lVar6,*(undefined8 *)puVar1);
  puVar5 = PTR_DAT_04cabe58;
  puVar4 = PTR_DAT_04cabe50;
  puVar3 = PTR_DAT_04cabe40;
  puVar2 = PTR_DAT_04caba98;
  puVar1 = PTR_DAT_04cab7e0;
  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 0225ce4c with catch @ 0225cea4 */
                    /* catch() { ... } // from try @ 0225cdf0 with catch @ 0225cea8 */
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar6,*(undefined8 *)PTR_DAT_04cabe48,*(undefined8 *)PTR_DAT_04cab7e0);
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar6,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar6,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
    uVar7 = *(ulong *)(*(long *)puVar2 + 0xb8);
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (uVar7 >> 0xc & 0x3f),(uVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

