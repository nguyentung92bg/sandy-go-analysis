/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnPoseAt
void Dino_BusSand_View_StageLayout__ReturnPoseAt (Dino_BusSand_View_StageLayout_o* __this, float u, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnPoseAt
   void Dino_BusSand_View_StageLayout__ReturnPoseAt (Dino_BusSand_View_StageLayout_o* __this, float
   u, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__ReturnPoseAt_23e4fcc
               (float param_1,undefined1 param_2 [16],float param_3,long param_4,float *param_5,
               float *param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_4 + 0x120) != 0) {
    iVar1 = *(int *)(param_4 + 0x140);
    if (cRam0000000004f9ca99 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbda00);
      cRam0000000004f9ca99 = '\x01';
    }
    if (iVar1 == **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) goto LAB_024e503c;
  }
  Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(param_4);
LAB_024e503c:
  lVar3 = *(long *)(param_4 + 0x130);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)(lVar3 + 0x18) != 0) {
    fVar6 = 0.0;
    fVar4 = *(float *)(lVar3 + ((long)(((ulong)*(uint *)(lVar3 + 0x18) << 0x20) + -0x100000000) >>
                               0x1e) + 0x20);
    if (param_1 <= fVar4) {
      fVar4 = param_1;
    }
    fVar9 = 0.0;
    if (0.0 <= param_1) {
      fVar9 = fVar4;
    }
    if ((bRam0000000004f9ca90 & 1) == 0) {
      fVar6 = 0.0;
      FUN_02132f7c(PTR_DAT_04cbc250);
      bRam0000000004f9ca90 = 1;
    }
    puVar2 = PTR_DAT_04cbc250;
    lVar3 = *(long *)(param_4 + 0x130);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) != 0) {
        fVar4 = *(float *)(lVar3 + ((long)(((ulong)*(uint *)(lVar3 + 0x18) << 0x20) + -0x100000000)
                                   >> 0x1e) + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar5 = (float)Dino_BusSand_View_StageLayout__get_VehicleAxleHalf_23e6cc4();
        fVar7 = _UNK_00e20844;
        if (_UNK_00e20844 <= fVar5) {
          fVar4 = fVar4 - fVar9;
          fVar6 = fVar9;
          if (fVar4 <= fVar9) {
            fVar6 = fVar4;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar6 = fVar6 / (fVar5 + fVar5);
          fVar4 = 1.0;
          if (fVar6 <= 1.0) {
            fVar4 = fVar6;
          }
          fVar7 = 0.0;
          if (0.0 <= fVar6) {
            fVar7 = fVar4;
          }
          param_3 = 3.0;
          fVar5 = fVar5 * fVar7 * fVar7 * (3.0 - (fVar7 + fVar7));
          fVar7 = _UNK_00e20844;
          fVar6 = _UNK_00e20844;
          if (_UNK_00e20844 <= fVar5) {
            fVar7 = fVar5;
          }
        }
        fVar8 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar7 + fVar9,param_4);
        fVar4 = param_3;
        fVar5 = fVar6;
        fVar9 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar9 - fVar7,param_4);
        *param_5 = (fVar8 + fVar9) * 0.5;
        param_5[1] = (fVar6 + fVar5) * 0.5;
        lVar3 = *(long *)puVar2;
        param_5[2] = (param_3 + fVar4) * 0.5;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar4 = (float)atan2f(-(param_3 - fVar4),fVar8 - fVar9);
        *param_6 = fVar4 * _UNK_00e20410;
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

