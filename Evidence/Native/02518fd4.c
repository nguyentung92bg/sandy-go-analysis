/* IL2CPP: Dino.BusSand.Core.SandGrid.<PresentColors>d__51$$MoveNext
bool Dino_BusSand_Core_SandGrid__PresentColors_d__51__MoveNext (Dino_BusSand_Core_SandGrid__PresentColors_d__51_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid.<PresentColors>d__51$$MoveNext
   bool Dino_BusSand_Core_SandGrid__PresentColors_d__51__MoveNext
   (Dino_BusSand_Core_SandGrid__PresentColors_d__51_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_Core_SandGrid__PresentColors_d__51__MoveNext_2418fd4(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar2 = *(uint *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_02519020;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    while( true ) {
      *(uint *)(param_1 + 0x28) = uVar2;
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x50), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) goto LAB_02519040;
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (0 < *(int *)(lVar3 + (long)(int)uVar2 * 4 + 0x20)) break;
LAB_02519020:
      uVar2 = uVar2 + 1;
    }
    uVar1 = 1;
    *(char *)(param_1 + 0x14) = (char)uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
LAB_02519040:
    uVar1 = 0;
  }
  return uVar1;
}

