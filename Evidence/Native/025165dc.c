/* IL2CPP: Dino.BusSand.Core.Road$$InTrain
bool Dino_BusSand_Core_Road__InTrain (Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$InTrain
   bool Dino_BusSand_Core_Road__InTrain (Dino_BusSand_Core_RoadBus_o* b, const MethodInfo* method);
    */

bool Dino_BusSand_Core_Road__InTrain_24165dc(long param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((0 < *(int *)(param_1 + 0x5c)) && (*(char *)(param_1 + 0x50) == '\0')) {
    return *(int *)(param_1 + 0x28) - 1U < 3;
  }
  return false;
}

