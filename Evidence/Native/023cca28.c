/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnPointerUp
void Dino_BusSand_App_UI_GuidePanel__OnPointerUp (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnPointerUp
   void Dino_BusSand_App_UI_GuidePanel__OnPointerUp (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method); */

long * Dino_BusSand_App_UI_GuidePanel__OnPointerUp_22cca28(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  plVar6 = param_1;
  if ((bRam0000000004f9c385 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6ae8);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    plVar6 = (long *)FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c385 = 1;
  }
  lVar11 = param_1[0x1f];
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (param_2 == 0) {
    return plVar6;
  }
  if ((char)lVar11 != '\0') {
    lVar12 = param_1[0x1e];
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar6 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
    if (((ulong)plVar6 & 1) != 0) {
      if (param_1[0x1e] == 0) goto LAB_023ccdc0;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_1[0x1e],0);
      puVar2 = PTR_DAT_04cabcb8;
      if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
      }
      if (cRam0000000004f9c3b2 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabcb8);
        cRam0000000004f9c3b2 = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar2;
      }
      plVar6 = (long *)UnityEngine_EventSystems_ExecuteEvents__Execute_object__2745da0
                                 (uVar7,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20),
                                  *(undefined8 *)PTR_DAT_04cb6ae8);
    }
  }
  if (*(int *)((long)param_1 + 0x4c) != 2) {
    return plVar6;
  }
  if (param_1[7] == 0) goto LAB_023ccdc0;
  uVar14 = *(undefined4 *)(param_2 + 0x104);
  uVar13 = *(undefined4 *)(param_2 + 0x108);
  if (*(int *)(param_1[7] + 0x44) == 0) {
    plVar6 = (long *)Dino_BusSand_App_UI_GuidePanel__InsideHole_22ca4d0(uVar14,uVar13,param_1);
    puVar2 = PTR_DAT_04caba50;
    lVar11 = param_1[7];
    if (((ulong)plVar6 & 1) == 0) {
      if (lVar11 == 0) goto LAB_023ccdc0;
      if (*(char *)(lVar11 + 0x48) == '\0') {
        return plVar6;
      }
    }
    else {
      if (lVar11 == 0) goto LAB_023ccdc0;
      if (*(char *)(lVar11 + 0x41) == '\0') goto LAB_023ccd70;
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar7 = **(undefined8 **)(lVar11 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      lVar11 = 0;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = FUN_023d0b9c(0);
        if (lVar11 == 0) goto LAB_023ccdc0;
        lVar11 = *(long *)(lVar11 + 0x20);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar6 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
      if (((ulong)plVar6 & 1) != 0) {
        return plVar6;
      }
      if (param_1[7] == 0) goto LAB_023ccdc0;
      if (*(int *)(param_1[7] + 0x70) < 0) {
        if (lVar11 == 0) goto LAB_023ccdc0;
      }
      else {
        if (lVar11 == 0) {
LAB_023ccdc0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = *(undefined8 *)(lVar11 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar6 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if (((ulong)plVar6 & 1) != 0) {
          return plVar6;
        }
        if (*(long *)(lVar11 + 0x38) == 0) goto LAB_023ccdc0;
        plVar6 = (long *)Dino_BusSand_View_GameView__PickVehicle_23a1634
                                   (uVar14,uVar13,*(long *)(lVar11 + 0x38),0);
        if (param_1[7] == 0) goto LAB_023ccdc0;
        if ((int)plVar6 != *(int *)(param_1[7] + 0x70)) {
          return plVar6;
        }
      }
      plVar6 = (long *)Dino_BusSand_App_Gameplay_GameplayController__TapScreen_229df0c
                                 (uVar14,uVar13,lVar11,0);
      if (((ulong)plVar6 & 1) == 0) {
        return plVar6;
      }
    }
LAB_023ccd70:
    plVar6 = param_1;
    if ((bRam0000000004f9c388 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04cac1e8);
      FUN_02132f7c(PTR_DAT_04cb6af0);
      plVar6 = (long *)FUN_02132f7c(PTR_DAT_04cb6af8);
      bRam0000000004f9c388 = 1;
    }
    puVar2 = PTR_DAT_04cb6af8;
    if (*(int *)((long)param_1 + 0x4c) == 3) {
      return plVar6;
    }
    *(undefined4 *)((long)param_1 + 0x4c) = 3;
    *(undefined1 *)(param_1 + 8) = 1;
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_04cac1e8;
    puVar10 = *(undefined8 **)(lVar11 + 0xb8);
    lVar12 = puVar10[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar7 = *puVar10;
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar12,uVar7,*(undefined8 *)PTR_DAT_04cb6af0,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar6 = lVar12;
      thunk_FUN_02134474(plVar6,lVar12);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar11 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e208cc,lVar12,0);
    if (lVar11 != 0) {
      Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0);
      lVar11 = Dino_BusSand_App_UI_GuidePanel__FinishRoutine_22cd5b4(param_1);
      if (lVar11 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar9 = thunk_FUN_0216e89c();
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar9,uVar7,0);
      }
      else {
        uVar8 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar8 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != (long *)0x0) {
            lVar12 = param_1[2];
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar6 = (long *)(*pcRam0000000004fa8560)(lVar12,lVar11);
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar9 = thunk_FUN_0216e89c();
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar9,uVar7,0);
      }
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((char)lVar11 == '\0') {
    return plVar6;
  }
  lVar11 = param_1[0x1b];
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if (((ulong)plVar6 & 1) == 0) {
    return plVar6;
  }
  lVar12 = param_1[0x1b];
  lVar11 = param_1[10];
  if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_467e02c
                             (uVar14,uVar13,lVar12,lVar11,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (((ulong)plVar6 & 1) == 0) {
    return plVar6;
  }
  if ((bRam0000000004f9c387 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c387 = 1;
  }
  plVar6 = (long *)param_1[0x1e];
  *(undefined4 *)((long)param_1 + 0x4c) = 3;
  *(undefined1 *)(param_1 + 8) = 1;
  Dino_BusSand_App_UI_GuidePanel__RestoreRaised_22cab10(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
  if ((uVar8 & 1) != 0) {
    if (plVar6 == (long *)0x0) {
LAB_023cce80:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = (**(code **)(*plVar6 + 0x2b8))(plVar6,*(undefined8 *)(*plVar6 + 0x2c0));
    if ((uVar8 & 1) != 0) {
      if (plVar6[0x20] == 0) goto LAB_023cce80;
      UnityEngine_Events_UnityEvent__Invoke_43d8944(plVar6[0x20],0);
    }
  }
  Dino_BusSand_App_UI_GuidePanel__MarkTriggered_22cd0ac(param_1);
  uVar7 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar7 = extraout_x1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar7);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
  uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if (((ulong)plVar6 & 1) == 0) {
    return plVar6;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cb1b30;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar11 == 0) {
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
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar12,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((ulong)plVar6 & 1) != 0) {
    return plVar6;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return plVar6;
    }
    lVar11 = *(long *)(lVar11 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar11 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar11,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar11 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar12 == 0) goto LAB_022fedc4;
    plVar6 = (long *)(lVar12 + 0x10);
    *plVar6 = lVar11;
    thunk_FUN_02134474(plVar6,lVar11);
    if (*plVar6 == 0) goto LAB_022fedc4;
    lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                       (*plVar6,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar6 == 0) goto LAB_022fedc4;
    lVar5 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar6,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar7,lVar12,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar5 == 0) goto LAB_022fedc4;
      uVar8 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar5,uVar7,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar6 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        if (((ulong)plVar6 & 1) == 0) {
          return plVar6;
        }
        if (lVar11 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0x10);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar11,0);
            }
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar6 = (long *)(*pcRam0000000004fa82f0)(lVar12,0);
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_022fedc4;
      }
    }
    lVar5 = *param_1;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar6 != 0) {
      uVar8 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar6,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar11 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar11,0,0);
          }
          lVar11 = *plVar6;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar11 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar11,0);
          if (lVar11 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar11,0,0);
            plVar6 = (long *)Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar11,0);
            lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(lVar11,lVar12,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (plVar6 != (long *)0x0) {
              plVar6[8] = lVar11;
              thunk_FUN_02134474(plVar6 + 8,lVar11,0);
              return plVar6;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar11 = *plVar6;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar7 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar7 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar7 = extraout_x1_01;
      }
      puVar2 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar7);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar7 = 0;
      if (lVar11 != 0) {
        uVar7 = *(undefined8 *)(lVar11 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar6 = (long *)(*pcRam0000000004fa8680)(0,uVar7);
      return plVar6;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

