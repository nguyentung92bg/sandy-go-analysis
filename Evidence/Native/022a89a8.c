/* IL2CPP: Dino.BusSand.App.UI.SimpleClimbTowerPanel$$OnCloseUI
void Dino_BusSand_App_UI_SimpleClimbTowerPanel__OnCloseUI (Dino_BusSand_App_UI_SimpleClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleClimbTowerPanel$$OnCloseUI
   void Dino_BusSand_App_UI_SimpleClimbTowerPanel__OnCloseUI
   (Dino_BusSand_App_UI_SimpleClimbTowerPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SimpleClimbTowerPanel__OnCloseUI_21a89a8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000004f9ba51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    bRam0000000004f9ba51 = 1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar1 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654
                          (*(long *)(param_1 + 0x40),0), (uVar1 & 1) == 0)) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_ClimbTowerFeature__SetForceClose_222a7f0(*(long *)(param_1 + 0x40),0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cae6e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_ClimbTowerHallButton__UpdateState_219f894();
    plVar2 = (long *)(param_1 + 0x38);
    lVar3 = *plVar2;
    *plVar2 = 0;
    thunk_FUN_02134474(plVar2,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022a8a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

