/* IL2CPP: Dino.BusSand.View.GrainParticles$$EmitHoming
void Dino_BusSand_View_GrainParticles__EmitHoming (Dino_BusSand_View_GrainParticles_o* __this, UnityEngine_Vector3_o from, int32_t slot, UnityEngine_Color32_o color, float size, float duration, UnityEngine_Vector3_o arcOffset, float delay, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$EmitHoming
   void Dino_BusSand_View_GrainParticles__EmitHoming (Dino_BusSand_View_GrainParticles_o* __this,
   UnityEngine_Vector3_o from, int32_t slot, UnityEngine_Color32_o color, float size, float
   duration, UnityEngine_Vector3_o arcOffset, float delay, float glow, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__EmitHoming_23b52a4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float in_stack_00000000;
  undefined4 in_stack_00000008;
  
  uVar8 = param_3;
  uVar9 = param_4;
  if ((bRam0000000004f9c97f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    bRam0000000004f9c97f = 1;
  }
  uVar1 = *(uint *)(param_9 + 0x30);
  if ((int)uVar1 < 0x2000) {
    lVar4 = *(long *)(param_9 + 0x20);
    *(uint *)(param_9 + 0x30) = uVar1 + 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    puVar5 = (undefined1 *)(lVar4 + 0x20 + (long)(int)uVar1 * 0x88);
    fVar7 = -in_stack_00000000;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 0x1c) = param_1;
    *(undefined4 *)(puVar5 + 0x20) = param_2;
    *(undefined4 *)(puVar5 + 4) = param_1;
    *(undefined4 *)(puVar5 + 8) = param_2;
    *(undefined4 *)(puVar5 + 0xc) = param_3;
    *(undefined4 *)(puVar5 + 0x34) = param_1;
    *(undefined4 *)(puVar5 + 0x38) = param_2;
    *(undefined4 *)(puVar5 + 0x3c) = param_3;
    *(undefined4 *)(puVar5 + 0x24) = param_3;
    *(undefined4 *)(puVar5 + 0x28) = param_6;
    *(undefined4 *)(puVar5 + 0x2c) = param_7;
    *(undefined4 *)(puVar5 + 0x30) = param_8;
    *(float *)(puVar5 + 0x40) = fVar7;
    *(undefined4 *)(puVar5 + 100) = param_11;
    puVar2 = PTR_DAT_04cbc358;
    *(undefined4 *)(puVar5 + 0x44) = param_5;
    *(undefined4 *)(puVar5 + 0x48) = param_4;
    lVar3 = *(long *)puVar2;
    *(undefined4 *)(puVar5 + 0x4c) = in_stack_00000008;
    *(float *)(puVar5 + 0x50) = in_stack_00000000;
    *(undefined4 *)(puVar5 + 0x5c) = param_10;
    *(undefined4 *)(puVar5 + 0x60) = 0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_View_GrainParticles__Lin_23b53f0(in_stack_00000008,param_11);
    lVar4 = lVar4 + 0x20 + (long)(int)uVar1 * 0x88;
    *(undefined4 *)(lVar4 + 0x68) = uVar6;
    *(float *)(lVar4 + 0x6c) = fVar7;
    *(undefined4 *)(lVar4 + 0x70) = uVar8;
    *(undefined4 *)(lVar4 + 0x74) = uVar9;
    uVar6 = Dino_BusSand_View_GrainParticles__Shade_23b5490(param_11);
    *(undefined4 *)(lVar4 + 0x78) = uVar6;
    *(float *)(lVar4 + 0x7c) = fVar7;
    *(undefined4 *)(lVar4 + 0x80) = uVar8;
    *(undefined4 *)(lVar4 + 0x84) = uVar9;
  }
  return;
}

