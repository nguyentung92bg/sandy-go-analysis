/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<ShowInterstitialAsync>b__27_2
void Dino_BusSand_Sdk_DinoAdProvider___c___ShowInterstitialAsync_b__27_2 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02531524) */
/* WARNING: Removing unreachable block (ram,0x02531528) */
/* WARNING: Removing unreachable block (ram,0x0253152c) */
/* WARNING: Removing unreachable block (ram,0x0253153c) */
/* WARNING: Removing unreachable block (ram,0x02531548) */
/* WARNING: Removing unreachable block (ram,0x0253154c) */
/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<ShowInterstitialAsync>b__27_2
   void Dino_BusSand_Sdk_DinoAdProvider___c___ShowInterstitialAsync_b__27_2
   (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider___c___ShowInterstitialAsync_b__27_2_2431b14(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04cbeff0;
  if ((bRam0000000004f9cc2b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeff0);
    bRam0000000004f9cc2b = 1;
  }
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  thunk_FUN_02142dc8();
  if ((bRam0000000004f9cc1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04caa408);
    bRam0000000004f9cc1f = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_46d2084(uVar3,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Application__get_isEditor_43543ec(0);
    puVar1 = PTR_DAT_04caa408;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04caa408 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = MaxSdkAndroid__IsInterstitialReady_3bc2688(uVar3,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        MaxSdkAndroid__LoadInterstitial_3bc2570(uVar3,0);
      }
    }
  }
  return;
}

