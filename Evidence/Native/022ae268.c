/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass12_0$$<Purchase>b__0
void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0___Purchase_b__0 (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass12_0$$<Purchase>b__0
   void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0___Purchase_b__0
   (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0___Purchase_b__0_21ae268(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    Dino_BusSand_App_UI_StoreTipsPanel__ShowNetworkError_22b5524(0,0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022ae2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),0,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

