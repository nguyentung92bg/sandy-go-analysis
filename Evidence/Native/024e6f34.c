/* IL2CPP: Dino.BusSand.View.StageLayout$$HalfWidthAt
float Dino_BusSand_View_StageLayout__HalfWidthAt (Dino_BusSand_View_StageLayout_o* __this, float z, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$HalfWidthAt
   float Dino_BusSand_View_StageLayout__HalfWidthAt (Dino_BusSand_View_StageLayout_o* __this, float
   z, const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  fVar1 = *(float *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar2 = (float)func_0x049b5430(*(float *)(param_2 + 0x30) * 0.5 * _UNK_00e20a74);
  return ((param_1 - (float)((ulong)uVar5 >> 0x20)) * (float)((ulong)uVar3 >> 0x20) +
         (0.0 - fVar1) * fVar4 + (0.0 - (float)uVar5) * (float)uVar3) * fVar2 *
         *(float *)(param_2 + 0x10);
}

