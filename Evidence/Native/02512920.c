/* IL2CPP: Dino.BusSand.Core.Road$$IsInReturnStraight
bool Dino_BusSand_Core_Road__IsInReturnStraight (Dino_BusSand_Core_Road_o* __this, double pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$IsInReturnStraight
   bool Dino_BusSand_Core_Road__IsInReturnStraight (Dino_BusSand_Core_Road_o* __this, double pos,
   const MethodInfo* method); */

bool Dino_BusSand_Core_Road__IsInReturnStraight_2412920(double param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x20);
    return param_1 < (double)(iVar1 + *(int *)(param_2 + 0x20) * 2) &&
           (double)(iVar1 + *(int *)(param_2 + 0x20)) <= param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

