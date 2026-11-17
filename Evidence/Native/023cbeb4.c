/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$EnsureHandGraphic
bool Dino_BusSand_App_UI_GuidePanel__EnsureHandGraphic (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$EnsureHandGraphic
   bool Dino_BusSand_App_UI_GuidePanel__EnsureHandGraphic (Dino_BusSand_App_UI_GuidePanel_o* __this,
   const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_GuidePanel__EnsureHandGraphic_22cbeb4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c37e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb19b0);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb68a0);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cae428);
    FUN_02132f7c(PTR_DAT_04cb6a98);
    FUN_02132f7c(PTR_DAT_04cb6aa0);
    FUN_02132f7c(PTR_DAT_04cb6aa8);
    FUN_02132f7c(PTR_DAT_04cb6ab0);
    FUN_02132f7c(PTR_DAT_04cb6ab8);
    bRam0000000004f9c37e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                               (*(undefined8 *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cae428,0);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else if (*plVar3 != *(long *)PTR_DAT_04cabdb0) {
      plVar3 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (plVar3 != (long *)0x0) {
        uVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                          (plVar3,*(undefined8 *)PTR_DAT_04cb19b0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        lVar4 = UnityEngine_Transform__Find_43d4bec(plVar3,*(undefined8 *)PTR_DAT_04cb6a98,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if ((lVar4 == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
          goto LAB_023cc344;
          UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
        }
        uVar6 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cb6aa0,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          uVar6 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cb6ab8,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_UiAssets__Sprite_21636c4(*(undefined8 *)PTR_DAT_04cb6ab0,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_UiAssets__Sprite_21636c4(*(undefined8 *)PTR_DAT_04cb6aa8,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_UiAssets__Texture_2163a34(*(undefined8 *)PTR_DAT_04cb6aa8,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
          if ((uVar2 & 1) != 0) {
            return 0;
          }
          lVar4 = UnityEngine_Component__get_gameObject_43bcde8(plVar3,0);
          if ((lVar4 != 0) &&
             (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (lVar4,*(undefined8 *)PTR_DAT_04cb68a0),
             plVar5 != (long *)0x0)) {
            UnityEngine_UI_RawImage__set_texture_468c7f4(plVar5,uVar6,0);
            puVar1 = PTR_DAT_04cabdc0;
            lVar4 = *(long *)PTR_DAT_04cabdc0;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar1;
            }
            lVar4 = *(long *)(lVar4 + 0xb8);
            UnityEngine_UI_RawImage__set_uvRect_468c8bc
                      (*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),
                       *(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),plVar5,0);
            (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
            UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x436e0000,0x43560000,plVar3,0);
            return 1;
          }
        }
        else {
          lVar4 = UnityEngine_Component__get_gameObject_43bcde8(plVar3,0);
          if ((lVar4 != 0) &&
             (plVar3 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                         (lVar4,*(undefined8 *)PTR_DAT_04cacf98),
             plVar3 != (long *)0x0)) {
            UnityEngine_UI_Image__set_sprite_44a7258(plVar3,uVar6,0);
            UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar3,1,0);
            (**(code **)(*plVar3 + 0x2c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x2d0));
            return 1;
          }
        }
      }
LAB_023cc344:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

