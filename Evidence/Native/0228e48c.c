/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$FinishGuide
void Dino_BusSand_App_UI_BattleRoyalePanel__FinishGuide (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$FinishGuide
   void Dino_BusSand_App_UI_BattleRoyalePanel__FinishGuide (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__FinishGuide_218e48c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  uStack_28 = 0;
  if (*(char *)(param_1 + 0x4d) == '\0') {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar2 = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar2 = *plVar1;
      *plVar1 = 0;
      thunk_FUN_02134474(plVar1,0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88
                (auStack_48,*(long *)(param_1 + 0x40),0);
    }
    Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4(0);
    if (*(char *)(param_1 + 0x2c) == '\0') {
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    }
    Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent_218b8b0();
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
  }
  return;
}

