/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel.<>c$$<SetupNameInput>b__57_0
uint16_t Dino_BusSand_App_UI_PlayerSettingPanel___c___SetupNameInput_b__57_0 (Dino_BusSand_App_UI_PlayerSettingPanel___c_o* __this, System_String_o* s, int32_t i, uint16_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel.<>c$$<SetupNameInput>b__57_0
   uint16_t Dino_BusSand_App_UI_PlayerSettingPanel___c___SetupNameInput_b__57_0
   (Dino_BusSand_App_UI_PlayerSettingPanel___c_o* __this, System_String_o* s, int32_t i, uint16_t c,
   const MethodInfo* method); */

uint Dino_BusSand_App_UI_PlayerSettingPanel___c___SetupNameInput_b__57_0_2304f28(void)

{
  uint uVar1;
  uint uVar2;
  uint in_w3;
  
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x88) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Char__IsControl_47bcdb8(in_w3,0);
  uVar1 = 0;
  if ((in_w3 & 0xfffd) != 0x3c && (uVar2 & 1) == 0) {
    uVar1 = in_w3;
  }
  return uVar1;
}

