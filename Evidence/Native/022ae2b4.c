/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass12_0$$<Purchase>b__1
void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0___Purchase_b__1 (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi.<>c__DisplayClass12_0$$<Purchase>b__1
   void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0___Purchase_b__1
   (Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0_o* __this, bool ok, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GiftPackUi___c__DisplayClass12_0___Purchase_b__1_21ae2b4
               (long param_1,uint param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    Dino_BusSand_App_UI_StoreWaitingPanel__Hide_22bb980(0);
    if ((param_2 & 1) == 0) {
      Dino_BusSand_App_UI_StoreTipsPanel__ShowStoreFailed_22b5d1c(0,0);
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022ae318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2 & 1,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

