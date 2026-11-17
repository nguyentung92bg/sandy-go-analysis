/* IL2CPP: Dino.BusSand.View.PicturePaper$$.cctor
void Dino_BusSand_View_PicturePaper___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$.cctor
   void Dino_BusSand_View_PicturePaper___cctor (const MethodInfo* method); */

void Dino_BusSand_View_PicturePaper___cctor_23dc998(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_04cbd8b0;
  puVar3 = PTR_DAT_04cbd8a8;
  puVar2 = PTR_DAT_04cb6f30;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9ca47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb6f30);
    FUN_02132f7c(PTR_DAT_04cbd8b0);
    FUN_02132f7c(PTR_DAT_04cbd8a8);
    bRam0000000004f9ca47 = 1;
  }
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar5,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,8);
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

