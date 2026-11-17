/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$.cctor
void Dino_BusSand_App_Meta_SystemOpenFeature___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$.cctor
   void Dino_BusSand_App_Meta_SystemOpenFeature___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_SystemOpenFeature___cctor_225382c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar7 = PTR_DAT_04cb3d68;
  puVar6 = PTR_DAT_04cb3d60;
  puVar5 = PTR_DAT_04cb3d58;
  puVar4 = PTR_DAT_04cb3d50;
  puVar3 = PTR_DAT_04cb3d48;
  puVar2 = PTR_DAT_04cb3d00;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9bfe5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d58);
    FUN_02132f7c(PTR_DAT_04cb3d68);
    FUN_02132f7c(PTR_DAT_04cb3d60);
    FUN_02132f7c(PTR_DAT_04cb3d50);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    FUN_02132f7c(PTR_DAT_04cb3d48);
    bRam0000000004f9bfe5 = 1;
  }
  uVar8 = *(undefined8 *)puVar1;
                    /* try { // try from 023538f0 to 024538f7 has its CatchHandler @ 02353e9c */
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = 0xc;
  uVar8 = FUN_02133068(uVar8,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar8,*(undefined8 *)puVar3,0);
                    /* try { // try from 02353914 to 02453917 has its CatchHandler @ 02353e38 */
                    /* try { // try from 02353918 to 02453927 has its CatchHandler @ 02353e58 */
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar9 = uVar8;
  thunk_FUN_02134474(puVar9,uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar8,*(undefined8 *)puVar5);
                    /* try { // try from 02353938 to 0245393b has its CatchHandler @ 02353e28 */
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar9 = uVar8;
  thunk_FUN_02134474(puVar9,uVar8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
                    /* try { // try from 02353950 to 02453957 has its CatchHandler @ 02353e44 */
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar8,*(undefined8 *)puVar7);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar9 = uVar8;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                 ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

