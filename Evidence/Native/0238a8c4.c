/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$InOutSine
float Dino_BusSand_App_UI_UiMotion__InOutSine (float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$InOutSine
   float Dino_BusSand_App_UI_UiMotion__InOutSine (float t, const MethodInfo* method); */

float Dino_BusSand_App_UI_UiMotion__InOutSine_228a8c4(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar1 * _UNK_00e2082c;
  }
  fVar1 = (float)cosf(fVar2);
  return (fVar1 + -1.0) * -0.5;
}

