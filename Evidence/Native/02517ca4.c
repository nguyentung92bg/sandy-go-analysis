/* IL2CPP: Dino.BusSand.Core.SandGrid$$BottomColorAt
uint8_t Dino_BusSand_Core_SandGrid__BottomColorAt (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$BottomColorAt
   uint8_t Dino_BusSand_Core_SandGrid__BottomColorAt (Dino_BusSand_Core_SandGrid_o* __this, int32_t
   x, const MethodInfo* method); */

char Dino_BusSand_Core_SandGrid__BottomColorAt_2417ca4(long param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x10))) &&
     (uVar2 = (ulong)*(uint *)(param_1 + 0x14), 0 < (int)*(uint *)(param_1 + 0x14))) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    do {
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      cVar1 = *(char *)(lVar3 + (int)param_2 + 0x20);
      if (cVar1 != '\0') {
        return cVar1;
      }
      uVar2 = uVar2 - 1;
      param_2 = param_2 + *(int *)(param_1 + 0x10);
    } while (uVar2 != 0);
  }
  return '\0';
}

