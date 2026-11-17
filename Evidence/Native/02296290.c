/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$FinishGuide
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__FinishGuide (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$FinishGuide
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__FinishGuide
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__FinishGuide_2196290(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9c9 = 1;
  }
  *(undefined1 *)(param_1 + 0x9c) = 0;
  lVar3 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (lVar3 != 0) {
      uStack_28 = 0;
      if (*(char *)(lVar3 + 0x4d) == '\0') {
        *(undefined1 *)(lVar3 + 0x4d) = 1;
        if (*(long *)(lVar3 + 0x38) == 0) {
          lVar5 = 0;
        }
        else {
          plVar2 = (long *)(*(long *)(lVar3 + 0x38) + 0x18);
          lVar5 = *plVar2;
          *plVar2 = 0;
          thunk_FUN_02134474(plVar2,0);
        }
        if (*(long *)(lVar3 + 0x40) != 0) {
          Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88
                    (auStack_48,*(long *)(lVar3 + 0x40),0);
        }
        Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4(0);
        if (*(char *)(lVar3 + 0x2c) == '\0') {
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar3,0);
        }
        Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent_218b8b0();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

