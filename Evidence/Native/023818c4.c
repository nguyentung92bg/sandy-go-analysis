/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Node
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Node (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, System_Nullable_Vector2__o anchor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Node
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Node (UnityEngine_Transform_o* parent,
   System_String_o* name, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos,
   System_Nullable_Vector2__o anchor, const MethodInfo* method); */

long * Dino_BusSand_App_UI_UiKit__Node_22818c4
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6,ulong param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c17a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cb4de8);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9c17a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar5 = (long *)Dino_BusSand_App_UI_KitAdopt__Claim_227d878(param_5,param_6);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(plVar5,0,0);
  puVar2 = PTR_DAT_04cad730;
  if ((uVar6 & 1) == 0) {
    if ((((plVar5 != (long *)0x0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(plVar5,0), param_5 != 0)) &&
        (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_5,0), lVar7 != 0)) &&
       (uVar4 = UnityEngine_GameObject__get_layer_43c1118(lVar7,0), lVar8 != 0)) {
      UnityEngine_GameObject__set_layer_43c11cc(lVar8,uVar4,0);
LAB_02381b64:
      if (*(int *)(*(long *)PTR_DAT_04cb4ce0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_KitBake__Record_22806cc(param_5,plVar5,param_6);
      bVar3 = (param_7 & 0xff) != 0;
      uVar4 = 0x3f000000;
      if (bVar3) {
        uVar4 = param_8;
      }
      uVar10 = 0x3f000000;
      if (bVar3) {
        uVar10 = (int)(param_7 >> 0x20);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(uVar10,uVar4,plVar5,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(uVar10,uVar4,plVar5,0);
      UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f000000,plVar5,0);
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(param_1,param_2,plVar5,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(param_3,param_4,plVar5,0);
      return plVar5;
    }
  }
  else {
    plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar9 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
    if (plVar5 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar7 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
        uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar9,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar5[4] = lVar8;
      thunk_FUN_02134474(plVar5 + 4,lVar8);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar8,param_6,plVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_5,0,0);
      if ((uVar6 & 1) == 0) {
        uVar4 = 5;
      }
      else {
        if ((param_5 == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_5,0), lVar7 == 0))
        goto LAB_02381c30;
        uVar4 = UnityEngine_GameObject__get_layer_43c1118(lVar7,0);
      }
      if (lVar8 != 0) {
        UnityEngine_GameObject__set_layer_43c11cc(lVar8,uVar4,0);
        plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
        if (plVar5 != (long *)0x0) {
          if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar5);
          }
          UnityEngine_Transform__SetParent_43d1e34(plVar5,param_5,0,0);
          goto LAB_02381b64;
        }
      }
    }
  }
LAB_02381c30:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

