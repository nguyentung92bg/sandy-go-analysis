/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$<OnAdClick>b__23_0
void Dino_BusSand_App_UI_PowerBuyPanel___OnAdClick_b__23_0 (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$<OnAdClick>b__23_0
   void Dino_BusSand_App_UI_PowerBuyPanel___OnAdClick_b__23_0 (Dino_BusSand_App_UI_PowerBuyPanel_o*
   __this, bool ok, const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel___OnAdClick_b__23_0_22b1608(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
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
  
  if ((bRam0000000004f9c2cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caceb0);
    bRam0000000004f9c2cf = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  puVar1 = PTR_DAT_04cabaf8;
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04ca9ae8;
    iVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
    iVar5 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
    if (iVar4 - iVar5 < 1) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0x2c) == '\0')) {
        Dino_BusSand_App_UI_PowerBuyPanel__Finish_22b07f4(param_1,1);
      }
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Add_2272578(0x3ea,1,*(undefined8 *)PTR_DAT_04caceb0,0);
      puVar1 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      if (**(long **)(lVar7 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__SuccessSoft_2383864(**(long **)(lVar7 + 0xb8),0);
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
    if (((uVar8 & 1) == 0) || (*(char *)(param_1 + 0x2c) != '\0')) {
      return;
    }
    if ((bRam0000000004f9c2ce & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04caf1a8);
      FUN_02132f7c(PTR_DAT_04cac748);
      bRam0000000004f9c2ce = 1;
    }
    puVar1 = PTR_DAT_04cabaf8;
    if ((*(char *)(param_1 + 0x2c) == '\0') && (*(char *)(param_1 + 0x44) == '\0')) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_Profile__get_HasHeartToPlay_2272cc8(0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(param_1 + 0x40) == -1) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar4 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
          iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
          if (iVar4 < iVar5) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
            if ((uVar8 & 1) == 0) {
              return;
            }
          }
        }
        puVar1 = PTR_DAT_04caba50;
        if (*(char *)(param_1 + 0x45) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar7 = *(long *)puVar1;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_04ca9ae8;
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar7 == 0) goto LAB_023b15f4;
            if (*(char *)(lVar7 + 0x39) == '\0') {
              if (cRam0000000004f9b94d == '\0') {
                FUN_02132f7c(PTR_DAT_04cad1b0);
                cRam0000000004f9b94d = '\x01';
              }
              puVar2 = PTR_DAT_04cad1b0;
              uVar15 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
              if ((uVar8 & 1) != 0) {
                if (cRam0000000004f9b94d == '\0') {
                  FUN_02132f7c(PTR_DAT_04cad1b0);
                  cRam0000000004f9b94d = '\x01';
                }
                lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
                if (lVar7 == 0) {
LAB_023b15f4:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar8 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                  (lVar7,*(undefined8 *)PTR_DAT_04cac748);
                if ((uVar8 & 1) != 0) {
                  if (cRam0000000004f9b94d == '\0') {
                    FUN_02132f7c(PTR_DAT_04cad1b0);
                    cRam0000000004f9b94d = '\x01';
                  }
                  lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
                  if (lVar7 == 0) goto LAB_023b15f4;
                  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                            (lVar7,*(undefined8 *)PTR_DAT_04caf1a8);
                }
              }
            }
          }
          plVar6 = (long *)(param_1 + 0x38);
          lVar7 = *plVar6;
          *plVar6 = 0;
          thunk_FUN_02134474(plVar6,0);
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
          if (lVar7 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x023b083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),1,*(undefined8 *)(lVar7 + 0x28))
          ;
          return;
        }
        *(undefined1 *)(param_1 + 0x46) = 1;
      }
    }
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac888);
    FUN_02132f7c(PTR_DAT_04cac890);
    bRam0000000004f9b8e7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b892 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    cRam0000000004f9b892 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (lVar7 == 0) {
LAB_0226adb4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = System_String__StartsWith_46d11d4(lVar7,*(undefined8 *)PTR_DAT_04cac890,4,0);
  puVar1 = PTR_DAT_04caba50;
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  uVar15 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  lVar14 = *(long *)PTR_DAT_04ca9d18;
  lVar12 = **(long **)(lVar7 + 0xb8);
  lVar7 = *(long *)(lVar14 + 0x38);
  if (lVar7 == 0) {
    FUN_0216b4cc(lVar14);
    lVar7 = *(long *)(lVar14 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  uVar15 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  lVar7 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cac888,uVar15,0);
  puVar1 = PTR_DAT_04cabb08;
  if (lVar12 == 0) goto LAB_0226adb4;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar7,0);
    bRam0000000004f9b87c = 1;
  }
  lVar12 = *(long *)(lVar12 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar18 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar7,0);
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
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
  puVar2 = PTR_DAT_04cabb08;
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04cabb08;
  lVar14 = *(long *)PTR_DAT_04ca9c30;
  if (lVar7 != 0) {
    lVar14 = lVar7;
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
  **(long **)(lVar9 + 0xb8) = lVar14;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar14);
  uVar16 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar16;
  if (lVar12 == 0) goto LAB_023bd530;
  uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar12,4,0);
  plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar13 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
  if (plVar6 == (long *)0x0) goto LAB_023bd530;
  if ((lVar12 != 0) &&
     (lVar14 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar14 == 0)) {
    uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar15,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar6[4] = lVar12;
  thunk_FUN_02134474(plVar6 + 4,lVar12);
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar12,*(undefined8 *)PTR_DAT_04cb6578,plVar6,0);
  if ((lVar12 == 0) ||
     (lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0), lVar14 == 0))
  goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar14,uVar15,0,0);
  plVar6 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
  if (plVar6 == (long *)0x0) goto LAB_023bd530;
  if (*plVar6 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar6);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar18,plVar6,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar18,plVar6,0);
  puVar3 = PTR_DAT_04cad330;
  lVar14 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar3;
  }
  puVar11 = *(undefined4 **)(lVar14 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar11,puVar11[1],puVar11[2],puVar11[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar14 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar6,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar7,*(undefined8 *)PTR_DAT_04cad4a8,
                      &uStack_80,0x202,0);
  if (lVar14 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar14,1,0);
  fVar19 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar14,lVar7,0);
  fVar17 = 150.0;
  if (150.0 <= fVar19 + 70.0) {
    fVar17 = fVar19 + 70.0;
  }
  lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar14,0);
  if (lVar7 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar17 + -50.0,lVar7,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar17,plVar6,0);
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
  lVar7 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (0x44660000,fVar17,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar6,
                     *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar7 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar7,0);
  uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
  if ((uVar8 & 1) == 0) {
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    if (_UNK_00e200f8 < fVar17 - *(float *)(*(long *)(lVar7 + 0xb8) + 0x18)) goto LAB_023bd36c;
  }
  else {
LAB_023bd36c:
    puVar3 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar7 + 0xb8),0);
    }
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10));
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  plVar10 = (long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  *plVar10 = lVar12;
  thunk_FUN_02134474(plVar10,lVar12);
  uVar18 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar4 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar18;
  if (iVar4 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar12,0);
  if (lVar7 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar7,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar6,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar6,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar12);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

