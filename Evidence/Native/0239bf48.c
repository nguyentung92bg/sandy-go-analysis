/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_InputBlocked
bool Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_InputBlocked
   bool Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked_229bf48(long param_1)

{
  if ((*(int *)(param_1 + 0xa0) < 1) && (*(int *)(param_1 + 0x20) == 2)) {
    return *(char *)(param_1 + 0x58) == '\0';
  }
  return true;
}

