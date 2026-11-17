/* IL2CPP: Dino.BusSand.App.UI.ForceUpdatePanel$$OnUpdate
void Dino_BusSand_App_UI_ForceUpdatePanel__OnUpdate (Dino_BusSand_App_UI_ForceUpdatePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ForceUpdatePanel$$OnUpdate
   void Dino_BusSand_App_UI_ForceUpdatePanel__OnUpdate (Dino_BusSand_App_UI_ForceUpdatePanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_ForceUpdatePanel__OnUpdate_231f87c(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  
  puVar3 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c5a5 & 1) == 0) {
                    /* try { // try from 0241f8a4 to 0251f8cb has its CatchHandler @ 0241fbf4 */
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb8898);
    FUN_02132f7c(PTR_DAT_04cb8930);
    FUN_02132f7c(PTR_DAT_04cb88e0);
    FUN_02132f7c(PTR_DAT_04cb8920);
    bRam0000000004f9c5a5 = 1;
  }
  plVar7 = (long *)FUN_02133068(*(undefined8 *)puVar3,2);
  puVar3 = PTR_DAT_04cb8920;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 0241f910 to 0251f937 has its CatchHandler @ 0241fbf0 */
  if ((*(long *)PTR_DAT_04cb8920 != 0) &&
     (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb8920,*(undefined8 *)(*plVar7 + 0x40)),
     lVar8 == 0)) {
LAB_0241fa10:
    uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,0);
  }
  puVar5 = PTR_DAT_04cb8930;
  plVar1 = (long *)PTR_DAT_04cb88e0;
  puVar4 = PTR_DAT_04cb8898;
  if ((int)plVar7[3] == 0) {
LAB_0241fa0c:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* try { // try from 0241f948 to 0251f953 has its CatchHandler @ 0241fbfc */
  plVar7[4] = *(long *)puVar3;
  thunk_FUN_02134474();
  if ((char)param_1[7] != '\0') {
    plVar1 = (long *)puVar4;
  }
                    /* try { // try from 0241f960 to 0251f96b has its CatchHandler @ 0241fbc4 */
  uVar11 = *(undefined8 *)puVar5;
  lVar8 = *plVar1;
                    /* try { // try from 0241f96c to 0251f977 has its CatchHandler @ 0241fbd0 */
  if ((lVar8 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
  goto LAB_0241fa10;
  puVar3 = PTR_DAT_04cac5c0;
                    /* try { // try from 0241f984 to 0251f98f has its CatchHandler @ 0241fbd4 */
  if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_0241fa0c;
                    /* try { // try from 0241f990 to 0251f99b has its CatchHandler @ 0241fbd8 */
  plVar7[5] = lVar8;
  thunk_FUN_02134474(plVar7 + 5,lVar8);
                    /* try { // try from 0241f9a4 to 0251f9af has its CatchHandler @ 0241fbdc */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 0241f9b0 to 0251f9bb has its CatchHandler @ 0241fbe0 */
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Analytics__Log_216d0c8(uVar11,plVar7,0);
                    /* try { // try from 0241f9c4 to 0251f9cf has its CatchHandler @ 0241fbe4 */
  uVar10 = Dino_BusSand_App_Meta_AppUpdate__OpenStore_2201f4c(0);
                    /* try { // try from 0241f9d0 to 0251f9db has its CatchHandler @ 0241fbe8 */
  if (((char)param_1[7] != '\0') || (*(char *)((long)param_1 + 0x39) != '\0')) {
                    /* try { // try from 0241f9e4 to 0251f9ef has its CatchHandler @ 0241fbc0 */
    return uVar10;
  }
                    /* try { // try from 0241f9f0 to 0251f9f7 has its CatchHandler @ 0241fbcc */
  uVar11 = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 1;
                    /* try { // try from 0241fa08 to 0251fa0f has its CatchHandler @ 0241fba0 */
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
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar10 & 1) == 0) {
    return uVar10;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar5 = PTR_DAT_04cb1b30;
  puVar3 = PTR_DAT_04ca9ae8;
  lVar8 = **(long **)(*(long *)puVar4 + 0xb8);
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
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar9,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar10 & 1) != 0) {
    return uVar10;
  }
  if (param_1 != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      return uVar10;
    }
    lVar8 = *(long *)(lVar8 + 0x38);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    if (lVar8 == 0) goto LAB_022fedc4;
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar8,param_1,*(undefined8 *)PTR_DAT_04cb1b40);
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_1);
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar9 == 0) goto LAB_022fedc4;
    plVar7 = (long *)(lVar9 + 0x10);
    *plVar7 = lVar8;
    thunk_FUN_02134474(plVar7,lVar8);
    if (*plVar7 == 0) goto LAB_022fedc4;
    lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (*plVar7,*(undefined8 *)PTR_DAT_04cad3f8);
    if (*plVar7 == 0) goto LAB_022fedc4;
    lVar6 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                      (*plVar7,*(undefined8 *)PTR_DAT_04cb1b38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar10 & 1) != 0) {
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,lVar9,*(undefined8 *)PTR_DAT_04cb1b58,0);
      if (lVar6 == 0) goto LAB_022fedc4;
      uVar10 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar6,uVar11,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
        if ((uVar10 & 1) == 0) {
          return uVar10;
        }
        if (lVar8 != 0) {
          if ((bRam0000000004fa82e3 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7608,0,0);
            bRam0000000004fa82e3 = 1;
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          if (lVar9 != 0) {
            if (pcRam0000000004fa82f0 == (code *)0x0) {
              pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
            }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (*pcRam0000000004fa82f0)(lVar9,0);
            return uVar10;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
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
    if (*plVar7 != 0) {
      uVar10 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar7,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Application__get_isPlaying_4351eec(0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar8 == 0) goto LAB_022fedc4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar8,0,0);
          }
          lVar8 = *plVar7;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
          if (lVar8 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar8,0,0);
            uVar10 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar8,0);
            uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar11,lVar9,*(undefined8 *)PTR_DAT_04cb1b60,0);
            if (uVar10 != 0) {
              *(undefined8 *)(uVar10 + 0x40) = uVar11;
              thunk_FUN_02134474((undefined8 *)(uVar10 + 0x40),uVar11,0);
              return uVar10;
            }
          }
          goto LAB_022fedc4;
        }
      }
LAB_022fed94:
      lVar8 = *plVar7;
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
      if (lVar8 != 0) {
        uVar11 = *(undefined8 *)(lVar8 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*pcRam0000000004fa8680)(0,uVar11);
      return uVar10;
    }
  }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

