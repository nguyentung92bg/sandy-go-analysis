/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$TryStorePrice
bool Dino_BusSand_Sdk_UnityIapProvider__TryStorePrice (Dino_BusSand_Sdk_UnityIapProvider_o* __this, System_String_o* productId, double* price, System_String_o** isoCurrency, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$TryStorePrice
   bool Dino_BusSand_Sdk_UnityIapProvider__TryStorePrice (Dino_BusSand_Sdk_UnityIapProvider_o*
   __this, System_String_o* productId, double* price, System_String_o** isoCurrency, const
   MethodInfo* method); */

uint Dino_BusSand_Sdk_UnityIapProvider__TryStorePrice_243e544
               (long param_1,undefined8 param_2,double *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  double dVar10;
  
  if ((bRam0000000004f9cc8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c10);
    FUN_02132f7c(PTR_DAT_04cbf638);
    bRam0000000004f9cc8f = 1;
  }
  *param_3 = 0.0;
  *param_4 = 0;
  thunk_FUN_02134474(param_4,0);
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cbf638) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0253e5fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cbf638,0);
LAB_0253e5fc:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (lVar5 == 0) {
LAB_0253e6a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = UnityEngine_Purchasing_ProductCollection__WithID_411be1c(lVar5,param_2,0);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x18);
      uVar3 = 0;
      if (lVar6 == 0) goto LAB_0253e694;
      uVar1 = *(undefined8 *)(lVar6 + 0x30);
      uVar2 = *(undefined8 *)(lVar6 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04ca9c10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar10 = (double)System_Decimal__op_Explicit_488b93c(uVar1,uVar2,0);
      lVar5 = *(long *)(lVar5 + 0x18);
      *param_3 = dVar10;
      if (lVar5 == 0) goto LAB_0253e6a8;
      *param_4 = *(undefined8 *)(lVar5 + 0x28);
      thunk_FUN_02134474(param_4);
      if (0.0 < *param_3) {
        uVar3 = System_String__IsNullOrEmpty_46d2084(*param_4,0);
        uVar3 = uVar3 ^ 1;
        goto LAB_0253e694;
      }
    }
  }
  uVar3 = 0;
LAB_0253e694:
  return uVar3 & 1;
}

