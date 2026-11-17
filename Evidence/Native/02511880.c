/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_HasRoadPosition
bool Dino_BusSand_Core_RoadBus__get_HasRoadPosition (Dino_BusSand_Core_RoadBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_HasRoadPosition
   bool Dino_BusSand_Core_RoadBus__get_HasRoadPosition (Dino_BusSand_Core_RoadBus_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_Core_RoadBus__get_HasRoadPosition_2411880(long param_1)

{
  if (*(int *)(param_1 + 0x28) - 1U < 3) {
    return true;
  }
  return *(char *)(param_1 + 0x50) != '\0';
}

