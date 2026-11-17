/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel$$<BuildBusStreak>b__8_0
void Dino_BusSand_App_UI_EventIntroPanel___BuildBusStreak_b__8_0 (Dino_BusSand_App_UI_EventIntroPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel$$<BuildBusStreak>b__8_0
   void Dino_BusSand_App_UI_EventIntroPanel___BuildBusStreak_b__8_0
   (Dino_BusSand_App_UI_EventIntroPanel_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_EventIntroPanel___BuildBusStreak_b__8_0_21bf6ac(long *param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar4 = PTR_DAT_04caba50;
                    /* try { // try from 022bf6b4 to 023bf74f has its CatchHandler @ 022bf6b4
                       catch() { ... } // from try @ 022bf6b4 with catch @ 022bf6b4
                       catch() { ... } // from try @ 022bf76c with catch @ 022bf6b4 */
  if ((bRam0000000004f9bad8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cafb80);
    FUN_02132f7c(PTR_DAT_04cafb88);
    bRam0000000004f9bad8 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 022bf750 to 023bf75f has its CatchHandler @ 022bf7fc */
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar4;
                    /* try { // try from 022bf760 to 023bf76b has its CatchHandler @ 022bf7cc */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
                    /* try { // try from 022bf76c to 023bf817 has its CatchHandler @ 022bf6b4 */
    lVar6 = *(long *)puVar4;
  }
  uVar12 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
                    /* catch() { ... } // from try @ 022bf760 with catch @ 022bf7cc */
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar4;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    cVar1 = *(char *)(**(long **)(lVar6 + 0xb8) + 0x39);
    uVar7 = Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    puVar4 = PTR_DAT_04cafb88;
                    /* catch() { ... } // from try @ 022bf750 with catch @ 022bf7fc */
    if (cVar1 != '\0') {
      lVar6 = *(long *)PTR_DAT_04cafb88;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
                    /* try { // try from 022bf818 to 023bf863 has its CatchHandler @ 022bf818
                       catch() { ... } // from try @ 022bf818 with catch @ 022bf818
                       catch() { ... } // from try @ 022bf870 with catch @ 022bf818 */
        lVar6 = *(long *)puVar4;
      }
      puVar10 = *(undefined8 **)(lVar6 + 0xb8);
      lVar11 = puVar10[1];
      if (lVar11 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar10 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar12 = *puVar10;
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022bf864 to 023bf86f has its CatchHandler @ 022bf8b0 */
        System_Action___ctor_47b5ed0(lVar11,uVar12,*(undefined8 *)PTR_DAT_04cafb80,0);
                    /* try { // try from 022bf870 to 023bf8cb has its CatchHandler @ 022bf818 */
        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar8 = lVar11;
        thunk_FUN_02134474(plVar8,lVar11);
      }
      if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_48 = 0;
      uStack_40 = 0;
      uVar7 = Dino_BusSand_App_UI_ScreenFade__Run_2289914(lVar11,&uStack_48,0);
    }
                    /* catch() { ... } // from try @ 022bf864 with catch @ 022bf8b0 */
    return uVar7;
  }
  uVar12 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar12 = extraout_x1;
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar12);
    cRam0000000004f9b94d = '\x01';
  }
  puVar3 = PTR_DAT_04cad1b0;
  uVar12 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar7 & 1) == 0) {
    return uVar7;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar5 = PTR_DAT_04cb1b30;
  puVar4 = PTR_DAT_04ca9ae8;
  lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
  if (lVar6 == 0) {
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
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar11,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return uVar7;
    }
    lVar6 = *(long *)(lVar6 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar6 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar6,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar11 == 0) goto LAB_022fedc4;
    plVar8 = (long *)(lVar11 + 0x10);
    *plVar8 = lVar6;
    thunk_FUN_02134474(plVar8,lVar6);
    if (*plVar8 == 0) goto LAB_022fedc4;
    lVar6 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar8,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar8 == 0) goto LAB_022fedc4;
    lVar9 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar8,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar7 & 1) != 0) {
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar9 == 0) goto LAB_022fedc4;
      uVar7 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar9,uVar12,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar7 & 1) == 0) {
          return uVar7;
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
          lVar11 = *(long *)(lVar6 + 0x10);
          if (lVar11 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*pcRam0000000004fa82f0)(lVar11,0);
            return uVar7;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
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
    if (*plVar8 != 0) {
      uVar7 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar8,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar7 & 1) != 0) {
            if (lVar6 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar6,0,0);
          }
          lVar6 = *plVar8;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar6 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar6,0);
          if (lVar6 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar6,0,0);
            uVar7 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar6,0);
            uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (uVar7 != 0) {
              *(undefined8 *)(uVar7 + 0x40) = uVar12;
              thunk_FUN_02134474((undefined8 *)(uVar7 + 0x40),uVar12,0);
              return uVar7;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar6 = *plVar8;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar4 = PTR_DAT_04ca9ae8;
      uVar12 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar12 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar12 = extraout_x1_01;
      }
      puVar4 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar12);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar4 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar12 = 0;
      if (lVar6 != 0) {
        uVar12 = *(undefined8 *)(lVar6 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000004fa8680)(0,uVar12);
      return uVar7;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

