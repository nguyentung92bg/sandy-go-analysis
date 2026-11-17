/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$FeedbackBox
TMPro_TMP_InputField_o* Dino_BusSand_App_UI_CommentPopPanel__FeedbackBox (UnityEngine_Transform_o* parent, UnityEngine_Vector2_o size, float fromTop, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$FeedbackBox
   TMPro_TMP_InputField_o* Dino_BusSand_App_UI_CommentPopPanel__FeedbackBox
   (UnityEngine_Transform_o* parent, UnityEngine_Vector2_o size, float fromTop, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_CommentPopPanel__FeedbackBox_22a68ac
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lStack_58;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c286 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cb5d00);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb5d08);
    FUN_02132f7c(PTR_DAT_04cb5d10);
    FUN_02132f7c(PTR_DAT_04caf568);
    FUN_02132f7c(PTR_DAT_04cb5d18);
    FUN_02132f7c(PTR_DAT_04cb5d20);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb5d28);
    bRam0000000004f9c286 = 1;
  }
  puVar3 = PTR_DAT_04cb5d18;
  puVar1 = PTR_DAT_04caf568;
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (param_1,param_2,0,0,0x3f800000,param_4,*(undefined8 *)puVar3,
                              *(undefined8 *)puVar1,1,0);
  puVar3 = PTR_DAT_04cb5d10;
  puVar1 = PTR_DAT_04caf408;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x2c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x2d0));
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_3,0,plVar7,*(undefined8 *)puVar1);
    uVar8 = UnityEngine_Component__get_transform_43bcd18(plVar7,0);
    lStack_58 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                          (0x41e00000,0x41a00000,0x41e00000,0x41a00000,uVar8,*(undefined8 *)puVar3,0
                          );
    thunk_FUN_02134474(&lStack_58,lStack_58);
    if ((lStack_58 != 0) &&
       (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lStack_58,0),
       puVar1 = PTR_DAT_04ca9d18, lVar9 != 0)) {
      UnityEngine_GameObject__AddComponent_object__275a54c(lVar9,*(undefined8 *)PTR_DAT_04cafbd0);
      lVar12 = *(long *)puVar1;
      lVar9 = *(long *)(lVar12 + 0x38);
      if (lVar9 == 0) {
        FUN_0216b4cc(lVar12);
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar6 = PTR_DAT_04cb5d28;
      puVar5 = PTR_DAT_04cb5d20;
      puVar4 = PTR_DAT_04cb5d08;
      puVar3 = PTR_DAT_04cb4e20;
      puVar1 = PTR_DAT_04ca9c30;
      lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      uVar8 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                        (*(undefined8 *)puVar5,*(undefined8 *)puVar6,**(undefined8 **)(lVar9 + 0xb8)
                         ,0);
      uVar8 = Dino_BusSand_App_UI_CommentPopPanel___FeedbackBox_g__Line_22_0_22a6c24
                        (_UNK_00e20094,_UNK_00e20114,_UNK_00e1fdd8,0x3f800000,*(undefined8 *)puVar4,
                         uVar8,&lStack_58);
      puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      uVar10 = Dino_BusSand_App_UI_CommentPopPanel___FeedbackBox_g__Line_22_0_22a6c24
                         (*puVar11,puVar11[1],puVar11[2],puVar11[3],*(undefined8 *)puVar3,
                          *(undefined8 *)puVar1,&lStack_58);
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(plVar7,0);
      if ((lVar9 != 0) &&
         (lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar9,*(undefined8 *)PTR_DAT_04cb5d00), lVar9 != 0)) {
        TMPro_TMP_InputField__set_textViewport_42bfcdc(lVar9,lStack_58,0);
        TMPro_TMP_InputField__set_textComponent_42bfd3c(lVar9,uVar10,0);
        TMPro_TMP_InputField__set_placeholder_42bfdb8(lVar9,uVar8,0);
        UnityEngine_UI_Selectable__set_targetGraphic_4693db4(lVar9,plVar7,0);
        TMPro_TMP_InputField__set_lineType_42c0a14(lVar9,2,0);
        TMPro_TMP_InputField__set_characterLimit_42c0474(lVar9,1000,0);
        TMPro_TMP_InputField__set_richText_42c0e30(lVar9,0,0);
        return lVar9;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

