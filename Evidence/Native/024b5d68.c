/* IL2CPP: Dino.BusSand.View.GrainParticles$$Burst
void Dino_BusSand_View_GrainParticles__Burst (Dino_BusSand_View_GrainParticles_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Color32_o color, int32_t n, float speed, float size, float up, float life, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$Burst
   void Dino_BusSand_View_GrainParticles__Burst (Dino_BusSand_View_GrainParticles_o* __this,
   UnityEngine_Vector3_o pos, UnityEngine_Color32_o color, int32_t n, float speed, float size, float
   up, float life, float glow, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__Burst_23b5d68
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,undefined8 param_8,undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar16 = param_2;
  fVar18 = param_3;
  if ((bRam0000000004f9c985 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    bRam0000000004f9c985 = 1;
  }
  puVar9 = PTR_DAT_04cbc358;
  puVar8 = PTR_DAT_04caa208;
  puVar7 = PTR_DAT_04caa200;
  fVar6 = _UNK_00e20a08;
  uVar5 = _UNK_00e20994;
  uVar4 = _UNK_00e2094c;
  uVar3 = _UNK_00e208d8;
  uVar2 = _UNK_00e20754;
  uVar1 = _UNK_00e20178;
  if (0 < param_10) {
    do {
      fVar12 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_View_GrainParticles__Jitter_23b5928(uVar2,param_9);
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(puVar7);
        cRam0000000004f9b65c = '\x01';
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar17 = ABS(fVar16) + param_6;
      fVar19 = SQRT(fVar18 * fVar18 + fVar12 * fVar12 + fVar17 * fVar17);
      if (fVar19 <= fVar6) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(puVar8);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar11 = *(float **)(*(long *)puVar8 + 0xb8);
        fVar12 = *pfVar11;
        fVar17 = pfVar11[1];
        fVar19 = pfVar11[2];
      }
      else {
        fVar12 = fVar12 / fVar19;
        fVar17 = fVar17 / fVar19;
        fVar19 = fVar18 / fVar19;
      }
      fVar13 = (float)UnityEngine_Random__Range_43b64a8(uVar4,0x3f800000,0);
      fVar14 = (float)UnityEngine_Random__Range_43b64a8(uVar5,uVar1,0);
      fVar15 = (float)UnityEngine_Random__Range_43b64a8(uVar5,uVar3,0);
      fVar16 = param_2;
      fVar18 = param_3;
      Dino_BusSand_View_GrainParticles__EmitBallistic_23b55f8
                (param_1,param_2,param_3,fVar12 * param_4 * fVar13,fVar17 * param_4 * fVar13,
                 fVar19 * param_4 * fVar13,fVar14 * param_5,fVar15 * param_7,param_8,uVar10);
      param_10 = param_10 + -1;
    } while (param_10 != 0);
  }
  return;
}

