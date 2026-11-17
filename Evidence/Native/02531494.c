/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$Reload
void Dino_BusSand_Sdk_DinoAdProvider__Reload (System_String_o* unit, bool rewarded, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$Reload
   void Dino_BusSand_Sdk_DinoAdProvider__Reload (System_String_o* unit, bool rewarded, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider__Reload_2431494(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((bRam0000000004f9cc1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04caa408);
    bRam0000000004f9cc1f = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Application__get_isEditor_43543ec(0);
    puVar1 = PTR_DAT_04caa408;
    if ((uVar2 & 1) == 0) {
      if ((param_2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa408 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = MaxSdkAndroid__IsInterstitialReady_3bc2688(param_1,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          MaxSdkAndroid__LoadInterstitial_3bc2570(param_1,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04caa408 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = MaxSdkAndroid__IsRewardedAdReady_3bc2b6c(param_1,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          MaxSdkAndroid__LoadRewardedAd_3bc2a54(param_1,0);
        }
      }
    }
  }
  return;
}

