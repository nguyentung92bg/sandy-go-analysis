/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OpenRaceAndClose
void Dino_BusSand_App_UI_YachtRacingStartPanel__OpenRaceAndClose (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OpenRaceAndClose
   void Dino_BusSand_App_UI_YachtRacingStartPanel__OpenRaceAndClose
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_YachtRacingStartPanel__OpenRaceAndClose_21f3970(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  
  if (*(char *)((long)param_1 + 0x61) != '\0') {
    return param_1;
  }
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  puVar5 = (undefined8 *)(param_1[7] + 0x18);
  uVar11 = *puVar5;
  *puVar5 = 0;
  thunk_FUN_02134474(puVar5,0);
  plVar6 = (long *)Dino_BusSand_App_UI_YachtRacingUi__OpenRace_21f7cdc(0,0,uVar11,0);
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    return plVar6;
  }
  uVar11 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar11 = extraout_x1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar11);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
  uVar11 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if (((ulong)plVar6 & 1) == 0) {
    return plVar6;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cb1b30;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar7 == 0) {
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
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar8,0);
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
    lVar7 = *(long *)(lVar7 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar7 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar7,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar8 == 0) goto LAB_022fedc4;
    plVar6 = (long *)(lVar8 + 0x10);
    *plVar6 = lVar7;
    thunk_FUN_02134474(plVar6,lVar7);
    if (*plVar6 == 0) goto LAB_022fedc4;
    lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar6,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar6 == 0) goto LAB_022fedc4;
    lVar9 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar6,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,lVar8,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar9 == 0) goto LAB_022fedc4;
      uVar10 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar9,uVar11,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar6 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if (((ulong)plVar6 & 1) == 0) {
          return plVar6;
        }
        if (lVar7 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = *(long *)(lVar7 + 0x10);
          if (lVar8 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar6 = (long *)(*pcRam0000000004fa82f0)(lVar8,0);
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar9 = *param_1;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar6 != 0) {
      uVar10 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar6,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar7 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar7,0,0);
          }
          lVar7 = *plVar6;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar7,0);
          if (lVar7 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar7,0,0);
            plVar6 = (long *)Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar7,0);
            lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(lVar7,lVar8,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (plVar6 != (long *)0x0) {
              plVar6[8] = lVar7;
              thunk_FUN_02134474(plVar6 + 8,lVar7,0);
              return plVar6;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar7 = *plVar6;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar11 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar11 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar11 = extraout_x1_01;
      }
      puVar2 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar11);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar11 = 0;
      if (lVar7 != 0) {
        uVar11 = *(undefined8 *)(lVar7 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar6 = (long *)(*pcRam0000000004fa8680)(0,uVar11);
      return plVar6;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

