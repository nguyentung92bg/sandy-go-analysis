/* IL2CPP: Dino.BusSand.View.StageLayout$$VehiclePose
void Dino_BusSand_View_StageLayout__VehiclePose (Dino_BusSand_View_StageLayout_o* __this, double s, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$VehiclePose
   void Dino_BusSand_View_StageLayout__VehiclePose (Dino_BusSand_View_StageLayout_o* __this, double
   s, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__VehiclePose_23e9634
               (double param_1,long param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  
  fVar11 = (float)*(int *)(param_2 + 0xe8);
  dVar15 = (double)*(int *)(param_2 + 0xe8);
  if ((dVar15 <= param_1) &&
     (param_1 < (double)(fVar11 + fVar11 +
                        (float)*(int *)(param_2 + 0xec) + (float)*(int *)(param_2 + 0xec)))) {
    if (*(long *)(param_2 + 0x138) == 0) {
LAB_024e96d0:
      Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(param_2);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x140);
      if (cRam0000000004f9ca99 == '\0') {
        FUN_02132f7c(PTR_DAT_04cbda00);
        cRam0000000004f9ca99 = '\x01';
      }
      if (iVar4 != **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) goto LAB_024e96d0;
    }
    lVar7 = *(long *)(param_2 + 0x138);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = *(uint *)(lVar7 + 0x18);
    fVar11 = (float)(param_1 - dVar15) * 4.0;
    uVar1 = 0x80000000;
    if (fVar11 != INFINITY) {
      uVar1 = (int)fVar11;
    }
    uVar2 = uVar1;
    if ((int)(uVar5 - 2) <= (int)uVar1) {
      uVar2 = uVar5 - 2;
    }
    uVar3 = 0;
    if (-1 < (int)uVar1) {
      uVar3 = uVar2;
    }
    if ((uVar5 <= uVar3) || (uVar5 <= uVar3 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    fVar11 = fVar11 - (float)(int)uVar3;
    fVar12 = 1.0;
    if (fVar11 <= 1.0) {
      fVar12 = fVar11;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar11) {
      fVar13 = fVar12;
    }
    fVar12 = *(float *)(lVar7 + 0x20 + (long)(int)uVar3 * 4);
    fVar11 = 0.0;
    if (0.0 <= fVar13) {
      fVar11 = fVar13;
    }
    fVar13 = *(float *)(lVar7 + 0x20 + (long)(int)(uVar3 + 1) * 4) - fVar12;
    uVar14 = (ulong)(uint)fVar13;
    fVar11 = fVar12 + fVar11 * fVar13;
    goto Dino_BusSand_View_StageLayout__SampleReturn_23e9498;
  }
  uVar14 = NEON_scvtf(*(undefined8 *)(param_2 + 0xe8),4);
  fVar13 = (float)uVar14;
  fVar11 = (float)(uVar14 >> 0x20);
  fVar11 = fVar11 + fVar11;
  dVar15 = (double)(fVar13 + fVar13 + fVar11);
  if ((param_1 < (double)fVar13) || (dVar15 <= param_1)) {
    dVar10 = 0.0;
    if (dVar15 <= param_1) {
      dVar10 = dVar15;
    }
    fVar11 = *(float *)(param_2 + 0xb4);
    fVar12 = *(float *)(param_2 + 0xd4);
    fVar13 = *(float *)(param_2 + 0xc4);
    param_3[1] = 0.0;
    param_3[2] = fVar13;
    *param_3 = fVar12 + fVar11 * (float)(param_1 - dVar10);
    *param_4 = 0.0;
    return;
  }
  if (*(long *)(param_2 + 0x120) == 0) {
LAB_024e8b88:
    Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(param_2);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x140);
    if (cRam0000000004f9ca99 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbda00);
      cRam0000000004f9ca99 = '\x01';
    }
    if (iVar4 != **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) goto LAB_024e8b88;
  }
  lVar7 = *(long *)(param_2 + 0x130);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  fVar12 = *(float *)(lVar7 + ((long)(((ulong)*(uint *)(lVar7 + 0x18) << 0x20) + -0x100000000) >>
                              0x1e) + 0x20);
  fVar11 = ((float)(param_1 - (double)fVar13) / (fVar11 + fVar13)) * fVar12;
Dino_BusSand_View_StageLayout__SampleReturn_23e9498:
  fVar13 = (float)uVar14;
  if ((bRam0000000004f9ca90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca90 = 1;
  }
  puVar6 = PTR_DAT_04cbc250;
  lVar7 = *(long *)(param_2 + 0x130);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) != 0) {
      fVar16 = *(float *)(lVar7 + ((long)(((ulong)*(uint *)(lVar7 + 0x18) << 0x20) + -0x100000000)
                                  >> 0x1e) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar8 = (float)Dino_BusSand_View_StageLayout__get_VehicleAxleHalf_23e6cc4();
      fVar17 = _UNK_00e20844;
      if (_UNK_00e20844 <= fVar8) {
        fVar16 = fVar16 - fVar11;
        fVar12 = fVar11;
        if (fVar16 <= fVar11) {
          fVar12 = fVar16;
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar12 = fVar12 / (fVar8 + fVar8);
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
        fVar16 = 0.0;
        if (0.0 <= fVar12) {
          fVar16 = fVar13;
        }
        fVar13 = 3.0;
        fVar8 = fVar8 * fVar16 * fVar16 * (3.0 - (fVar16 + fVar16));
        fVar17 = _UNK_00e20844;
        fVar12 = _UNK_00e20844;
        if (_UNK_00e20844 <= fVar8) {
          fVar17 = fVar8;
        }
      }
      fVar9 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar17 + fVar11,param_2);
      fVar16 = fVar13;
      fVar8 = fVar12;
      fVar11 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar11 - fVar17,param_2);
      *param_3 = (fVar9 + fVar11) * 0.5;
      param_3[1] = (fVar12 + fVar8) * 0.5;
      lVar7 = *(long *)puVar6;
      param_3[2] = (fVar13 + fVar16) * 0.5;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar11 = (float)atan2f(-(fVar13 - fVar16),fVar9 - fVar11);
      *param_4 = fVar11 * _UNK_00e20410;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

