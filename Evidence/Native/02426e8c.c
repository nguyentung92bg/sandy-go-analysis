/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$Burst
void Dino_BusSand_App_UI_ChestPanel__Burst (Dino_BusSand_App_UI_ChestPanel_o* __this, UnityEngine_RectTransform_o* box, System_Collections_Generic_List_KeyValuePair_int__long___o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$Burst
   void Dino_BusSand_App_UI_ChestPanel__Burst (Dino_BusSand_App_UI_ChestPanel_o* __this,
   UnityEngine_RectTransform_o* box, System_Collections_Generic_List_KeyValuePair_int__long___o*
   rewards, const MethodInfo* method); */

void Dino_BusSand_App_UI_ChestPanel__Burst_2326e8c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  puVar7 = PTR_DAT_04cb8d60;
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cb8d68);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8d70);
    FUN_02132f7c(PTR_DAT_04cb8d78);
    FUN_02132f7c(PTR_DAT_04cb8d60);
    FUN_02132f7c(PTR_DAT_04cb8d80);
    FUN_02132f7c(PTR_DAT_04cb8d88);
    FUN_02132f7c(PTR_DAT_04cb8d10);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb8d90);
    FUN_02132f7c(PTR_DAT_04caf2c0);
    FUN_02132f7c(PTR_DAT_04cb8d98);
    FUN_02132f7c(PTR_DAT_04cb8da0);
    bRam0000000004f9c5e9 = 1;
  }
  uStack_c8 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
  System_Object___ctor_4870e5c(lVar9,0);
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar17,0,0);
  puVar7 = PTR_DAT_04cb8da0;
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x58);
  uVar17 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cb8da0,0);
  if (lVar18 != 0) {
    UnityEngine_UI_Image__set_sprite_44a7258(lVar18,uVar17,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar18 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*(long *)(param_1 + 0x58),0);
      Dino_BusSand_App_UI_ChestPanel__ChestSize_2326b08(*(undefined8 *)puVar7);
      if (lVar18 != 0) {
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(lVar18,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar17 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x58),0);
          puVar7 = PTR_DAT_04cad4c0;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e208d0,_UNK_00e203f4,uVar17,0,0,0);
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_0242774c;
            uVar17 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0);
            lVar18 = *(long *)puVar7;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar18);
            }
            uVar17 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar17,0);
            Dino_BusSand_App_UI_UiMotion__Fade_2291234(0x3f800000,0x3e800000,0,uVar17,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar18 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0x442f0000,0x442f0000,0,0,0x3f800000,param_2,
                              *(undefined8 *)PTR_DAT_04cb8d98,*(undefined8 *)PTR_DAT_04caf2c0,0,0);
          if (lVar9 != 0) {
            plVar19 = (long *)(lVar9 + 0x18);
            *plVar19 = lVar18;
            thunk_FUN_02134474(plVar19,lVar18);
            plVar11 = (long *)*plVar19;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x2a8))
                        (0x3f800000,_UNK_00e205fc,_UNK_00e20094,0x3f800000,plVar11,
                         *(undefined8 *)(*plVar11 + 0x2b0));
              Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                        (0x43960000,0,*plVar19,*(undefined8 *)PTR_DAT_04caf408);
              if (*plVar19 != 0) {
                lVar18 = UnityEngine_Component__get_transform_43bcd18(*plVar19,0);
                if (((*(long *)(param_1 + 0x58) != 0) &&
                    (lVar12 = UnityEngine_Component__get_transform_43bcd18
                                        (*(long *)(param_1 + 0x58),0), lVar12 != 0)) &&
                   (uVar8 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar12,0), lVar18 != 0))
                {
                  UnityEngine_Transform__SetSiblingIndex_43d4730(lVar18,uVar8,0);
                  if (*plVar19 != 0) {
                    uVar17 = UnityEngine_Component__get_gameObject_43bcde8(*plVar19,0);
                    lVar18 = *(long *)puVar7;
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(lVar18);
                    }
                    uVar17 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar17,0);
                    *(undefined8 *)(lVar9 + 0x10) = uVar17;
                    thunk_FUN_02134474();
                    uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                    System_Action_float____ctor_35f1448
                              (uVar17,lVar9,*(undefined8 *)PTR_DAT_04cb8d78,0);
                    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar9 = Dino_BusSand_App_Tween__Value_2160f64(0x3f000000,uVar17,0);
                    if ((lVar9 != 0) &&
                       (lVar9 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar9,1,0), lVar9 != 0))
                    {
                      Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar9,param_1,0);
                      puVar6 = PTR_DAT_04cad568;
                      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b94e == '\0') {
                        FUN_02132f7c(PTR_DAT_04cad568);
                        cRam0000000004f9b94e = '\x01';
                      }
                      lVar9 = *(long *)puVar6;
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar9 = *(long *)puVar6;
                      }
                      if (**(long **)(lVar9 + 0xb8) != 0) {
                        Dino_BusSand_GameAudio__ChestOpen_2383c7c(**(long **)(lVar9 + 0xb8),0);
                      }
                      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_Haptics__Play_2388ed8(4,0);
                      puVar6 = PTR_DAT_04cb8d10;
                      uVar17 = _UNK_00e69d68;
                      fVar5 = _UNK_00e20754;
                      fVar4 = _UNK_00e205f8;
                      fVar3 = _UNK_00e20390;
                      uVar8 = _UNK_00e1ff28;
                      if (param_3 != 0) {
                        iVar1 = *(int *)(param_3 + 0x18);
                        if (iVar1 < 1) {
                          return;
                        }
                        iVar16 = 0;
                        while( true ) {
                          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8d88);
                          System_Object___ctor_4870e5c(lVar9,0);
                          auVar22 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                                              (param_3,iVar16,*(undefined8 *)PTR_DAT_04cadda0);
                          lVar18 = Dino_BusSand_App_UI_RewardPopup__RewardIcon_2325430
                                             (0x432a0000,param_2,auVar22._0_8_,auVar22._8_8_,
                                              &uStack_c8);
                          uStack_e0 = 0;
                          uStack_d8 = 0;
                          lVar12 = *(long *)(param_1 + 0x68);
                          uStack_d0 = 0;
                          System_ValueTuple_object__KeyValuePair_int__long_____ctor_30e9be4
                                    (&uStack_e0,uStack_c8,auVar22._0_8_,auVar22._8_8_,
                                     *(undefined8 *)PTR_DAT_04cb8d90);
                          if (lVar12 == 0) break;
                          lVar13 = *(long *)(lVar12 + 0x10);
                          lVar14 = *(long *)PTR_DAT_04cb8d68;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar13 == 0) break;
                          uVar2 = *(uint *)(lVar12 + 0x18);
                          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                            lVar13 = lVar13 + (long)(int)uVar2 * 0x18;
                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                            *(undefined8 *)(lVar13 + 0x30) = uStack_d0;
                            *(undefined8 *)(lVar13 + 0x28) = uStack_d8;
                            *(undefined8 *)(lVar13 + 0x20) = uStack_e0;
                            thunk_FUN_02134474(lVar13 + 0x20,0);
                          }
                          else {
                            uStack_b8 = uStack_d8;
                            uStack_c0 = uStack_e0;
                            uStack_b0 = uStack_d0;
                            System_Collections_Generic_List_ValueTuple_object__KeyValuePair_int__long_____AddWithResize_39b3f04
                                      (lVar12,&uStack_c0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                          }
                          if (lVar9 == 0) break;
                          plVar11 = (long *)(lVar9 + 0x10);
                          *plVar11 = lVar18;
                          thunk_FUN_02134474(plVar11,lVar18);
                          lVar18 = *plVar11;
                          if (lVar18 == 0) break;
                          UnityEngine_RectTransform__set_anchorMax_43cf768
                                    (0x3f000000,0x3f800000,lVar18,0);
                          UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                    (0x3f000000,0x3f800000,lVar18,0);
                          *(undefined4 *)(lVar9 + 0x24) = 0xc40c0000;
                          *(undefined8 *)(lVar9 + 0x18) = uVar17;
                          *(float *)(lVar9 + 0x20) =
                               ((float)iVar16 - (float)(iVar1 + -1) / 2.0) * 260.0;
                          if (*(long *)(lVar9 + 0x10) == 0) break;
                          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                    (0,0xc3960000,*(long *)(lVar9 + 0x10),0);
                          lVar18 = *plVar11;
                          if (cRam0000000004f9b65e == '\0') {
                            FUN_02132f7c(PTR_DAT_04caa208);
                            cRam0000000004f9b65e = '\x01';
                          }
                          if (lVar18 == 0) break;
                          uVar20 = *(undefined8 *)
                                    (*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
                          fVar21 = (float)((ulong)uVar20 >> 0x20) * 0.2;
                          UnityEngine_Transform__set_localScale_43d1be0
                                    (CONCAT44(fVar21,(float)uVar20 * 0.2),fVar21,
                                     *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14)
                                     * fVar3,lVar18,0);
                          uVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                          System_Action_float____ctor_35f1448
                                    (uVar20,lVar9,*(undefined8 *)PTR_DAT_04cb8d80,0);
                          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          lVar9 = Dino_BusSand_App_Tween__Value_2160f64(uVar8,uVar20,0);
                          if (((lVar9 == 0) ||
                              (lVar9 = Dino_BusSand_App_Tween__SetDelay_2160ea8
                                                 ((float)iVar16 * fVar5 + fVar4,lVar9,0), lVar9 == 0
                              )) || (lVar9 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar9,1,0),
                                    lVar9 == 0)) break;
                          lVar9 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar9,param_1,0);
                          lVar18 = *(long *)puVar6;
                          if (*(int *)(lVar18 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(lVar18);
                            lVar18 = *(long *)puVar6;
                          }
                          puVar15 = *(undefined8 **)(lVar18 + 0xb8);
                          lVar12 = puVar15[2];
                          if (lVar12 == 0) {
                            if (*(int *)(lVar18 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar18);
                              puVar15 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
                            }
                            uVar20 = *puVar15;
                            lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                            System_Action___ctor_47b5ed0
                                      (lVar12,uVar20,*(undefined8 *)PTR_DAT_04cb8d70,0);
                            plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
                            *plVar11 = lVar12;
                            thunk_FUN_02134474(plVar11,lVar12);
                          }
                          if (lVar9 == 0) break;
                          Dino_BusSand_App_Tween__OnDone_2160edc(lVar9,lVar12,0);
                          iVar16 = iVar16 + 1;
                          if (iVar1 == iVar16) {
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0242774c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

