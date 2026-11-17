/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<>c__DisplayClass47_0$$<SetupStreakRate>b__0
void Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass47_0___SetupStreakRate_b__0 (Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass47_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<>c__DisplayClass47_0$$<SetupStreakRate>b__0
   void Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass47_0___SetupStreakRate_b__0
   (Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass47_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass47_0___SetupStreakRate_b__0_22feb18
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c4c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb0c58);
    bRam0000000004f9c4c5 = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
  uStack_34 = *(undefined4 *)(param_1 + 0x10);
  lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
  if (plVar4 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar7,0);
    }
    puVar3 = PTR_DAT_04cb0c58;
    puVar2 = PTR_DAT_04cae520;
    puVar1 = PTR_DAT_04cab550;
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_02134474(plVar4 + 4,lVar5);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar3,plVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_App_UI_MainHudPanel__ToastText_22fdec4(uVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

