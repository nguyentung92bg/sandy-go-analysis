/* IL2CPP: Dino.BusSand.Core.Road$$IsInLeftCorner
bool Dino_BusSand_Core_Road__IsInLeftCorner (Dino_BusSand_Core_Road_o* __this, double pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$IsInLeftCorner
   bool Dino_BusSand_Core_Road__IsInLeftCorner (Dino_BusSand_Core_Road_o* __this, double pos, const
   MethodInfo* method); */

bool Dino_BusSand_Core_Road__IsInLeftCorner_241295c(double param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    return param_1 < (double)*(int *)(param_2 + 0x24) &&
           (double)(*(int *)(param_2 + 0x24) - *(int *)(*(long *)(param_2 + 0x10) + 0x20)) <=
           param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

