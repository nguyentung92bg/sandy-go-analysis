/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$IsHanging
bool Dino_BusSand_App_Meta_RacingRobotAgent__IsHanging (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$IsHanging
   bool Dino_BusSand_App_Meta_RacingRobotAgent__IsHanging (Dino_BusSand_App_Meta_RacingRobotAgent_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_RacingRobotAgent__IsHanging_225f1f0(long param_1)

{
  if (0 < *(int *)(param_1 + 0x80)) {
    return *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x80) <= *(int *)(param_1 + 0x9c);
  }
  return false;
}

