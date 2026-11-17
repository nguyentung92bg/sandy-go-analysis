/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<>c__DisplayClass30_0$$<Fail>b__0
void Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass30_0___Fail_b__0 (Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass30_0_o* __this, bool refreshed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<>c__DisplayClass30_0$$<Fail>b__0
   void Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass30_0___Fail_b__0
   (Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass30_0_o* __this, bool refreshed, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass30_0___Fail_b__0_243f7b4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_18;
  
  if ((bRam0000000004f9cc9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf638);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad2e8);
    bRam0000000004f9cc9a = 1;
  }
  uStack_18 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x10), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04cbf638) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0253f860;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cbf638,0);
LAB_0253f860:
    lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (lVar3 != 0) {
      lVar3 = UnityEngine_Purchasing_ProductCollection__WithID_411be1c
                        (lVar3,*(undefined8 *)(param_1 + 0x18),0);
      if (((lVar3 != 0) &&
          (uVar4 = UnityEngine_Purchasing_Product__get_hasReceipt_411b9b8(lVar3,0), (uVar4 & 1) != 0
          )) && (uVar4 = Dino_BusSand_Sdk_UnityIapProvider__ReceiptValid_243ecfc(lVar3,&uStack_18),
                puVar1 = PTR_DAT_04cad1f0, (uVar4 & 1) != 0)) {
        lVar3 = *(long *)PTR_DAT_04cad1f0;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20) = *(undefined8 *)PTR_DAT_04cad2e8;
        thunk_FUN_02134474();
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        Dino_BusSand_Sdk_UnityIapProvider__Complete_243e214
                  (*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

