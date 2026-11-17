/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_RoadEmpty
bool Dino_BusSand_Core_StageEngine__get_RoadEmpty (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_RoadEmpty
   bool Dino_BusSand_Core_StageEngine__get_RoadEmpty (Dino_BusSand_Core_StageEngine_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_Core_StageEngine__get_RoadEmpty_24252fc(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = Dino_BusSand_Core_Road__get_Count_2411ee8(*(long *)(param_1 + 0x20),0);
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

