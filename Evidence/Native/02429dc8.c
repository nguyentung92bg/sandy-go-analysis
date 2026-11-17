/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$BuildGuide
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_DailyGiftPanel__BuildGuide (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$BuildGuide
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_DailyGiftPanel__BuildGuide
   (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_DailyGiftPanel__BuildGuide_2329dc8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar3 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c5fe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb8eb0);
    FUN_02132f7c(PTR_DAT_04cb8dc0);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf238);
    FUN_02132f7c(PTR_DAT_04caf258);
    FUN_02132f7c(PTR_DAT_04cb8eb8);
    FUN_02132f7c(PTR_DAT_04caf260);
    FUN_02132f7c(PTR_DAT_04cb8ec0);
    FUN_02132f7c(PTR_DAT_04cb8df8);
    FUN_02132f7c(PTR_DAT_04cb8ec8);
    FUN_02132f7c(PTR_DAT_04caf270);
    FUN_02132f7c(PTR_DAT_04cb8ed0);
    FUN_02132f7c(PTR_DAT_04caf280);
    FUN_02132f7c(PTR_DAT_04caf288);
    FUN_02132f7c(PTR_DAT_04cb8ed8);
    FUN_02132f7c(PTR_DAT_04cb8ee0);
    FUN_02132f7c(PTR_DAT_04cb8e00);
    FUN_02132f7c(PTR_DAT_04cb8ee8);
    FUN_02132f7c(PTR_DAT_04caf2c8);
    FUN_02132f7c(PTR_DAT_04cb8e40);
    FUN_02132f7c(PTR_DAT_04caf2e0);
    FUN_02132f7c(PTR_DAT_04cb8ef0);
    FUN_02132f7c(PTR_DAT_04caf2e8);
    FUN_02132f7c(PTR_DAT_04cb8ef8);
    FUN_02132f7c(PTR_DAT_04caf308);
    FUN_02132f7c(PTR_DAT_04cb8f00);
    FUN_02132f7c(PTR_DAT_04cb8f08);
    FUN_02132f7c(PTR_DAT_04caf330);
    FUN_02132f7c(PTR_DAT_04caf338);
    FUN_02132f7c(PTR_DAT_04caf340);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb8f10);
    bRam0000000004f9c5fe = 1;
  }
  puVar4 = PTR_DAT_04caf288;
  uVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar15 = *(long *)puVar3;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar15);
  }
  lVar15 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar11,*(undefined8 *)puVar4,0);
  if (((lVar15 != 0) &&
      (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar12 != 0)) &&
     (plVar13 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar12,*(undefined8 *)PTR_DAT_04cacf98),
     puVar7 = PTR_DAT_04cb8eb0, puVar6 = PTR_DAT_04caf280, puVar5 = PTR_DAT_04cad948,
     puVar4 = PTR_DAT_04caa458, uVar2 = _UNK_00e20840, plVar13 != (long *)0x0)) {
    (**(code **)(*plVar13 + 0x2a8))
              (_UNK_00e20840,_UNK_00e20844,_UNK_00e20754,_UNK_00e1fdd0,plVar13,
               *(undefined8 *)(*plVar13 + 0x2b0));
    (**(code **)(*plVar13 + 0x2c8))(plVar13,1,*(undefined8 *)(*plVar13 + 0x2d0));
    uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Action___ctor_47b5ed0(uVar14,param_1,*(undefined8 *)puVar7,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar14,0,*(undefined8 *)puVar5,0);
    fVar19 = _UNK_00e20028;
    fVar18 = 0.0;
    lVar12 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                       (0x44870000,_UNK_00e20028,0,lVar15,*(undefined8 *)puVar6,0,0,0);
    plVar13 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if (plVar13 != (long *)0x0) {
      if (*plVar13 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar13);
      }
      UnityEngine_RectTransform__get_rect_43cf450(plVar13,0);
      if (1.0 < fVar18) {
        fVar19 = fVar18;
        UnityEngine_RectTransform__get_rect_43cf450(plVar13,0);
      }
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      puVar6 = PTR_DAT_04cb8e00;
      puVar5 = PTR_DAT_04cb8df8;
      puVar4 = PTR_DAT_04cb8dc0;
      if (lVar12 != 0) {
        lVar16 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar18 = 1.0;
        if (fVar19 / _UNK_00e20028 <= 1.0) {
          fVar18 = fVar19 / _UNK_00e20028;
        }
        UnityEngine_Transform__set_localScale_43d1be0
                  (fVar18 * *(float *)(lVar16 + 0xc),fVar18 * *(float *)(lVar16 + 0x10),
                   fVar18 * *(float *)(lVar16 + 0x14),lVar12,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar8 = PTR_DAT_04cb8ee8;
        puVar7 = PTR_DAT_04cb8e40;
        puVar3 = PTR_DAT_04ca9d18;
        uVar14 = Dino_BusSand_App_UI_UiKit__Img_228203c
                           (0,0,0,0,0x3f800000,lVar12,*(undefined8 *)puVar6,*(undefined8 *)puVar5,0,
                            0);
        uVar11 = uVar14;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          uVar11 = thunk_FUN_0218fdac(*(long *)puVar4);
        }
        Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e207f4,0x40000000,uVar11,uVar14);
        uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                           (0,0,0,0,0x3f800000,lVar12,*(undefined8 *)puVar7,*(undefined8 *)puVar8,0,
                            0);
        Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e2005c,0xc3600000,uVar11,uVar11);
        lVar17 = *(long *)puVar3;
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
        puVar6 = PTR_DAT_04cb8ed8;
        puVar5 = PTR_DAT_04cb8ec0;
        puVar4 = PTR_DAT_04caf308;
        lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_0216b470();
        }
        puVar8 = PTR_DAT_04caf2e8;
        puVar7 = PTR_DAT_04caf2e0;
        uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)puVar6,*(undefined8 *)puVar5,
                            **(undefined8 **)(lVar16 + 0xb8),0);
        uVar11 = Dino_BusSand_App_UI_DailyGiftPanel__GuideText_232ba10
                           (lVar12,*(undefined8 *)puVar4,uVar11);
        Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e208dc,0xc3630000,uVar11,uVar11);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar4 = PTR_DAT_04cacfc0;
        uVar1 = _UNK_00e20180;
        lVar16 = Dino_BusSand_App_UI_UiKit__Img_228203c
                           (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                            (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0,0,
                            _UNK_00e20180,lVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar7,0,0);
        if ((lVar16 != 0) &&
           (lVar17 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar16,0),
           puVar9 = PTR_DAT_04cb8f08, puVar8 = PTR_DAT_04cb8ef8, puVar6 = PTR_DAT_04cb8ef0,
           puVar5 = PTR_DAT_04cb8eb8, lVar17 != 0)) {
          uVar11 = UnityEngine_Transform__set_localScale_43d1be0
                             (0xbf800000,0x3f800000,0x3f800000,lVar17,0);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e20aa8,0x42900000,uVar11,lVar16);
          uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0,0,0,0,0x3f800000,lVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar5,
                              0,0);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e202ec,0x43280000,uVar11,uVar11);
          Dino_BusSand_App_UI_DailyGiftPanel__GuideAmount_232bb38
                    (_UNK_00e202e8,uVar11,*(undefined8 *)puVar6,1);
          Dino_BusSand_App_UI_DailyGiftPanel__GuideAmount_232bb38
                    (0x43ee0000,uVar11,*(undefined8 *)puVar9,2);
          lVar17 = *(long *)puVar3;
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
          puVar6 = PTR_DAT_04cb8f00;
          puVar5 = PTR_DAT_04cb8ed0;
          puVar3 = PTR_DAT_04caf258;
          lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
          puVar10 = PTR_DAT_04cb8ec8;
          puVar9 = PTR_DAT_04caf338;
          puVar8 = PTR_DAT_04caf330;
          uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar5,*(undefined8 *)puVar6,
                              **(undefined8 **)(lVar16 + 0xb8),0);
          uVar11 = Dino_BusSand_App_UI_DailyGiftPanel__GuideText_232ba10
                             (lVar12,*(undefined8 *)puVar3,uVar11);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e20970,0x43280000,uVar11,uVar11);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (**(undefined4 **)(*(long *)puVar4 + 0xb8),
                              (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],0,0,uVar1,lVar12,
                              *(undefined8 *)puVar9,*(undefined8 *)puVar7,0,0);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e20554,0x42e40000,uVar11,uVar11);
          uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                             (0,0,0,0,0x3f800000,lVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar10
                              ,0,0);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e205b4,0xc3280000,uVar11,uVar11);
          puVar3 = PTR_DAT_04ca9d18;
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
          puVar6 = PTR_DAT_04cb8f10;
          puVar5 = PTR_DAT_04cb8ee0;
          puVar4 = PTR_DAT_04caf238;
          lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
          uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar6,*(undefined8 *)puVar5,
                              **(undefined8 **)(lVar16 + 0xb8),0);
          uVar11 = Dino_BusSand_App_UI_DailyGiftPanel__GuideText_232ba10
                             (lVar12,*(undefined8 *)puVar4,uVar11);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e200cc,0xc3630000,uVar11,uVar11);
          lVar17 = *(long *)puVar3;
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
          puVar7 = PTR_DAT_04caf340;
          puVar6 = PTR_DAT_04caf2c8;
          puVar5 = PTR_DAT_04caf270;
          puVar4 = PTR_DAT_04caf260;
          puVar3 = PTR_DAT_04cac878;
          lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_0216b470();
          }
          uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar6,*(undefined8 *)puVar5,
                              **(undefined8 **)(lVar16 + 0xb8),0);
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_88,*(undefined8 *)puVar3);
          uStack_90 = uStack_78;
          uStack_98 = uStack_80;
          uStack_a0 = uStack_88;
          lVar12 = Dino_BusSand_App_UI_UiKit__Text_2282314
                             (0x427c0000,0x44610000,0x42b40000,0,0,lVar12,*(undefined8 *)puVar7,
                              uVar11,*(undefined8 *)puVar4,&uStack_a0,0x202,0);
          Dino_BusSand_App_UI_DailyGiftPanel__Place_232b954(_UNK_00e20618,0x40800000,lVar12,lVar12);
          if (lVar12 != 0) {
            uVar11 = TMPro_TMP_Text__get_transform_42cd604(lVar12,0);
            Dino_BusSand_App_UI_UiKit__Breathe_2289058(uVar2,_UNK_00e20660,uVar11,0);
            return lVar15;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

