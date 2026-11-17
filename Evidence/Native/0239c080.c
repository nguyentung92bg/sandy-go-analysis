/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_RescueSecondsLeft
float Dino_BusSand_App_Gameplay_GameplayController__get_RescueSecondsLeft (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_RescueSecondsLeft
   float Dino_BusSand_App_Gameplay_GameplayController__get_RescueSecondsLeft
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

float Dino_BusSand_App_Gameplay_GameplayController__get_RescueSecondsLeft_229c080
                (undefined8 param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  fVar2 = -1.0;
  if (lVar1 != 0) {
    lVar1 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (lVar1 == 0) {
LAB_0239c0dc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar2 = -1.0;
    if (-1 < *(int *)(lVar1 + 0xe4)) {
      lVar1 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
      if (lVar1 == 0) goto LAB_0239c0dc;
      fVar2 = (float)*(int *)(lVar1 + 0xe4) / 60.0;
    }
  }
  return fVar2;
}

