/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$Init
void Dino_BusSand_App_UI_YachtRacingTrackRow__Init (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, Dino_BusSand_App_Meta_YachtRacingBot_o* bot, int32_t maxProcess, float racingRootHeight, int32_t stage, System_Action_o* onClaim, System_Action_RectTransform__Vector2__o* onShowTips, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$Init
   void Dino_BusSand_App_UI_YachtRacingTrackRow__Init (Dino_BusSand_App_UI_YachtRacingTrackRow_o*
   __this, Dino_BusSand_App_Meta_YachtRacingBot_o* bot, int32_t maxProcess, float racingRootHeight,
   int32_t stage, System_Action_o* onClaim, System_Action_RectTransform__Vector2__o* onShowTips,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_YachtRacingTrackRow__Init_21f5234
                (float param_1,ulong param_2,long param_3,int param_4,int param_5,undefined8 param_6
                ,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1118);
    FUN_02132f7c(PTR_DAT_04cb1130);
    FUN_02132f7c(PTR_DAT_04cb16a0);
    FUN_02132f7c(PTR_DAT_04cb16a8);
    FUN_02132f7c(PTR_DAT_04cb16b0);
    FUN_02132f7c(PTR_DAT_04cb16b8);
    FUN_02132f7c(PTR_DAT_04cb16c0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb16c8);
    bRam0000000004f9bc34 = 1;
  }
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_02134474((long *)(param_2 + 0x20),param_3);
  if (param_4 < 2) {
    param_4 = 1;
  }
  if (2 < param_5) {
    param_5 = 3;
  }
  *(int *)(param_2 + 0x28) = param_4;
  if (param_5 < 2) {
    param_5 = 1;
  }
  *(undefined8 *)(param_2 + 0x38) = param_6;
  *(int *)(param_2 + 0x2c) = param_5;
  *(float *)(param_2 + 0x30) = param_1 + -130.0 + -472.0;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x38),param_6);
  *(undefined8 *)(param_2 + 0x40) = param_7;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x40),param_7);
  Dino_BusSand_App_UI_YachtRacingTrackRow__InitComponent_21f5858(param_2);
  uVar11 = *(undefined8 *)(param_2 + 0x90);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar7 & 1) == 0) {
    if (param_3 == 0) goto LAB_022f5854;
  }
  else {
    if ((*(long *)(param_2 + 0x90) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x90),0),
       lVar8 == 0)) goto LAB_022f5854;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
    if ((*(long *)(param_2 + 0x90) == 0) ||
       (UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_2 + 0x90),1,0), param_3 == 0))
    goto LAB_022f5854;
    if (*(char *)(param_3 + 0x2c) != '\0') {
      Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f5e8c
                (*(undefined8 *)(param_2 + 0x90),*(undefined8 *)PTR_DAT_04cb16b0,0);
    }
  }
  if (*(char *)(param_3 + 0x2c) != '\0') {
    Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f5e8c
              (*(undefined8 *)(param_2 + 0x88),*(undefined8 *)PTR_DAT_04cb16c8,0);
  }
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  lVar8 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_2 + 0x78) == 0) goto LAB_022f5854;
    lVar8 = UnityEngine_Transform__Find_43d4bec
                      (*(long *)(param_2 + 0x78),*(undefined8 *)PTR_DAT_04cb16a0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  lVar12 = 0;
  if ((uVar7 & 1) != 0) {
    if (lVar8 == 0) goto LAB_022f5854;
    lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar8,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(char *)(param_3 + 0x2c) == '\0') {
    uVar7 = (ulong)*(uint *)(param_3 + 0x1c);
  }
  else {
    uVar7 = Dino_BusSand_App_UI_YachtRacingUi__get_PlayerHeadId_21f5f98();
  }
  uVar11 = Dino_BusSand_App_UI_YachtRacingUi__HeadSprite_21f5fe8(uVar7);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar12 == 0) goto LAB_022f5854;
      UnityEngine_UI_Image__set_sprite_44a7258(lVar12,uVar11,0);
    }
  }
  lVar8 = *(long *)(param_3 + 0x20);
  if ((*(char *)(param_3 + 0x2c) != '\0') &&
     (lVar12 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0), lVar12 != 0)) {
    lVar8 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0);
    if (lVar8 == 0) goto LAB_022f5854;
    lVar8 = Dino_BusSand_App_Meta_YachtRacingFeature__PlayerName_225b944(lVar8,0);
  }
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  uVar11 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_2 + 0x78) == 0) goto LAB_022f5854;
    uVar11 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(param_2 + 0x78),*(undefined8 *)PTR_DAT_04cb16b8,0);
  }
  puVar4 = PTR_DAT_04cb1130;
  puVar3 = PTR_DAT_04cb1118;
  lVar12 = *(long *)PTR_DAT_04ca9c30;
  if (lVar8 != 0) {
    lVar12 = lVar8;
  }
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,lVar12);
  uVar11 = System_Int32__ToString_482d750((int *)(param_2 + 0x2c),0);
  uVar11 = System_String__Concat_46d2b84(*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar3,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f5e8c(*(undefined8 *)(param_2 + 0x98),uVar11,1);
  Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f5e8c(*(undefined8 *)(param_2 + 0xa0),uVar11,1);
  uVar11 = *(undefined8 *)(param_2 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  uVar11 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_022f5854;
    uVar11 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(param_2 + 0x50),*(undefined8 *)PTR_DAT_04cb16c0,0);
  }
  lVar12 = *(long *)PTR_DAT_04ca9d18;
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb16a8;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  uVar9 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                    (*(undefined8 *)puVar3,**(undefined8 **)(lVar8 + 0xb8));
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar11 = System_Int32__ToString_482d750(param_3 + 0x18,0);
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar9,uVar11);
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
            (*(undefined8 *)(param_2 + 0x80),*(int *)(param_3 + 0x28) == 1);
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == *(int *)(param_3 + 0x18)) {
    *(bool *)(param_2 + 0x34) = *(int *)(param_2 + 0x28) <= iVar1;
    if (*(int *)(param_2 + 0x28) <= iVar1) {
      if (*(char *)(param_3 + 0x2c) == '\0') {
        uVar11 = *(undefined8 *)(param_2 + 0x58);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)(param_2 + 0x58);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          goto joined_r0x022f5850;
        }
      }
      else {
        uVar11 = *(undefined8 *)(param_2 + 0x50);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)(param_2 + 0x50);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
