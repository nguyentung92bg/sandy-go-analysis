/* IL2CPP: Dino.BusSand.Core.SandGrid$$SandCountInRow
int32_t Dino_BusSand_Core_SandGrid__SandCountInRow (Dino_BusSand_Core_SandGrid_o* __this, int32_t y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$SandCountInRow
   int32_t Dino_BusSand_Core_SandGrid__SandCountInRow (Dino_BusSand_Core_SandGrid_o* __this, int32_t
   y, const MethodInfo* method); */

undefined4 Dino_BusSand_Core_SandGrid__SandCountInRow_241761c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined4 *)(lVar1 + (long)(int)param_2 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

