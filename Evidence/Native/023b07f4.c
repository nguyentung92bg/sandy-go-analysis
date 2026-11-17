/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$Finish
void Dino_BusSand_App_UI_PowerBuyPanel__Finish (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$Finish
   void Dino_BusSand_App_UI_PowerBuyPanel__Finish (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, bool
   ok, const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel__Finish_22b07f4(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x38);
  lVar2 = *plVar1;
  *plVar1 = 0;
  thunk_FUN_02134474(plVar1,0);
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),param_2 & 1,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

