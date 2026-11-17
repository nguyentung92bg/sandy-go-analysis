/* IL2CPP: Dino.BusSand.View.GrainParticles$$Firework
void Dino_BusSand_View_GrainParticles__Firework (Dino_BusSand_View_GrainParticles_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Color32_o color, int32_t n, float speed, float size, float life, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$Firework
   void Dino_BusSand_View_GrainParticles__Firework (Dino_BusSand_View_GrainParticles_o* __this,
   UnityEngine_Vector3_o pos, UnityEngine_Color32_o color, int32_t n, float speed, float size, float
   life, float glow, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__Firework_23b5730
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,long param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = param_2;
  fVar15 = param_3;
  if ((bRam0000000004f9c983 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    bRam0000000004f9c983 = 1;
  }
  puVar6 = PTR_DAT_04cbc358;
  uVar5 = _UNK_00e20994;
  uVar4 = _UNK_00e20754;
  uVar3 = _UNK_00e20178;
  uVar2 = _UNK_00e20170;
  if (0 < param_9) {
    do {
      if (0x1fff < *(int *)(param_7 + 0x30)) {
        return;
      }
      fVar9 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
      fVar10 = (float)UnityEngine_Random__Range_43b64a8(0x3f400000,0x3f800000,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar14 = fVar13 * param_4;
      fVar16 = fVar15 * param_4;
      uVar7 = Dino_BusSand_View_GrainParticles__Jitter_23b5928(uVar4,param_8);
      fVar11 = (float)UnityEngine_Random__Range_43b64a8(uVar5,uVar3,0);
      fVar12 = (float)UnityEngine_Random__Range_43b64a8(0x3f400000,uVar2,0);
      fVar13 = param_2;
      fVar15 = param_3;
      Dino_BusSand_View_GrainParticles__EmitBallistic_23b55f8
                (param_1,param_2,param_3,fVar10 * fVar9 * param_4,fVar10 * fVar14,fVar10 * fVar16,
                 fVar11 * param_5,fVar12 * param_6,param_7,uVar7);
      lVar8 = *(long *)(param_7 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(int *)(param_7 + 0x30) - 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_024b5920:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined1 *)(lVar8 + 0x20 + (long)(int)uVar1 * 0x88) = 2;
      uVar7 = UnityEngine_Random__get_value_43b6570(0);
      if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_024b5920;
      param_9 = param_9 + -1;
      lVar8 = lVar8 + 0x20 + (long)(int)uVar1 * 0x88;
      *(undefined4 *)(lVar8 + 0x78) = uVar7;
      *(undefined4 *)(lVar8 + 0x7c) = 0;
      *(undefined4 *)(lVar8 + 0x80) = 0;
      *(undefined4 *)(lVar8 + 0x84) = 0xbf800000;
    } while (param_9 != 0);
  }
  return;
}

