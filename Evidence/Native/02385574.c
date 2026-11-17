/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$AddShade
Dino_BusSand_App_UI_KitTopBar_o* Dino_BusSand_App_UI_KitTopBar__AddShade (Dino_BusSand_App_UI_KitTopBar_o* __this, int32_t siblingIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$AddShade
   Dino_BusSand_App_UI_KitTopBar_o* Dino_BusSand_App_UI_KitTopBar__AddShade
   (Dino_BusSand_App_UI_KitTopBar_o* __this, int32_t siblingIndex, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitTopBar__AddShade_2285574(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c157 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4ee8);
    bRam0000000004f9c157 = 1;
  }
  plVar6 = (long *)(param_1 + 0x70);
  lVar7 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return param_1;
  }
  lVar7 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (lVar7 != 0) {
    uVar3 = UnityEngine_Transform__get_parent_43d0d70(lVar7,0);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
    }
    plVar4 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (0,0,0,0,0x3f800000,uVar3,*(undefined8 *)PTR_DAT_04cb4ee8,0,0);
    puVar1 = PTR_DAT_04caf420;
    if (*(int *)(*(long *)PTR_DAT_04caf420 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caf420);
    }
    uVar3 = Dino_BusSand_App_UI_KitTopBar__ShadeSprite_22857a8();
    if (plVar4 != (long *)0x0) {
      UnityEngine_UI_Image__set_sprite_44a7258(plVar4,uVar3,0);
      UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar4,0,0);
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      (**(code **)(*plVar4 + 0x2a8))
                (*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0xc),
                 *(undefined4 *)(lVar7 + 0x10),plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
      (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
      lVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar4,0);
      *plVar6 = lVar7;
      thunk_FUN_02134474(plVar6,lVar7);
      if (*plVar6 != 0) {
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,*plVar6,0);
        if (*plVar6 != 0) {
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,*plVar6,0);
          if (*plVar6 != 0) {
            UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f800000,*plVar6,0);
            lVar7 = *plVar6;
            if (param_2 < 0) {
              lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
              if (lVar5 == 0) goto LAB_023857a4;
              param_2 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar5,0);
            }
            if (lVar7 != 0) {
              UnityEngine_Transform__SetSiblingIndex_43d4730(lVar7,param_2,0);
              Dino_BusSand_App_UI_KitTopBar__Place_2284c6c(param_1);
              return param_1;
            }
          }
        }
      }
    }
  }
LAB_023857a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

