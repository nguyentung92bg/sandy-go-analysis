/* IL2CPP: Dino.BusSand.Core.RoadConfig$$From
Dino_BusSand_Core_RoadConfig_o* Dino_BusSand_Core_RoadConfig__From (Dino_BusSand_Core_RoadDef_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.RoadConfig$$From
   Dino_BusSand_Core_RoadConfig_o* Dino_BusSand_Core_RoadConfig__From (Dino_BusSand_Core_RoadDef_o*
   d, const MethodInfo* method); */

long Dino_BusSand_Core_RoadConfig__From_2411594(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  puVar3 = PTR_DAT_04cac568;
  if ((bRam0000000004f9cb4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cac568);
    bRam0000000004f9cb4c = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  uVar2 = _UNK_00e6b9f0;
  *(undefined8 *)(lVar6 + 0x28) = _UNK_00e6b9f8;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  uVar2 = _UNK_00e6a208;
  *(undefined4 *)(lVar6 + 0x10) = 10;
  *(undefined8 *)(lVar6 + 0x30) = uVar2;
  uVar2 = _UNK_00e6b410;
  *(undefined8 *)(lVar6 + 0x40) = _UNK_00e6b418;
  *(undefined8 *)(lVar6 + 0x38) = uVar2;
  *(undefined8 *)(lVar6 + 0x18) = 0x3fe49374bc6a7efa;
  *(undefined4 *)(lVar6 + 0x48) = 0x1e;
  System_Object___ctor_4870e5c(lVar6,0);
  lVar7 = *(long *)puVar3;
  dVar10 = *(double *)(lVar6 + 0x18);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  dVar8 = **(double **)(lVar7 + 0xb8);
  *(double *)(lVar6 + 0x18) = dVar10 * dVar8;
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x14)) {
      *(int *)(lVar6 + 0x10) = *(int *)(param_1 + 0x14);
    }
    fVar9 = *(float *)(param_1 + 0x18);
    if (0.0 < fVar9) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        dVar8 = **(double **)(*(long *)puVar3 + 0xb8);
      }
      *(double *)(lVar6 + 0x18) = dVar8 * (double)fVar9;
    }
    puVar3 = PTR_DAT_04caa200;
    if (0 < *(int *)(param_1 + 0x1c)) {
      *(int *)(lVar6 + 0x20) = *(int *)(param_1 + 0x1c);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = System_Math__Max_4830fc8(0,uVar5,0);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(lVar6 + 0x24) = uVar4;
    uVar5 = System_Math__Max_4830fc8(0,uVar5,0);
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(lVar6 + 0x28) = uVar5;
    if (0 < iVar1) {
      *(int *)(lVar6 + 0x2c) = iVar1;
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      *(int *)(lVar6 + 0x30) = *(int *)(param_1 + 0x30);
    }
    if (0 < *(int *)(param_1 + 0x34)) {
      *(int *)(lVar6 + 0x34) = *(int *)(param_1 + 0x34);
    }
  }
  return lVar6;
}

