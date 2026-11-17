/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<ShowRewardedAsync>b__25_2
void Dino_BusSand_Sdk_DinoAdProvider___c___ShowRewardedAsync_b__25_2 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253155c) */
/* WARNING: Removing unreachable block (ram,0x02531560) */
/* WARNING: Removing unreachable block (ram,0x02531564) */
/* WARNING: Removing unreachable block (ram,0x02531574) */
/* WARNING: Removing unreachable block (ram,0x02531580) */
/* WARNING: Removing unreachable block (ram,0x02531584) */
/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<ShowRewardedAsync>b__25_2
   void Dino_BusSand_Sdk_DinoAdProvider___c___ShowRewardedAsync_b__25_2
   (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider___c___ShowRewardedAsync_b__25_2_2431ab8(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 02531ab8 to 02631ad3 has its CatchHandler @ 02530ea4 */
  puVar1 = PTR_DAT_04cbeff0;
                    /* catch() { ... } // from try @ 02531ab4 with catch @ 02531ad0 */
  if ((bRam0000000004f9cc2a & 1) == 0) {
                    /* try { // try from 02531ad4 to 02631adb has its CatchHandler @ 02531ae4 */
                    /* try { // try from 02531adc to 02631ae7 has its CatchHandler @ 02530ea4 */
    FUN_02132f7c(PTR_DAT_04cbeff0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02531ad4 with catch @ 02531ae4
                        */
    bRam0000000004f9cc2a = 1;
  }
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
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
      uVar2 = MaxSdkAndroid__IsRewardedAdReady_3bc2b6c(uVar3,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        MaxSdkAndroid__LoadRewardedAd_3bc2a54(uVar3,0);
      }
    }
  }
  return;
}

