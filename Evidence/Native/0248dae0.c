/* IL2CPP: Dino.BusSand.Util$$Spring
void Dino_BusSand_Util__Spring (float* x, float* v, float target, float freq, float damping, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Util$$Spring
   void Dino_BusSand_Util__Spring (float* x, float* v, float target, float freq, float damping,
   float dt, const MethodInfo* method); */

void Dino_BusSand_Util__Spring_238dae0
               (float param_1,float param_2,float param_3,float param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_5;
  fVar6 = *param_6;
  param_2 = param_2 * _UNK_00e1fdf4;
  fVar2 = param_2 * param_2 * param_4;
  fVar1 = param_2 * (param_4 + param_4) * param_3 + 1.0;
  fVar4 = fVar2 * param_4;
  fVar3 = 1.0 / (fVar4 + fVar1);
  *param_5 = fVar3 * (fVar4 * param_1 + fVar1 * fVar5 + fVar6 * param_4);
  *param_6 = fVar3 * (fVar6 + fVar2 * (param_1 - fVar5));
  return;
}

