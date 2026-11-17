/* IL2CPP: Dino.BusSand.View.GameView$$HoldBoosters
void Dino_BusSand_View_GameView__HoldBoosters (Dino_BusSand_View_GameView_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$HoldBoosters
   void Dino_BusSand_View_GameView__HoldBoosters (Dino_BusSand_View_GameView_o* __this, float
   seconds, const MethodInfo* method); */

void Dino_BusSand_View_GameView__HoldBoosters_23a7260(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x220);
  fVar1 = (float)UnityEngine_Time__get_time_43cd540(0);
  if (fVar2 <= fVar1 + param_1) {
    fVar2 = fVar1 + param_1;
  }
  *(float *)(param_2 + 0x220) = fVar2;
  return;
}

