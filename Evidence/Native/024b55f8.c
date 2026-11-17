/* IL2CPP: Dino.BusSand.View.GrainParticles$$EmitBallistic
void Dino_BusSand_View_GrainParticles__EmitBallistic (Dino_BusSand_View_GrainParticles_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o vel, UnityEngine_Color32_o color, float size, float life, float glow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GrainParticles$$EmitBallistic
   void Dino_BusSand_View_GrainParticles__EmitBallistic (Dino_BusSand_View_GrainParticles_o* __this,
   UnityEngine_Vector3_o pos, UnityEngine_Vector3_o vel, UnityEngine_Color32_o color, float size,
   float life, float glow, const MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__EmitBallistic_23b55f8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_stack_00000000;
  
  uVar8 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  if ((bRam0000000004f9c982 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc358);
    bRam0000000004f9c982 = 1;
  }
  uVar2 = *(uint *)(param_9 + 0x30);
  if ((int)uVar2 < 0x2000) {
    lVar5 = *(long *)(param_9 + 0x20);
    *(uint *)(param_9 + 0x30) = uVar2 + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    puVar6 = (undefined1 *)(lVar5 + 0x20 + (long)(int)uVar2 * 0x88);
    *(undefined4 *)(puVar6 + 4) = param_1;
    *(undefined4 *)(puVar6 + 8) = param_2;
    *(undefined4 *)(puVar6 + 0x34) = param_1;
    *(undefined4 *)(puVar6 + 0x38) = param_2;
    *(undefined4 *)(puVar6 + 0x3c) = param_3;
    *(undefined4 *)(puVar6 + 0xc) = param_3;
    *(undefined4 *)(puVar6 + 0x10) = param_4;
    *(undefined4 *)(puVar6 + 0x14) = param_5;
    *(undefined4 *)(puVar6 + 0x18) = param_6;
    *(undefined4 *)(puVar6 + 100) = param_10;
    *(undefined8 *)(puVar6 + 0x5c) = 0xffffffff;
    puVar3 = PTR_DAT_04cbc358;
    *(undefined4 *)(puVar6 + 0x54) = 0;
    *(undefined4 *)(puVar6 + 0x58) = 0;
    *puVar6 = 1;
    lVar4 = *(long *)puVar3;
    *(undefined4 *)(puVar6 + 0x40) = 0;
    *(undefined4 *)(puVar6 + 0x44) = param_8;
    *(undefined4 *)(puVar6 + 0x48) = param_7;
    iVar1 = *(int *)(lVar4 + 0xe4);
    *(undefined4 *)(puVar6 + 0x4c) = in_stack_00000000;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_View_GrainParticles__Lin_23b53f0(in_stack_00000000,param_10);
    lVar5 = lVar5 + 0x20 + (long)(int)uVar2 * 0x88;
    *(undefined4 *)(lVar5 + 0x68) = uVar7;
    *(undefined4 *)(lVar5 + 0x6c) = uVar8;
    *(undefined4 *)(lVar5 + 0x70) = uVar9;
    *(undefined4 *)(lVar5 + 0x74) = uVar10;
    uVar7 = Dino_BusSand_View_GrainParticles__Shade_23b5490(param_10);
    *(undefined4 *)(lVar5 + 0x78) = uVar7;
    *(undefined4 *)(lVar5 + 0x7c) = uVar8;
    *(undefined4 *)(lVar5 + 0x80) = uVar9;
    *(undefined4 *)(lVar5 + 0x84) = uVar10;
  }
  return;
}

