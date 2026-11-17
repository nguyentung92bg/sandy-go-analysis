/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Spring
float Dino_BusSand_App_UI_UiMotion__Spring (float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Spring
   float Dino_BusSand_App_UI_UiMotion__Spring (float k, const MethodInfo* method); */

float Dino_BusSand_App_UI_UiMotion__Spring_2290b48(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = (float)cosf(fVar2 * _UNK_00e20680);
  return (1.0 - fVar2) * (1.0 - fVar2) * fVar1;
}

