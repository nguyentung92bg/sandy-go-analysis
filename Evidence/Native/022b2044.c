/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnInvalidated
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnInvalidated (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnInvalidated
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnInvalidated
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, int32_t packId, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnInvalidated_21b2044(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (((*(int *)(*(long *)(param_1 + 0x38) + 0x10) == param_2) &&
      (*(char *)(param_1 + 0x5d) == '\0')) && (*(char *)(param_1 + 0x5c) == '\0')) {
    if (*(char *)(param_1 + 0x5d) == '\0') {
      *(undefined1 *)(param_1 + 0x5d) = 1;
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar2 = 0;
      }
      else {
        plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
        lVar2 = *plVar1;
        *plVar1 = 0;
        thunk_FUN_02134474(plVar1,0);
      }
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
      if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
        Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                  (*(long *)(param_1 + 0x40),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),0);
      }
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022afb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
    return;
  }
  return;
}

