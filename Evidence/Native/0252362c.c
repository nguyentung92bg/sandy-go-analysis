/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_BusesLeft
int32_t Dino_BusSand_Core_StageEngine__get_BusesLeft (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_BusesLeft
   int32_t Dino_BusSand_Core_StageEngine__get_BusesLeft (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

int Dino_BusSand_Core_StageEngine__get_BusesLeft_242362c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8();
    iVar2 = Dino_BusSand_Core_StageEngine__get_GarageRemaining_24236f8(param_1);
    iVar3 = Dino_BusSand_Core_StageEngine__get_LiftRemaining_2423838(param_1);
    iVar4 = Dino_BusSand_Core_StageEngine__get_LaneRemaining_242397c(param_1);
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar5 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(param_1 + 0x20),0);
      return iVar2 + iVar1 + iVar3 + iVar4 + iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

