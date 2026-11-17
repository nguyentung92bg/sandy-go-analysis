/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnDeferred
void Dino_BusSand_Sdk_UnityIapProvider__OnDeferred (Dino_BusSand_Sdk_UnityIapProvider_o* __this, UnityEngine_Purchasing_Product_o* product, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253e2cc) */
/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnDeferred
   void Dino_BusSand_Sdk_UnityIapProvider__OnDeferred (Dino_BusSand_Sdk_UnityIapProvider_o* __this,
   UnityEngine_Purchasing_Product_o* product, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__OnDeferred_243e2f4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9cc8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad2e0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cbf698);
    bRam0000000004f9cc8d = 1;
  }
  puVar2 = PTR_DAT_04cad1f0;
  puVar1 = PTR_DAT_04ca9af8;
  puVar6 = (undefined8 *)PTR_DAT_04ca9c30;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    puVar6 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  uVar7 = *puVar6;
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf698,uVar7,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04cad2e0;
  UnityEngine_Debug__Log_4360fc8(uVar4,0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  if ((bRam0000000004f9cc8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf680);
    FUN_02132f7c(PTR_DAT_04cbf688);
    FUN_02132f7c(PTR_DAT_04cbf690);
    bRam0000000004f9cc8c = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_Dictionary_object__float___Remove_34b9004
              (*(long *)(param_1 + 0x28),uVar7,*(undefined8 *)PTR_DAT_04cbf680);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (*(long *)(param_1 + 0x20),uVar7,&stack0xffffffffffffffd8,
                         *(undefined8 *)PTR_DAT_04cbf690);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0253e2f0;
        System_Collections_Generic_Dictionary_object__object___Remove_34b58c0
                  (*(long *)(param_1 + 0x20),uVar7,*(undefined8 *)PTR_DAT_04cbf688);
      }
      return;
    }
  }
LAB_0253e2f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

