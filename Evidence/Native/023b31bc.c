/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$get_BundleItem
int32_t Dino_BusSand_App_UI_RemoveAdsPanel__get_BundleItem (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$get_BundleItem
   int32_t Dino_BusSand_App_UI_RemoveAdsPanel__get_BundleItem (const MethodInfo* method); */

int Dino_BusSand_App_UI_RemoveAdsPanel__get_BundleItem_22b31bc(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000004f9c2dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c2dc = 1;
  }
  iVar2 = Dino_BusSand_App_Meta_Monetization__get_NoAdsBundleItem_226787c(0);
  puVar1 = PTR_DAT_04cad200;
  if (iVar2 < 1) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar1,iVar2,0);
    iVar3 = 0;
    if (lVar4 != 0) {
      if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(iVar2,0);
      iVar3 = iVar2;
      if ((uVar5 & 1) == 0) {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

