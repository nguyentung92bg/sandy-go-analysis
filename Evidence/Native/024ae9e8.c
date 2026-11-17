/* IL2CPP: Dino.BusSand.View.GrainParticles$$Spark
void Dino_BusSand_View_GrainParticles__Spark (Dino_BusSand_View_GrainParticles_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o vel, UnityEngine_Color32_o color, float size, float life, float glow, float delay, float drag, float gravity, float twinkle, float whiten, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$Spark
   void Dino_BusSand_View_GrainParticles__Spark (Dino_BusSand_View_GrainParticles_o* __this,
   UnityEngine_Vector3_o pos, UnityEngine_Vector3_o vel, UnityEngine_Color32_o color, float size,
   float life, float glow, float delay, float drag, float gravity, float twinkle, float whiten,
   const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__Spark_23ae9e8(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  float in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if (*(int *)(param_1 + 0x30) < 0x2000) {
    Dino_BusSand_View_GrainParticles__EmitBallistic_23b55f8(param_1,param_2);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(int *)(param_1 + 0x30) - 1;
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar2 = lVar2 + (long)(int)uVar1 * 0x88;
    *(undefined1 *)(lVar2 + 0x20) = 2;
    uVar3 = UnityEngine_Random__get_value_43b6570(0);
    *(undefined4 *)(lVar2 + 0x9c) = in_stack_00000020;
    *(undefined4 *)(lVar2 + 0xa0) = in_stack_00000028;
    *(undefined4 *)(lVar2 + 0x98) = uVar3;
    *(undefined4 *)(lVar2 + 0xa4) = 0xbf800000;
    *(float *)(lVar2 + 0x70) = in_stack_00000008;
    *(undefined4 *)(lVar2 + 0x74) = in_stack_00000010;
    *(float *)(lVar2 + 0x60) = -in_stack_00000008;
    *(undefined4 *)(lVar2 + 0x78) = in_stack_00000018;
  }
  return;
}

