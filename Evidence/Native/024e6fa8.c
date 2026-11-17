/* IL2CPP: Dino.BusSand.View.StageLayout$$GroundZAt
float Dino_BusSand_View_StageLayout__GroundZAt (Dino_BusSand_View_StageLayout_o* __this, float sy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$GroundZAt
   float Dino_BusSand_View_StageLayout__GroundZAt (Dino_BusSand_View_StageLayout_o* __this, float
   sy, const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__GroundZAt_23e6fa8(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x3c);
  fVar4 = *(float *)(param_2 + 0x44);
  fVar5 = *(float *)(param_2 + 0x48);
  fVar1 = (float)func_0x049b5430(*(float *)(param_2 + 0x30) * 0.5 * _UNK_00e20a74);
  fVar2 = fVar2 + fVar4 * fVar1 * param_1;
  fVar4 = _UNK_00e204c4;
  if (fVar2 <= _UNK_00e204c4) {
    fVar4 = fVar2;
  }
  return *(float *)(param_2 + 0x1c) -
         (fVar3 + fVar5 * fVar1 * param_1) * (*(float *)(param_2 + 0x18) / fVar4);
}

