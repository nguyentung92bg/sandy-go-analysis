/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnOpen
void Dino_BusSand_App_UI_GuidePanel__OnOpen (Dino_BusSand_App_UI_GuidePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnOpen
   void Dino_BusSand_App_UI_GuidePanel__OnOpen (Dino_BusSand_App_UI_GuidePanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__OnOpen_22c7d48(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c365 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb18b0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb69b8);
    FUN_02132f7c(PTR_DAT_04cb69c0);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb69c8);
    FUN_02132f7c(PTR_DAT_04cb69d0);
    FUN_02132f7c(PTR_DAT_04cb69d8);
    FUN_02132f7c(PTR_DAT_04cae110);
    bRam0000000004f9c365 = 1;
  }
  puVar6 = PTR_DAT_04cb18b0;
  puVar5 = PTR_DAT_04cabd80;
  puVar4 = PTR_DAT_04ca9ae8;
  if (param_2 == (long *)0x0) {
LAB_023c7e64:
    param_2 = (long *)0x0;
  }
  else {
    bVar3 = *(byte *)(*(long *)PTR_DAT_04cb18b0 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar3) goto LAB_023c7e64;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_04cb18b0) {
      param_2 = (long *)0x0;
    }
  }
  plVar12 = (long *)(param_1 + 0x38);
  *plVar12 = (long)param_2;
  thunk_FUN_02134474(plVar12);
  if (*plVar12 == 0) {
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
    uVar11 = _UNK_00e6a440;
    *(undefined4 *)(lVar8 + 0x4c) = 0x3f19999a;
    *(undefined4 *)(lVar8 + 0x58) = 0x3f19999a;
    *(undefined4 *)(lVar8 + 100) = 0x44480000;
    *(undefined8 *)(lVar8 + 0x50) = uVar11;
    *(undefined4 *)(lVar8 + 0x70) = 0xffffffff;
    System_Object___ctor_4870e5c(lVar8,0);
    *plVar12 = lVar8;
    thunk_FUN_02134474(plVar12,lVar8);
  }
  lVar8 = UnityEngine_Component__GetComponentInParent_object__26f9d74(param_1,*(undefined8 *)puVar5)
  ;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  lVar13 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) goto LAB_023c84b4;
    lVar13 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar8,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  uVar11 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar13 == 0) goto LAB_023c84b4;
    iVar7 = UnityEngine_Canvas__get_renderMode_467f200(lVar13,0);
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = UnityEngine_Canvas__get_worldCamera_4680f2c(lVar13,0);
    }
  }
  puVar5 = PTR_DAT_04cadf40;
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  thunk_FUN_02134474();
  uVar11 = UnityEngine_Component__GetComponent_object__26f97e8(param_1,*(undefined8 *)puVar5);
  puVar14 = (undefined8 *)(param_1 + 0x58);
  *puVar14 = uVar11;
  thunk_FUN_02134474(puVar14,uVar11);
  uVar11 = *puVar14;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
  if ((uVar9 & 1) != 0) {
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    if (lVar8 == 0) goto LAB_023c84b4;
    uVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar8,*(undefined8 *)PTR_DAT_04cb0890);
    *puVar14 = uVar11;
    thunk_FUN_02134474(puVar14,uVar11);
  }
  puVar5 = PTR_DAT_04cabdb0;
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                              (param_1,*(undefined8 *)PTR_DAT_04cae110,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar8 = *(long *)puVar5;
    plVar15 = plVar10;
    if (*plVar10 != lVar8) {
      plVar15 = (long *)0x0;
    }
    *(long **)(param_1 + 0x60) = plVar15;
    if (*plVar10 != lVar8) {
      plVar10 = (long *)0x0;
    }
  }
  plVar15 = (long *)(param_1 + 0x60);
  thunk_FUN_02134474(plVar15,plVar10);
  lVar8 = *plVar15;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  plVar10 = (long *)0x0;
  if ((uVar9 & 1) != 0) {
    if (*plVar15 == 0) goto LAB_023c84b4;
    plVar10 = (long *)UnityEngine_Transform__Find_43d4bec
                                (*plVar15,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != *(long *)puVar5) {
      plVar10 = (long *)0x0;
    }
  }
  *(long *)(param_1 + 0x68) = (long)plVar10;
  thunk_FUN_02134474((long *)(param_1 + 0x68));
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  lVar8 = 0;
  if ((uVar9 & 1) != 0) {
    lVar8 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                      (*plVar15,*(undefined8 *)PTR_DAT_04cb69c0,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  lVar13 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) goto LAB_023c84b4;
    lVar13 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar8,*(undefined8 *)PTR_DAT_04cad790);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  if ((uVar9 & 1) != 0) {
    uVar11 = Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar9 & 1) != 0) {
      uVar11 = Dino_BusSand_App_UI_UiSkin__get_MainFont_22a2f08(0);
      if (lVar13 == 0) goto LAB_023c84b4;
      TMPro_TMP_Text__set_font_42cb6ac(lVar13,uVar11,0);
    }
  }
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                              (param_1,*(undefined8 *)PTR_DAT_04cb69c8,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar8 = *(long *)puVar5;
    plVar15 = plVar10;
    if (*plVar10 != lVar8) {
      plVar15 = (long *)0x0;
    }
    *(long **)(param_1 + 0x70) = plVar15;
    if (*plVar10 != lVar8) {
      plVar10 = (long *)0x0;
    }
  }
  plVar15 = (long *)(param_1 + 0x70);
  thunk_FUN_02134474(plVar15,plVar10);
  lVar8 = *plVar15;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  plVar10 = (long *)0x0;
  if ((uVar9 & 1) != 0) {
    if (*plVar15 == 0) goto LAB_023c84b4;
    plVar10 = (long *)UnityEngine_Transform__Find_43d4bec
                                (*plVar15,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != *(long *)puVar5) {
      plVar10 = (long *)0x0;
    }
  }
  puVar6 = PTR_DAT_04cb69d0;
  *(long **)(param_1 + 0x78) = plVar10;
  thunk_FUN_02134474();
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    lVar8 = *(long *)puVar5;
    plVar15 = plVar10;
    if (*plVar10 != lVar8) {
      plVar15 = (long *)0x0;
    }
    *(long **)(param_1 + 0x80) = plVar15;
    if (*plVar10 != lVar8) {
      plVar10 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x80,plVar10);
  Dino_BusSand_App_UI_GuidePanel__EnterOpenDelayState_22c84fc(param_1);
  Dino_BusSand_App_UI_GuidePanel__BuildInputCatcher_22c8a2c(param_1);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar9 & 1) != 0) {
      if (*plVar12 == 0) goto LAB_023c84b4;
      Dino_BusSand_App_UI_GuidePanel__RaiseExtra_22c8df0(param_1,*(undefined8 *)(*plVar12 + 0x30));
    }
    plVar10 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
    puVar4 = PTR_DAT_04cb69d8;
    if (plVar10 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb69d8 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb69d8,*(undefined8 *)(*plVar10 + 0x40)),
         lVar8 == 0)) {
LAB_023c84bc:
        uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_023c84b8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar10[4] = *(long *)puVar4;
      thunk_FUN_02134474();
      if (*plVar12 != 0) {
        uStack_34 = *(undefined4 *)(*plVar12 + 0x10);
        lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
        if ((lVar8 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_023c84bc;
        puVar5 = PTR_DAT_04cb69b8;
        puVar4 = PTR_DAT_04cac5c0;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_023c84b8;
        plVar10[5] = lVar8;
        thunk_FUN_02134474(plVar10 + 5,lVar8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar5,plVar10,0);
        lVar8 = *plVar12;
        if (lVar8 != 0) {
          uVar1 = *(undefined4 *)(lVar8 + 0x10);
          uVar2 = *(undefined4 *)(lVar8 + 0x44);
          if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_GameTracking__TutorialOpen_2218c24(uVar1,uVar2,0);
          uVar11 = Dino_BusSand_App_UI_GuidePanel__Sequence_22c8f74(param_1);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
          return;
        }
      }
    }
  }
LAB_023c84b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

