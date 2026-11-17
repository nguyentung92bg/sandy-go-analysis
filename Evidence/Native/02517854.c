/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryRemove
bool Dino_BusSand_Core_SandGrid__TryRemove (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryRemove
   bool Dino_BusSand_Core_SandGrid__TryRemove (Dino_BusSand_Core_SandGrid_o* __this, int32_t x,
   int32_t y, const MethodInfo* method); */

ulong Dino_BusSand_Core_SandGrid__TryRemove_2417854(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  
  if ((((int)(param_3 | param_2) < 0) || (*(int *)(param_1 + 0x10) <= (int)param_2)) ||
     (*(int *)(param_1 + 0x14) <= (int)param_3)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    param_2 = param_2 + *(int *)(param_1 + 0x10) * param_3;
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      pbVar4 = (byte *)(lVar2 + (int)param_2 + 0x20);
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        return (ulong)bVar1;
      }
      *pbVar4 = 0;
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0) goto LAB_02517964;
      if (param_2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined1 *)(lVar2 + (int)param_2 + 0x20) = 0;
        lVar2 = *(long *)(param_1 + 0x48);
        if (lVar2 == 0) goto LAB_02517964;
        if (param_3 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)param_3 * 4;
          *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
          lVar2 = *(long *)(param_1 + 0x50);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
          if (lVar2 == 0) goto LAB_02517964;
          if ((uint)bVar1 < *(uint *)(lVar2 + 0x18)) {
            lVar2 = lVar2 + (ulong)bVar1 * 4;
            lVar3 = *(long *)(param_1 + 0x58);
            *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
            if (lVar3 == 0) goto LAB_02517964;
            if (param_3 < *(uint *)(lVar3 + 0x18)) {
              *(int *)(lVar3 + (long)(int)param_3 * 4 + 0x20) = *(int *)(param_1 + 0x60) + 1;
              *(undefined2 *)(param_1 + 0x74) = 1;
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
              return 1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02517964:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

