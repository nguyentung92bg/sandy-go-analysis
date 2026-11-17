/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Text
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_UiKit__Text (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* text, float size, System_String_o* preset, System_Nullable_Color__o color, UnityEngine_Vector2_o box, UnityEngine_Vector2_o pos, int32_t align, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Text
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_UiKit__Text (UnityEngine_Transform_o* parent,
   System_String_o* name, System_String_o* text, float size, System_String_o* preset,
   System_Nullable_Color__o color, UnityEngine_Vector2_o box, UnityEngine_Vector2_o pos, int32_t
   align, const MethodInfo* method); */

long * Dino_BusSand_App_UI_UiKit__Text_2282314
                 (float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 char *param_10,undefined4 param_11)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  
  if ((bRam0000000004f9c180 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfa0);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c180 = 1;
  }
  puVar3 = PTR_DAT_04cad330;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  fVar9 = param_2 - **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  fVar11 = param_3 - (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  fVar15 = 600.0;
  fVar1 = param_1 * _UNK_00e20660;
  if (_UNK_00e1fea0 <= fVar9 * fVar9 + fVar11 * fVar11) {
    fVar15 = param_2;
    fVar1 = param_3;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_UI_UiKit__Node_22818c4(fVar15,fVar1,param_4,param_5,param_6,param_7,0,0);
  if ((lVar5 != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), puVar2 = PTR_DAT_04ca9ae8,
     lVar5 != 0)) {
    plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                               (lVar5,*(undefined8 *)PTR_DAT_04cacfa0);
    uVar7 = Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (plVar6 == (long *)0x0) goto LAB_02382608;
      TMPro_TMP_Text__set_font_42cb6ac(plVar6,uVar7,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__Style_2287e10(plVar6,param_9);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x518))(plVar6,param_8,*(undefined8 *)(*plVar6 + 0x520));
      TMPro_TMP_Text__set_fontSize_42cc224(param_1,plVar6,0);
      TMPro_TMP_Text__set_enableAutoSizing_42cc454(plVar6,1,0);
      TMPro_TMP_Text__set_fontSizeMax_42cc4f0(param_1,plVar6,0);
      TMPro_TMP_Text__set_fontSizeMin_42cc4a4(param_1 * _UNK_00e2098c,plVar6,0);
      TMPro_TMP_Text__set_alignment_42cc610(plVar6,param_11,0);
      bVar4 = *param_10 != '\0';
      uVar10 = 0x3f800000;
      if (bVar4) {
        uVar10 = *(undefined4 *)(param_10 + 4);
      }
      uVar12 = 0x3f800000;
      if (bVar4) {
        uVar12 = *(undefined4 *)(param_10 + 8);
      }
      uVar13 = 0x3f800000;
      if (bVar4) {
        uVar13 = *(undefined4 *)(param_10 + 0xc);
      }
      uVar14 = 0x3f800000;
      if (bVar4) {
        uVar14 = *(undefined4 *)(param_10 + 0x10);
      }
      (**(code **)(*plVar6 + 0x2a8))
                (uVar10,uVar12,uVar13,uVar14,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
      (**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0));
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar6,0,0);
      TMPro_TMP_Text__set_overflowMode_42cc9b8(plVar6,0,0);
      TMPro_TMP_Text__set_extraPadding_42ccf50(plVar6,1,0);
      return plVar6;
    }
  }
LAB_02382608:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

