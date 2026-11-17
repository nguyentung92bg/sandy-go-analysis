/* IL2CPP: Dino.BusSand.App.UI.UIManager$$set_I
void Dino_BusSand_App_UI_UIManager__set_I (Dino_BusSand_App_UI_UIManager_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$set_I
   void Dino_BusSand_App_UI_UIManager__set_I (Dino_BusSand_App_UI_UIManager_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__set_I_21fd0d8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_04cad1b0;
  if ((bRam0000000004f9bc73 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    bRam0000000004f9bc73 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = param_1;
  uVar2 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar2 >> 0xc & 0x3f),(uVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

