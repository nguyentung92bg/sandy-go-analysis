/* IL2CPP: Dino.BusSand.App.UI.UIFonts$$get_Main
TMPro_TMP_FontAsset_o* Dino_BusSand_App_UI_UIFonts__get_Main (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIFonts$$get_Main
   TMPro_TMP_FontAsset_o* Dino_BusSand_App_UI_UIFonts__get_Main (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UIFonts__get_Main_22bdc20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_04cb6598;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c31a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6598);
    bRam0000000004f9c31a = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(0);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  }
  return **(undefined8 **)(*(long *)puVar2 + 0xb8);
}

