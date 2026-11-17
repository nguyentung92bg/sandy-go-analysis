/* IL2CPP: Dino.BusSand.DataPack$$.cctor
void Dino_BusSand_DataPack___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$.cctor
   void Dino_BusSand_DataPack___cctor (const MethodInfo* method); */

void Dino_BusSand_DataPack___cctor_237c258(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = PTR_DAT_04cbb780;
  puVar7 = PTR_DAT_04cbb778;
  puVar6 = PTR_DAT_04cbb770;
  puVar5 = PTR_DAT_04cbb768;
  puVar4 = PTR_DAT_04cbb760;
  puVar3 = PTR_DAT_04cbb758;
  puVar2 = PTR_DAT_04cac008;
  puVar1 = PTR_DAT_04caaad0;
  if ((bRam0000000004f9c80d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbb770);
    FUN_02132f7c(PTR_DAT_04cbb768);
    FUN_02132f7c(PTR_DAT_04cbb778);
    FUN_02132f7c(PTR_DAT_04cbb758);
    FUN_02132f7c(PTR_DAT_04cbb780);
    FUN_02132f7c(PTR_DAT_04cbb760);
    bRam0000000004f9c80d = 1;
  }
  uVar9 = FUN_02133068(*(undefined8 *)puVar1,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar9,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar9;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar9);
  uVar9 = FUN_02133068(*(undefined8 *)puVar1,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar9,*(undefined8 *)puVar4,0);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar10 = uVar9;
  thunk_FUN_02134474(puVar10,uVar9);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar9,*(undefined8 *)puVar6);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar10 = uVar9;
  thunk_FUN_02134474(puVar10,uVar9);
  uVar9 = FUN_02133068(*(undefined8 *)puVar1,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar9,*(undefined8 *)puVar7,0);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar10 = uVar9;
  thunk_FUN_02134474(puVar10,uVar9);
  uVar9 = FUN_02133068(*(undefined8 *)puVar1,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar9,*(undefined8 *)puVar8,0);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar10 = uVar9;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar10 >> 0xc & 0x3f),
                 ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

