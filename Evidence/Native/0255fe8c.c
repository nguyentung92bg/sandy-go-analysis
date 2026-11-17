/* IL2CPP: Dino.GameCommon.RemoteConfigLevelRemap$$GetRemapLevelIndex
int32_t Dino_GameCommon_RemoteConfigLevelRemap__GetRemapLevelIndex (Dino_GameCommon_RemoteConfigLevelRemap_o* __this, int32_t origin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.RemoteConfigLevelRemap$$GetRemapLevelIndex
   int32_t Dino_GameCommon_RemoteConfigLevelRemap__GetRemapLevelIndex
   (Dino_GameCommon_RemoteConfigLevelRemap_o* __this, int32_t origin, const MethodInfo* method); */

ulong Dino_GameCommon_RemoteConfigLevelRemap__GetRemapLevelIndex_245fe8c
                (undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  
  puVar1 = PTR_DAT_04cc0970;
  if ((bRam0000000004f9ce15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0970);
    bRam0000000004f9ce15 = 1;
  }
  lVar2 = Dino_Common_RemoteConfigDataBase_object___get_Value_2e3fafc(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      puVar4 = (ulong *)(lVar2 + 0x20);
      do {
        if ((uint)*puVar4 == param_2) {
          return *puVar4 >> 0x20;
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
    return (ulong)param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

