/* IL2CPP: Dino.BusSand.App.UI.KitPop.<Start>d__23$$MoveNext
bool Dino_BusSand_App_UI_KitPop__Start_d__23__MoveNext (Dino_BusSand_App_UI_KitPop__Start_d__23_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPop.<Start>d__23$$MoveNext
   bool Dino_BusSand_App_UI_KitPop__Start_d__23__MoveNext
   (Dino_BusSand_App_UI_KitPop__Start_d__23_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_KitPop__Start_d__23__MoveNext_228fe3c
          (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],float param_4,
          long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  if ((bRam0000000004f9c1b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5320);
    FUN_02132f7c(PTR_DAT_04cb5328);
    FUN_02132f7c(PTR_DAT_04cb5330);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cb5338);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabb08);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1b5 = 1;
  }
  puVar2 = PTR_DAT_04cad4c0;
  iVar1 = *(int *)(param_5 + 0x10);
  lVar9 = *(long *)(param_5 + 0x20);
  lVar5 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if (lVar9 == 0) goto LAB_0239080c;
      if (*(char *)(lVar9 + 0x70) != '\0') {
        return 0;
      }
      plVar8 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar9,0);
      if (plVar8 == (long *)0x0) {
        *(undefined8 *)(param_5 + 0x28) = 0;
      }
      else {
        lVar5 = *(long *)PTR_DAT_04cabdb0;
        if ((*plVar8 != lVar5) || (*(long **)(param_5 + 0x28) = plVar8, *plVar8 != lVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar8);
        }
      }
      thunk_FUN_02134474((long *)(param_5 + 0x28),plVar8);
      lVar7 = *(long *)(param_5 + 0x28);
      lVar5 = 0;
      if (lVar7 == 0) goto LAB_0239080c;
      uVar11 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar7,0);
      puVar2 = PTR_DAT_04cb5110;
      *(undefined4 *)(lVar9 + 0x58) = uVar11;
      *(undefined4 *)(lVar9 + 0x5c) = param_2;
      *(undefined4 *)(param_5 + 0x30) = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_KitPop__get_DimHeld_228f178();
      lVar5 = *(long *)puVar2;
      if ((uVar6 & 1) != 0) {
        fVar17 = *(float *)(lVar9 + 0x28);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar18 = 0.0;
        if (_UNK_00e208f8 < fVar17) {
          fVar18 = (1.0 - fVar17) / _UNK_00e20a90 + 1.0;
        }
        lVar5 = *(long *)puVar2;
        *(float *)(lVar9 + 0x28) = fVar18;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      lVar5 = 0;
      if (lVar7 == 0) goto LAB_0239080c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a8,lVar7,*(undefined8 *)PTR_DAT_04cb5338);
      puVar3 = PTR_DAT_04cb5328;
      puVar2 = PTR_DAT_04ca9ae8;
      bVar4 = false;
      puStack_88 = puStack_a0;
      uStack_90 = uStack_a8;
      lStack_80 = lStack_98;
      uStack_a8 = 0;
      puStack_a0 = &uStack_90;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_90,*(undefined8 *)puVar3), lVar5 = lStack_80,
            (uVar6 & 1) != 0) {
        fVar17 = param_4;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          fVar17 = param_4;
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        param_4 = fVar17;
        if ((uVar6 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar10 = *(undefined8 *)(lVar5 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
          param_4 = fVar17;
          if ((uVar6 & 1) != 0) {
            if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar6 = UnityEngine_Behaviour__get_enabled_43bc458(*(long *)(lVar5 + 0x20),0);
            param_4 = fVar17;
            if ((uVar6 & 1) != 0) {
              plVar8 = *(long **)(lVar5 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              fVar18 = *(float *)(param_5 + 0x30);
              (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
              param_4 = fVar17;
              fVar12 = (float)Dino_BusSand_App_UI_KitPop__get_PanelAlpha_228ede0(lVar5);
              if (fVar18 <= fVar17 * fVar12) {
                fVar18 = fVar17 * fVar12;
              }
              *(float *)(param_5 + 0x30) = fVar18;
              if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              bVar4 = true;
              UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar5 + 0x20),0,0);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_90,*(undefined8 *)PTR_DAT_04cb5320);
      uVar10 = *(undefined8 *)(lVar9 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar6 & 1) != 0) {
        plVar8 = *(long **)(lVar9 + 0x20);
        lVar5 = 0;
        if (plVar8 == (long *)0x0) goto LAB_0239080c;
        (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
        plVar8 = *(long **)(lVar9 + 0x20);
        lVar5 = 0;
        if (plVar8 == (long *)0x0) goto LAB_0239080c;
        (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
      }
      if (bVar4) {
        *(undefined4 *)(param_5 + 0x40) = 0;
        goto LAB_02390394;
      }
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      fVar17 = *(float *)(param_5 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
      fVar17 = fVar17 + extraout_s0;
      bVar4 = fVar17 < _UNK_00e206f0;
      *(float *)(param_5 + 0x40) = fVar17;
      if (bVar4) {
LAB_02390394:
        *(undefined8 *)(param_5 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
        *(undefined4 *)(param_5 + 0x10) = 1;
        return 1;
      }
      if (lVar9 == 0) goto LAB_0239080c;
    }
    if (*(char *)(lVar9 + 0x70) != '\0') {
      return 0;
    }
    lVar5 = *(long *)PTR_DAT_04cabb08;
    *(bool *)(param_5 + 0x34) = *(int *)(lVar9 + 0x2c) == 1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_TipsToast__Dismiss_22bd840(0x3e800000,0);
    puVar2 = PTR_DAT_04cad568;
    if (*(char *)(lVar9 + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar9 + 0x31) == '\0') {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = FUN_022c78f0(0);
          lVar5 = 0;
          if (lVar7 == 0) goto LAB_0239080c;
          Dino_BusSand_GameAudio__PopupOpen_2382fc8(lVar7,0);
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = FUN_022c78f0(0);
          lVar5 = 0;
          if (lVar7 == 0) goto LAB_0239080c;
          Dino_BusSand_GameAudio__PopupNegative_2383500(lVar7,0);
        }
      }
    }
    Dino_BusSand_App_UI_KitPop__StaggerContent_228dcc0(lVar9);
    Dino_BusSand_App_UI_KitPop__SlideExtras_228e524(lVar9);
    fVar18 = _UNK_00e207cc;
    fVar17 = 0.0;
    *(undefined8 *)(param_5 + 0x38) = _UNK_00e6a088;
LAB_023904f4:
    puVar2 = PTR_DAT_04cad4c0;
    fVar17 = fVar17 / fVar18;
    lVar5 = *(long *)PTR_DAT_04cad4c0;
    fVar18 = 1.0;
    if (fVar17 <= 1.0) {
      fVar18 = fVar17;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar17) {
      fVar12 = fVar18;
    }
    if (*(char *)(param_5 + 0x34) == '\0') {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        lVar5 = thunk_FUN_0218fdac();
      }
      fVar17 = -1.0;
      if (0.0 <= fVar12) {
        fVar17 = fVar12 + -1.0;
      }
      fVar17 = (fVar17 * fVar17 * _UNK_00e205ec + fVar17 * fVar17 * fVar17 * _UNK_00e20184 + 1.0) *
               _UNK_00e1feb8 + _UNK_00e20a20;
    }
    else {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        lVar5 = thunk_FUN_0218fdac();
      }
      fVar17 = 1.0;
      if (0.0 <= fVar12) {
        fVar17 = 1.0 - fVar12;
      }
      fVar15 = 1.0 - fVar17 * fVar17 * fVar17;
      fVar18 = 1.0;
      if (fVar15 <= 1.0) {
        fVar18 = fVar15;
      }
      fVar17 = _UNK_00e208e0;
      if (0.0 <= fVar15) {
        fVar17 = fVar18 * _UNK_00e20038 + _UNK_00e208e0;
      }
    }
    if (lVar9 != 0) {
      lVar7 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
      lVar5 = 0;
      if (lVar7 != 0) {
        UnityEngine_Transform__set_localScale_43d1be0
                  (fVar17 * *(float *)(lVar9 + 0x4c),fVar17 * *(float *)(lVar9 + 0x50),
                   fVar17 * *(float *)(lVar9 + 0x54),lVar7,0);
        if (*(char *)(param_5 + 0x34) != '\0') {
          lVar5 = *(long *)puVar2;
          fVar17 = *(float *)(lVar9 + 0x58);
          fVar18 = *(float *)(lVar9 + 0x5c);
          lVar7 = *(long *)(param_5 + 0x28);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            lVar5 = thunk_FUN_0218fdac();
          }
          if (lVar7 == 0) goto LAB_0239080c;
          fVar15 = 1.0;
          if (0.0 <= fVar12) {
            fVar15 = 1.0 - fVar12;
          }
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (fVar17 + 0.0,(fVar15 * fVar15 * fVar15 + -1.0 + 1.0) * 48.0 + fVar18,lVar7,0);
        }
        lVar5 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          uVar11 = 0;
          fVar12 = fVar12 / _UNK_00e201f4;
          fVar17 = 1.0;
          if (fVar12 <= 1.0) {
            fVar17 = fVar12;
          }
          fVar18 = 0.0;
          if (0.0 <= fVar12) {
            fVar18 = fVar17;
          }
          UnityEngine_CanvasGroup__set_alpha_467ad3c(fVar18,*(long *)(lVar9 + 0x60),0);
          uVar10 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
          if ((uVar6 & 1) != 0) {
            plVar8 = *(long **)(lVar9 + 0x20);
            lVar5 = 0;
            if (plVar8 == (long *)0x0) goto LAB_0239080c;
            uVar13 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
            fVar12 = *(float *)(param_5 + 0x30);
            fVar15 = *(float *)(lVar9 + 0x28);
            fVar18 = *(float *)(param_5 + 0x38);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            plVar8 = *(long **)(lVar9 + 0x20);
            lVar5 = 0;
            if (plVar8 == (long *)0x0) goto LAB_0239080c;
            fVar18 = fVar18 / _UNK_00e20390;
            fVar14 = 1.0;
            if (fVar18 <= 1.0) {
              fVar14 = fVar18;
            }
            fVar16 = 1.0;
            if (0.0 <= fVar18) {
              fVar16 = 1.0 - fVar14;
            }
            fVar14 = 1.0 - fVar16 * fVar16;
            fVar18 = 1.0;
            if (fVar14 <= 1.0) {
              fVar18 = fVar14;
            }
            fVar16 = 0.0;
            if (0.0 <= fVar14) {
              fVar16 = fVar18;
            }
            (**(code **)(*plVar8 + 0x2a8))
                      (uVar13,fVar17,uVar11,fVar12 + (fVar15 - fVar12) * fVar16,plVar8,
                       *(undefined8 *)(*plVar8 + 0x2b0));
          }
          puVar2 = PTR_DAT_04cb5110;
          if (*(char *)(lVar9 + 0x48) == '\0') {
            fVar17 = *(float *)(param_5 + 0x38);
            lVar5 = *(long *)PTR_DAT_04cb5110;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar5 = *(long *)puVar2;
            }
            if (**(float **)(lVar5 + 0xb8) <= fVar17) {
              Dino_BusSand_App_UI_KitPop__TakeTaps_228dc8c(lVar9);
            }
          }
          *(undefined8 *)(param_5 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
          uVar11 = 2;
          goto LAB_023907e0;
        }
      }
    }
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      fVar17 = *(float *)(param_5 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
      fVar17 = fVar17 + extraout_s0_01;
      fVar18 = *(float *)(param_5 + 0x3c);
      *(float *)(param_5 + 0x38) = fVar17;
      if (fVar17 < fVar18) goto LAB_023904f4;
      if (lVar9 == 0) goto LAB_0239080c;
      lVar7 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
      lVar5 = 0;
      if (lVar7 == 0) goto LAB_0239080c;
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar9 + 0x4c),*(undefined4 *)(lVar9 + 0x50),
                 *(undefined4 *)(lVar9 + 0x54),lVar7,0);
      lVar5 = 0;
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_0239080c;
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (*(undefined4 *)(lVar9 + 0x58),*(undefined4 *)(lVar9 + 0x5c),
                 *(long *)(param_5 + 0x28),0);
      lVar5 = 0;
      if (*(long *)(lVar9 + 0x60) == 0) goto LAB_0239080c;
      UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,*(long *)(lVar9 + 0x60),0);
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      fVar17 = *(float *)(param_5 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_UI_UiMotion__get_Dt_228a520();
      *(float *)(param_5 + 0x38) = fVar17 + extraout_s0_00;
      if (lVar9 == 0) goto LAB_0239080c;
    }
    puVar2 = PTR_DAT_04cb5110;
    if (*(char *)(lVar9 + 0x48) == '\0') {
      fVar17 = *(float *)(param_5 + 0x38);
      lVar5 = *(long *)PTR_DAT_04cb5110;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (fVar17 < **(float **)(lVar5 + 0xb8)) {
        *(undefined8 *)(param_5 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
        uVar11 = 3;
LAB_023907e0:
        *(undefined4 *)(param_5 + 0x10) = uVar11;
        return 1;
      }
    }
    if ((*(char *)(lVar9 + 0x70) == '\0') && (*(char *)(lVar9 + 0x48) == '\0')) {
      Dino_BusSand_App_UI_KitPop__TakeTaps_228dc8c(lVar9);
    }
    uVar10 = *(undefined8 *)(lVar9 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    plVar8 = *(long **)(lVar9 + 0x20);
    lVar5 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
      plVar8 = *(long **)(lVar9 + 0x20);
      lVar5 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        return 0;
      }
    }
  }
LAB_0239080c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(lVar5);
}

