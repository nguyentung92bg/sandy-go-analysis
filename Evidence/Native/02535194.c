/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$DropStaleCache
void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__DropStaleCache (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$DropStaleCache
   void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__DropStaleCache (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__DropStaleCache_2435194(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  long lStack_18;
  
  puVar3 = PTR_DAT_04cbf260;
  if ((bRam0000000004f9cc41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf268);
    FUN_02132f7c(PTR_DAT_04cbf270);
    FUN_02132f7c(PTR_DAT_04cbf278);
    FUN_02132f7c(PTR_DAT_04cbf260);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9cc41 = 1;
  }
  lStack_18 = 0;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  uStack_34 = 0;
  uVar4 = UnityEngine_PlayerPrefs__HasKey_43b5ae8(*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_04cacfd0;
  if ((uVar4 & 1) != 0) {
    uVar5 = UnityEngine_PlayerPrefs__GetString_43b579c
                      (*(undefined8 *)PTR_DAT_04cbf278,*(undefined8 *)PTR_DAT_04cab288,0);
    uVar4 = System_Int64__TryParse_482f580(uVar5,&lStack_18,0);
    lVar1 = lStack_18;
    if ((uVar4 & 1) == 0) {
      lVar1 = 0;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_30 = System_DateTimeOffset__get_UtcNow_48145cc(0);
    lVar6 = System_DateTimeOffset__ToUnixTimeSeconds_48160f8(auStack_30,0);
    if (0x93a80 < lVar6 - lVar1) {
      UnityEngine_PlayerPrefs__DeleteKey_43b5c98(*(undefined8 *)puVar3,0);
      uStack_34 = 7;
      uVar5 = System_Int32__ToString_482d750(&uStack_34,0);
      uVar5 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04cbf270,uVar5,*(undefined8 *)PTR_DAT_04cbf268,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__Log_4360fc8(uVar5,0);
    }
  }
  return;
}

