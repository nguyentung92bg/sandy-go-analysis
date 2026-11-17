/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$OnPanelClosed
void Dino_BusSand_App_UI_PlayerSettingGuide__OnPanelClosed (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$OnPanelClosed
   void Dino_BusSand_App_UI_PlayerSettingGuide__OnPanelClosed (Dino_BusSand_App_UI_UIPanel_o* p,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingGuide__OnPanelClosed_22ffc04(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9c4d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb7b80);
    bRam0000000004f9c4d0 = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb7b80 + 0x130);
    if (((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
        (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04cb7b80))
       && (lVar3 = Dino_BusSand_App_UI_PlayerSettingGuide__get_I_22ff9b0(),
          puVar2 = PTR_DAT_04cac668, lVar3 != 0)) {
      lVar4 = *(long *)PTR_DAT_04cac668;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) != '\0') {
        Dino_BusSand_App_UI_PlayerSettingGuide__RunGuide_22ffd60(lVar3,0);
      }
    }
  }
  return;
}

