/* IL2CPP: Dino.BusSand.Core.SandGrid$$Clear
void Dino_BusSand_Core_SandGrid__Clear (Dino_BusSand_Core_SandGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$Clear
   void Dino_BusSand_Core_SandGrid__Clear (Dino_BusSand_Core_SandGrid_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_Core_SandGrid__Clear_241796c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    System_Array__Clear_4851dc8(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      System_Array__Clear_4851dc8(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
      lVar1 = *(long *)(param_1 + 0x48);
      if (lVar1 != 0) {
        System_Array__Clear_4851dc8(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
        lVar1 = *(long *)(param_1 + 0x50);
        if (lVar1 != 0) {
          System_Array__Clear_4851dc8(lVar1,0,*(undefined4 *)(lVar1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x70) = 0;
          *(undefined2 *)(param_1 + 0x74) = 1;
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

