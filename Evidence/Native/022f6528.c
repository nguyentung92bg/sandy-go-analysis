/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$LaneY
float Dino_BusSand_App_UI_YachtRacingTrackRow__LaneY (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, int32_t win, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$LaneY
   float Dino_BusSand_App_UI_YachtRacingTrackRow__LaneY (Dino_BusSand_App_UI_YachtRacingTrackRow_o*
   __this, int32_t win, const MethodInfo* method); */

float Dino_BusSand_App_UI_YachtRacingTrackRow__LaneY_21f6528(long param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)param_2 / (float)*(int *)(param_1 + 0x28);
  fVar3 = 1.0;
  if (fVar1 <= 1.0) {
    fVar3 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar3;
  }
  return *(float *)(param_1 + 0x30) * fVar2 + 472.0;
}

