/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$OutBack
float Dino_BusSand_App_UI_UiMotion__OutBack (float t, float s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$OutBack
   float Dino_BusSand_App_UI_UiMotion__OutBack (float t, float s, const MethodInfo* method); */

float Dino_BusSand_App_UI_UiMotion__OutBack_2287cfc(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = -1.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2 + -1.0;
  }
  return fVar1 * fVar1 * param_2 + fVar1 * fVar1 * (param_2 + 1.0) * fVar1 + 1.0;
}

