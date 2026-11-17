/* IL2CPP: Dino.BusSand.App.UI.GiftPackKitPanel$$Update
void Dino_BusSand_App_UI_GiftPackKitPanel__Update (Dino_BusSand_App_UI_GiftPackKitPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GiftPackKitPanel$$Update
   void Dino_BusSand_App_UI_GiftPackKitPanel__Update (Dino_BusSand_App_UI_GiftPackKitPanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_GiftPackKitPanel__Update_21c9c90(long *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar10;
  long *plVar11;
  float extraout_s0;
  float fVar12;
  
                    /* try { // try from 022c9c94 to 023c9c97 has its CatchHandler @ 022c9d84 */
  if ((bRam0000000004f9bb0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0040);
    bRam0000000004f9bb0c = 1;
  }
  uVar6 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((extraout_s0 < *(float *)(param_1 + 10)) || (param_1[9] == 0)) {
    return uVar6;
  }
  fVar12 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 022c9cfc to 023c9cff has its CatchHandler @ 022c9d80 */
                    /* try { // try from 022c9d00 to 023c9dd7 has its CatchHandler @ 022c9bb4 */
  *(float *)(param_1 + 10) = fVar12 + 1.0;
  if (param_1[9] == 0) {
LAB_022c9df8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc(param_1[9],0x3ec,0);
  lVar10 = param_1[8];
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
    plVar11 = (long *)param_1[8];
    if (*(int *)(*(long *)PTR_DAT_04cb0040 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_App_UI_PackPopup__Clock_232f900(lVar7,0);
    if (plVar11 == (long *)0x0) goto LAB_022c9df8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c9cfc with catch @ 022c9d80
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c9c94 with catch @ 022c9d84
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c9c4c with catch @ 022c9d8c
                        */
    uVar6 = (**(code **)(*plVar11 + 0x518))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x520));
  }
  if ((char)param_1[7] != '\0') {
    return uVar6;
  }
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    return uVar6;
  }
  if (0 < lVar7) {
    uVar1 = *(undefined4 *)((long)param_1 + 0x3c);
    if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022c9dd8 to 023c9ddb has its CatchHandler @ 022c9ddc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c9dd8 with catch @ 022c9ddc
                        */
    uVar6 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar1,0);
                    /* try { // try from 022c9de0 to 023c9de3 has its CatchHandler @ 022c9dec */
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
  }
                    /* try { // try from 022c9de4 to 023c9def has its CatchHandler @ 022c9bb4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c9de0 with catch @ 022c9dec
                        */
  uVar8 = 0;
                    /* try { // try from 022c9df0 to 023c9e77 has its CatchHandler @ 022c9df0
                       catch(type#1 @ 00000000) { ... } // from try @ 022c9df0 with catch @ 022c9df0
                       catch(type#1 @ 00000000) { ... } // from try @ 022c9ee8 with catch @ 022c9df0
                       catch(type#1 @ 00000000) { ... } // from try @ 022c9f98 with catch @ 022c9df0
                        */
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar8 = extraout_x1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar8);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cad1b0;
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    return uVar6;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar5 = PTR_DAT_04cb1b30;
  puVar3 = PTR_DAT_04ca9ae8;
  lVar7 = **(long **)(*(long *)puVar4 + 0xb8);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    return uVar6;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return uVar6;
    }
    lVar7 = *(long *)(lVar7 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar7 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar7,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar10 == 0) goto LAB_022fedc4;
    plVar11 = (long *)(lVar10 + 0x10);
    *plVar11 = lVar7;
    thunk_FUN_02134474(plVar11,lVar7);
    if (*plVar11 == 0) goto LAB_022fedc4;
    lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar11,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar11 == 0) goto LAB_022fedc4;
    lVar9 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar11,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar6 & 1) != 0) {
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,lVar10,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar9 == 0) goto LAB_022fedc4;
      uVar6 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar9,uVar8,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar6;
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
          lVar10 = *(long *)(lVar7 + 0x10);
          if (lVar10 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*pcRam0000000004fa82f0)(lVar10,0);
            return uVar6;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar9 = *param_1;
    bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
      goto LAB_022fed94;
    }
    if (*plVar11 != 0) {
      uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar11,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar7 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar7,0,0);
          }
          lVar7 = *plVar11;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar7,0);
          if (lVar7 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar7,0,0);
            uVar6 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar7,0);
            uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar8,lVar10,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (uVar6 != 0) {
              *(undefined8 *)(uVar6 + 0x40) = uVar8;
              thunk_FUN_02134474((undefined8 *)(uVar6 + 0x40),uVar8,0);
              return uVar6;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar7 = *plVar11;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar8 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar8 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar8 = extraout_x1_01;
      }
      puVar3 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar8);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar8 = 0;
      if (lVar7 != 0) {
        uVar8 = *(undefined8 *)(lVar7 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*pcRam0000000004fa8680)(0,uVar8);
      return uVar6;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

