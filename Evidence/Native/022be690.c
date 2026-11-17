/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel$$OnOpen
void Dino_BusSand_App_UI_EventIntroPanel__OnOpen (Dino_BusSand_App_UI_EventIntroPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel$$OnOpen
   void Dino_BusSand_App_UI_EventIntroPanel__OnOpen (Dino_BusSand_App_UI_EventIntroPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_EventIntroPanel__OnOpen_21be690(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f9bad5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cafb00);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cafb08);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cafb10);
    FUN_02132f7c(PTR_DAT_04cafb18);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cad4d0);
    FUN_02132f7c(PTR_DAT_04cafb20);
    FUN_02132f7c(PTR_DAT_04cafb28);
    FUN_02132f7c(PTR_DAT_04cafb30);
    FUN_02132f7c(PTR_DAT_04cafb38);
    FUN_02132f7c(PTR_DAT_04caf5c8);
    FUN_02132f7c(PTR_DAT_04cafb40);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04caf478);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9bad5 = 1;
  }
  uStack_a8 = (ulong)(uint)uStack_a8;
  if ((param_2 != (long *)0x0) && (*param_2 == *(long *)PTR_DAT_04cafb00)) {
    piVar14 = (int *)thunk_FUN_0216e9e4(param_2);
    iVar38 = *piVar14;
    if (iVar38 != 0) {
      uVar18 = Dino_BusSand_App_UI_EventKit__Title_21b65ec(iVar38);
      Dino_BusSand_App_UI_KitPopup__PanelAndRow_2280b64(0x44480000,0x418c0000,0);
      uVar12 = Dino_BusSand_App_UI_KitPopup__Height_2280b34(0);
      uStack_d8 = param_1;
                    /* catch() { ... } // from try @ 022be918 with catch @ 022be8c0 */
      lVar16 = Dino_BusSand_App_UI_KitPopup__Build_2280d18
                         (0x44750000,uVar12,_UNK_00e204d4,param_1,uVar18,0,1,0);
      uVar18 = Dino_BusSand_App_UI_KitParts__RewardBox_230ff1c
                         (0x44480000,0x43520000,0x441b0000,lVar16,0);
                    /* try { // try from 022be908 to 023be917 has its CatchHandler @ 022be93c */
      uVar26 = Dino_BusSand_App_UI_EventKit__Icon_21b6b54(iVar38);
      puVar4 = PTR_DAT_04cad330;
                    /* try { // try from 022be918 to 023be953 has its CatchHandler @ 022be8c0 */
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
      }
                    /* catch() { ... } // from try @ 022be908 with catch @ 022be93c */
      lVar17 = Dino_BusSand_App_UI_UiKit__Img_228203c
                         (0x43870000,0x43870000,0,0,0x3f800000,uVar18,
                          *(undefined8 *)PTR_DAT_04caf478,uVar26,0,0);
      Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                (0x433e0000,0,lVar17,*(undefined8 *)PTR_DAT_04caf408);
      if (lVar17 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022be9e4 with catch @ 022be988
                        */
        uVar26 = UnityEngine_Component__get_transform_43bcd18(lVar17,0);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
        }
        uVar2 = _UNK_00e207cc;
        uVar12 = _UNK_00e1feac;
                    /* try { // try from 022be9e0 to 023be9e3 has its CatchHandler @ 022bea50 */
                    /* try { // try from 022be9e4 to 023bea53 has its CatchHandler @ 022be988 */
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (_UNK_00e20328,_UNK_00e207cc,_UNK_00e203f4,_UNK_00e1feac,uVar26,0,0,0);
        lVar17 = Dino_BusSand_App_UI_EventKit__Rules_21bd1ac(iVar38);
        if (lVar17 != 0) {
          lStack_e0 = lVar16;
          plVar15 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cafb10,
                                         *(undefined4 *)(lVar17 + 0x18));
          fVar32 = _UNK_00e20754;
          fVar31 = _UNK_00e20590;
          uStack_a8 = uStack_a8 & 0xffffffff;
          if (*(int *)(lVar17 + 0x18) < 1) {
            if (plVar15 == (long *)0x0) goto LAB_022bf118;
          }
          else {
            do {
              uVar26 = System_Int32__ToString_482d750((long)&uStack_a8 + 4,0);
              uVar26 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cafb20,uVar26,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              lVar16 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                 (0x42700000,0x42700000,0,0,0x3f800000,uVar18,uVar26,
                                  *(undefined8 *)PTR_DAT_04caf5c8,0,0);
              Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                        ((float)(int)uStack_a8._4_4_ * 124.0 + 420.0,0xc3aa0000,lVar16,
                         *(undefined8 *)PTR_DAT_04caf408);
              uVar29 = uStack_a8._4_4_;
              lVar28 = (long)(int)uStack_a8._4_4_;
              uVar26 = System_Int32__ToString_482d750((long)&uStack_a8 + 4,0);
              uVar26 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cafb40,uVar26,0);
              if (*(uint *)(lVar17 + 0x18) <= uStack_a8._4_4_) goto LAB_022bf114;
              puVar25 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
              uVar30 = *(undefined8 *)(lVar17 + (long)(int)uStack_a8._4_4_ * 8 + 0x20);
              uStack_b8 = 0;
              uStack_b0 = 0;
              uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
              System_Nullable_Color____ctor_2bc9090
                        (*puVar25,puVar25[1],puVar25[2],puVar25[3],&uStack_b8,
                         *(undefined8 *)PTR_DAT_04cac878);
              lStack_c0 = CONCAT44(lStack_c0._4_4_,(uint)uStack_a8);
              puStack_c8 = (undefined8 *)uStack_b0;
              uStack_d0 = uStack_b8;
              lVar19 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                 (0x42480000,0x44200000,0x42ec0000,0,0,uVar18,uVar26,uVar30,
                                  *(undefined8 *)PTR_DAT_04cad4a8,&uStack_d0,0x1001,0);
              if (plVar15 == (long *)0x0) goto LAB_022bf118;
              if ((lVar19 != 0) &&
                 (lVar20 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar20 == 0)
                 ) {
                uVar18 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar18,0);
              }
              if (*(uint *)(plVar15 + 3) <= uVar29) goto LAB_022bf114;
              plVar15[lVar28 + 4] = lVar19;
              thunk_FUN_02134474(plVar15 + lVar28 + 4,lVar19);
              if (*(uint *)(plVar15 + 3) <= uStack_a8._4_4_) goto LAB_022bf114;
              if (plVar15[(long)(int)uStack_a8._4_4_ + 4] == 0) goto LAB_022bf118;
              TMPro_TMP_Text__set_lineSpacing_42cc758
                        (0xc1400000,plVar15[(long)(int)uStack_a8._4_4_ + 4],0);
              if (*(uint *)(plVar15 + 3) <= uStack_a8._4_4_) goto LAB_022bf114;
              Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                        ((float)(int)uStack_a8._4_4_ * 124.0 + 420.0,0x42200000,
                         plVar15[(long)(int)uStack_a8._4_4_ + 4],*(undefined8 *)PTR_DAT_04cafb08);
              if (lVar16 == 0) goto LAB_022bf118;
              uVar26 = UnityEngine_Component__get_transform_43bcd18(lVar16,0);
              iVar38 = uStack_a8._4_4_;
              if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
              }
              Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                        ((float)iVar38 * fVar32 + fVar31,uVar2,uVar2,uVar12,uVar26,0,0,0);
              iVar38 = uStack_a8._4_4_ + 1;
              uStack_a8 = CONCAT44(iVar38,(uint)uStack_a8);
            } while (iVar38 < *(int *)(lVar17 + 0x18));
          }
          uVar29 = *(uint *)(plVar15 + 3);
          if (0 < (int)uVar29) {
            uVar13 = 0;
            do {
              if (uVar29 <= uVar13) goto LAB_022bf114;
              plVar27 = (long *)plVar15[(long)(int)uVar13 + 4];
              if (plVar27 == (long *)0x0) goto LAB_022bf118;
              uVar18 = (**(code **)(*plVar27 + 0x508))(plVar27,*(undefined8 *)(*plVar27 + 0x510));
              fVar32 = (float)TMPro_TMP_Text__GetPreferredValues_42d1a10
                                        (0x7f800000,0x7f800000,plVar27,uVar18,0);
              fVar31 = 1.0;
              if (1.0 <= fVar32) {
                fVar31 = fVar32;
              }
              uVar18 = 0x42280000;
              if (32000.0 / fVar31 < 42.0) {
                TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar27,1,0);
                uVar18 = 0x42180000;
              }
              TMPro_TMP_Text__set_fontSizeMin_42cc4a4(uVar18,plVar27,0);
              uVar29 = *(uint *)(plVar15 + 3);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar29);
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiKit__SameSize_228b5cc(plVar15,0);
          uVar12 = _UNK_00e20094;
          uVar29 = *(uint *)(plVar15 + 3);
          if (0 < (int)uVar29) {
            lVar16 = 0;
            do {
              if (uVar29 <= (uint)lVar16) goto LAB_022bf114;
              lVar17 = plVar15[lVar16 + 4];
              if (lVar17 == 0) goto LAB_022bf118;
              TMPro_TMP_Text__set_alignment_42cc610(lVar17,0x1001,0);
              if (*(int *)(lVar17 + 0x308) == 1) {
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_UI_UiKit__BalanceLines_228b744(uVar12,lVar17,0);
              }
              fVar32 = _UNK_00e20754;
              uVar2 = _UNK_00e206e4;
              fVar31 = _UNK_00e20104;
              uVar29 = *(uint *)(plVar15 + 3);
              lVar16 = lVar16 + 1;
            } while ((int)lVar16 < (int)uVar29);
            if (0 < (int)uVar29) {
              lVar16 = 0;
              do {
                if (uVar29 <= (uint)lVar16) {
LAB_022bf114:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                if (plVar15[lVar16 + 4] == 0) goto LAB_022bf118;
                uVar18 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar15[lVar16 + 4],0);
                if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
                }
                Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc
                          (0x42700000,0,(float)(int)(uint)lVar16 * fVar32 + fVar31,uVar2,uVar18,1,0)
                ;
                uVar29 = *(uint *)(plVar15 + 3);
                lVar16 = lVar16 + 1;
              } while ((int)lVar16 < (int)uVar29);
            }
          }
          if (lStack_e0 != 0) {
            uVar18 = *(undefined8 *)(lStack_e0 + 0x28);
            uVar12 = Dino_BusSand_App_UI_KitPopup__RowY_2280b50(0x44480000,0x418c0000,0);
            lVar17 = *(long *)PTR_DAT_04ca9d18;
            lVar16 = *(long *)(lVar17 + 0x38);
            if (lVar16 == 0) {
              FUN_0216b4cc(lVar17);
              lVar16 = *(long *)(lVar17 + 0x38);
            }
            lVar16 = *(long *)(lVar16 + 0x10);
            if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_0216b470();
            }
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
            if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_0216b470();
            }
            uVar26 = **(undefined8 **)(lVar16 + 0xb8);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar26 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                               (*(undefined8 *)PTR_DAT_04cafb28,*(undefined8 *)PTR_DAT_04cafb38,
                                uVar26,0);
            puVar3 = PTR_DAT_04cad4d0;
            uVar18 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                               (_UNK_00e20a78,uVar12,0,0x42940000,0x436c0000,uVar18,
                                *(undefined8 *)PTR_DAT_04cad4d0,0,uVar26,0,0);
            Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e1fef8,_UNK_00e20170,uVar18,0);
            puVar4 = PTR_DAT_04caa458;
            uVar18 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            lVar16 = uStack_d8;
            puVar6 = PTR_DAT_04cafb18;
            System_Action___ctor_47b5ed0(uVar18,uStack_d8,*(undefined8 *)PTR_DAT_04cafb18,0);
            puVar5 = PTR_DAT_04cad948;
            Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                      (lVar16,*(undefined8 *)puVar3,uVar18,1,*(undefined8 *)PTR_DAT_04cad948,0);
            uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Action___ctor_47b5ed0(uVar18,lVar16,*(undefined8 *)puVar6,0);
            Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                      (lVar16,*(undefined8 *)PTR_DAT_04cad460,uVar18,1,*(undefined8 *)puVar5,0);
            puVar4 = PTR_DAT_04cad568;
            if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b94e == '\0') {
              FUN_02132f7c(PTR_DAT_04cad568);
              cRam0000000004f9b94e = '\x01';
            }
            lVar16 = *(long *)puVar4;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar16 = *(long *)puVar4;
            }
            uVar22 = 0;
            if (**(long **)(lVar16 + 0xb8) != 0) {
              uVar22 = Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar16 + 0xb8),0);
            }
            return uVar22;
          }
        }
      }
