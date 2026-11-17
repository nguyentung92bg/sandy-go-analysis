/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$.cctor
void Dino_BusSand_Cheat_CheatManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$.cctor
   void Dino_BusSand_Cheat_CheatManager___cctor (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager___cctor_2368128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_04cbaa28;
  puVar4 = PTR_DAT_04cbaa20;
  puVar3 = PTR_DAT_04cbaa18;
  puVar2 = PTR_DAT_04cba458;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9c77e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbaa28);
    FUN_02132f7c(PTR_DAT_04cbaa20);
    FUN_02132f7c(PTR_DAT_04cbaa18);
    bRam0000000004f9c77e = 1;
  }
  uVar6 = FUN_02133068(*(undefined8 *)puVar1,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar6);
  uVar6 = FUN_02133068(*(undefined8 *)puVar1,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar4,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  uVar6 = FUN_02133068(*(undefined8 *)puVar1,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar5,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

