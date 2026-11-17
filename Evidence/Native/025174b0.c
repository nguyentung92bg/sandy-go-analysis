/* IL2CPP: Dino.BusSand.Core.SandGrid$$InBounds
bool Dino_BusSand_Core_SandGrid__InBounds (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$InBounds
   bool Dino_BusSand_Core_SandGrid__InBounds (Dino_BusSand_Core_SandGrid_o* __this, int32_t x,
   int32_t y, const MethodInfo* method); */

bool Dino_BusSand_Core_SandGrid__InBounds_24174b0(long param_1,uint param_2,uint param_3)

{
  if ((-1 < (int)(param_3 | param_2)) && ((int)param_2 < *(int *)(param_1 + 0x10))) {
    return (int)param_3 < *(int *)(param_1 + 0x14);
  }
  return false;
}

