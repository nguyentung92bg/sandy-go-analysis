/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass20_0$$<LevelInput>b__2
void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0___LevelInput_b__2 (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass20_0$$<LevelInput>b__2
   void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0___LevelInput_b__2
   (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0___LevelInput_b__2_236de04
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int aiStack_24 [3];
  
                    /* try { // try from 0246de04 to 0256de2b has its CatchHandler @ 0246dfb4 */
  if ((*(long *)(param_1 + 0x20) == 0) || (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x210);
  if ((bRam0000000004f9c796 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50,uVar4,0);
    FUN_02132f7c(PTR_DAT_04cac6f8);
    FUN_02132f7c(PTR_DAT_04cbae50);
    bRam0000000004f9c796 = 1;
  }
  aiStack_24[0] = 0;
  uVar2 = System_Int32__TryParse_482de64(uVar4,aiStack_24,0);
  puVar1 = PTR_DAT_04caba50;
  if (((uVar2 & 1) == 0) || (aiStack_24[0] < 1)) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      Dino_BusSand_App_GameApp__Toast_2166a6c
                (**(long **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cbae50,0);
    }
  }
  else {
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar3,0);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) != 0) {
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),*(undefined8 *)PTR_DAT_04cac6f8);
    }
    lVar3 = Dino_BusSand_Cheat_CheatMobilePanel__get_C_2368914();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Cheat_CheatManager__JumpToLevel_23653a8(lVar3,aiStack_24[0]);
  }
  return;
}

