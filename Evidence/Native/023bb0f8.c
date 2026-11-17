/* IL2CPP: Dino.BusSand.App.UI.StoreTipsPanel$$<OnOpen>b__3_0
void Dino_BusSand_App_UI_StoreTipsPanel___OnOpen_b__3_0 (Dino_BusSand_App_UI_StoreTipsPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023bad24) */
/* IL2CPP: Dino.BusSand.App.UI.StoreTipsPanel$$<OnOpen>b__3_0
   void Dino_BusSand_App_UI_StoreTipsPanel___OnOpen_b__3_0 (Dino_BusSand_App_UI_StoreTipsPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StoreTipsPanel___OnOpen_b__3_0_22bb0f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_02134474((long *)(param_1 + 0x38),0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023bad5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

