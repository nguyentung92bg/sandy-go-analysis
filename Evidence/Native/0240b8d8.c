/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_FooterShown
bool Dino_BusSand_App_UI_HudPanel__get_FooterShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_FooterShown
   bool Dino_BusSand_App_UI_HudPanel__get_FooterShown (const MethodInfo* method); */

bool Dino_BusSand_App_UI_HudPanel__get_FooterShown_230b8d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c519 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c519 = 1;
  }
  puVar2 = PTR_DAT_04cb6a88;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  iVar4 = Dino_BusSand_App_UI_HudPanel__get_FirstBoosterLevel_230b854();
  return iVar4 <= iVar3;
}

