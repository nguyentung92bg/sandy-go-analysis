/* IL2CPP: Dino.GameCommon.RemoveLevelPayload$$GetRemapLevelId
System_String_o* Dino_GameCommon_RemoveLevelPayload__GetRemapLevelId (Dino_GameCommon_RemoveLevelPayload_o* __this, System_String_o* origin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.RemoveLevelPayload$$GetRemapLevelId
   System_String_o* Dino_GameCommon_RemoveLevelPayload__GetRemapLevelId
   (Dino_GameCommon_RemoveLevelPayload_o* __this, System_String_o* origin, const MethodInfo*
   method); */

undefined8
Dino_GameCommon_RemoveLevelPayload__GetRemapLevelId_245ffc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar4 = 0;
    uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    puVar5 = (undefined8 *)(lVar3 + 0x28);
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = *puVar5;
      uVar2 = System_String__op_Equality_46d1108(puVar5[-1],param_2,0);
      if ((uVar2 & 1) != 0) {
        return uVar1;
      }
      uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 2;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return param_2;
}

