/* IL2CPP: Dino.BusSand.View.PackPalette$$.cctor
void Dino_BusSand_View_PackPalette___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackPalette$$.cctor
   void Dino_BusSand_View_PackPalette___cctor (const MethodInfo* method); */

void Dino_BusSand_View_PackPalette___cctor_23908b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_04cbc050;
  puVar5 = PTR_DAT_04cbc048;
  puVar4 = PTR_DAT_04cbc040;
  puVar3 = PTR_DAT_04cbc000;
  puVar2 = PTR_DAT_04cb70d8;
  puVar1 = PTR_DAT_04cb4b88;
  if ((bRam0000000004f9c8c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4b88);
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04cbc050);
    FUN_02132f7c(PTR_DAT_04cbc048);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbc040);
    bRam0000000004f9c8c8 = 1;
  }
  uVar7 = FUN_02133068(*(undefined8 *)puVar3,0x41);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar3,0x41);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar9 = uVar7;
  thunk_FUN_02134474(puVar9,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar1,0x41);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar9 = uVar7;
  thunk_FUN_02134474(puVar9,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar4,0x41);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar9 = uVar7;
  thunk_FUN_02134474(puVar9,uVar7);
  uVar7 = _UNK_00e6aa40;
  lVar10 = *(long *)puVar2;
  uVar8 = *(undefined8 *)puVar5;
  lVar11 = *(long *)(lVar10 + 0xb8);
  *(undefined8 *)(lVar11 + 0x28) = _UNK_00e6aa48;
  *(undefined8 *)(lVar11 + 0x20) = uVar7;
  uVar7 = _UNK_00e6be50;
  lVar10 = *(long *)(lVar10 + 0xb8);
  *(undefined8 *)(lVar10 + 0x38) = _UNK_00e6be58;
  *(undefined8 *)(lVar10 + 0x30) = uVar7;
  uVar7 = thunk_FUN_0216e89c(uVar8);
  System_Collections_Generic_Dictionary_Color32__Color____ctor_33af9a8(uVar7,*(undefined8 *)puVar6);
  puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
  *puVar9 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                 ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

