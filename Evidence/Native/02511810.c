/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_Progress
float Dino_BusSand_Core_RoadBus__get_Progress (Dino_BusSand_Core_RoadBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_Progress
   float Dino_BusSand_Core_RoadBus__get_Progress (Dino_BusSand_Core_RoadBus_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_Core_RoadBus__get_Progress_2411810(long param_1)

{
  if (0 < *(int *)(param_1 + 0x20)) {
    return (float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x20);
  }
  return 1.0;
}

