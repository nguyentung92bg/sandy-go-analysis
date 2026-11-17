/* IL2CPP: Dino.BusSand.App.UI.StoreTipsPanel$$Finish
void Dino_BusSand_App_UI_StoreTipsPanel__Finish (Dino_BusSand_App_UI_StoreTipsPanel_o* __this, bool sure, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StoreTipsPanel$$Finish
   void Dino_BusSand_App_UI_StoreTipsPanel__Finish (Dino_BusSand_App_UI_StoreTipsPanel_o* __this,
   bool sure, const MethodInfo* method); */

void Dino_BusSand_App_UI_StoreTipsPanel__Finish_22bad04(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = 0x30;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x38;
    }
    lVar2 = *(long *)(lVar2 + lVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_02134474((long *)(param_1 + 0x38),0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023bad5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

