/* IL2CPP: Dino.BusSand.Util$$Damp
UnityEngine_Vector3_o Dino_BusSand_Util__Damp (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, float lambda, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Util$$Damp
   UnityEngine_Vector3_o Dino_BusSand_Util__Damp (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b,
   float lambda, float dt, const MethodInfo* method); */

float Dino_BusSand_Util__Damp_238da58
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                undefined1 param_5 [16],undefined1 param_6 [16],float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)expf(-(param_7 * param_8));
  fVar1 = 1.0 - fVar1;
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar1) {
    fVar3 = fVar2;
  }
  return param_1 + (param_4 - param_1) * fVar3;
}

