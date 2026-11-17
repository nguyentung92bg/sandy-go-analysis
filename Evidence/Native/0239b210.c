/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_CarsLeft
int32_t Dino_BusSand_App_Gameplay_GameplayController__get_CarsLeft (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$get_CarsLeft
   int32_t Dino_BusSand_App_Gameplay_GameplayController__get_CarsLeft
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Gameplay_GameplayController__get_CarsLeft_229b210(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
  if (lVar6 == 0) {
    return -1;
  }
  lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x28) != 0) {
      iVar1 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(*(long *)(lVar6 + 0x28),0);
      iVar2 = Dino_BusSand_Core_StageEngine__get_GarageRemaining_24236f8(lVar6);
      iVar3 = Dino_BusSand_Core_StageEngine__get_LiftRemaining_2423838(lVar6);
      iVar4 = Dino_BusSand_Core_StageEngine__get_LaneRemaining_242397c(lVar6);
      if (*(long *)(lVar6 + 0x20) != 0) {
        iVar5 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(lVar6 + 0x20),0);
        return iVar2 + iVar1 + iVar3 + iVar4 + iVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

