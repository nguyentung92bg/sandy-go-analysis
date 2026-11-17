/* IL2CPP: Dino.BusSand.Util$$Damp
float Dino_BusSand_Util__Damp (float a, float b, float lambda, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Util$$Damp
   float Dino_BusSand_Util__Damp (float a, float b, float lambda, float dt, const MethodInfo*
   method); */

float Dino_BusSand_Util__Damp_238da08(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)expf(-(param_3 * param_4));
  fVar1 = 1.0 - fVar1;
  fVar3 = 1.0;
  if (fVar1 <= 1.0) {
    fVar3 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar3;
  }
  return (param_2 - param_1) * fVar2 + param_1;
}

