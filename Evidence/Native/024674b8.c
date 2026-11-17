/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Fail
void Dino_BusSand_Cheat_CheatManager__Fail (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Fail
   void Dino_BusSand_Cheat_CheatManager__Fail (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Fail_23674b8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
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
  
  puVar3 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c76b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba990);
    FUN_02132f7c(PTR_DAT_04cba998);
    bRam0000000004f9c76b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar4 = PTR_DAT_04ca9ae8;
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
  }
  lVar11 = **(long **)(lVar11 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
  puVar3 = PTR_DAT_04cba458;
  if ((uVar12 & 1) == 0) {
    if (lVar11 == 0) {
LAB_02467668:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar11 + 0x20) == 2) {
      if (*(long *)(param_1 + 0x118) != 0) {
        Dino_BusSand_Cheat_CheatHint__Hide_235c314();
        if ((bRam0000000004f9c776 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cba4d0);
          bRam0000000004f9c776 = 1;
        }
        if (*(char *)(param_1 + 0x141) != '\0') {
          *(undefined1 *)(param_1 + 0x141) = 0;
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          Dino_BusSand_Cheat_CheatManager__SetPaused_23676f4(param_1,0);
        }
        Dino_BusSand_App_Gameplay_GameplayController__ForceFail_229fab4(lVar11,0);
        uVar13 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
        uVar13 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba998,uVar13,0);
        Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar13);
        return;
      }
      goto LAB_02467668;
    }
  }
  lVar11 = *(long *)PTR_DAT_04cba990;
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
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar11);
  uVar12 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_1);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  puVar3 = PTR_DAT_04caba50;
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    uVar13 = **(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar3;
      }
      puVar3 = PTR_DAT_04cabb08;
      lVar10 = **(long **)(lVar10 + 0xb8);
      if (lVar10 == 0) goto LAB_0245de8c;
      if ((bRam0000000004f9b87c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabb08,lVar11,0);
        bRam0000000004f9b87c = 1;
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04ca9ae8;
      uVar18 = _UNK_00e20094;
      if ((bRam0000000004f9c314 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568,lVar11,0);
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
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
      puVar4 = PTR_DAT_04cabb08;
      if ((uVar12 & 1) != 0) {
        return;
      }
      lVar6 = *(long *)PTR_DAT_04cabb08;
      lVar8 = *(long *)PTR_DAT_04ca9c30;
      if (lVar11 != 0) {
        lVar8 = lVar11;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar4;
      }
      **(long **)(lVar6 + 0xb8) = lVar8;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),lVar8);
      uVar16 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar16;
      if (lVar10 == 0) goto LAB_023bd530;
      uVar13 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar10,4,0);
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
      uVar15 = *(undefined8 *)PTR_DAT_04cad730;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar15,0);
      if (plVar7 == (long *)0x0) goto LAB_023bd530;
      if ((lVar10 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar13,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar7[4] = lVar10;
      thunk_FUN_02134474(plVar7 + 4,lVar10);
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar10,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
      if ((lVar10 == 0) ||
         (lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0), lVar8 == 0))
      goto LAB_023bd530;
      UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar13,0,0);
      plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
      if (plVar7 == (long *)0x0) goto LAB_023bd530;
      if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar7);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar18,plVar7,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar18,plVar7,0);
      puVar5 = PTR_DAT_04cad330;
      lVar8 = *(long *)PTR_DAT_04cad330;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar5;
      }
      puVar14 = *(undefined4 **)(lVar8 + 0xb8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      System_Nullable_Color____ctor_2bc9090
                (*puVar14,puVar14[1],puVar14[2],puVar14[3],&uStack_68,
                 *(undefined8 *)PTR_DAT_04cac878);
      uStack_70 = uStack_58;
      uStack_78 = uStack_60;
      uStack_80 = uStack_68;
      lVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                         *(undefined8 *)PTR_DAT_04cb4e20,lVar11,*(undefined8 *)PTR_DAT_04cad4a8,
                         &uStack_80,0x202,0);
      if (lVar8 == 0) goto LAB_023bd530;
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar8,1,0);
      fVar19 = 0.0;
      TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar8,lVar11,0);
      fVar17 = 150.0;
      if (150.0 <= fVar19 + 70.0) {
        fVar17 = fVar19 + 70.0;
      }
      lVar11 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar8,0);
      if (lVar11 == 0) goto LAB_023bd530;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar17 + -50.0,lVar11,0);
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
      lVar11 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44660000,fVar17,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar7,
                          *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98
                          ,0);
      if (lVar11 == 0) goto LAB_023bd530;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar11,0);
      uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
      if ((uVar12 & 1) == 0) {
        fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar4;
        }
        if (_UNK_00e200f8 < fVar17 - *(float *)(*(long *)(lVar11 + 0xb8) + 0x18)) goto LAB_023bd36c;
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
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar5;
        }
        if (**(long **)(lVar11 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar11 + 0xb8),0);
        }
      }
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar4;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
      if ((uVar12 & 1) != 0) {
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar4;
        }
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                  (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10));
      }
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar4;
      }
      plVar9 = (long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      *plVar9 = lVar10;
      thunk_FUN_02134474(plVar9,lVar10);
      uVar18 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar18;
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      lVar11 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar10,0);
      if (lVar11 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar11,0,0);
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar10);
        return;
      }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x110) + 0x10) != '\0') {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_0245de8c;
      if (*(char *)(*(long *)(param_1 + 0x100) + 0x3c) == '\0') {
        return;
      }
    }
    lVar10 = *(long *)(param_1 + 0x160);
    uStack_38 = 0;
    lStack_40 = lVar11;
    thunk_FUN_02134474(&lStack_40,lVar11);
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_38 = CONCAT44(uStack_38._4_4_,fVar17 + *(float *)(*(long *)(param_1 + 0x100) + 0x38));
      if (lVar10 != 0) {
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cba4d8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            plVar7 = (long *)(lVar11 + 0x20);
            *plVar7 = lStack_40;
            *(undefined8 *)(lVar11 + 0x28) = uStack_38;
            thunk_FUN_02134474(plVar7,0);
          }
          else {
            System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                      (lVar10,lStack_40,uStack_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = *(long *)(param_1 + 0x160);
          if (lVar11 != 0) {
            if (3 < *(int *)(lVar11 + 0x18)) {
              System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                        (lVar11,0,*(undefined8 *)PTR_DAT_04cba4e0);
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

