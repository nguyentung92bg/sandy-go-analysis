/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$OutQuad
float Dino_BusSand_App_UI_YachtRacingAnimValues__OutQuad (float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$OutQuad
   float Dino_BusSand_App_UI_YachtRacingAnimValues__OutQuad (float t, const MethodInfo* method); */

float Dino_BusSand_App_UI_YachtRacingAnimValues__OutQuad_21e7fb0(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 1.0;
  if (0.0 <= param_1) {
    fVar1 = 1.0 - fVar2;
  }
  return 1.0 - fVar1 * fVar1;
}