joined_r0x022f5850:
          if (lVar8 == 0) {
LAB_022f5854:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar12 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localScale_43d1be0
                    (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                     *(undefined4 *)(lVar12 + 0x14),lVar8,0);
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x34) = 0;
  }
  Dino_BusSand_App_UI_YachtRacingTrackRow__InitYachtPos_21f61c0(param_2);
  Dino_BusSand_App_UI_YachtRacingTrackRow__ActiveYacht_21f6310
            (param_2,*(undefined1 *)(param_3 + 0x2d));
  uVar7 = param_2;
  if ((bRam0000000004f9bc36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1738);
    FUN_02132f7c(PTR_DAT_04cb1740);
    uVar7 = FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bc36 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_2 + 0x35) == '\0') {
    uVar11 = *(undefined8 *)(param_2 + 0x50);
    *(undefined1 *)(param_2 + 0x35) = 1;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_022f64f8;
      uVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x50),0);
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar9,param_2,*(undefined8 *)PTR_DAT_04cb1738,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar9,1,*(undefined8 *)PTR_DAT_04cad948);
    }
    uVar11 = *(undefined8 *)(param_2 + 0x60);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_2 + 0x60) == 0) {
LAB_022f64f8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x60),0);
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,param_2,*(undefined8 *)PTR_DAT_04cb1740,0);
      puVar2 = PTR_DAT_04cb1660;
      uVar9 = *(undefined8 *)PTR_DAT_04cad948;
      if ((bRam0000000004f9bc9d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb1668);
        FUN_02132f7c(PTR_DAT_04cacf98);
        FUN_02132f7c(PTR_DAT_04cb1670);
        FUN_02132f7c(PTR_DAT_04cb0eb8);
        FUN_02132f7c(PTR_DAT_04cb1678);
        FUN_02132f7c(PTR_DAT_04cb1680);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cb1688);
        FUN_02132f7c(PTR_DAT_04cb1660);
        FUN_02132f7c(PTR_DAT_04caa8b8);
        bRam0000000004f9bc9d = 1;
      }
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar12,0);
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0x18);
        *plVar10 = lVar8;
        thunk_FUN_02134474(plVar10,lVar8);
        *(undefined8 *)(lVar12 + 0x20) = uVar11;
        thunk_FUN_02134474((undefined8 *)(lVar12 + 0x20),uVar11);
        puVar2 = PTR_DAT_04ca9ae8;
        if (*plVar10 != 0) {
          uVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                            (*plVar10,*(undefined8 *)PTR_DAT_04cb0eb8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
          if ((uVar5 & 1) == 0) {
            if (uVar7 == 0) goto LAB_022f5018;
          }
          else {
            if (*plVar10 == 0) goto LAB_022f5018;
            uVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                               (*plVar10,*(undefined8 *)PTR_DAT_04cb1678);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
            if ((uVar7 & 1) != 0) {
              if ((*plVar10 == 0) ||
                 (plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                             (*plVar10,*(undefined8 *)PTR_DAT_04cacf98),
                 plVar6 == (long *)0x0)) goto LAB_022f5018;
              (**(code **)(*plVar6 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0))
              ;
            }
            if ((*plVar10 == 0) ||
               (uVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (*plVar10,*(undefined8 *)PTR_DAT_04cb1668), uVar7 == 0))
            goto LAB_022f5018;
            UnityEngine_UI_Selectable__set_transition_4693ba8(uVar7,0,0);
          }
          puVar4 = PTR_DAT_04cb1688;
          puVar3 = PTR_DAT_04caa8b8;
          if (*(long *)(uVar7 + 0x100) != 0) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                      (*(long *)(uVar7 + 0x100),0);
            uVar11 = *(undefined8 *)puVar3;
            lVar8 = *(long *)(uVar7 + 0x100);
            *(undefined4 *)(lVar12 + 0x10) = 0xbf800000;
            uVar11 = thunk_FUN_0216e89c(uVar11);
            UnityEngine_Events_UnityAction___ctor_43d86d4(uVar11,lVar12,*(undefined8 *)puVar4,0);
            if (lVar8 != 0) {
              UnityEngine_Events_UnityEvent__AddListener_43d87a4(lVar8,uVar11,0);
              uVar11 = *(undefined8 *)(uVar7 + 0xe0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
              if ((uVar5 & 1) == 0) {
                if (*plVar10 == 0) goto LAB_022f5018;
                plVar6 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                           (*plVar10,*(undefined8 *)PTR_DAT_04cb1678);
              }
              else {
                plVar6 = *(long **)(uVar7 + 0xe0);
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
              if ((uVar5 & 1) != 0) {
                if (plVar6 == (long *)0x0) goto LAB_022f5018;
                (**(code **)(*plVar6 + 0x2c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2d0));
              }
              if (*plVar10 != 0) {
                lVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                  (*plVar10,*(undefined8 *)PTR_DAT_04cb1680);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*plVar10 == 0) goto LAB_022f5018;
                  lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                                    (*plVar10,*(undefined8 *)PTR_DAT_04cb1670);
                }
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x20) = uVar9;
                  thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20),uVar9);
                  return uVar7;
                }
              }
            }
          }
        }
      }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return uVar7;
}

