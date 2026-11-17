/* IL2CPP: Dino.BusSand.Core.SandGrid$$CountOf
int32_t Dino_BusSand_Core_SandGrid__CountOf (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$CountOf
   int32_t Dino_BusSand_Core_SandGrid__CountOf (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color,
   const MethodInfo* method); */

undefined4 Dino_BusSand_Core_SandGrid__CountOf_241764c(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((int)(uint)param_2 < *(int *)(lVar1 + 0x18)) {
    return *(undefined4 *)(lVar1 + (ulong)param_2 * 4 + 0x20);
  }
  return 0;
}

