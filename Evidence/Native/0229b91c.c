/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel$$OnMaskClick
void Dino_BusSand_App_UI_BattleRoyaleTipsPanel__OnMaskClick (Dino_BusSand_App_UI_BattleRoyaleTipsPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel$$OnMaskClick
   void Dino_BusSand_App_UI_BattleRoyaleTipsPanel__OnMaskClick
   (Dino_BusSand_App_UI_BattleRoyaleTipsPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleTipsPanel__OnMaskClick_219b91c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000004f9b9ed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b9ed = 1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
    plVar1 = (long *)(param_1 + 0x38);
    lVar2 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0229b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

