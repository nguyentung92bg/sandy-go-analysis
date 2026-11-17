/* IL2CPP: Dino.BusSand.View.StageLayout$$Smooth
float Dino_BusSand_View_StageLayout__Smooth (float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$Smooth
   float Dino_BusSand_View_StageLayout__Smooth (float x, const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__Smooth_23e97c0(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  return fVar1 * fVar1 * (3.0 - (fVar1 + fVar1));
}

