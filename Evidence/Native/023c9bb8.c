/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$NewRect
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_GuidePanel__NewRect (Dino_BusSand_App_UI_GuidePanel_o* __this, System_String_o* name, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$NewRect
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_GuidePanel__NewRect
   (Dino_BusSand_App_UI_GuidePanel_o* __this, System_String_o* name, UnityEngine_Transform_o*
   parent, const MethodInfo* method); */

long * Dino_BusSand_App_UI_GuidePanel__NewRect_22c9bb8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cad748;
  puVar1 = PTR_DAT_04cad730;
  if ((bRam0000000004f9c371 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9c371 = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
  uVar7 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar7,0);
  if (plVar4 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar7,0);
    }
    puVar1 = PTR_DAT_04caa070;
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar4[4] = lVar5;
    thunk_FUN_02134474(plVar4 + 4,lVar5);
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_43c2310(lVar5,param_2,plVar4,0);
    lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if ((lVar6 != 0) && (uVar3 = UnityEngine_GameObject__get_layer_43c1118(lVar6,0), lVar5 != 0)) {
      UnityEngine_GameObject__set_layer_43c11cc(lVar5,uVar3,0);
      plVar4 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 == *(long *)PTR_DAT_04cabdb0) {
          UnityEngine_Transform__SetParent_43d1e34(plVar4,param_3,0,0);
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f000000,plVar4,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f000000,plVar4,0);
          UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f000000,plVar4,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          UnityEngine_RectTransform__set_sizeDelta_43cfa70
                    (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar4,0);
          return plVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

