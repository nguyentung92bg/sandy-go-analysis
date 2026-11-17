/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$InOutCubic
float Dino_BusSand_App_UI_BattleRoyaleUi__InOutCubic (float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$InOutCubic
   float Dino_BusSand_App_UI_BattleRoyaleUi__InOutCubic (float t, const MethodInfo* method); */

float Dino_BusSand_App_UI_BattleRoyaleUi__InOutCubic_219d1c4(float param_1)

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
  if (0.5 <= fVar1) {
    fVar2 = (float)func_0x049b5300(2.0 - (fVar1 + fVar1),0x40400000);
    fVar1 = fVar2 * -0.5 + 1.0;
  }
  else {
    fVar1 = fVar1 * fVar1 * fVar1 * 4.0;
  }
  return fVar1;
}

