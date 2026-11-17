/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$OnInterstitialShown
void Dino_BusSand_App_Meta_NoAdsOffer__OnInterstitialShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$OnInterstitialShown
   void Dino_BusSand_App_Meta_NoAdsOffer__OnInterstitialShown (const MethodInfo* method); */

void Dino_BusSand_App_Meta_NoAdsOffer__OnInterstitialShown_220ce74(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd10 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd10 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  uVar6 = Dino_BusSand_App_Meta_NoAdsOffer__get_On_220ce04();
  if ((((uVar6 & 1) != 0) && (lVar5 != 0)) && (*(char *)(lVar5 + 0xdc) == '\0')) {
    iVar1 = *(int *)(lVar5 + 200);
    iVar4 = Dino_BusSand_App_Meta_Monetization__get_RemoveAdsPopupEvery_2267790(0);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = iVar1 / iVar4;
    }
    if (iVar1 == iVar2 * iVar4) {
      lVar7 = *(long *)puVar3;
      *(undefined1 *)(lVar5 + 0x1bc) = 1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04cabaf8;
      if ((bRam0000000004f9c0ee & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9c0ee = 1;
      }
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x28) = 1;
      fVar8 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x2c) = fVar8 + 0.5;
      return;
    }
  }
  return;
}