LAB_022bf118:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  puVar4 = PTR_DAT_04cafb30;
                    /* try { // try from 022be820 to 023be827 has its CatchHandler @ 022be83c */
  if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression_221a688
            (*(undefined8 *)puVar4,*(undefined8 *)puVar4,0);
  puVar4 = PTR_DAT_04cafb48;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022be820 with catch @ 022be83c
                        */
  if ((bRam0000000004f9bad6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cad468);
    FUN_02132f7c(PTR_DAT_04cafb50);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cafb48);
    FUN_02132f7c(PTR_DAT_04cafb18);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4d0);
    FUN_02132f7c(PTR_DAT_04cafb58);
    FUN_02132f7c(PTR_DAT_04cafb60);
    FUN_02132f7c(PTR_DAT_04cafb68);
    FUN_02132f7c(PTR_DAT_04cafb70);
    FUN_02132f7c(PTR_DAT_04caf320);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cafb78);
    bRam0000000004f9bad6 = 1;
  }
  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_App_UI_ArtPopup_Look___ctor_217f3d8(lVar16,0);
  puVar6 = PTR_DAT_04cafb68;
  puVar5 = PTR_DAT_04caf320;
  puVar3 = PTR_DAT_04cad468;
  puVar4 = PTR_DAT_04ca9d18;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)PTR_DAT_04cafb58;
  thunk_FUN_02134474();
  *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)puVar5;
  *(undefined4 *)(lVar16 + 0x18) = 0x43918000;
  thunk_FUN_02134474((undefined8 *)(lVar16 + 0x30));
  uVar18 = _UNK_00e6bb20;
  lVar17 = *(long *)puVar3;
  *(undefined8 *)(lVar16 + 0x40) = _UNK_00e6bb28;
  *(undefined8 *)(lVar16 + 0x38) = uVar18;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar18 = Dino_BusSand_App_UI_ArtPopup__Build_217e350(param_1,lVar16,*(undefined8 *)puVar6,0);
  lVar17 = *(long *)puVar4;
  lVar16 = *(long *)(lVar17 + 0x38);
  if (lVar16 == 0) {
    FUN_0216b4cc(lVar17);
    lVar16 = *(long *)(lVar17 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_0216b470();
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cad330;
  lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_0216b470();
  }
  puVar11 = PTR_DAT_04cafb78;
  puVar10 = PTR_DAT_04cafb70;
  puVar9 = PTR_DAT_04cafb60;
  puVar8 = PTR_DAT_04cafb50;
  puVar7 = PTR_DAT_04cad948;
  puVar6 = PTR_DAT_04cad568;
  puVar5 = PTR_DAT_04cad4d0;
  puVar3 = PTR_DAT_04caa458;
  uVar26 = **(undefined8 **)(lVar16 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar26 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar9,*(undefined8 *)puVar11,uVar26,0);
  Dino_BusSand_App_UI_ArtPopup__Intro_217eda8
            (_UNK_00e20afc,_UNK_00e2025c,0x429a0000,_UNK_00e201fc,_UNK_00e20760,0x434f0000,
             0x43fd0000,_UNK_00e20108,uVar18,*(undefined8 *)puVar10,uVar26,param_1 + 0x38,0);
  uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar18,param_1,*(undefined8 *)puVar8,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar5,uVar18,1,*(undefined8 *)puVar7,0);
  uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar18,param_1,*(undefined8 *)PTR_DAT_04cafb18,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)PTR_DAT_04cad460,uVar18,1,*(undefined8 *)puVar7,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar6;
  }
  puVar4 = PTR_DAT_04cad568;
  if (**(long **)(lVar16 + 0xb8) == 0) {
    return 0;
  }
  uVar18 = 0;
  if ((bRam0000000004f9c831 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,0);
    FUN_02132f7c(PTR_DAT_04cbb3e8);
    bRam0000000004f9c831 = 1;
    uVar18 = extraout_x1_01;
  }
  puVar3 = PTR_DAT_04cbb3e8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar18 = extraout_x1_02;
  }
  puVar4 = PTR_DAT_04cab1f0;
  uVar26 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9c827 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c827 = 1;
    uVar18 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar18 = extraout_x1_00;
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0,uVar18);
    cRam0000000004f9b88a = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar16 = *(long *)puVar4;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar4;
  }
  uVar18 = **(undefined8 **)(lVar16 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar22 = UnityEngine_Object__op_Inequality_43c8dec(uVar18,0,0);
  if ((uVar22 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar16 = *(long *)puVar4;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar16 = *(long *)puVar4;
  }
  lVar16 = **(long **)(lVar16 + 0xb8);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c7ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb220);
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cbb120);
    FUN_02132f7c(PTR_DAT_04cad660);
    FUN_02132f7c(PTR_DAT_04cbb128);
    FUN_02132f7c(PTR_DAT_04cbb200);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cbb208);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cbb210);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cbb218);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb228);
    FUN_02132f7c(PTR_DAT_04cbb268);
    FUN_02132f7c(PTR_DAT_04cbb230);
    FUN_02132f7c(PTR_DAT_04cbb270);
    bRam0000000004f9c7ef = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = (ulong)(uint)uStack_b0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  uStack_d8 = (ulong)(uint)uStack_d8;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  uVar22 = System_String__IsNullOrEmpty_46d2084(uVar26,0);
  uVar29 = 0;
  if ((uVar22 & 1) != 0) goto LAB_0247539c;
  lVar17 = *(long *)(lVar16 + 0x28);
  uVar18 = Dino_BusSand_AudioHub__Key_23746fc(lVar16,uVar26);
  if (lVar17 == 0) goto LAB_024759b8;
  uVar22 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                     (lVar17,uVar18,&uStack_a8,*(undefined8 *)PTR_DAT_04cbb120);
  if ((uVar22 & 1) == 0) {
    lVar16 = *(long *)(lVar16 + 0x40);
    uVar18 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb270,uVar26,0);
    if (lVar16 == 0) goto LAB_024759b8;
    uVar22 = System_Collections_Generic_HashSet_object___Add_37e654c
                       (lVar16,uVar18,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar22 & 1) != 0) {
      uVar18 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb268,uVar26,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar18,0);
    }
