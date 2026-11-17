/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$OnReset
void Dino_BusSand_Cheat_CheatMobilePanel__OnReset (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$OnReset
   void Dino_BusSand_Cheat_CheatMobilePanel__OnReset (Dino_BusSand_Cheat_CheatMobilePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel__OnReset_236c16c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0246c17c to 0256c183 has its CatchHandler @ 0246c2b4 */
  if ((bRam0000000004f9c792 & 1) == 0) {
                    /* try { // try from 0246c184 to 0256c1e7 has its CatchHandler @ 0246c2bc */
    FUN_02132f7c(PTR_DAT_04cac6f8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cbae40);
    bRam0000000004f9c792 = 1;
  }
  puVar3 = PTR_DAT_04cad330;
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar7 = *(long **)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x50) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04ca9ae8;
    uVar15 = *(undefined8 *)PTR_DAT_04cbae40;
    if ((bRam0000000004f9c192 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,uVar15,0);
      FUN_02132f7c(PTR_DAT_04cabdb0);
      bRam0000000004f9c192 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(plVar7,0,0);
    if ((uVar11 & 1) != 0) {
      return;
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x518))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x520));
      lVar12 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar7,0);
      if ((lVar12 != 0) &&
         (plVar8 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar12,0),
         plVar8 != (long *)0x0)) {
        if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4();
        }
        UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar8,0);
        TMPro_TMP_Text__GetPreferredValues_42d193c(plVar7,uVar15,0);
        UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar12,0);
        if ((bRam0000000004fa8a8a & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7bc8,0);
          bRam0000000004fa8a8a = 1;
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8ae0 == (code *)0x0) {
          pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
        }
        (*pcRam0000000004fa8ae0)(lVar12,&stack0xffffffffffffffe8);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
                    /* try { // try from 0246c1f0 to 0256c1f3 has its CatchHandler @ 0246c2b8 */
                    /* try { // try from 0246c1f4 to 0256c29b has its CatchHandler @ 0246bf20 */
  if (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) != 0) {
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),*(undefined8 *)PTR_DAT_04cac6f8);
  }
  lVar12 = Dino_BusSand_Cheat_CheatMobilePanel__get_C_2368914();
  puVar3 = PTR_DAT_04cba458;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c754 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    bRam0000000004f9c754 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  puVar3 = PTR_DAT_04cabaf8;
  if ((uVar11 & 1) == 0) {
    return;
  }
  if ((bRam0000000004f9c76e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cba8c0);
    bRam0000000004f9c76e = 1;
  }
  puVar4 = PTR_DAT_04caba50;
  Dino_BusSand_Cheat_CheatManager__StopAutoPlay_235def8(lVar12,0);
  *(undefined1 *)(lVar12 + 0x122) = 0;
  Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(lVar12);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__DeleteSave_2271234(0);
  Dino_BusSand_App_Meta_Profile__Load_226fa7c(0);
  Dino_BusSand_App_Meta_Profile__Save_226c548(0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_04cba8c0;
  if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_GameApp__GoHall_21678c4(**(long **)(lVar10 + 0xb8),0,0);
  puVar4 = PTR_DAT_04cba458;
  lVar10 = *(long *)puVar3;
  if ((bRam0000000004f9c77a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cba4d8);
    FUN_02132f7c(PTR_DAT_04cba4e0);
    FUN_02132f7c(PTR_DAT_04cba490);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c77a = 1;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar10);
  uVar11 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(lVar12);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  puVar3 = PTR_DAT_04caba50;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    uVar15 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar3;
      }
      puVar3 = PTR_DAT_04cabb08;
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) goto LAB_0245de8c;
      if ((bRam0000000004f9b87c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabb08,lVar10,0);
        bRam0000000004f9b87c = 1;
      }
      lVar12 = *(long *)(lVar12 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar18 = _UNK_00e20094;
      if ((bRam0000000004f9c314 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568,lVar10,0);
        FUN_02132f7c(PTR_DAT_04caa070);
        FUN_02132f7c(PTR_DAT_04cac878);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cad730);
        FUN_02132f7c(PTR_DAT_04cabdb0);
        FUN_02132f7c(PTR_DAT_04cabb08);
        FUN_02132f7c(PTR_DAT_04cad748);
        FUN_02132f7c(PTR_DAT_04cad330);
        FUN_02132f7c(PTR_DAT_04cad4c0);
        FUN_02132f7c(PTR_DAT_04cb4e20);
        FUN_02132f7c(PTR_DAT_04cafbb8);
        FUN_02132f7c(PTR_DAT_04cb6578);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        FUN_02132f7c(PTR_DAT_04cb64b8);
        FUN_02132f7c(PTR_DAT_04cad4a8);
        bRam0000000004f9c314 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
      puVar4 = PTR_DAT_04cabb08;
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar6 = *(long *)PTR_DAT_04cabb08;
      lVar9 = *(long *)PTR_DAT_04ca9c30;
      if (lVar10 != 0) {
        lVar9 = lVar10;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar4;
      }
      **(long **)(lVar6 + 0xb8) = lVar9;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),lVar9);
      uVar16 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar16;
      if (lVar12 == 0) goto LAB_023bd530;
      uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
      uVar14 = *(undefined8 *)PTR_DAT_04cad730;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar14,0);
      if (plVar7 == (long *)0x0) goto LAB_023bd530;
      if ((lVar12 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
        uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar15,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar7[4] = lVar12;
      thunk_FUN_02134474(plVar7 + 4,lVar12);
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar12,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
      if ((lVar12 == 0) ||
         (lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0), lVar9 == 0))
      goto LAB_023bd530;
      UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar15,0,0);
      plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
      if (plVar7 == (long *)0x0) goto LAB_023bd530;
      if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar7);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar18,plVar7,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar18,plVar7,0);
      puVar5 = PTR_DAT_04cad330;
      lVar9 = *(long *)PTR_DAT_04cad330;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar5;
      }
      puVar13 = *(undefined4 **)(lVar9 + 0xb8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      System_Nullable_Color____ctor_2bc9090
                (*puVar13,puVar13[1],puVar13[2],puVar13[3],&uStack_68,
                 *(undefined8 *)PTR_DAT_04cac878);
      uStack_70 = uStack_58;
      uStack_78 = uStack_60;
      uStack_80 = uStack_68;
      lVar9 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                         *(undefined8 *)PTR_DAT_04cb4e20,lVar10,*(undefined8 *)PTR_DAT_04cad4a8,
                         &uStack_80,0x202,0);
      if (lVar9 == 0) goto LAB_023bd530;
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar9,1,0);
      fVar19 = 0.0;
      TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar9,lVar10,0);
      fVar17 = 150.0;
      if (150.0 <= fVar19 + 70.0) {
        fVar17 = fVar19 + 70.0;
      }
      lVar10 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar9,0);
      if (lVar10 == 0) goto LAB_023bd530;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar17 + -50.0,lVar10,0);
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar17,plVar7,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      fVar19 = 1.0;
      if (fVar17 / 241.0 <= 1.0) {
        fVar19 = fVar17 / 241.0;
      }
      lVar10 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44660000,fVar17,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar7,
                          *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98
                          ,0);
      if (lVar10 == 0) goto LAB_023bd530;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar10,0);
      uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
      if ((uVar11 & 1) == 0) {
        fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar4;
        }
        if (_UNK_00e200f8 < fVar17 - *(float *)(*(long *)(lVar10 + 0xb8) + 0x18)) goto LAB_023bd36c;
      }
      else {
LAB_023bd36c:
        puVar5 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar5;
        }
        if (**(long **)(lVar10 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar10 + 0xb8),0);
        }
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar4;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      if ((uVar11 & 1) != 0) {
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar4;
        }
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                  (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10));
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar4;
      }
      plVar8 = (long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      *plVar8 = lVar12;
      thunk_FUN_02134474(plVar8,lVar12);
      uVar18 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar18;
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      lVar10 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar12,0);
      if (lVar10 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar10,0,0);
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar12);
        return;
      }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  if (*(long *)(lVar12 + 0x110) != 0) {
    if (*(char *)(*(long *)(lVar12 + 0x110) + 0x10) != '\0') {
      if (*(long *)(lVar12 + 0x100) == 0) goto LAB_0245de8c;
      if (*(char *)(*(long *)(lVar12 + 0x100) + 0x3c) == '\0') {
        return;
      }
    }
    lVar9 = *(long *)(lVar12 + 0x160);
    uStack_38 = 0;
    lStack_40 = lVar10;
    thunk_FUN_02134474(&lStack_40,lVar10);
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (*(long *)(lVar12 + 0x100) != 0) {
      uStack_38 = CONCAT44(uStack_38._4_4_,fVar17 + *(float *)(*(long *)(lVar12 + 0x100) + 0x38));
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar6 = *(long *)PTR_DAT_04cba4d8;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            plVar7 = (long *)(lVar10 + 0x20);
            *plVar7 = lStack_40;
            *(undefined8 *)(lVar10 + 0x28) = uStack_38;
            thunk_FUN_02134474(plVar7,0);
          }
          else {
            System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                      (lVar9,lStack_40,uStack_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *(long *)(lVar12 + 0x160);
          if (lVar12 != 0) {
            if (3 < *(int *)(lVar12 + 0x18)) {
              System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                        (lVar12,0,*(undefined8 *)PTR_DAT_04cba4e0);
            }
            return;
          }
        }
      }
    }
  }
LAB_0245de8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

