/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_SandLeftPermille
int32_t Dino_BusSand_Core_StageEngine__get_SandLeftPermille (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_SandLeftPermille
   int32_t Dino_BusSand_Core_StageEngine__get_SandLeftPermille (Dino_BusSand_Core_StageEngine_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_Core_StageEngine__get_SandLeftPermille_2426db8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x104);
  if ((int)uVar1 < 1) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = 0;
    if ((ulong)uVar1 != 0) {
      lVar2 = ((long)*(int *)(*(long *)(param_1 + 0x18) + 0x70) * 1000) / (long)(ulong)uVar1;
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

