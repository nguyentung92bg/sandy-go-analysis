/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerTipsPanel$$OnMask
void Dino_BusSand_App_UI_ClimbTowerTipsPanel__OnMask (Dino_BusSand_App_UI_ClimbTowerTipsPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerTipsPanel$$OnMask
   void Dino_BusSand_App_UI_ClimbTowerTipsPanel__OnMask (Dino_BusSand_App_UI_ClimbTowerTipsPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerTipsPanel__OnMask_21a7fdc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
    plVar1 = (long *)(param_1 + 0x38);
    lVar2 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022a803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

