/* IL2CPP: Dino.BusSand.Core.Road$$.cctor
void Dino_BusSand_Core_Road___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$.cctor
   void Dino_BusSand_Core_Road___cctor (const MethodInfo* method); */

void Dino_BusSand_Core_Road___cctor_2416f68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_04cbe6d8;
  puVar3 = PTR_DAT_04cbe6d0;
  puVar2 = PTR_DAT_04cbe6c0;
  puVar1 = PTR_DAT_04cbbff8;
  if ((bRam0000000004f9cb75 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbff8);
    FUN_02132f7c(PTR_DAT_04cbe6c0);
    FUN_02132f7c(PTR_DAT_04cbe6d0);
    FUN_02132f7c(PTR_DAT_04cbe6d8);
    bRam0000000004f9cb75 = 1;
  }
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar5,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar5,*(undefined8 *)puVar4,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar6 = uVar5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

