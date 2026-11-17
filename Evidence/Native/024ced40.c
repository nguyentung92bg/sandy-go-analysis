/* IL2CPP: Dino.BusSand.View.MechanicLayer$$KeySparks
void Dino_BusSand_View_MechanicLayer__KeySparks (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$KeySparks
   void Dino_BusSand_View_MechanicLayer__KeySparks (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__KeySparks_23ced40
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  puVar9 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9eb = 1;
  }
  lVar10 = Dino_BusSand_View_MechanicLayer__get_GrainsLive_23beda0(param_7);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar9);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  if ((uVar11 & 1) == 0) {
    if (cRam0000000004f9c959 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9c959 = '\x01';
    }
    puVar9 = PTR_DAT_04caa200;
    param_5 = param_5 - param_2;
    param_4 = param_4 - param_1;
    param_6 = param_6 - param_3;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar24 = *(float *)(param_7 + 0x50) * _UNK_00e201f4;
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    fVar24 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5) / fVar24;
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar9 = PTR_DAT_04cac5d0;
    uVar8 = _UNK_00e2094c;
    uVar7 = _UNK_00e208d0;
    uVar6 = _UNK_00e207dc;
    fVar5 = _UNK_00e207cc;
    uVar4 = _UNK_00e2065c;
    fVar3 = _UNK_00e2043c;
    fVar2 = _UNK_00e20094;
    iVar13 = (int)fVar24;
    iVar15 = 0;
    if (7 < iVar13) {
      iVar13 = 8;
    }
    if (iVar13 < 2) {
      iVar13 = 1;
    }
    if ((float)(int)fVar24 == INFINITY) {
      iVar13 = 1;
    }
    do {
      fVar16 = ((float)iVar15 + 1.0) / (float)iVar13;
      fVar24 = 1.0;
      if (fVar16 <= 1.0) {
        fVar24 = fVar16;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar16) {
        fVar26 = fVar24;
      }
      fVar21 = (float)iVar13;
      fVar17 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
      fVar23 = *(float *)(param_7 + 0x50);
      fVar16 = fVar24;
      fVar22 = fVar21;
      fVar18 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
      fVar27 = *(float *)(param_7 + 0x50);
      fVar19 = (float)UnityEngine_Random__get_value_43b6570(0);
      lVar12 = *(long *)puVar9;
      if (fVar5 <= fVar19) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar9;
        }
        puVar14 = *(undefined4 **)(lVar12 + 0xb8);
      }
      else {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar9;
        }
        puVar14 = (undefined4 *)(*(long *)(lVar12 + 0xb8) + 4);
      }
      uVar1 = *puVar14;
      fVar25 = *(float *)(param_7 + 0x50);
      fVar19 = (float)UnityEngine_Random__Range_43b64a8(uVar4,uVar6,0);
      uVar20 = UnityEngine_Random__Range_43b64a8(uVar7,uVar8,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar23 = fVar23 * fVar3;
      fVar27 = fVar27 * fVar2;
      Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                (param_1 + param_4 * fVar26 + fVar17 * fVar23,
                 param_2 + param_5 * fVar26 + fVar24 * fVar23,
                 param_3 + param_6 * fVar26 + fVar21 * fVar23,fVar18 * fVar27,fVar16 * fVar27,
                 fVar22 * fVar27,fVar25 * fVar19,uVar20,lVar10,uVar1);
      iVar15 = iVar15 + 1;
    } while (iVar13 != iVar15);
  }
  return;
}

