/* IL2CPP: Dino.BusSand.View.GameView$$PunchCamera
void Dino_BusSand_View_GameView__PunchCamera (Dino_BusSand_View_GameView_o* __this, float amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$PunchCamera
   void Dino_BusSand_View_GameView__PunchCamera (Dino_BusSand_View_GameView_o* __this, float amount,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__PunchCamera_23a955c(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x11c);
  if (fVar2 < param_1) {
    fVar1 = (float)UnityEngine_Random__get_value_43b6570(0);
    fVar2 = *(float *)(param_2 + 0x11c);
    *(float *)(param_2 + 0x134) = fVar1 * 100.0;
  }
  if (fVar2 <= param_1) {
    fVar2 = param_1;
  }
                    /* try { // try from 024a959c to 025a95a7 has its CatchHandler @ 024aab28 */
  *(float *)(param_2 + 0x11c) = fVar2;
  return;
}

