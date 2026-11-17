/* IL2CPP: Dino.BusSand.App.Iap$$CanPurchase
bool Dino_BusSand_App_Iap__CanPurchase (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$CanPurchase
   bool Dino_BusSand_App_Iap__CanPurchase (int32_t storeItemId, const MethodInfo* method); */

bool Dino_BusSand_App_Iap__CanPurchase_217a6e8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04cac018;
                    /* try { // try from 0227a6f8 to 0237a703 has its CatchHandler @ 0227a734 */
                    /* try { // try from 0227a704 to 0237a74f has its CatchHandler @ 0227a684 */
  if ((bRam0000000004f9b901 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad238);
                    /* catch() { ... } // from try @ 0227a6f8 with catch @ 0227a734 */
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9b901 = 1;
  }
  puVar2 = PTR_DAT_04cad200;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  bVar3 = false;
  if (lVar6 != 0) {
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)PTR_DAT_04cad238,0);
    iVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    if (iVar4 < 1) {
      bVar3 = true;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar5 = Dino_BusSand_App_Iap__PurchasedCount_217a53c(param_1);
      bVar3 = iVar5 < iVar4;
    }
  }
  return bVar3;
}

