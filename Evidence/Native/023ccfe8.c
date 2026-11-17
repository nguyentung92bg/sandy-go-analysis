/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$Tap
void Dino_BusSand_App_UI_GuidePanel__Tap (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$Tap
   void Dino_BusSand_App_UI_GuidePanel__Tap (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

long * Dino_BusSand_App_UI_GuidePanel__Tap_22ccfe8
                 (undefined4 param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = PTR_DAT_04cabca8;
  if ((bRam0000000004f9c386 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cabcc0);
    bRam0000000004f9c386 = 1;
  }
  puVar3 = PTR_DAT_04cabcc0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_EventSystems_PointerEventData___ctor_46a11f8(lVar8,uVar7,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar8 + 0x104) = param_1;
  *(undefined4 *)(lVar8 + 0x108) = param_2;
  *(undefined4 *)(lVar8 + 0x148) = 0;
  Dino_BusSand_App_UI_GuidePanel__OnPointerDown_22cc888(param_3,lVar8);
  plVar5 = param_3;
  if ((bRam0000000004f9c385 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6ae8);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    plVar5 = (long *)FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c385 = 1;
  }
  lVar12 = param_3[0x1f];
  *(undefined1 *)(param_3 + 0x1f) = 0;
  if (lVar8 == 0) {
    return plVar5;
  }
  if ((char)lVar12 != '\0') {
    lVar11 = param_3[0x1e];
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    if (((ulong)plVar5 & 1) != 0) {
      if (param_3[0x1e] == 0) goto LAB_023ccdc0;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_3[0x1e],0);
      puVar2 = PTR_DAT_04cabcb8;
      if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
      }
      if (cRam0000000004f9c3b2 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabcb8);
        cRam0000000004f9c3b2 = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar2;
      }
      plVar5 = (long *)UnityEngine_EventSystems_ExecuteEvents__Execute_object__2745da0
                                 (uVar7,lVar8,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20),
                                  *(undefined8 *)PTR_DAT_04cb6ae8);
    }
  }
  if (*(int *)((long)param_3 + 0x4c) != 2) {
    return plVar5;
  }
  if (param_3[7] == 0) goto LAB_023ccdc0;
  uVar14 = *(undefined4 *)(lVar8 + 0x104);
  uVar13 = *(undefined4 *)(lVar8 + 0x108);
  if (*(int *)(param_3[7] + 0x44) == 0) {
    plVar5 = (long *)Dino_BusSand_App_UI_GuidePanel__InsideHole_22ca4d0(uVar14,uVar13,param_3);
    puVar2 = PTR_DAT_04caba50;
    lVar8 = param_3[7];
    if (((ulong)plVar5 & 1) == 0) {
      if (lVar8 == 0) goto LAB_023ccdc0;
      if (*(char *)(lVar8 + 0x48) == '\0') {
        return plVar5;
      }
    }
    else {
      if (lVar8 == 0) goto LAB_023ccdc0;
      if (*(char *)(lVar8 + 0x41) == '\0') goto LAB_023ccd70;
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar7 = **(undefined8 **)(lVar8 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      lVar8 = 0;
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = FUN_023d0b9c(0);
        if (lVar8 == 0) goto LAB_023ccdc0;
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar5 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
      if (((ulong)plVar5 & 1) != 0) {
        return plVar5;
      }
      if (param_3[7] == 0) goto LAB_023ccdc0;
      if (*(int *)(param_3[7] + 0x70) < 0) {
        if (lVar8 == 0) goto LAB_023ccdc0;
      }
      else {
        if (lVar8 == 0) {
LAB_023ccdc0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = *(undefined8 *)(lVar8 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar5 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if (((ulong)plVar5 & 1) != 0) {
          return plVar5;
        }
        if (*(long *)(lVar8 + 0x38) == 0) goto LAB_023ccdc0;
        plVar5 = (long *)Dino_BusSand_View_GameView__PickVehicle_23a1634
                                   (uVar14,uVar13,*(long *)(lVar8 + 0x38),0);
        if (param_3[7] == 0) goto LAB_023ccdc0;
        if ((int)plVar5 != *(int *)(param_3[7] + 0x70)) {
          return plVar5;
        }
      }
      plVar5 = (long *)Dino_BusSand_App_Gameplay_GameplayController__TapScreen_229df0c
                                 (uVar14,uVar13,lVar8,0);
      if (((ulong)plVar5 & 1) == 0) {
        return plVar5;
      }
    }
LAB_023ccd70:
    plVar5 = param_3;
    if ((bRam0000000004f9c388 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04cac1e8);
      FUN_02132f7c(PTR_DAT_04cb6af0);
      plVar5 = (long *)FUN_02132f7c(PTR_DAT_04cb6af8);
      bRam0000000004f9c388 = 1;
    }
    puVar2 = PTR_DAT_04cb6af8;
    if (*(int *)((long)param_3 + 0x4c) == 3) {
      return plVar5;
    }
    *(undefined4 *)((long)param_3 + 0x4c) = 3;
    *(undefined1 *)(param_3 + 8) = 1;
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_04cac1e8;
    puVar10 = *(undefined8 **)(lVar8 + 0xb8);
    lVar12 = puVar10[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar7 = *puVar10;
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar12,uVar7,*(undefined8 *)PTR_DAT_04cb6af0,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar12;
      thunk_FUN_02134474(plVar5,lVar12);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e208cc,lVar12,0);
    if (lVar8 != 0) {
      Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0);
      lVar8 = Dino_BusSand_App_UI_GuidePanel__FinishRoutine_22cd5b4(param_3);
      if (lVar8 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar9 = thunk_FUN_0216e89c();
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar9,uVar7,0);
      }
      else {
        uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar6 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_3 != (long *)0x0) {
            lVar12 = param_3[2];
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_3,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(*pcRam0000000004fa8560)(lVar12,lVar8);
            return plVar5;
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
  if ((char)lVar12 == '\0') {
    return plVar5;
  }
  lVar8 = param_3[0x1b];
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if (((ulong)plVar5 & 1) == 0) {
    return plVar5;
  }
  lVar12 = param_3[0x1b];
  lVar8 = param_3[10];
  if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar5 = (long *)UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_467e02c
                             (uVar14,uVar13,lVar12,lVar8,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (((ulong)plVar5 & 1) == 0) {
    return plVar5;
  }
  if ((bRam0000000004f9c387 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c387 = 1;
  }
  plVar5 = (long *)param_3[0x1e];
  *(undefined4 *)((long)param_3 + 0x4c) = 3;
  *(undefined1 *)(param_3 + 8) = 1;
  Dino_BusSand_App_UI_GuidePanel__RestoreRaised_22cab10(param_3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (plVar5 == (long *)0x0) {
LAB_023cce80:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(*plVar5 + 0x2c0));
    if ((uVar6 & 1) != 0) {
      if (plVar5[0x20] == 0) goto LAB_023cce80;
      UnityEngine_Events_UnityEvent__Invoke_43d8944(plVar5[0x20],0);
    }
  }
  Dino_BusSand_App_UI_GuidePanel__MarkTriggered_22cd0ac(param_3);
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
  plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if (((ulong)plVar5 & 1) == 0) {
    return plVar5;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cb1b30;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar8 == 0) {
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
  plVar5 = (long *)UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  if (param_3 != (long *)0x0) {
    if (*(char *)((long)param_3 + 0x2c) != '\0') {
      return plVar5;
    }
    lVar8 = *(long *)(lVar8 + 0x38);
    *(undefined1 *)((long)param_3 + 0x2c) = 1;
    if (lVar8 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar8,param_3,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_3);
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_3,0);
    if (lVar12 == 0) goto LAB_022fedc4;
    plVar5 = (long *)(lVar12 + 0x10);
    *plVar5 = lVar8;
    thunk_FUN_02134474(plVar5,lVar8);
    if (*plVar5 == 0) goto LAB_022fedc4;
    lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar5,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar5 == 0) goto LAB_022fedc4;
    lVar11 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                       (*plVar5,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar7,lVar12,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar11 == 0) goto LAB_022fedc4;
      uVar6 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar11,uVar7,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
        if (((ulong)plVar5 & 1) == 0) {
          return plVar5;
        }
        if (lVar8 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar8 != 0) {
            lVar12 = *(long *)(lVar8 + 0x10);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
            }
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(*pcRam0000000004fa82f0)(lVar12,0);
            return plVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_022fedc4;
      }
    }
    lVar11 = *param_3;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar5 != 0) {
      uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar5,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar8 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar8,0,0);
          }
          lVar8 = *plVar5;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
          if (lVar8 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar8,0,0);
            plVar5 = (long *)Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar8,0);
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(lVar8,lVar12,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (plVar5 != (long *)0x0) {
              plVar5[8] = lVar8;
              thunk_FUN_02134474(plVar5 + 8,lVar8,0);
              return plVar5;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar8 = *plVar5;
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
      if (lVar8 != 0) {
        uVar7 = *(undefined8 *)(lVar8 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(*pcRam0000000004fa8680)(0,uVar7);
      return plVar5;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

