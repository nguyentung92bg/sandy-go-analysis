/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$GetStringData
System_String_o* Dino_BusSand_Sdk_SandBusAdsRemoteConfig__GetStringData (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$GetStringData
   System_String_o* Dino_BusSand_Sdk_SandBusAdsRemoteConfig__GetStringData
   (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method); */

long Dino_BusSand_Sdk_SandBusAdsRemoteConfig__GetStringData_2435870(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_04cbf288;
  puVar2 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9cc47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf288);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cc47 = 1;
  }
  lVar4 = Dino_Common_RemoteConfigDataBase_object___get_Value_2e3fafc(param_1,*(undefined8 *)puVar3)
  ;
  lVar1 = *(long *)puVar2;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  return lVar1;
}

