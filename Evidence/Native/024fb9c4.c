/* IL2CPP: Dino.BusSand.View.VehicleView$$LabelText
TMPro_TextMeshPro_o* Dino_BusSand_View_VehicleView__LabelText (Dino_BusSand_View_VehicleView_o* __this, System_String_o* name, float size, UnityEngine_Color_o face, UnityEngine_Color32_o outline, float outlineWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$LabelText
   TMPro_TextMeshPro_o* Dino_BusSand_View_VehicleView__LabelText (Dino_BusSand_View_VehicleView_o*
   __this, System_String_o* name, float size, UnityEngine_Color_o face, UnityEngine_Color32_o
   outline, float outlineWidth, const MethodInfo* method); */

long * Dino_BusSand_View_VehicleView__LabelText_23fb9c4
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                 undefined4 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04caa070;
  if ((bRam0000000004f9cae9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cae9 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,param_8,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbc240,
     puVar2 = PTR_DAT_04cab208, lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,*(undefined8 *)(param_7 + 0x88),0,0);
    plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                               (lVar3,*(undefined8 *)puVar1);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
    }
    lVar3 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar3 != 0) {
      uVar6 = Dino_BusSand_GameAssets__get_font_237c424(lVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar7 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_024fbc04;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        if ((lVar3 == 0) ||
           (uVar6 = Dino_BusSand_GameAssets__get_font_237c424(lVar3,0), plVar5 == (long *)0x0))
        goto LAB_024fbc04;
        TMPro_TMP_Text__set_font_42cb6ac(plVar5,uVar6,0);
      }
      TMPro_TMP_Text__set_fontSize_42cc224(param_1,plVar5,0);
      TMPro_TMP_Text__set_alignment_42cc610(plVar5,0x202,0);
      (**(code **)(*plVar5 + 0x2a8))
                (param_2,param_3,param_4,param_5,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
      TMPro_TMP_Text__set_outlineWidth_42cc1c4(param_6,plVar5,0);
      TMPro_TMP_Text__set_outlineColor_42cc098(plVar5,param_9,0);
      Dino_BusSand_Util__OwnMaterial_238db58(plVar5,0);
      lVar3 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar5,0);
      if (lVar3 != 0) {
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40000000,lVar3,0);
        TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar5,0,0);
        return plVar5;
      }
    }
  }
LAB_024fbc04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

