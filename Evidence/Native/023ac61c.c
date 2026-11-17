/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$OutExpo
float Dino_BusSand_App_UI_CommerceUi__OutExpo (float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$OutExpo
   float Dino_BusSand_App_UI_CommerceUi__OutExpo (float t, const MethodInfo* method); */

float Dino_BusSand_App_UI_CommerceUi__OutExpo_22ac61c(float param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 < 1.0) {
    fVar1 = (float)exp2f(param_1 * -10.0);
    fVar1 = 1.0 - fVar1;
  }
  return fVar1;
}

