/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<>c__DisplayClass9_0$$<RunSpecialWin>b__0
void Dino_BusSand_App_UI_BattleRoyaleUi___c__DisplayClass9_0___RunSpecialWin_b__0 (Dino_BusSand_App_UI_BattleRoyaleUi___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi.<>c__DisplayClass9_0$$<RunSpecialWin>b__0
   void Dino_BusSand_App_UI_BattleRoyaleUi___c__DisplayClass9_0___RunSpecialWin_b__0
   (Dino_BusSand_App_UI_BattleRoyaleUi___c__DisplayClass9_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleUi___c__DisplayClass9_0___RunSpecialWin_b__0_219d458
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba06 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba06 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar4 + 0x2c) == '\0') {
      uVar6 = 0;
      uStack_28 = 0;
      if (*(char *)(lVar4 + 0x4d) == '\0') {
        *(undefined1 *)(lVar4 + 0x4d) = 1;
        if (*(long *)(lVar4 + 0x38) == 0) {
          lVar5 = 0;
        }
        else {
          plVar2 = (long *)(*(long *)(lVar4 + 0x38) + 0x18);
          lVar5 = *plVar2;
          *plVar2 = 0;
          thunk_FUN_02134474(plVar2,0);
          uVar6 = extraout_x1;
        }
        if (*(long *)(lVar4 + 0x40) != 0) {
          Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88
                    (auStack_48,*(long *)(lVar4 + 0x40),0);
          uVar6 = extraout_x1_00;
        }
        Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4(0,uVar6);
        if (*(char *)(lVar4 + 0x2c) == '\0') {
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar4,0);
        }
        Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent_218b8b0();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        }
      }
      return;
    }
  }
  return;
}

