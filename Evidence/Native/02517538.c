/* IL2CPP: Dino.BusSand.Core.SandGrid$$ShadeAt
int8_t Dino_BusSand_Core_SandGrid__ShadeAt (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$ShadeAt
   int8_t Dino_BusSand_Core_SandGrid__ShadeAt (Dino_BusSand_Core_SandGrid_o* __this, int32_t x,
   int32_t y, const MethodInfo* method); */

undefined1 Dino_BusSand_Core_SandGrid__ShadeAt_2417538(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  if ((((int)(param_3 | param_2) < 0) || (*(int *)(param_1 + 0x10) <= (int)param_2)) ||
     (*(int *)(param_1 + 0x14) <= (int)param_3)) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  param_2 = param_2 + *(int *)(param_1 + 0x10) * param_3;
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined1 *)(lVar1 + (int)param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

