/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$ProcessPurchase
int32_t Dino_BusSand_Sdk_UnityIapProvider__ProcessPurchase (Dino_BusSand_Sdk_UnityIapProvider_o* __this, UnityEngine_Purchasing_PurchaseEventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$ProcessPurchase
   int32_t Dino_BusSand_Sdk_UnityIapProvider__ProcessPurchase (Dino_BusSand_Sdk_UnityIapProvider_o*
   __this, UnityEngine_Purchasing_PurchaseEventArgs_o* args, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_UnityIapProvider__ProcessPurchase_243f230(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf628);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cbf710);
    bRam0000000004f9cc96 = 1;
  }
  uStack_28 = 0;
  if (((param_2 == 0) || (lVar2 = *(long *)(param_2 + 0x10), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x10) == 0)) {
LAB_0253f398:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  uVar3 = Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid_243ecfc(lVar2,&uStack_28);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) goto LAB_0253f398;
    uVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                      (lVar2,uVar4,*(undefined8 *)PTR_DAT_04cbf628);
    puVar1 = PTR_DAT_04cad1f0;
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)PTR_DAT_04cad1f0;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20) = *(undefined8 *)PTR_DAT_04cbf710;
      thunk_FUN_02134474();
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uStack_28;
      thunk_FUN_02134474();
      Dino_BusSand_Sdk_UnityIapProvider__Complete_243e214(param_1,uVar4,0);
    }
LAB_0253f384:
    uVar4 = 1;
  }
  else {
    if (lVar2 == 0) goto LAB_0253f398;
    uVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                      (lVar2,uVar4,*(undefined8 *)PTR_DAT_04cbf628);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_Iap__DeliverUnclaimed_217b060(uVar4,0);
      if ((uVar3 & 1) == 0) goto LAB_0253f384;
    }
    else {
      Dino_BusSand_Sdk_UnityIapProvider__Complete_243e214(param_1,uVar4,1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

