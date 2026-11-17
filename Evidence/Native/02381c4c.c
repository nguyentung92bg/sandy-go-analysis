/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Mirror
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Mirror (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* key, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, float scale, System_Nullable_Color__o tint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Mirror
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Mirror (UnityEngine_Transform_o* parent,
   System_String_o* name, System_String_o* key, UnityEngine_Vector2_o size, UnityEngine_Vector2_o
   pos, float scale, System_Nullable_Color__o tint, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8,char *param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((bRam0000000004f9c17d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04cb4e00);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04ca9c18);
    FUN_02132f7c(PTR_DAT_04cb4e08);
    bRam0000000004f9c17d = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb4e08;
  puVar3 = PTR_DAT_04cacf98;
  puVar2 = PTR_DAT_04ca9c18;
  uVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (param_1,param_2,param_3,param_4,param_6,param_7,0,0);
  uVar7 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_8,0);
  puVar4 = PTR_DAT_04cacfc0;
  iVar11 = 0;
  fVar12 = _UNK_00e2043c;
  if (_UNK_00e2043c <= param_5) {
    fVar12 = param_5;
  }
  while( true ) {
    puVar1 = (undefined8 *)puVar5;
    if (iVar11 != 0) {
      puVar1 = (undefined8 *)puVar2;
    }
    uVar10 = *puVar1;
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(puVar4);
      cRam0000000004f9b948 = '\x01';
    }
    uVar13 = **(undefined4 **)(*(long *)puVar4 + 0xb8);
    uVar14 = (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1];
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_UI_UiKit__Node_22818c4(uVar13,uVar14,0,0,uVar6,uVar10,0,0);
    if (lVar8 == 0) break;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4((float)iVar11 / 2.0,0,lVar8,0);
    UnityEngine_RectTransform__set_anchorMax_43cf768((float)iVar11 / 2.0 + 0.5,0x3f800000,lVar8,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(puVar4);
      cRam0000000004f9b948 = '\x01';
    }
    uVar13 = **(undefined4 **)(*(long *)puVar4 + 0xb8);
    uVar14 = (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1];
    UnityEngine_RectTransform__set_offsetMax_43d0018(uVar13,uVar14,lVar8,0);
    UnityEngine_RectTransform__set_offsetMin_43cfe84(uVar13,uVar14,lVar8,0);
    if (iVar11 == 1) {
      UnityEngine_Transform__set_localScale_43d1be0(0xbf800000,0x3f800000,0x3f800000,lVar8,0);
    }
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
    if ((lVar8 == 0) ||
       (plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                   (lVar8,*(undefined8 *)puVar3), plVar9 == (long *)0x0)) break;
    UnityEngine_UI_Image__set_sprite_44a7258(plVar9,uVar7,0);
    UnityEngine_UI_Image__set_type_44afa58(plVar9,1,0);
    UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_44b0364(1.0 / fVar12,plVar9,0);
    (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
    if (*param_9 != '\0') {
      System_Nullable_Color___get_Value_2bc90ac(param_9,*(undefined8 *)PTR_DAT_04cb4e00);
      (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 2) {
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

