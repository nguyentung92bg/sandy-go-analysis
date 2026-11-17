/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$CloseFlow
void Dino_BusSand_App_UI_BattleRoyaleResultPanel__CloseFlow (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$CloseFlow
   void Dino_BusSand_App_UI_BattleRoyaleResultPanel__CloseFlow
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleResultPanel__CloseFlow_2190534(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x73) == '\0') {
    *(undefined1 *)(param_1 + 0x73) = 1;
                    /* catch() { ... } // from try @ 02290528 with catch @ 02290560 */
    plVar1 = (long *)(param_1 + 0x38);
    lVar2 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
                    /* catch() { ... } // from try @ 022904f8 with catch @ 02290578 */
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02290590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

