/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnInitialized
void Dino_BusSand_Sdk_UnityIapProvider__OnInitialized (Dino_BusSand_Sdk_UnityIapProvider_o* __this, UnityEngine_Purchasing_IStoreController_o* controller, UnityEngine_Purchasing_IExtensionProvider_o* extensions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnInitialized
   void Dino_BusSand_Sdk_UnityIapProvider__OnInitialized (Dino_BusSand_Sdk_UnityIapProvider_o*
   __this, UnityEngine_Purchasing_IStoreController_o* controller,
   UnityEngine_Purchasing_IExtensionProvider_o* extensions, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__OnInitialized_243f034
               (long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9af8;
  if ((bRam0000000004f9cc94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf6f8);
    bRam0000000004f9cc94 = 1;
  }
  puVar3 = PTR_DAT_04cbf6f8;
  puVar2 = PTR_DAT_04caa210;
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_02134474((long *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Debug__Log_4360fc8(*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar4 = UnityEngine_Application__get_platform_4352d00(0);
  if (iVar4 != 0xb) {
    return;
  }
  if ((bRam0000000004f9cc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf638);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    bRam0000000004f9cc92 = 1;
  }
  uStack_38 = 0;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04cbf638) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0253ec24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cbf638,0);
LAB_0253ec24:
    lVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if ((lVar6 != 0) &&
       (lVar6 = UnityEngine_Purchasing_ProductCollection__get_all_411bd5c(lVar6,0),
       puVar1 = PTR_DAT_04cad1f0, lVar6 != 0)) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar8 = 0;
        uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar10 = *(long *)(lVar6 + 0x20 + uVar8 * 8);
          if ((lVar10 != 0) &&
             (uVar7 = UnityEngine_Purchasing_Product__get_hasReceipt_411b9b8(lVar10,0),
             (uVar7 & 1) != 0)) {
            if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0253ecf8;
            if ((*(int *)(*(long *)(lVar10 + 0x10) + 0x20) == 1) &&
               (uVar7 = Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid_243ecfc(lVar10,&uStack_38),
               (uVar7 & 1) != 0)) {
              if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0253ecf8;
              uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Iap__DeliverUnclaimed_217b060(uVar11,0);
            }
          }
          uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      return;
    }
  }
LAB_0253ecf8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

