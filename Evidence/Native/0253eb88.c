/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$DeliverOwnedNonConsumables
void Dino_BusSand_Sdk_UnityIapProvider__DeliverOwnedNonConsumables (UnityEngine_Purchasing_IStoreController_o* controller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$DeliverOwnedNonConsumables
   void Dino_BusSand_Sdk_UnityIapProvider__DeliverOwnedNonConsumables
   (UnityEngine_Purchasing_IStoreController_o* controller, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__DeliverOwnedNonConsumables_243eb88(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9cc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf638);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    bRam0000000004f9cc92 = 1;
  }
  uStack_38 = 0;
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04cbf638) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0253ec24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0216b7a4(param_1,*(long *)PTR_DAT_04cbf638,0);
LAB_0253ec24:
    lVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((lVar3 != 0) &&
       (lVar3 = UnityEngine_Purchasing_ProductCollection__get_all_411bd5c(lVar3,0),
       puVar1 = PTR_DAT_04cad1f0, lVar3 != 0)) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar5 = 0;
        uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar7 = *(long *)(lVar3 + 0x20 + uVar5 * 8);
          if ((lVar7 != 0) &&
             (uVar4 = UnityEngine_Purchasing_Product__get_hasReceipt_411b9b8(lVar7,0),
             (uVar4 & 1) != 0)) {
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0253ecf8;
            if ((*(int *)(*(long *)(lVar7 + 0x10) + 0x20) == 1) &&
               (uVar4 = Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid_243ecfc(lVar7,&uStack_38),
               (uVar4 & 1) != 0)) {
              if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0253ecf8;
              uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Iap__DeliverUnclaimed_217b060(uVar8,0);
            }
          }
          uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return;
    }
  }
LAB_0253ecf8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

