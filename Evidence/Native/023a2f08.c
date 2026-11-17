/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_MainFont
TMPro_TMP_FontAsset_o* Dino_BusSand_App_UI_UiSkin__get_MainFont (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_MainFont
   TMPro_TMP_FontAsset_o* Dino_BusSand_App_UI_UiSkin__get_MainFont (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c26c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c26c = 1;
  }
  lVar2 = Dino_BusSand_App_UI_UiSkin__get_BootOnly_22a207c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) goto LAB_023a2fe8;
    puVar4 = (undefined8 *)(lVar2 + 0x18);
    uVar5 = *puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) goto LAB_023a2fd8;
  }
  uVar5 = Dino_BusSand_App_UI_UiSkin__get_I_22a1e1c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar2 = Dino_BusSand_App_UI_UiSkin__get_I_22a1e1c(0);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x18);
LAB_023a2fd8:
    return *puVar4;
  }
LAB_023a2fe8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

