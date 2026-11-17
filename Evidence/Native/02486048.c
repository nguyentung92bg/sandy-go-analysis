/* IL2CPP: Dino.BusSand.GameAudio$$.cctor
void Dino_BusSand_GameAudio___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$.cctor
   void Dino_BusSand_GameAudio___cctor (const MethodInfo* method); */

void Dino_BusSand_GameAudio___cctor_2386048(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_04cbbc40;
  puVar3 = PTR_DAT_04cbba98;
  puVar2 = PTR_DAT_04cad568;
  puVar1 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9c874 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbbc40);
    FUN_02132f7c(PTR_DAT_04cbba98);
    bRam0000000004f9c874 = 1;
  }
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar5,*(undefined8 *)puVar3,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar6 = uVar5;
  thunk_FUN_02134474(puVar6,uVar5);
  uVar5 = FUN_02133068(*(undefined8 *)puVar1,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar5,*(undefined8 *)puVar4,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar6 = uVar5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

