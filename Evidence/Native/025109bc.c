/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$.cctor
void Dino_BusSand_Core_LevelCatalog___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$.cctor
   void Dino_BusSand_Core_LevelCatalog___cctor (const MethodInfo* method); */

void Dino_BusSand_Core_LevelCatalog___cctor_24109bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_04cb1868;
  puVar3 = PTR_DAT_04caa788;
  puVar2 = PTR_DAT_04caa780;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9cb42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa780);
    FUN_02132f7c(PTR_DAT_04caa788);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cb42 = 1;
  }
  uVar5 = *(undefined8 *)puVar3;
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = 0x15;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar5,*(undefined8 *)puVar2);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
  *puVar6 = uVar5;
  thunk_FUN_02134474(puVar6,uVar5);
  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
  *puVar6 = *(undefined8 *)puVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

