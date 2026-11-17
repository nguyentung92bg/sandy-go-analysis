/* IL2CPP: Dino.GameCommon.RemoveLevelPayload$$GetRemapLevelIndex
int32_t Dino_GameCommon_RemoveLevelPayload__GetRemapLevelIndex (Dino_GameCommon_RemoveLevelPayload_o* __this, int32_t origin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.RemoveLevelPayload$$GetRemapLevelIndex
   int32_t Dino_GameCommon_RemoveLevelPayload__GetRemapLevelIndex
   (Dino_GameCommon_RemoveLevelPayload_o* __this, int32_t origin, const MethodInfo* method); */

ulong Dino_GameCommon_RemoveLevelPayload__GetRemapLevelIndex_245ff28(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x18), 0 < iVar1)) {
    puVar3 = (ulong *)(lVar2 + 0x20);
    do {
      if ((uint)*puVar3 == param_2) {
        return *puVar3 >> 0x20;
      }
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (iVar1 != 0);
  }
  return (ulong)param_2;
}

