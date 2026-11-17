/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_IsHeld
bool Dino_BusSand_Core_RoadBus__get_IsHeld (Dino_BusSand_Core_RoadBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_IsHeld
   bool Dino_BusSand_Core_RoadBus__get_IsHeld (Dino_BusSand_Core_RoadBus_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_Core_RoadBus__get_IsHeld_2411908(long param_1)

{
  if ((*(int *)(param_1 + 0x28) == 1) && (0 < *(int *)(param_1 + 0x5c))) {
    return *(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x24);
  }
  return false;
}

