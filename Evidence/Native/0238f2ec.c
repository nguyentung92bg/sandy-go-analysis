/* IL2CPP: Dino.BusSand.App.UI.KitPop$$PlayOut
bool Dino_BusSand_App_UI_KitPop__PlayOut (Dino_BusSand_App_UI_KitPop_o* __this, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$PlayOut
   bool Dino_BusSand_App_UI_KitPop__PlayOut (Dino_BusSand_App_UI_KitPop_o* __this, System_Action_o*
   done, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam0000000004f9c1ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cb52f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1ac = 1;
  }
  if ((*(char *)(param_1 + 0x70) != '\0') ||
     (uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar4 & 1) == 0)) {
    return 0;
  }
  lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (lVar5 != 0) {
    uVar6 = UnityEngine_Transform__get_parent_43d0d70(lVar5,0);
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x78),param_2);
    UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(param_1,0);
    puVar3 = PTR_DAT_04cb5110;
    lVar5 = *(long *)PTR_DAT_04cb5110;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)PTR_DAT_04cb52f0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = param_1;
          thunk_FUN_02134474(plVar8,param_1);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                    );
        }
        lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if ((lVar5 != 0) && (lVar5 = UnityEngine_Transform__get_parent_43d0d70(lVar5,0), lVar5 != 0)
           ) {
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          lVar5 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar6);
          plVar8 = (long *)(param_1 + 0x68);
          *plVar8 = lVar5;
          thunk_FUN_02134474(plVar8,lVar5);
          if (*plVar8 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(*plVar8,0,0);
            if (*plVar8 != 0) {
              UnityEngine_CanvasGroup__set_interactable_467aec4(*plVar8,0,0);
              if (*(char *)(param_1 + 0x30) != '\0') {
                if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar4 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848();
                puVar3 = PTR_DAT_04cad568;
                if ((uVar4 & 1) == 0) {
                  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b94e == '\0') {
                    FUN_02132f7c(PTR_DAT_04cad568);
                    cRam0000000004f9b94e = '\x01';
                  }
                  lVar5 = *(long *)puVar3;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar5 = *(long *)puVar3;
                  }
                  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
                  if ((uVar4 & 1) != 0) {
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar5 = FUN_022c78f0(0);
                    if (lVar5 == 0) goto LAB_0238f5f4;
                    Dino_BusSand_GameAudio__PopupClose_238341c(lVar5,0);
                  }
                }
              }
              uVar6 = Dino_BusSand_App_UI_KitPop__Out_228f5f8(param_1);
              UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar6,0);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0238f5f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

