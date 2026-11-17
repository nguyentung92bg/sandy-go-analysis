/* IL2CPP: Dino.BusSand.View.GrainParticles$$.ctor
void Dino_BusSand_View_GrainParticles___ctor (Dino_BusSand_View_GrainParticles_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$.ctor
   void Dino_BusSand_View_GrainParticles___ctor (Dino_BusSand_View_GrainParticles_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_View_GrainParticles___ctor_23b6ce4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  puVar8 = PTR_DAT_04cbc9c8;
  puVar7 = PTR_DAT_04cbc9c0;
  puVar6 = PTR_DAT_04cbc9b8;
  puVar5 = PTR_DAT_04cb0b40;
  puVar4 = PTR_DAT_04caec70;
  puVar3 = PTR_DAT_04cabdb8;
  if ((bRam0000000004f9c987 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc9c8);
    FUN_02132f7c(PTR_DAT_04cbc9c0);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9b8);
    FUN_02132f7c(PTR_DAT_04cb0b40);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c987 = 1;
  }
  uVar10 = FUN_02133068(*(undefined8 *)puVar6,0x2000);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  thunk_FUN_02134474();
  uVar10 = FUN_02133068(*(undefined8 *)puVar7,0x8000);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar10);
  uVar10 = *(undefined8 *)puVar5;
  *(undefined4 *)(param_1 + 0x130) = 0x3d4ccccd;
  uVar10 = FUN_02133068(uVar10,0x40);
  *(undefined8 *)(param_1 + 0x138) = uVar10;
  thunk_FUN_02134474(param_1 + 0x138,uVar10);
  uVar10 = FUN_02133068(*(undefined8 *)puVar3,0x40);
  *(undefined8 *)(param_1 + 0x140) = uVar10;
  thunk_FUN_02134474(param_1 + 0x140,uVar10);
  uVar10 = FUN_02133068(*(undefined8 *)puVar8,0x40);
  *(undefined8 *)(param_1 + 0x148) = uVar10;
  thunk_FUN_02134474(param_1 + 0x148,uVar10);
  uVar10 = FUN_02133068(*(undefined8 *)puVar3,0x40);
  *(undefined8 *)(param_1 + 0x150) = uVar10;
  thunk_FUN_02134474(param_1 + 0x150,uVar10);
  uVar10 = FUN_02133068(*(undefined8 *)puVar4,0x40);
  *(undefined8 *)(param_1 + 0x158) = uVar10;
  thunk_FUN_02134474(param_1 + 0x158,uVar10);
  cVar9 = cRam0000000004f9bcf8;
  uVar2 = _UNK_00e6b6c8;
  uVar1 = _UNK_00e6b6c0;
  uVar10 = _UNK_00e69f68;
  *(undefined4 *)(param_1 + 0x174) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x16c) = uVar2;
  *(undefined8 *)(param_1 + 0x164) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = uVar10;
  if (cVar9 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  uVar11 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
  *(undefined8 *)(param_1 + 0x180) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
  *(undefined4 *)(param_1 + 0x188) = uVar11;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return param_1;
}

