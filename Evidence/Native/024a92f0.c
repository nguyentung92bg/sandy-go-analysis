/* IL2CPP: Dino.BusSand.View.GameView$$get_BoosterBusy
bool Dino_BusSand_View_GameView__get_BoosterBusy (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$get_BoosterBusy
   bool Dino_BusSand_View_GameView__get_BoosterBusy (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_View_GameView__get_BoosterBusy_23a92f0(long param_1)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Time__get_time_43cd540(0);
  return fVar1 < *(float *)(param_1 + 0x220);
}

