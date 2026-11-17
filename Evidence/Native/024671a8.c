/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Restart
void Dino_BusSand_Cheat_CheatManager__Restart (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Restart
   void Dino_BusSand_Cheat_CheatManager__Restart (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

ulong Dino_BusSand_Cheat_CheatManager__Restart_23671a8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
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
  
  puVar2 = PTR_DAT_04cba458;
  if ((bRam0000000004f9c765 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba4b8);
    FUN_02132f7c(PTR_DAT_04cba978);
    bRam0000000004f9c765 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  puVar4 = PTR_DAT_04cba978;
  puVar3 = PTR_DAT_04cba458;
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_Cheat_CheatManager__get_CurrentLevel_235e1c4();
    puVar2 = PTR_DAT_04cba458;
    uVar14 = *(undefined8 *)puVar4;
    uStack_38._4_4_ = uVar6;
    if ((bRam0000000004f9c766 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab380);
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04cacb18);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04caa038);
      FUN_02132f7c(PTR_DAT_04cba520);
      FUN_02132f7c(PTR_DAT_04cba4b8);
      FUN_02132f7c(PTR_DAT_04cba528);
      FUN_02132f7c(PTR_DAT_04cab2b8);
      bRam0000000004f9c766 = 1;
    }
    uStack_38 = (ulong)uStack_38._4_4_ << 0x20;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
    if ((uVar13 & 1) == 0) {
      Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,*(undefined8 *)PTR_DAT_04cba4b8);
    }
    else {
      fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      puVar2 = PTR_DAT_04caba50;
      if (*(float *)(param_1 + 0x14c) <= fVar18) {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar2;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 != 0) {
          uVar16 = *(undefined8 *)(lVar12 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
          if ((uVar13 & 1) != 0) {
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0245ece4;
            if (*(int *)(*(long *)(lVar12 + 0x20) + 0x20) == 1) {
              return 0;
            }
          }
          if ((int)uVar6 < 2) {
            uVar6 = 1;
          }
          uStack_38 = CONCAT44(uVar6,(undefined4)uStack_38);
          fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
          *(float *)(param_1 + 0x14c) = fVar18 + _UNK_00e20590;
          Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(param_1);
          if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(uVar6,0);
          Dino_BusSand_App_Meta_Profile__Save_226c548(0);
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 3) = 1;
          Dino_BusSand_App_GameApp__EnterLevel_21644c8(lVar12,2,0);
          lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) != 0) {
              *(undefined8 *)(lVar12 + 0x20) = uVar14;
              thunk_FUN_02134474((undefined8 *)(lVar12 + 0x20),uVar14);
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_04cba520;
                thunk_FUN_02134474((undefined8 *)(lVar12 + 0x28));
                uVar14 = System_Int32__ToString_482d750((long)&uStack_38 + 4,0);
                if (2 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x30) = uVar14;
                  thunk_FUN_02134474((undefined8 *)(lVar12 + 0x30),uVar14);
                  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_04cba528;
                    thunk_FUN_02134474();
                    uVar5 = uStack_38._4_4_;
                    if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar5 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar5,0);
                    uStack_38 = CONCAT44(uStack_38._4_4_,uVar5);
                    uVar14 = System_Int32__ToString_482d750(&uStack_38,0);
                    if (4 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0x40) = uVar14;
                      thunk_FUN_02134474((undefined8 *)(lVar12 + 0x40),uVar14);
                      if (5 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)PTR_DAT_04cab2b8;
                        thunk_FUN_02134474();
                        uVar14 = System_String__Concat_46d31f0(lVar12,0);
                        Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar14);
                        return 1;
                      }
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
LAB_0245ece4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04cba4b8;
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
  Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar12);
  uVar13 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_1);
  if ((uVar13 & 1) != 0) {
    return uVar13;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  puVar2 = PTR_DAT_04caba50;
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar11 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar2;
      }
      puVar2 = PTR_DAT_04cabb08;
      lVar11 = **(long **)(lVar11 + 0xb8);
      if (lVar11 == 0) goto LAB_0245de8c;
      if ((bRam0000000004f9b87c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabb08,lVar12,0);
        bRam0000000004f9b87c = 1;
      }
      lVar11 = *(long *)(lVar11 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar5 = _UNK_00e20094;
      if ((bRam0000000004f9c314 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568,lVar12,0);
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
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
      puVar3 = PTR_DAT_04cabb08;
      if ((uVar13 & 1) != 0) {
        return uVar13;
      }
      lVar7 = *(long *)PTR_DAT_04cabb08;
      lVar9 = *(long *)PTR_DAT_04ca9c30;
      if (lVar12 != 0) {
        lVar9 = lVar12;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      **(long **)(lVar7 + 0xb8) = lVar9;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar9);
      uVar17 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar17;
      if (lVar11 == 0) goto LAB_023bd530;
      uVar14 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar11,4,0);
      plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
      uVar16 = *(undefined8 *)PTR_DAT_04cad730;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar11 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
      if (plVar8 == (long *)0x0) goto LAB_023bd530;
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
        uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar14,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar8[4] = lVar11;
      thunk_FUN_02134474(plVar8 + 4,lVar11);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar11,*(undefined8 *)PTR_DAT_04cb6578,plVar8,0);
      if ((lVar11 == 0) ||
         (lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0), lVar9 == 0))
      goto LAB_023bd530;
      UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar14,0,0);
      plVar8 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
      if (plVar8 == (long *)0x0) goto LAB_023bd530;
      if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar8);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar5,plVar8,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar5,plVar8,0);
      puVar4 = PTR_DAT_04cad330;
      lVar9 = *(long *)PTR_DAT_04cad330;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar4;
      }
      puVar15 = *(undefined4 **)(lVar9 + 0xb8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      System_Nullable_Color____ctor_2bc9090
                (*puVar15,puVar15[1],puVar15[2],puVar15[3],&uStack_68,
                 *(undefined8 *)PTR_DAT_04cac878);
      uStack_70 = uStack_58;
      uStack_78 = uStack_60;
      uStack_80 = uStack_68;
      lVar9 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar8,
                         *(undefined8 *)PTR_DAT_04cb4e20,lVar12,*(undefined8 *)PTR_DAT_04cad4a8,
                         &uStack_80,0x202,0);
      if (lVar9 == 0) goto LAB_023bd530;
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar9,1,0);
      fVar19 = 0.0;
      TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar9,lVar12,0);
      fVar18 = 150.0;
      if (150.0 <= fVar19 + 70.0) {
        fVar18 = fVar19 + 70.0;
      }
      lVar12 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar9,0);
      if (lVar12 == 0) goto LAB_023bd530;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar18 + -50.0,lVar12,0);
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar18,plVar8,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      fVar19 = 1.0;
      if (fVar18 / 241.0 <= 1.0) {
        fVar19 = fVar18 / 241.0;
      }
      lVar12 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44660000,fVar18,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar8,
                          *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98
                          ,0);
      if (lVar12 == 0) goto LAB_023bd530;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar12,0);
      uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
      if ((uVar13 & 1) == 0) {
        fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar3;
        }
        if (_UNK_00e200f8 < fVar18 - *(float *)(*(long *)(lVar12 + 0xb8) + 0x18)) goto LAB_023bd36c;
      }
      else {
LAB_023bd36c:
        puVar4 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar4;
        }
        if (**(long **)(lVar12 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar12 + 0xb8),0);
        }
      }
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar3;
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
      if ((uVar13 & 1) != 0) {
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar3;
        }
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                  (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10));
      }
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar3;
      }
      plVar10 = (long *)(*(long *)(lVar12 + 0xb8) + 0x10);
      *plVar10 = lVar11;
      thunk_FUN_02134474(plVar10,lVar11);
      uVar5 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar5;
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      lVar12 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar11,0);
      if (lVar12 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar12,0,0);
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar8,0,0,0);
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar8,0,0);
        uVar13 = Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar11);
        return uVar13;
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
        return uVar13;
      }
    }
    lVar11 = *(long *)(param_1 + 0x160);
    uStack_38 = 0;
    lStack_40 = lVar12;
    thunk_FUN_02134474(&lStack_40,lVar12);
    fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_38 = CONCAT44(uStack_38._4_4_,fVar18 + *(float *)(*(long *)(param_1 + 0x100) + 0x38));
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar9 = *(long *)PTR_DAT_04cba4d8;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar6 = *(uint *)(lVar11 + 0x18);
          if (uVar6 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar6 * 0x10;
            *(uint *)(lVar11 + 0x18) = uVar6 + 1;
            plVar8 = (long *)(lVar12 + 0x20);
            *plVar8 = lStack_40;
            *(long *)(lVar12 + 0x28) = uStack_38;
            thunk_FUN_02134474(plVar8,0);
          }
          else {
            System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                      (lVar11,lStack_40,uStack_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar13 = *(ulong *)(param_1 + 0x160);
          if (uVar13 != 0) {
            if (3 < *(int *)(uVar13 + 0x18)) {
              uVar13 = System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                                 (uVar13,0,*(undefined8 *)PTR_DAT_04cba4e0);
            }
            return uVar13;
          }
        }
      }
    }
  }
LAB_0245de8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

