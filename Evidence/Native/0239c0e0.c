/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_RescuePending
bool Dino_BusSand_App_Gameplay_GameplayController__get_RescuePending (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_RescuePending
   bool Dino_BusSand_App_Gameplay_GameplayController__get_RescuePending
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Gameplay_GameplayController__get_RescuePending_229c0e0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if (lVar2 == 0) {
LAB_0239c130:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = Dino_BusSand_Core_StageEngine__get_FireTruckInLot_24249f4(lVar2,0);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
      if (lVar2 == 0) goto LAB_0239c130;
      bVar1 = 0 < *(int *)(lVar2 + 0xe4);
    }
  }
  return bVar1;
}

