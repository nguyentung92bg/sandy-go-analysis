/* IL2CPP: Dino.BusSand.Core.Road$$CouplingDistance
double Dino_BusSand_Core_Road__CouplingDistance (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* ahead, Dino_BusSand_Core_RoadBus_o* follower, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$CouplingDistance
   double Dino_BusSand_Core_Road__CouplingDistance (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* ahead, Dino_BusSand_Core_RoadBus_o* follower, const MethodInfo*
   method); */

undefined1  [16]
Dino_BusSand_Core_Road__CouplingDistance_241659c(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  if (((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) && (param_3 != 0)) {
    auVar1._0_8_ = (double)*(int *)(param_2 + 0x1c) / 2.0 +
                   (double)*(int *)(*(long *)(param_1 + 0x10) + 0x24) +
                   (double)*(int *)(param_3 + 0x1c) / 2.0;
    auVar1._8_8_ = 0;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

