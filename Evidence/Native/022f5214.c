/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$get_IsPlayer
bool Dino_BusSand_App_UI_YachtRacingTrackRow__get_IsPlayer (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$get_IsPlayer
   bool Dino_BusSand_App_UI_YachtRacingTrackRow__get_IsPlayer
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_YachtRacingTrackRow__get_IsPlayer_21f5214(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(char *)(*(long *)(param_1 + 0x20) + 0x2c) != '\0';
  }
  return false;
}

