/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnBack
bool Dino_BusSand_App_UI_HudPanel__OnBack (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnBack
   bool Dino_BusSand_App_UI_HudPanel__OnBack (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HudPanel__OnBack_230f354(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f9c53a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c53a = 1;
  }
  uVar1 = Dino_BusSand_App_UI_HudPanel__get_DropdownOpen_23078cc();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x20) == 2) {
        Dino_BusSand_App_UI_HudPanel__OpenDropdown_230f244(param_1);
        goto LAB_0240f38c;
      }
    }
    uVar2 = 0;
  }
  else {
    Dino_BusSand_App_UI_HudPanel__CloseDropdown_230a37c();
LAB_0240f38c:
    uVar2 = 1;
  }
  return uVar2;
}

