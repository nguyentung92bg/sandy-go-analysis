/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$<FeedbackBox>g__Line|22_0
TMPro_TMP_Text_o* Dino_BusSand_App_UI_CommentPopPanel___FeedbackBox_g__Line_22_0 (System_String_o* name, System_String_o* text, UnityEngine_Color_o color, Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass22_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$<FeedbackBox>g__Line|22_0
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_CommentPopPanel___FeedbackBox_g__Line_22_0
   (System_String_o* name, System_String_o* text, UnityEngine_Color_o color,
   Dino_BusSand_App_UI_CommentPopPanel___c__DisplayClass22_0_o* , const MethodInfo* method); */

long Dino_BusSand_App_UI_CommentPopPanel___FeedbackBox_g__Line_22_0_22a6c24
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar1 = PTR_DAT_04cac878;
  if ((bRam0000000004f9c28a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c28a = 1;
  }
  puVar2 = PTR_DAT_04cad330;
  uVar4 = *param_7;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (param_1,param_2,param_3,param_4,&uStack_68,*(undefined8 *)puVar1);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
                    /* try { // try from 023a6ce8 to 024a717b has its CatchHandler @ 023a6ce8
                       catch() { ... } // from try @ 023a6ce8 with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a71d0 with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a7298 with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a737c with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a7388 with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a73bc with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a73e8 with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a741c with catch @ 023a6ce8
                       catch() { ... } // from try @ 023a7448 with catch @ 023a6ce8 */
  puVar1 = PTR_DAT_04cad4a8;
  uVar5 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar6 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar3 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42300000,uVar5,uVar6,0,0,uVar4,param_5,param_6,*(undefined8 *)puVar1,
                     &uStack_80,0x101,0);
  if (lVar3 != 0) {
    uVar4 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar3,0);
    Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,uVar4,0);
    TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar3,0,0);
    TMPro_TMP_Text__set_fontSize_42cc224(0x42300000,lVar3,0);
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar3,1,0);
    TMPro_TMP_Text__set_overflowMode_42cc9b8(lVar3,2,0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

