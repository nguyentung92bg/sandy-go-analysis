/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$<OnCloseClick>b__17_0
void Dino_BusSand_App_UI_StorePanel___OnCloseClick_b__17_0 (Dino_BusSand_App_UI_StorePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$<OnCloseClick>b__17_0
   void Dino_BusSand_App_UI_StorePanel___OnCloseClick_b__17_0 (Dino_BusSand_App_UI_StorePanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_StorePanel___OnCloseClick_b__17_0_22ba0f8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar10;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c2fb = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if (((uVar8 & 1) == 0) || (*(char *)((long)param_1 + 0x2c) != '\0')) {
    return uVar8;
  }
  uVar9 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar9 = extraout_x1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar9);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar8 & 1) == 0) {
    return uVar8;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cb1b30;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9bc7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cb1b38);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cb1b40);
    FUN_02132f7c(PTR_DAT_04cb1b48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1b50);
    FUN_02132f7c(PTR_DAT_04cb1b58);
    FUN_02132f7c(PTR_DAT_04cb1b60);
    FUN_02132f7c(PTR_DAT_04cb1b30);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9bc7a = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar6,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return uVar8;
    }
    lVar5 = *(long *)(lVar5 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar5 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar5,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar6 == 0) goto LAB_022fedc4;
    plVar10 = (long *)(lVar6 + 0x10);
    *plVar10 = lVar5;
    thunk_FUN_02134474(plVar10,lVar5);
    if (*plVar10 == 0) goto LAB_022fedc4;
    lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar10,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar10 == 0) goto LAB_022fedc4;
    lVar7 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar10,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar8 & 1) != 0) {
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar9,lVar6,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar7 == 0) goto LAB_022fedc4;
      uVar8 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar7,uVar9,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar8 & 1) == 0) {
          return uVar8;
        }
        if (lVar5 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar6 = *(long *)(lVar5 + 0x10);
          if (lVar6 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (*pcRam0000000004fa82f0)(lVar6,0);
            return uVar8;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar7 = *param_1;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar10 != 0) {
      uVar8 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar10,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar5 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar5,0,0);
          }
          lVar5 = *plVar10;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar5 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar5,0);
          if (lVar5 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar5,0,0);
            uVar8 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar5,0);
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar9,lVar6,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (uVar8 != 0) {
              *(undefined8 *)(uVar8 + 0x40) = uVar9;
              thunk_FUN_02134474((undefined8 *)(uVar8 + 0x40),uVar9,0);
              return uVar8;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar5 = *plVar10;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar9 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar9 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar9 = extraout_x1_01;
      }
      puVar2 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar9);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar9 = 0;
      if (lVar5 != 0) {
        uVar9 = *(undefined8 *)(lVar5 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*pcRam0000000004fa8680)(0,uVar9);
      return uVar8;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

