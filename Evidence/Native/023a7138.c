/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$OnCloseClick
void Dino_BusSand_App_UI_CommentPopPanel__OnCloseClick (Dino_BusSand_App_UI_CommentPopPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$OnCloseClick
   void Dino_BusSand_App_UI_CommentPopPanel__OnCloseClick (Dino_BusSand_App_UI_CommentPopPanel_o*
   __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_CommentPopPanel__OnCloseClick_22a7138(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  
  plVar8 = param_1;
  if ((bRam0000000004f9c288 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb22a0);
                    /* try { // try from 023a717c to 024a7183 has its CatchHandler @ 023a739c */
    FUN_02132f7c(PTR_DAT_04cb5d50);
    FUN_02132f7c(PTR_DAT_04cac9b8);
    plVar8 = (long *)FUN_02132f7c(PTR_DAT_04cb22d0);
                    /* try { // try from 023a71a0 to 024a71a3 has its CatchHandler @ 023a7390 */
    bRam0000000004f9c288 = 1;
  }
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
                    /* try { // try from 023a71ac to 024a71b3 has its CatchHandler @ 023a738c */
    return plVar8;
  }
                    /* try { // try from 023a71c8 to 024a71cf has its CatchHandler @ 023a7388 */
  plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
  puVar3 = PTR_DAT_04cac9b8;
                    /* try { // try from 023a71d0 to 024a725f has its CatchHandler @ 023a6ce8 */
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cac9b8 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac9b8,*(undefined8 *)(*plVar8 + 0x40)),
     lVar9 == 0)) {
LAB_023a72b4:
    uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,0);
  }
  if ((int)plVar8[3] == 0) {
LAB_023a72b0:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar8[4] = *(long *)puVar3;
  thunk_FUN_02134474();
  plVar1 = (long *)PTR_DAT_04cb22a0;
  if (*(char *)((long)param_1 + 0x45) != '\0') {
    plVar1 = (long *)PTR_DAT_04cb22d0;
  }
  lVar9 = *plVar1;
  uVar11 = *(undefined8 *)PTR_DAT_04cb5d50;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
  goto LAB_023a72b4;
  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_023a72b0;
                    /* try { // try from 023a7260 to 024a7267 has its CatchHandler @ 023a73fc */
  plVar8[5] = lVar9;
  thunk_FUN_02134474(plVar8 + 5,lVar9);
  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                    /* try { // try from 023a7284 to 024a7287 has its CatchHandler @ 023a73f8 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 023a7290 to 024a7297 has its CatchHandler @ 023a73ec */
  Dino_BusSand_App_Analytics__Log_216d0c8(uVar11,plVar8,0);
                    /* try { // try from 023a7298 to 024a7373 has its CatchHandler @ 023a6ce8 */
  uVar11 = 0;
  if ((bRam0000000004f9bc92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9bc92 = 1;
    uVar11 = extraout_x1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0,uVar11);
    cRam0000000004f9b94d = '\x01';
  }
  puVar4 = PTR_DAT_04cad1b0;
  uVar11 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar8 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if (((ulong)plVar8 & 1) == 0) {
    return plVar8;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar5 = PTR_DAT_04cb1b30;
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar8 = (long *)UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return plVar8;
    }
    lVar9 = *(long *)(lVar9 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar9 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar9,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar10 == 0) goto LAB_022fedc4;
    plVar8 = (long *)(lVar10 + 0x10);
    *plVar8 = lVar9;
    thunk_FUN_02134474(plVar8,lVar9);
    if (*plVar8 == 0) goto LAB_022fedc4;
    lVar9 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar8,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar8 == 0) goto LAB_022fedc4;
    lVar6 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar8,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,lVar10,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar6 == 0) goto LAB_022fedc4;
      uVar7 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar6,uVar11,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar8 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if (((ulong)plVar8 & 1) == 0) {
          return plVar8;
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
          lVar10 = *(long *)(lVar9 + 0x10);
          if (lVar10 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar8 = (long *)(*pcRam0000000004fa82f0)(lVar10,0);
            return plVar8;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar9,0);
        }
        goto LAB_022fedc4;
      }
    }
    lVar6 = *param_1;
    bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b48)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b50))
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
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
          if ((uVar7 & 1) != 0) {
            if (lVar9 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar9,0,0);
          }
          lVar9 = *plVar8;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar9 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar9,0);
          if (lVar9 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar9,0,0);
            plVar8 = (long *)Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar9,0);
            lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(lVar9,lVar10,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (plVar8 != (long *)0x0) {
              plVar8[8] = lVar9;
              thunk_FUN_02134474(plVar8 + 8,lVar9,0);
              return plVar8;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar9 = *plVar8;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar11 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar11 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar11 = extraout_x1_01;
      }
      puVar3 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar11);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar11 = 0;
      if (lVar9 != 0) {
        uVar11 = *(undefined8 *)(lVar9 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(*pcRam0000000004fa8680)(0,uVar11);
      return plVar8;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

