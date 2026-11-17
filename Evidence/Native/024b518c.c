/* IL2CPP: Dino.BusSand.View.GrainParticles$$EmitHoming
void Dino_BusSand_View_GrainParticles__EmitHoming (Dino_BusSand_View_GrainParticles_o* __this, UnityEngine_Vector3_o from, int32_t slot, UnityEngine_Color32_o color, float size, float duration, float arcHeight, float delay, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$EmitHoming
   void Dino_BusSand_View_GrainParticles__EmitHoming (Dino_BusSand_View_GrainParticles_o* __this,
   UnityEngine_Vector3_o from, int32_t slot, UnityEngine_Color32_o color, float size, float
   duration, float arcHeight, float delay, float glow, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__EmitHoming_23b518c
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
               undefined4 param_5,float param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_3;
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  fVar2 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
  fVar4 = (float)uVar5;
  uVar1 = (ulong)uVar5 >> 0x20;
  fVar3 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(fVar2,uVar5,0);
  uVar6 = NEON_fmov(0x3e800000,4);
  fVar8 = (float)uVar1 * param_6 + (float)uVar5 * param_6 * (float)((ulong)uVar6 >> 0x20);
  Dino_BusSand_View_GrainParticles__EmitHoming_23b52a4
            (param_1,param_2,param_3,param_4,param_5,
             CONCAT44(fVar8,fVar4 * param_6 + fVar3 * param_6 * (float)uVar6),fVar8,
             fVar2 * param_6 + fVar7 * param_6 * 0.25,param_7,param_8,param_9);
  return;
}