LAB_02475398:
    uVar29 = 0;
    goto LAB_0247539c;
  }
  if (uStack_a8 == 0) goto LAB_024759b8;
  uVar22 = System_String__op_Equality_46d1108
                     (*(undefined8 *)(uStack_a8 + 0x20),*(undefined8 *)PTR_DAT_04cbb230,0);
  puVar4 = PTR_DAT_04cab1f0;
  if ((uVar22 & 1) != 0) {
    Dino_BusSand_AudioHub__PlayMusic_2375a14(_UNK_00e20094,lVar16,uVar26);
    uVar29 = 1;
    goto LAB_0247539c;
  }
  lVar17 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x29) == '\0') goto LAB_02475398;
  fVar31 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((uStack_a8 == 0) || (*(long *)(lVar16 + 0x48) == 0)) goto LAB_024759b8;
  uVar18 = *(undefined8 *)(uStack_a8 + 0x10);
  uVar22 = System_Collections_Generic_Dictionary_object__float___TryGetValue_34b9648
                     (*(long *)(lVar16 + 0x48),uVar18,(long)&uStack_b0 + 4,
                      *(undefined8 *)PTR_DAT_04cbb220);
  fVar32 = fVar31 - uStack_b0._4_4_;
  if ((uVar22 & 1) == 0) {
    fVar32 = _UNK_00e20560;
  }
  if (uStack_a8 == 0) goto LAB_024759b8;
  if ((0.0 < *(float *)(uStack_a8 + 0x50)) && (fVar32 < *(float *)(uStack_a8 + 0x50)))
  goto LAB_02475398;
  if (*(int *)(uStack_a8 + 0x58) < 1) {
    lVar17 = 0;
  }
  else {
    if (*(long *)(lVar16 + 0x68) == 0) goto LAB_024759b8;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_108,*(long *)(lVar16 + 0x68),*(undefined8 *)PTR_DAT_04cbb218);
    puVar3 = PTR_DAT_04cbb208;
    iVar38 = 0;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    lStack_c0 = lStack_f8;
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
    lVar17 = 0;
    while (lVar19 = lVar17,
          uVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_d0,*(undefined8 *)puVar3), lVar28 = lStack_c0,
          (uVar22 & 1) != 0) {
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar22 = System_String__op_Inequality_46d110c(*(undefined8 *)(lStack_c0 + 0x18),uVar18,0);
      lVar17 = lVar19;
      if (((((uVar22 & 1) == 0) &&
           (uVar22 = Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(lVar28), (uVar22 & 1) != 0)) &&
          (*(float *)(lVar28 + 0x38) <= 0.0)) &&
         ((iVar38 = iVar38 + 1, lVar17 = lVar28, lVar19 != 0 &&
          (lVar17 = lVar19, *(float *)(lVar28 + 0x30) < *(float *)(lVar19 + 0x30))))) {
        lVar17 = lVar28;
      }
    }
    FUN_01e7a8a8(&uStack_108);
    if (uStack_a8 == 0) goto LAB_024759b8;
    lVar17 = 0;
    if (*(int *)(uStack_a8 + 0x58) <= iVar38) {
      lVar17 = lVar19;
    }
  }
  if (*(float *)(uStack_a8 + 0x68) == 0.0) {
    iVar38 = 0;
  }
  else {
    fVar37 = *(float *)(uStack_a8 + 0x6c);
    if (*(float *)(uStack_a8 + 0x6c) <= 0.0) {
      fVar37 = 1.5;
    }
    if (fVar37 <= fVar32) {
LAB_02475534:
      iVar38 = 0;
    }
    else {
      if (*(long *)(lVar16 + 0x60) == 0) goto LAB_024759b8;
      uVar22 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                         (*(long *)(lVar16 + 0x60),uVar18,(long)&uStack_d8 + 4,
                          *(undefined8 *)PTR_DAT_04cad650);
      if ((uVar22 & 1) == 0) goto LAB_02475534;
      iVar38 = uStack_d8._4_4_ + 1;
    }
    if ((uStack_a8 == 0) || (*(long *)(lVar16 + 0x60) == 0)) goto LAB_024759b8;
    iVar1 = *(int *)(uStack_a8 + 0x70);
    iVar24 = iVar38;
    if (iVar1 <= iVar38) {
      iVar24 = iVar1;
    }
    if (0 < iVar1) {
      iVar38 = iVar24;
    }
    System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
              (*(long *)(lVar16 + 0x60),uVar18,iVar38,*(undefined8 *)PTR_DAT_04cad660);
  }
  if ((*(long *)(lVar16 + 0x48) == 0) ||
     (System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                (fVar31,*(long *)(lVar16 + 0x48),uVar18,*(undefined8 *)PTR_DAT_04cbb128),
     uStack_a8 == 0)) goto LAB_024759b8;
  lVar28 = *(long *)(uStack_a8 + 0x80);
  if ((lVar28 == 0) || (*(int *)(lVar28 + 0x18) < 1)) {
LAB_02475720:
    uVar29 = 0;
  }
  else {
    uVar12 = Dino_BusSand_AudioHub__PickClip_2375c0c(lVar16);
    lVar28 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar28,uVar12,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar28 == 0) goto LAB_024759b8;
    lVar19 = Dino_BusSand_AudioHub__Clip_23742fc(lVar16,*(undefined8 *)(lVar28 + 0x10));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar22 = UnityEngine_Object__op_Inequality_43c8dec(lVar19,0,0);
    if ((uVar22 & 1) == 0) goto LAB_02475720;
    if (uStack_a8 == 0) goto LAB_024759b8;
    iVar24 = *(int *)(uStack_a8 + 0x5c);
    if (iVar24 < 1) {
      iVar24 = 0x80;
    }
    lVar20 = Dino_BusSand_AudioHub__Acquire_2375f30(lVar16,iVar24);
    uVar29 = 0;
    if (lVar20 != 0) {
      if ((lVar17 != 0) && (lVar17 != lVar20)) {
        *(undefined4 *)(lVar17 + 0x38) = 0x42200000;
      }
      if (uStack_a8 == 0) goto LAB_024759b8;
      fVar39 = *(float *)(uStack_a8 + 0x38);
      fVar37 = *(float *)(lVar28 + 0x20);
      fVar32 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(uStack_a8 + 0x3c),*(undefined4 *)(uStack_a8 + 0x40)
                                 ,0);
      if (uStack_a8 == 0) goto LAB_024759b8;
      fVar36 = *(float *)(uStack_a8 + 0x44);
      fVar35 = *(float *)(lVar28 + 0x24);
      fVar33 = (float)UnityEngine_Random__Range_43b64a8
                                (*(undefined4 *)(uStack_a8 + 0x48),*(undefined4 *)(uStack_a8 + 0x4c)
                                 ,0);
      if ((uStack_a8 == 0) || (lVar17 = *(long *)(lVar20 + 0x10), lVar17 == 0)) goto LAB_024759b8;
      fVar40 = *(float *)(uStack_a8 + 0x68);
      uVar22 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar17,0);
      if ((uVar22 & 1) != 0) {
        UnityEngine_AudioSource__Stop_43488b8(lVar17,0);
      }
      UnityEngine_AudioSource__set_clip_434875c(lVar17,lVar19,0);
      UnityEngine_AudioSource__set_loop_4348b90(lVar17,0,0);
      *(undefined8 *)(lVar20 + 0x18) = uVar18;
      thunk_FUN_02134474((undefined8 *)(lVar20 + 0x18),uVar18);
      if (uStack_a8 == 0) goto LAB_024759b8;
      uVar22 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(uStack_a8 + 0x20),0);
      puVar23 = (undefined8 *)PTR_DAT_04cbb228;
      if ((uVar22 & 1) == 0) {
        if (uStack_a8 == 0) goto LAB_024759b8;
        puVar23 = (undefined8 *)(uStack_a8 + 0x20);
      }
      *(undefined8 *)(lVar20 + 0x20) = *puVar23;
      thunk_FUN_02134474((undefined8 *)(lVar20 + 0x20));
      lVar21 = *(long *)puVar4;
      *(int *)(lVar20 + 0x28) = iVar24;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar37 = (float)func_0x049b5300(0x41200000,(fVar39 + fVar37 + fVar32) / 20.0);
      fVar37 = fVar37 * 1.0;
      fVar32 = 4.0;
      if (fVar37 <= 4.0) {
        fVar32 = fVar37;
      }
      *(undefined8 *)(lVar20 + 0x34) = _UNK_00e698b8;
      fVar39 = 0.0;
      if (0.0 <= fVar37) {
        fVar39 = fVar32;
      }
      *(float *)(lVar20 + 0x2c) = fVar39;
      *(float *)(lVar20 + 0x30) = fVar31;
      fVar32 = (float)Dino_BusSand_AudioHub__BusGain_2374ae8(lVar16,*(undefined8 *)(lVar20 + 0x20));
      fVar39 = fVar39 * fVar32;
      fVar32 = 1.0;
      if (fVar39 <= 1.0) {
        fVar32 = fVar39;
      }
      fVar37 = 0.0;
      if (0.0 <= fVar39) {
        fVar37 = fVar32;
      }
      UnityEngine_AudioSource__set_volume_434840c(fVar37,lVar17,0);
      fVar37 = (float)exp2f((fVar36 + fVar35 + fVar33 + fVar40 * (float)iVar38) / 1200.0);
      fVar37 = fVar37 * 1.0;
      fVar32 = 3.0;
      if (fVar37 <= 3.0) {
        fVar32 = fVar37;
      }
      fVar39 = _UNK_00e20754;
      if (_UNK_00e20754 <= fVar37) {
        fVar39 = fVar32;
      }
      UnityEngine_AudioSource__set_pitch_43484e0(fVar39,lVar17,0);
      if (uStack_a8 == 0) goto LAB_024759b8;
      fVar32 = 0.0;
      if (*(char *)(uStack_a8 + 0x60) == '\0') {
        fVar37 = *(float *)(uStack_a8 + 100);
        if (fVar37 <= 0.0) {
          fVar37 = 1.0;
        }
        fVar37 = fVar37 * 0.0;
        fVar39 = 1.0;
        if (fVar37 <= 1.0) {
          fVar39 = fVar37;
        }
        fVar32 = -1.0;
        if (-1.0 <= fVar37) {
          fVar32 = fVar39;
        }
      }
      UnityEngine_AudioSource__set_panStereo_4348d18(fVar32,lVar17,0);
      if (lVar19 == 0) goto LAB_024759b8;
      iVar38 = *(int *)(lVar28 + 0x1c);
      fVar37 = (float)UnityEngine_AudioClip__get_length_4346cd4(lVar19,0);
      fVar33 = 0.0;
      fVar39 = (float)iVar38 / 1000.0;
      fVar32 = 0.0;
      if (0.0 <= fVar37 + _UNK_00e20000) {
        fVar32 = fVar37 + _UNK_00e20000;
      }
      if (fVar39 <= fVar32) {
        fVar32 = fVar39;
      }
      fVar37 = 0.0;
      if (0.0 <= fVar39) {
        fVar37 = fVar32;
      }
      UnityEngine_AudioSource__set_time_4348598(fVar37,lVar17,0);
      fVar32 = (float)*(int *)(lVar28 + 0x28) / 1000.0 + 0.0;
      if (fVar32 <= _UNK_00e20a7c) {
        UnityEngine_AudioSource__Play_4348894(lVar17,0);
      }
      else {
        dVar34 = (double)UnityEngine_AudioSettings__get_dspTime_4345fc8(0);
        UnityEngine_AudioSource__PlayScheduled_434889c(dVar34 + (double)fVar32,lVar17,0);
        fVar33 = fVar31 + fVar32 + _UNK_00e2043c;
      }
      *(float *)(lVar20 + 0x3c) = fVar33;
      uVar29 = 1;
    }
  }
  if ((uStack_a8 != 0) &&
     ((*(float *)(uStack_a8 + 0x78) <= 0.0 ||
      (Dino_BusSand_AudioHub__Duck_23761a8(*(undefined4 *)(uStack_a8 + 0x74),lVar16), uStack_a8 != 0
      )))) {
    if (*(long *)(uStack_a8 + 0x88) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_f0,*(long *)(uStack_a8 + 0x88),*(undefined8 *)PTR_DAT_04cab720);
      puVar4 = PTR_DAT_04cab6c8;
      uStack_108 = 0;
      puStack_100 = &uStack_f0;
      while (uVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_f0,*(undefined8 *)puVar4), (uVar22 & 1) != 0) {
        uVar13 = Dino_BusSand_AudioHub__PlayDepth_2375064
                           (0x3f800000,0x3f800000,0,0,lVar16,lStack_e0,1);
        uVar29 = uVar29 | uVar13;
      }
      FUN_01e77dbc(&uStack_108);
    }
LAB_0247539c:
    return (ulong)(uVar29 & 1);
  }
LAB_024759b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

