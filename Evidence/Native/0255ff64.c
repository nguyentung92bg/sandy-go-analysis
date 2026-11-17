/* IL2CPP: Dino.GameCommon.RemoteConfigLevelRemap$$GetRemapLevelId
System_String_o* Dino_GameCommon_RemoteConfigLevelRemap__GetRemapLevelId (Dino_GameCommon_RemoteConfigLevelRemap_o* __this, System_String_o* origin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.RemoteConfigLevelRemap$$GetRemapLevelId
   System_String_o* Dino_GameCommon_RemoteConfigLevelRemap__GetRemapLevelId
   (Dino_GameCommon_RemoteConfigLevelRemap_o* __this, System_String_o* origin, const MethodInfo*
   method); */

undefined8
Dino_GameCommon_RemoteConfigLevelRemap__GetRemapLevelId_245ff64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_04cc0970;
  if ((bRam0000000004f9ce16 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0970);
    bRam0000000004f9ce16 = 1;
  }
  lVar3 = Dino_Common_RemoteConfigDataBase_object___get_Value_2e3fafc(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *(long *)(lVar3 + 0x18);
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar5 = 0;
    uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    puVar6 = (undefined8 *)(lVar3 + 0x28);
    do {
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = *puVar6;
      uVar4 = System_String__op_Equality_46d1108(puVar6[-1],param_2,0);
      if ((uVar4 & 1) != 0) {
        return uVar1;
      }
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return param_2;
}

