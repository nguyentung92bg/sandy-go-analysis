/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Spring
void Dino_BusSand_App_UI_HomeToonFace__Spring (float* x, float* v, float to, float k, float d, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Spring
   void Dino_BusSand_App_UI_HomeToonFace__Spring (float* x, float* v, float to, float k, float d,
   float dt, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Spring_22f24d0
               (float param_1,float param_2,float param_3,float param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  
  fVar1 = (*param_6 + param_2 * param_4 * (param_1 - *param_5)) /
          (param_3 * param_4 + 1.0 + param_4 * param_4 * param_2);
  *param_6 = fVar1;
  *param_5 = *param_5 + fVar1 * param_4;
  return;
}

