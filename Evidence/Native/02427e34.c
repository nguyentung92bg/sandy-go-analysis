/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass9_0$$<OnOpen>b__2
void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0___OnOpen_b__2 (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass9_0$$<OnOpen>b__2
   void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0___OnOpen_b__2
   (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass9_0___OnOpen_b__2_2327e34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  puVar9 = PTR_DAT_04cb8d60;
  puVar8 = PTR_DAT_04ca9ae8;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
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
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
  System_Object___ctor_4870e5c(lVar11,0);
  uVar20 = *(undefined8 *)(lVar16 + 0x58);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
  puVar9 = PTR_DAT_04cb8da0;
  if ((uVar12 & 1) != 0) {
    return;
  }
  lVar21 = *(long *)(lVar16 + 0x58);
  uVar20 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04cb8da0,0);
  if (lVar21 != 0) {
    UnityEngine_UI_Image__set_sprite_44a7258(lVar21,uVar20,0);
    if (*(long *)(lVar16 + 0x58) != 0) {
      lVar21 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*(long *)(lVar16 + 0x58),0);
      Dino_BusSand_App_UI_ChestPanel__ChestSize_2326b08(*(undefined8 *)puVar9);
      if (lVar21 != 0) {
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(lVar21,0);
        if (*(long *)(lVar16 + 0x58) != 0) {
          uVar20 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar16 + 0x58),0);
          puVar9 = PTR_DAT_04cad4c0;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
          }
          Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e208d0,_UNK_00e203f4,uVar20,0,0,0);
          uVar20 = *(undefined8 *)(lVar16 + 0x60);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
          if ((uVar12 & 1) != 0) {
            if (*(long *)(lVar16 + 0x60) == 0) goto LAB_0242774c;
            uVar20 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar16 + 0x60),0);
            lVar21 = *(long *)puVar9;
            if (*(int *)(lVar21 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar21);
            }
            uVar20 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar20,0);
            Dino_BusSand_App_UI_UiMotion__Fade_2291234(0x3f800000,0x3e800000,0,uVar20,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar21 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0x442f0000,0x442f0000,0,0,0x3f800000,uVar1,
                              *(undefined8 *)PTR_DAT_04cb8d98,*(undefined8 *)PTR_DAT_04caf2c0,0,0);
          if (lVar11 != 0) {
            plVar22 = (long *)(lVar11 + 0x18);
            *plVar22 = lVar21;
            thunk_FUN_02134474(plVar22,lVar21);
            plVar13 = (long *)*plVar22;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x2a8))
                        (0x3f800000,_UNK_00e205fc,_UNK_00e20094,0x3f800000,plVar13,
                         *(undefined8 *)(*plVar13 + 0x2b0));
              Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                        (0x43960000,0,*plVar22,*(undefined8 *)PTR_DAT_04caf408);
              if (*plVar22 != 0) {
                lVar21 = UnityEngine_Component__get_transform_43bcd18(*plVar22,0);
                if (((*(long *)(lVar16 + 0x58) != 0) &&
                    (lVar14 = UnityEngine_Component__get_transform_43bcd18
                                        (*(long *)(lVar16 + 0x58),0), lVar14 != 0)) &&
                   (uVar10 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar14,0), lVar21 != 0))
                {
                  UnityEngine_Transform__SetSiblingIndex_43d4730(lVar21,uVar10,0);
                  if (*plVar22 != 0) {
                    uVar20 = UnityEngine_Component__get_gameObject_43bcde8(*plVar22,0);
                    lVar21 = *(long *)puVar9;
                    if (*(int *)(lVar21 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(lVar21);
                    }
                    uVar20 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar20,0);
                    *(undefined8 *)(lVar11 + 0x10) = uVar20;
                    thunk_FUN_02134474();
                    uVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                    System_Action_float____ctor_35f1448
                              (uVar20,lVar11,*(undefined8 *)PTR_DAT_04cb8d78,0);
                    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar11 = Dino_BusSand_App_Tween__Value_2160f64(0x3f000000,uVar20,0);
                    if ((lVar11 != 0) &&
                       (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0),
                       lVar11 != 0)) {
                      Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,lVar16,0);
                      puVar8 = PTR_DAT_04cad568;
                      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9b94e == '\0') {
                        FUN_02132f7c(PTR_DAT_04cad568);
                        cRam0000000004f9b94e = '\x01';
                      }
                      lVar11 = *(long *)puVar8;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar11 = *(long *)puVar8;
                      }
                      if (**(long **)(lVar11 + 0xb8) != 0) {
                        Dino_BusSand_GameAudio__ChestOpen_2383c7c(**(long **)(lVar11 + 0xb8),0);
                      }
                      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_Haptics__Play_2388ed8(4,0);
                      puVar8 = PTR_DAT_04cb8d10;
                      uVar20 = _UNK_00e69d68;
                      fVar7 = _UNK_00e20754;
                      fVar6 = _UNK_00e205f8;
                      fVar5 = _UNK_00e20390;
                      uVar10 = _UNK_00e1ff28;
                      if (lVar2 != 0) {
                        iVar3 = *(int *)(lVar2 + 0x18);
                        if (iVar3 < 1) {
                          return;
                        }
                        iVar19 = 0;
                        while( true ) {
                          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8d88);
                          System_Object___ctor_4870e5c(lVar11,0);
                          auVar25 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                                              (lVar2,iVar19,*(undefined8 *)PTR_DAT_04cadda0);
                          lVar21 = Dino_BusSand_App_UI_RewardPopup__RewardIcon_2325430
                                             (0x432a0000,uVar1,auVar25._0_8_,auVar25._8_8_,
                                              &uStack_c8);
                          uStack_e0 = 0;
                          uStack_d8 = 0;
                          lVar14 = *(long *)(lVar16 + 0x68);
                          uStack_d0 = 0;
                          System_ValueTuple_object__KeyValuePair_int__long_____ctor_30e9be4
                                    (&uStack_e0,uStack_c8,auVar25._0_8_,auVar25._8_8_,
                                     *(undefined8 *)PTR_DAT_04cb8d90);
                          if (lVar14 == 0) break;
                          lVar15 = *(long *)(lVar14 + 0x10);
                          lVar17 = *(long *)PTR_DAT_04cb8d68;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          if (lVar15 == 0) break;
                          uVar4 = *(uint *)(lVar14 + 0x18);
                          if (uVar4 < *(uint *)(lVar15 + 0x18)) {
                            lVar15 = lVar15 + (long)(int)uVar4 * 0x18;
                            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
                            *(undefined8 *)(lVar15 + 0x30) = uStack_d0;
                            *(undefined8 *)(lVar15 + 0x28) = uStack_d8;
                            *(undefined8 *)(lVar15 + 0x20) = uStack_e0;
                            thunk_FUN_02134474(lVar15 + 0x20,0);
                          }
                          else {
                            uStack_b8 = uStack_d8;
                            uStack_c0 = uStack_e0;
                            uStack_b0 = uStack_d0;
                            System_Collections_Generic_List_ValueTuple_object__KeyValuePair_int__long_____AddWithResize_39b3f04
                                      (lVar14,&uStack_c0,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          if (lVar11 == 0) break;
                          plVar13 = (long *)(lVar11 + 0x10);
                          *plVar13 = lVar21;
                          thunk_FUN_02134474(plVar13,lVar21);
                          lVar21 = *plVar13;
                          if (lVar21 == 0) break;
                          UnityEngine_RectTransform__set_anchorMax_43cf768
                                    (0x3f000000,0x3f800000,lVar21,0);
                          UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                    (0x3f000000,0x3f800000,lVar21,0);
                          *(undefined4 *)(lVar11 + 0x24) = 0xc40c0000;
                          *(undefined8 *)(lVar11 + 0x18) = uVar20;
                          *(float *)(lVar11 + 0x20) =
                               ((float)iVar19 - (float)(iVar3 + -1) / 2.0) * 260.0;
                          if (*(long *)(lVar11 + 0x10) == 0) break;
                          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                    (0,0xc3960000,*(long *)(lVar11 + 0x10),0);
                          lVar21 = *plVar13;
                          if (cRam0000000004f9b65e == '\0') {
                            FUN_02132f7c(PTR_DAT_04caa208);
                            cRam0000000004f9b65e = '\x01';
                          }
                          if (lVar21 == 0) break;
                          uVar23 = *(undefined8 *)
                                    (*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
                          fVar24 = (float)((ulong)uVar23 >> 0x20) * 0.2;
                          UnityEngine_Transform__set_localScale_43d1be0
                                    (CONCAT44(fVar24,(float)uVar23 * 0.2),fVar24,
                                     *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14)
                                     * fVar5,lVar21,0);
                          uVar23 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
                          System_Action_float____ctor_35f1448
                                    (uVar23,lVar11,*(undefined8 *)PTR_DAT_04cb8d80,0);
                          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          lVar11 = Dino_BusSand_App_Tween__Value_2160f64(uVar10,uVar23,0);
                          if (((lVar11 == 0) ||
                              (lVar11 = Dino_BusSand_App_Tween__SetDelay_2160ea8
                                                  ((float)iVar19 * fVar7 + fVar6,lVar11,0),
                              lVar11 == 0)) ||
                             (lVar11 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar11,1,0),
                             lVar11 == 0)) break;
                          lVar11 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar11,lVar16,0);
                          lVar21 = *(long *)puVar8;
                          if (*(int *)(lVar21 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(lVar21);
                            lVar21 = *(long *)puVar8;
                          }
                          puVar18 = *(undefined8 **)(lVar21 + 0xb8);
                          lVar14 = puVar18[2];
                          if (lVar14 == 0) {
                            if (*(int *)(lVar21 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(lVar21);
                              puVar18 = *(undefined8 **)(*(long *)puVar8 + 0xb8);
                            }
                            uVar23 = *puVar18;
                            lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                            System_Action___ctor_47b5ed0
                                      (lVar14,uVar23,*(undefined8 *)PTR_DAT_04cb8d70,0);
                            plVar13 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
                            *plVar13 = lVar14;
                            thunk_FUN_02134474(plVar13,lVar14);
                          }
                          if (lVar11 == 0) break;
                          Dino_BusSand_App_Tween__OnDone_2160edc(lVar11,lVar14,0);
                          iVar19 = iVar19 + 1;
                          if (iVar3 == iVar19) {
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

