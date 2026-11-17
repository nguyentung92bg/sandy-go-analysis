/* IL2CPP: Dino.BusSand.App.UI.NoAdsGiftPackPanel$$<OnBuyClick>b__10_0
void Dino_BusSand_App_UI_NoAdsGiftPackPanel___OnBuyClick_b__10_0 (Dino_BusSand_App_UI_NoAdsGiftPackPanel_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.NoAdsGiftPackPanel$$<OnBuyClick>b__10_0
   void Dino_BusSand_App_UI_NoAdsGiftPackPanel___OnBuyClick_b__10_0
   (Dino_BusSand_App_UI_NoAdsGiftPackPanel_o* __this, bool ok, const MethodInfo* method); */

long * Dino_BusSand_App_UI_NoAdsGiftPackPanel___OnBuyClick_b__10_0_21cb120
                 (long *param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar9;
  undefined8 uVar10;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb100 with catch @ 022cb130
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb098 with catch @ 022cb134
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb050 with catch @ 022cb138
                        */
  plVar5 = param_1;
  if ((bRam0000000004f9bb16 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb044 with catch @ 022cb148
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb088 with catch @ 022cb14c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb0d8 with catch @ 022cb14c
                        */
    FUN_02132f7c(PTR_DAT_04cb00e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb028 with catch @ 022cb15c
                        */
    plVar5 = (long *)FUN_02132f7c(PTR_DAT_04cb00f0);
    bRam0000000004f9bb16 = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022cb170 to 023cb177 has its CatchHandler @ 022cb180 */
  if ((param_2 & 1) == 0) {
    return plVar5;
  }
                    /* try { // try from 022cb178 to 023cb183 has its CatchHandler @ 022cb004 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb170 with catch @ 022cb180
                        */
                    /* try { // try from 022cb184 to 023cb187 has its CatchHandler @ 022cb190 */
  if (cRam0000000004f9b94d == '\0') {
                    /* try { // try from 022cb188 to 023cb193 has its CatchHandler @ 022cb004 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb184 with catch @ 022cb190
                        */
    FUN_02132f7c(PTR_DAT_04cad1b0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb2bc with catch @ 022cb194
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb330 with catch @ 022cb194
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb340 with catch @ 022cb194
                        */
    cRam0000000004f9b94d = '\x01';
  }
  lVar9 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022cb1bc to 023cb1c7 has its CatchHandler @ 022cb314 */
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  uVar10 = 0;
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 022cb1e0 to 023cb1e7 has its CatchHandler @ 022cb300 */
                    /* try { // try from 022cb1e8 to 023cb1f7 has its CatchHandler @ 022cb2f0 */
    uVar10 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                       (lVar9,*(undefined8 *)PTR_DAT_04cb00f0,4,0,*(undefined8 *)PTR_DAT_04cb00e8);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022cb220 to 023cb22f has its CatchHandler @ 022cb304 */
  plVar5 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if (((ulong)plVar5 & 1) == 0) {
    return plVar5;
  }
  if (*(char *)((long)param_1 + 0x41) != '\0') {
    return param_1;
  }
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  if (param_1[7] != 0) {
    plVar5 = (long *)(param_1[7] + 0x10);
    lVar9 = *plVar5;
    *plVar5 = 0;
    thunk_FUN_02134474(plVar5,0);
    plVar5 = (long *)Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar9 == 0) {
      return plVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x022ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(**(code **)(lVar9 + 0x18))
                               (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    return plVar5;
  }
  uVar10 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar10 = extraout_x1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar10);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
  uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if (((ulong)plVar5 & 1) == 0) {
    return plVar5;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cb1b30;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar9 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar9 == 0) {
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
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar5 = (long *)UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return plVar5;
    }
    lVar9 = *(long *)(lVar9 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar9 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar9,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar7 == 0) goto LAB_022fedc4;
    plVar5 = (long *)(lVar7 + 0x10);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
    if (*plVar5 == 0) goto LAB_022fedc4;
    lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar5,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar5 == 0) goto LAB_022fedc4;
    lVar8 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar5,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar10,lVar7,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar8 == 0) goto LAB_022fedc4;
      uVar6 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar8,uVar10,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar5 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if (((ulong)plVar5 & 1) == 0) {
          return plVar5;
        }
        if (lVar9 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar7 = *(long *)(lVar9 + 0x10);
          if (lVar7 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(*pcRam0000000004fa82f0)(lVar7,0);
            return plVar5;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar9,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar8 = *param_1;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
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
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar9 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar9,0,0);
          }
          lVar9 = *plVar5;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar9 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar9,0);
          if (lVar9 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar9,0,0);
            plVar5 = (long *)Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar9,0);
            lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(lVar9,lVar7,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (plVar5 != (long *)0x0) {
              plVar5[8] = lVar9;
              thunk_FUN_02134474(plVar5 + 8,lVar9,0);
              return plVar5;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar9 = *plVar5;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar10 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar10 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar10 = extraout_x1_01;
      }
      puVar2 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar10);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar10 = 0;
      if (lVar9 != 0) {
        uVar10 = *(undefined8 *)(lVar9 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(*pcRam0000000004fa8680)(0,uVar10);
      return plVar5;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

