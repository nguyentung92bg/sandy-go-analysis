/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$ReceiptValid
bool Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid (UnityEngine_Purchasing_Product_o* product, System_String_o** why, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$ReceiptValid
   bool Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid (UnityEngine_Purchasing_Product_o* product,
   System_String_o** why, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid_243ecfc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9cc93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbf6e0);
    FUN_02132f7c(PTR_DAT_04cbf1e0);
    FUN_02132f7c(PTR_DAT_04cbf4f0);
    FUN_02132f7c(PTR_DAT_04cbf6e8);
    bRam0000000004f9cc93 = 1;
  }
  *param_2 = 0;
  thunk_FUN_02134474(param_2,0);
  if ((param_1 == 0) ||
     (uVar2 = UnityEngine_Purchasing_Product__get_hasReceipt_411b9b8(param_1,0),
     puVar1 = PTR_DAT_04cbf4f0, (uVar2 & 1) == 0)) {
    *param_2 = *(undefined8 *)PTR_DAT_04cbf6e8;
    thunk_FUN_02134474(param_2);
    uVar3 = 0;
  }
  else {
    lVar6 = **(long **)(*(long *)PTR_DAT_04cbf4f0 + 0xb8);
    if (lVar6 == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cbf1e0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_Sdk_GooglePlayTangle__Data_2434834();
      if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Application__get_identifier_43526b4(0);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf6e0);
      UnityEngine_Purchasing_Security_CrossPlatformValidator___ctor_40c9a78(uVar5,uVar3,uVar4,0);
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
      lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
    }
    uVar3 = UnityEngine_Purchasing_Product__get_receipt_4109258(param_1,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar3,uVar3);
    }
    UnityEngine_Purchasing_Security_CrossPlatformValidator__Validate_40c9c74(lVar6,uVar3,0);
    uVar3 = 1;
  }
  return uVar3;
}

