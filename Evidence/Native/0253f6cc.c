/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<>c__DisplayClass19_0$$<RefreshOwned>b__0
void Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass19_0___RefreshOwned_b__0 (Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass19_0_o* __this, bool ok, System_String_o* error, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<>c__DisplayClass19_0$$<RefreshOwned>b__0
   void Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass19_0___RefreshOwned_b__0
   (Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass19_0_o* __this, bool ok, System_String_o*
   error, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider___c__DisplayClass19_0___RefreshOwned_b__0_243f6cc
               (long param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000004f9cc99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf738);
    bRam0000000004f9cc99 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    if ((param_2 & 1) == 0) {
      uVar1 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbf738,param_3,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar1,0);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Sdk_UnityIapProvider__DeliverOwnedNonConsumables_243eb88
              (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0253f7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),param_2 & 1,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

