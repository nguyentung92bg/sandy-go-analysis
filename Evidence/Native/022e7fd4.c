/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$InOutQuad
float Dino_BusSand_App_UI_YachtRacingAnimValues__InOutQuad (float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingAnimValues$$InOutQuad
   float Dino_BusSand_App_UI_YachtRacingAnimValues__InOutQuad (float t, const MethodInfo* method);
    */

float Dino_BusSand_App_UI_YachtRacingAnimValues__InOutQuad_21e7fd4(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  fVar3 = 2.0 - (fVar1 + fVar1);
                    /* try { // try from 022e8008 to 023e8013 has its CatchHandler @ 022e8250 */
  fVar2 = fVar1 * (fVar1 + fVar1);
  if (0.5 <= fVar1) {
    fVar2 = fVar3 * fVar3 * -0.5 + 1.0;
  }
  return fVar2;
}

