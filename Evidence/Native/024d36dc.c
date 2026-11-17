/* IL2CPP: Dino.BusSand.View.MechanicLayer$$.cctor
void Dino_BusSand_View_MechanicLayer___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$.cctor
   void Dino_BusSand_View_MechanicLayer___cctor (const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer___cctor_23d36dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04cbd700;
  puVar4 = PTR_DAT_04cbd6f8;
  puVar3 = PTR_DAT_04cbbff8;
  puVar2 = PTR_DAT_04cac5d0;
  puVar1 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9ca01 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbff8);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbd700);
    FUN_02132f7c(PTR_DAT_04cbd6f8);
    bRam0000000004f9ca01 = 1;
  }
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = 0xff54ccff;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = 0xffcdf2ff;
  uVar7 = _UNK_00e6bc60;
  lVar9 = *(long *)puVar2;
  uVar6 = *(undefined8 *)puVar1;
  lVar10 = *(long *)(lVar9 + 0xb8);
  *(undefined8 *)(lVar10 + 0x10) = _UNK_00e6bc68;
  *(undefined8 *)(lVar10 + 8) = uVar7;
  lVar9 = *(long *)(lVar9 + 0xb8);
  *(undefined8 *)(lVar9 + 0x30) = _UNK_00e69f70;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  uVar7 = FUN_02133068(uVar6,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar4,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar3,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar5,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
  *puVar8 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

