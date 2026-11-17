/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Style
void Dino_BusSand_App_UI_UiKit__Style (TMPro_TMP_Text_o* t, System_String_o* preset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Style
   void Dino_BusSand_App_UI_UiKit__Style (TMPro_TMP_Text_o* t, System_String_o* preset, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit__Style_2287e10(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  
  puVar2 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c184 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c184 = 1;
  }
  puVar1 = PTR_DAT_04cab530;
  uVar3 = Dino_BusSand_App_UI_UiSkin__Mat_22a2b68(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar3 = Dino_BusSand_App_UI_KitAdopt__Preset_227e2bc(param_1,uVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_LanguageFonts__Style_2151cf8(param_1,uVar3,0);
  puVar2 = PTR_DAT_04cad330;
  if (param_1 != (long *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x528))(param_1,*(undefined8 *)(*param_1 + 0x530));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    fVar5 = (float)Dino_BusSand_App_UI_UiKit__WordGap_228bc44(uVar3);
    if (*(float *)((long)param_1 + 0x2e4) == fVar5) {
      return;
    }
    *(undefined1 *)(param_1 + 0x76) = 1;
    pcVar4 = *(code **)(*param_1 + 0x2f8);
    uVar3 = *(undefined8 *)(*param_1 + 0x300);
    *(float *)((long)param_1 + 0x2e4) = fVar5;
    (*pcVar4)(param_1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x043cc74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

