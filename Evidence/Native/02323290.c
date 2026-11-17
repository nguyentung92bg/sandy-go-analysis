/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$ComputeEliminations
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__ComputeEliminations (Dino_BusSand_App_Meta_BattleRoyaleStageInfo_o info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$ComputeEliminations
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__ComputeEliminations
   (Dino_BusSand_App_Meta_BattleRoyaleStageInfo_o info, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_BattleRoyaleRules__ComputeEliminations_2223290(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000004f9bde9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bde9 = 1;
  }
  puVar8 = PTR_DAT_04caa200;
  iVar5 = param_1[4];
  if (iVar5 != 0) {
    iVar3 = *param_1;
    iVar4 = param_1[1];
    iVar7 = iVar4 - iVar3;
    iVar1 = iVar7 + 1;
    if (0 < iVar1) {
      iVar6 = param_1[2];
      fVar14 = (float)param_1[3];
      fVar13 = (float)iVar6;
      if (fVar14 < fVar13) {
        fVar12 = 0.0;
        if (iVar5 < 4) {
          if (iVar5 == 1) {
            fVar12 = fVar13 - fVar14;
            fVar11 = (float)iVar1;
          }
          else {
            if (iVar5 != 2) {
              if (iVar5 == 3) {
                if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar11 = _UNK_00e20a7c;
                if (_UNK_00e20a7c <= ABS(fVar14 - fVar13)) {
                  fVar15 = 1.0 - (fVar14 * (float)iVar1) / (fVar14 - fVar13);
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (fVar11 <= ABS(fVar15)) {
                    fVar12 = fVar13 / fVar15;
                  }
                }
              }
              goto LAB_023234d0;
            }
            fVar12 = (fVar13 - fVar14) *
                     ((((float)iVar4 + (float)iVar4) - ((float)iVar3 + (float)iVar3)) + 1.0);
            fVar11 = (float)iVar1 * (float)iVar1;
          }
          fVar12 = fVar12 / fVar11;
        }
        else if (iVar5 == 4) {
          fVar11 = (float)param_1[6] + (float)param_1[7] * (float)iVar7;
          fVar12 = 1.0;
          if (_UNK_00e20a7c < fVar11) {
            fVar12 = (float)param_1[5] / fVar11 + 1.0;
          }
          fVar12 = ((fVar13 - fVar14) / (float)iVar1) * fVar12;
        }
        else if (iVar5 == 5) {
          fVar11 = (float)param_1[6] + (float)param_1[7] * (float)iVar7;
          if (fVar11 <= _UNK_00e20a7c) {
            fVar12 = (fVar13 - fVar14) / (float)iVar1;
            fVar11 = 1.0;
          }
          else {
            fVar12 = (fVar13 - fVar14) / (float)iVar1;
            fVar11 = (float)param_1[8] / fVar11 + 1.0;
          }
          fVar12 = fVar12 * fVar11;
        }
        else if ((iVar5 == 6) && (fVar11 = (float)iVar4 * (float)iVar4, _UNK_00e20a7c <= fVar11)) {
          fVar12 = ((fVar13 - fVar14) * ((float)iVar3 + (float)iVar3 + -1.0)) / fVar11;
        }
LAB_023234d0:
        uVar9 = Dino_BusSand_App_Meta_BattleRoyaleRules__CeilToInt_2227238(fVar12);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
        }
        uVar10 = System_Math__Max_4830fc8(0,uVar9,0);
        puVar8 = PTR_DAT_04caa200;
        if (fVar14 <= (float)(iVar6 - (int)uVar10)) {
          return uVar10;
        }
        if ((bRam0000000004f9bdf5 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa200);
          bRam0000000004f9bdf5 = 1;
        }
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = 0x80000000;
        if ((float)(int)(fVar13 - fVar14) != INFINITY) {
          uVar2 = (int)(fVar13 - fVar14);
        }
        return (ulong)uVar2;
      }
    }
  }
  return 0;
}

