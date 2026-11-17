/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$OnBack
bool Dino_BusSand_App_UI_DailyGiftPanel__OnBack (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$OnBack
   bool Dino_BusSand_App_UI_DailyGiftPanel__OnBack (Dino_BusSand_App_UI_DailyGiftPanel_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_DailyGiftPanel__OnBack_232c818(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c606 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c606 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0),
       lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
    if ((uVar2 & 1) != 0) {
      Dino_BusSand_App_UI_DailyGiftPanel__HideGuide_232bd74(param_1);
      return 1;
    }
  }
  Dino_BusSand_App_UI_RewardPopup__OnBack_2325b5c(param_1);
  return 1;
}

