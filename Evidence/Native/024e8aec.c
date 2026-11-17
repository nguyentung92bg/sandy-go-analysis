/* IL2CPP: Dino.BusSand.View.StageLayout$$RoadPose
void Dino_BusSand_View_StageLayout__RoadPose (Dino_BusSand_View_StageLayout_o* __this, double s, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$RoadPose
   void Dino_BusSand_View_StageLayout__RoadPose (Dino_BusSand_View_StageLayout_o* __this, double s,
   UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__RoadPose_23e8aec
               (double param_1,long param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  uVar11 = NEON_scvtf(*(undefined8 *)(param_2 + 0xe8),4);
  fVar5 = (float)uVar11;
  fVar10 = (float)((ulong)uVar11 >> 0x20);
  fVar10 = fVar10 + fVar10;
  dVar7 = (double)(fVar5 + fVar5 + fVar10);
  if ((param_1 < (double)fVar5) || (dVar7 <= param_1)) {
    dVar8 = 0.0;
    if (dVar7 <= param_1) {
      dVar8 = dVar7;
    }
    fVar10 = *(float *)(param_2 + 0xb4);
    fVar5 = *(float *)(param_2 + 0xd4);
    fVar9 = *(float *)(param_2 + 0xc4);
    param_3[1] = 0.0;
    param_3[2] = fVar9;
    *param_3 = fVar5 + fVar10 * (float)(param_1 - dVar8);
    *param_4 = 0.0;
    return;
  }
  if (*(long *)(param_2 + 0x120) != 0) {
    iVar1 = *(int *)(param_2 + 0x140);
    if (cRam0000000004f9ca99 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbda00);
      cRam0000000004f9ca99 = '\x01';
    }
    if (iVar1 == **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) goto LAB_024e8b94;
  }
  Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(param_2);
LAB_024e8b94:
  lVar3 = *(long *)(param_2 + 0x130);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)(lVar3 + 0x18) != 0) {
    fVar9 = *(float *)(lVar3 + ((long)(((ulong)*(uint *)(lVar3 + 0x18) << 0x20) + -0x100000000) >>
                               0x1e) + 0x20);
    fVar10 = ((float)(param_1 - (double)fVar5) / (fVar10 + fVar5)) * fVar9;
    if ((bRam0000000004f9ca90 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbc250);
      fVar5 = (float)uVar11;
      bRam0000000004f9ca90 = 1;
    }
    puVar2 = PTR_DAT_04cbc250;
    lVar3 = *(long *)(param_2 + 0x130);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) != 0) {
        fVar12 = *(float *)(lVar3 + ((long)(((ulong)*(uint *)(lVar3 + 0x18) << 0x20) + -0x100000000)
                                    >> 0x1e) + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar4 = (float)Dino_BusSand_View_StageLayout__get_VehicleAxleHalf_23e6cc4();
        fVar13 = _UNK_00e20844;
        if (_UNK_00e20844 <= fVar4) {
          fVar12 = fVar12 - fVar10;
          fVar5 = fVar10;
          if (fVar12 <= fVar10) {
            fVar5 = fVar12;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar5 = fVar5 / (fVar4 + fVar4);
          fVar9 = 1.0;
          if (fVar5 <= 1.0) {
            fVar9 = fVar5;
          }
          fVar12 = 0.0;
          if (0.0 <= fVar5) {
            fVar12 = fVar9;
          }
          fVar5 = 3.0;
          fVar4 = fVar4 * fVar12 * fVar12 * (3.0 - (fVar12 + fVar12));
          fVar13 = _UNK_00e20844;
          fVar9 = _UNK_00e20844;
          if (_UNK_00e20844 <= fVar4) {
            fVar13 = fVar4;
          }
        }
        fVar6 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar13 + fVar10,param_2);
        fVar12 = fVar5;
        fVar4 = fVar9;
        fVar10 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar10 - fVar13,param_2);
        *param_3 = (fVar6 + fVar10) * 0.5;
        param_3[1] = (fVar9 + fVar4) * 0.5;
        lVar3 = *(long *)puVar2;
        param_3[2] = (fVar5 + fVar12) * 0.5;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar10 = (float)atan2f(-(fVar5 - fVar12),fVar6 - fVar10);
        *param_4 = fVar10 * _UNK_00e20410;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

