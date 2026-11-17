/* IL2CPP: Dino.BusSand.App.UI.WinStreakInfoPanel$$Line
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_WinStreakInfoPanel__Line (UnityEngine_RectTransform_o* page, System_String_o* name, System_String_o* text, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakInfoPanel$$Line
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_WinStreakInfoPanel__Line
   (UnityEngine_RectTransform_o* page, System_String_o* name, System_String_o* text, float h, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_WinStreakInfoPanel__Line_2335a0c
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar2 = PTR_DAT_04cad330;
  puVar1 = PTR_DAT_04cac878;
  if ((bRam0000000004f9c63a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf260);
    bRam0000000004f9c63a = 1;
  }
  puVar3 = PTR_DAT_04caf260;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  System_Nullable_Color____ctor_2bc9090
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_58,*(undefined8 *)puVar1);
                    /* try { // try from 02435ab0 to 02535ab7 has its CatchHandler @ 02435b5c */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_60 = uStack_48;
                    /* try { // try from 02435ad4 to 02535ad7 has its CatchHandler @ 02435b54 */
                    /* try { // try from 02435ad8 to 02535adf has its CatchHandler @ 02435b58 */
  uStack_68 = uStack_50;
  uStack_70 = uStack_58;
                    /* try { // try from 02435ae0 to 02535b77 has its CatchHandler @ 024359fc */
  lVar4 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42480000,0x442a0000,param_1,0,0,param_2,param_3,param_4,*(undefined8 *)puVar3
                     ,&uStack_70,0x202,0);
  if (lVar4 != 0) {
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar4,1,0);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

