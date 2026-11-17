/* IL2CPP: Dino.BusSand.App.UI.SimpleStreakRatePanel$$OnCloseUI
void Dino_BusSand_App_UI_SimpleStreakRatePanel__OnCloseUI (Dino_BusSand_App_UI_SimpleStreakRatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleStreakRatePanel$$OnCloseUI
   void Dino_BusSand_App_UI_SimpleStreakRatePanel__OnCloseUI
   (Dino_BusSand_App_UI_SimpleStreakRatePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SimpleStreakRatePanel__OnCloseUI_21ddde8(long param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 022dddf8 to 023dddfb has its CatchHandler @ 022dddfc */
                    /* catch() { ... } // from try @ 022dd9a4 with catch @ 022dddfc
                       catch() { ... } // from try @ 022dddf8 with catch @ 022dddfc
                       try { // try from 022dddfc to 023dde0f has its CatchHandler @ 022dd928 */
  if ((bRam0000000004f9bb96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae9a8);
    bRam0000000004f9bb96 = 1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    lVar1 = Dino_BusSand_App_Meta_StreakRateFeature__get_I_224b6e0(0);
    if (lVar1 != 0) {
      Dino_BusSand_App_Meta_StreakRateFeature__TryFinishExpiredSlot_224ebe4(lVar1,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_StreakRateHallBar__Refresh_21dfd10(0);
    plVar2 = (long *)(param_1 + 0x38);
    lVar1 = *plVar2;
    *plVar2 = 0;
    thunk_FUN_02134474(plVar2,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022dde94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

