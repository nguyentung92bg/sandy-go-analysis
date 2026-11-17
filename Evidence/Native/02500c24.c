/* IL2CPP: Dino.BusSand.View.VehicleView$$BodyDynamics
void Dino_BusSand_View_VehicleView__BodyDynamics (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$BodyDynamics
   void Dino_BusSand_View_VehicleView__BodyDynamics (Dino_BusSand_View_VehicleView_o* __this, float
   dt, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__BodyDynamics_2400c24
               (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulong uVar6;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(int *)(param_4 + 0x2c) == 2) {
    if (param_1 <= _UNK_00e20948) {
LAB_02500d94:
      uVar6 = 0;
      *(undefined1 *)(param_4 + 0x1c4) = 0;
      goto code_r0x0248dae0;
    }
  }
  else if (param_1 <= _UNK_00e20948 || *(int *)(param_4 + 0x2c) != 4) goto LAB_02500d94;
  if (*(long *)(param_4 + 0x38) == 0) {
LAB_02500fa0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar4 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x38),0);
  if (*(long *)(param_4 + 0x38) == 0) goto LAB_02500fa0;
  fVar7 = param_2;
  UnityEngine_Transform__get_eulerAngles_43d130c(*(long *)(param_4 + 0x38),0);
  cVar3 = cRam0000000004f9b65d;
  lVar1 = 0xac;
  if (*(int *)(param_4 + 0x2c) != 4) {
    lVar1 = 0xa8;
  }
  fVar12 = *(float *)(param_4 + lVar1) / *(float *)(param_4 + 0xbc);
  if (*(char *)(param_4 + 0x1c4) == '\0') {
LAB_02500d00:
    *(float *)(param_4 + 0x1a4) = param_3;
    *(undefined1 *)(param_4 + 0x1c4) = 1;
    *(float *)(param_4 + 0x19c) = fVar4;
    fVar9 = 0.0;
    *(float *)(param_4 + 0x1a0) = param_2;
    fVar8 = 0.0;
    *(float *)(param_4 + 0x1b4) = fVar7;
    *(undefined4 *)(param_4 + 0x1c0) = 0;
    *(undefined8 *)(param_4 + 0x1b8) = 0;
    if (cVar3 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      fVar9 = *(float *)(param_4 + 0x1bc);
      fVar8 = *(float *)(param_4 + 0x1c0);
      cRam0000000004f9b65d = '\x01';
    }
    uVar10 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
    *(undefined8 *)(param_4 + 0x1a8) = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    *(undefined4 *)(param_4 + 0x1b0) = uVar10;
  }
  else {
    fVar16 = fVar4 - *(float *)(param_4 + 0x19c);
    fVar9 = fVar12 * fVar12;
    fVar17 = param_2 - *(float *)(param_4 + 0x1a0);
    fVar15 = param_3 - *(float *)(param_4 + 0x1a4);
    fVar8 = fVar9 * 9.0;
    if (fVar8 < fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15) goto LAB_02500d00;
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_02500fa0;
    fVar5 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_4 + 0x38),0);
    fVar11 = fVar7 - *(float *)(param_4 + 0x1b4);
    fVar11 = fVar11 + (float)(int)(fVar11 / 360.0) * -360.0;
    fVar13 = 360.0;
    if (fVar11 <= 360.0) {
      fVar13 = fVar11;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar11) {
      fVar2 = fVar13;
    }
    fVar9 = (fVar15 * fVar9 + fVar16 * fVar5 + fVar17 * fVar8) / param_1;
    fVar8 = fVar2 + -360.0;
    if (fVar2 <= 180.0) {
      fVar8 = fVar2;
    }
    fVar8 = fVar8 * _UNK_00e20a74;
    fVar15 = (float)expf(param_1 * -16.0);
    fVar16 = *(float *)(param_4 + 0x1a4);
    fVar17 = *(float *)(param_4 + 0x1b8);
    uVar14 = *(undefined8 *)(param_4 + 0x19c);
    fVar15 = 1.0 - fVar15;
    *(float *)(param_4 + 0x1b8) = fVar9;
    *(float *)(param_4 + 0x19c) = fVar4;
    *(float *)(param_4 + 0x1a0) = param_2;
    *(float *)(param_4 + 0x1a4) = param_3;
    *(float *)(param_4 + 0x1b4) = fVar7;
    fVar7 = 1.0;
    if (fVar15 <= 1.0) {
      fVar7 = fVar15;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar15) {
      fVar13 = fVar7;
    }
    fVar7 = (float)*(undefined8 *)(param_4 + 0x1a8);
    fVar15 = (float)((ulong)*(undefined8 *)(param_4 + 0x1a8) >> 0x20);
    fVar8 = *(float *)(param_4 + 0x1c0) +
            fVar13 * (fVar9 * (fVar8 / param_1) - *(float *)(param_4 + 0x1c0));
    fVar9 = *(float *)(param_4 + 0x1bc) +
            fVar13 * ((fVar9 - fVar17) / param_1 - *(float *)(param_4 + 0x1bc));
    *(float *)(param_4 + 0x1c0) = fVar8;
    *(float *)(param_4 + 0x1b0) =
         *(float *)(param_4 + 0x1b0) +
         fVar13 * ((param_3 - fVar16) / param_1 - *(float *)(param_4 + 0x1b0));
    *(float *)(param_4 + 0x1bc) = fVar9;
    *(ulong *)(param_4 + 0x1a8) =
         CONCAT44(fVar15 + ((param_2 - (float)((ulong)uVar14 >> 0x20)) / param_1 - fVar15) * fVar13,
                  fVar7 + ((fVar4 - (float)uVar14) / param_1 - fVar7) * fVar13);
  }
  fVar4 = (fVar8 / fVar12) * (float)_UNK_00e69b80;
  fVar7 = (-fVar9 / fVar12) * (float)((ulong)_UNK_00e69b80 >> 0x20);
  uVar6 = CONCAT44(fVar7,fVar4) ^
          (CONCAT44(fVar7,fVar4) ^ _UNK_00e6a478) &
          CONCAT44(-(uint)((float)(_UNK_00e6a478 >> 0x20) < fVar7),
                   -(uint)((float)_UNK_00e6a478 < fVar4));
  uVar6 = uVar6 ^ (uVar6 ^ _UNK_00e6a8a8) &
                  CONCAT44(-(uint)(fVar7 < (float)(_UNK_00e6a8a8 >> 0x20)),
                           -(uint)(fVar4 < (float)_UNK_00e6a8a8));
code_r0x0248dae0:
  Dino_BusSand_Util__Spring_238dae0
            (uVar6 >> 0x20,_UNK_00e1feac,_UNK_00e206e4,param_1,param_4 + 0x194,param_4 + 0x198,0);
  fVar9 = *(float *)(param_4 + 0x18c);
  fVar15 = *(float *)(param_4 + 400);
  fVar4 = _UNK_00e20940 * _UNK_00e1fdf4;
  fVar7 = fVar4 * fVar4 * param_1;
  fVar4 = fVar4 * (param_1 + param_1) * _UNK_00e207cc + 1.0;
  fVar8 = fVar7 * param_1;
  fVar12 = 1.0 / (fVar8 + fVar4);
  *(float *)(param_4 + 0x18c) = fVar12 * (fVar8 * (float)uVar6 + fVar4 * fVar9 + fVar15 * param_1);
  *(float *)(param_4 + 400) = fVar12 * (fVar15 + fVar7 * ((float)uVar6 - fVar9));
  return;
}

