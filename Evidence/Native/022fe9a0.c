/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Close
void Dino_BusSand_App_UI_UIManager__Close (Dino_BusSand_App_UI_UIManager_o* __this, Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Close
   void Dino_BusSand_App_UI_UIManager__Close (Dino_BusSand_App_UI_UIManager_o* __this,
   Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_UIManager__Close_21fe9a0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar9;
  
  puVar3 = PTR_DAT_04cb1b30;
  puVar2 = PTR_DAT_04ca9ae8;
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
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  if (param_2 != (long *)0x0) {
    if (*(char *)((long)param_2 + 0x2c) != '\0') {
      return uVar5;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    *(undefined1 *)((long)param_2 + 0x2c) = 1;
    if (lVar6 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar6,param_2,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_2);
    lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0);
    if (lVar4 == 0) goto LAB_022fedc4;
    plVar9 = (long *)(lVar4 + 0x10);
    *plVar9 = lVar6;
    thunk_FUN_02134474(plVar9,lVar6);
    if (*plVar9 == 0) goto LAB_022fedc4;
    lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar9,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar9 == 0) goto LAB_022fedc4;
    lVar7 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar9,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,lVar4,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar7 == 0) goto LAB_022fedc4;
      uVar5 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar7,uVar8,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar5 & 1) == 0) {
          return uVar5;
        }
        if (lVar6 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar4 = *(long *)(lVar6 + 0x10);
          if (lVar4 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*pcRam0000000004fa82f0)(lVar4,0);
            return uVar5;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar7 = *param_2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar9 != 0) {
      uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar9,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar6 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar6,0,0);
          }
          lVar6 = *plVar9;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar6 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar6,0);
          if (lVar6 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar6,0,0);
            uVar5 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar6,0);
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar8,lVar4,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (uVar5 != 0) {
              *(undefined8 *)(uVar5 + 0x40) = uVar8;
              thunk_FUN_02134474((undefined8 *)(uVar5 + 0x40),uVar8,0);
              return uVar5;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar4 = *plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar8 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar8 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar8 = extraout_x1_00;
      }
      puVar2 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar8);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar8 = 0;
      if (lVar4 != 0) {
        uVar8 = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000004fa8680)(0,uVar8);
      return uVar5;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

