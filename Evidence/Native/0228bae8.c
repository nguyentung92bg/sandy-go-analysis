/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$get_LockedShown
bool Dino_BusSand_App_UI_BattleRoyaleHallButton__get_LockedShown (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$get_LockedShown
   bool Dino_BusSand_App_UI_BattleRoyaleHallButton__get_LockedShown
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_BattleRoyaleHallButton__get_LockedShown_218bae8(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b97e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b97e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  iVar3 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(4,0);
  return iVar3 + -5 <= iVar2;
}

