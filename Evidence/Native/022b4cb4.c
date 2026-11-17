/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar$$Build
Dino_BusSand_App_UI_StreakHomeBar_o* Dino_BusSand_App_UI_StreakHomeBar__Build (UnityEngine_Transform_o* home, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar$$Build
   Dino_BusSand_App_UI_StreakHomeBar_o* Dino_BusSand_App_UI_StreakHomeBar__Build
   (UnityEngine_Transform_o* home, const MethodInfo* method); */

long Dino_BusSand_App_UI_StreakHomeBar__Build_21b4cb4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar4 = PTR_DAT_04cad330;
  if ((bRam0000000004f9baa1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caf350);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04caf358);
    FUN_02132f7c(PTR_DAT_04caf360);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf368);
    FUN_02132f7c(PTR_DAT_04caf370);
    FUN_02132f7c(PTR_DAT_04caf378);
    FUN_02132f7c(PTR_DAT_04caf380);
    FUN_02132f7c(PTR_DAT_04caf388);
    FUN_02132f7c(PTR_DAT_04caf390);
    FUN_02132f7c(PTR_DAT_04caf398);
    FUN_02132f7c(PTR_DAT_04caf3a0);
    FUN_02132f7c(PTR_DAT_04cad488);
    FUN_02132f7c(PTR_DAT_04caf3a8);
    FUN_02132f7c(PTR_DAT_04caf3b0);
    FUN_02132f7c(PTR_DAT_04cad490);
    FUN_02132f7c(PTR_DAT_04caf3b8);
    FUN_02132f7c(PTR_DAT_04caf3c0);
    FUN_02132f7c(PTR_DAT_04caf3c8);
    FUN_02132f7c(PTR_DAT_04cad498);
    FUN_02132f7c(PTR_DAT_04caf3d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caf3d8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9baa1 = 1;
  }
  puVar2 = PTR_DAT_04caf3d8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                     (0x44750000,0x435c0000,0,0,param_1,*(undefined8 *)puVar2,0,0,0);
  if (lVar10 != 0) {
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar10,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar10,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,_UNK_00e1ff0c,lVar10,0);
    lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
    puVar4 = PTR_DAT_04caf390;
    if (lVar11 != 0) {
      lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                         (lVar11,*(undefined8 *)PTR_DAT_04caf350);
      lVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                         (0x44750000,0x435c0000,0,0,lVar10,*(undefined8 *)puVar4,0,0,0);
      puVar7 = PTR_DAT_04caf3c8;
      puVar6 = PTR_DAT_04caf3b0;
      puVar5 = PTR_DAT_04caf388;
      puVar3 = PTR_DAT_04caf380;
      puVar2 = PTR_DAT_04caf370;
      puVar4 = PTR_DAT_04caf368;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x20) = lVar10;
        thunk_FUN_02134474((long *)(lVar11 + 0x20),lVar10);
        Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar10,0);
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                  (_UNK_00e20674,_UNK_00e203a0,0,_UNK_00e20594,_UNK_00e208e0,lVar10,
                   *(undefined8 *)puVar3,*(undefined8 *)puVar5,&uStack_88,0);
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uVar12 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                           (_UNK_00e1ffc8,0x42a00000,0,0x41d40000,_UNK_00e20830,lVar10,
                            *(undefined8 *)puVar2,*(undefined8 *)puVar4,&uStack_a0,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar4 = PTR_DAT_04cacfc0;
        uVar1 = _UNK_00e1fea8;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        lVar13 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                           (0x42300000,0x42540000,
                            **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                            (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e1fea8,
                            uVar12,*(undefined8 *)puVar7,*(undefined8 *)puVar6,&uStack_b8,0);
        plVar15 = (long *)(lVar11 + 0x28);
        *plVar15 = lVar13;
        thunk_FUN_02134474(plVar15,lVar13);
        lVar13 = *plVar15;
        if (lVar13 != 0) {
          UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f000000,lVar13,0);
          UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f000000,lVar13,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f000000,lVar13,0);
          puVar8 = PTR_DAT_04caf3d0;
          puVar7 = PTR_DAT_04caf3c0;
          puVar6 = PTR_DAT_04caf3b8;
          puVar3 = PTR_DAT_04cac878;
          puVar2 = PTR_DAT_04ca9c30;
          if (*plVar15 != 0) {
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x41700000,0,*plVar15,0);
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            System_Nullable_Color____ctor_2bc9090
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_d0,*(undefined8 *)puVar3)
            ;
            uStack_e0 = uStack_c0;
            uStack_e8 = uStack_c8;
            uStack_f0 = uStack_d0;
            uVar12 = Dino_BusSand_App_UI_UiKit__Text_2282314
                               (0x42300000,0x43960000,0x42700000,0x40e00000,0x41dc0000,lVar10,
                                *(undefined8 *)puVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar8,
                                &uStack_f0,0x202,0);
            *(undefined8 *)(lVar11 + 0x48) = uVar12;
            thunk_FUN_02134474();
            lVar13 = Dino_BusSand_App_UI_UiKit__Img_228203c
                               (0x42b40000,0x42b40000,0x43ce0000,0x42100000,0x3f800000,lVar10,
                                *(undefined8 *)puVar7,0,0,0);
            plVar15 = (long *)(lVar11 + 0x38);
            *plVar15 = lVar13;
            thunk_FUN_02134474(plVar15,lVar13);
            puVar8 = PTR_DAT_04caf3a8;
            puVar7 = PTR_DAT_04caf3a0;
            puVar6 = PTR_DAT_04caf398;
            if (*plVar15 != 0) {
              UnityEngine_UI_Image__set_preserveAspect_44afae0(*plVar15,1,0);
              uStack_108 = 0;
              uStack_100 = 0;
              uStack_f8 = 0;
              System_Nullable_Color____ctor_2bc9090
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_108,
                         *(undefined8 *)puVar3);
              uStack_110 = uStack_f8;
              uStack_118 = uStack_100;
              uStack_120 = uStack_108;
              uVar12 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                 (0x42200000,0x42f00000,0x42600000,_UNK_00e20af4,0xc1500000,lVar10,
                                  *(undefined8 *)puVar8,*(undefined8 *)puVar2,*(undefined8 *)puVar6,
                                  &uStack_120,0x202,0);
              *(undefined8 *)(lVar11 + 0x50) = uVar12;
              thunk_FUN_02134474();
              uStack_138 = 0;
              uStack_130 = 0;
              uStack_128 = 0;
              lVar13 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                                 (_UNK_00e208e4,0x42f40000,0,0xc2910000,uVar1,lVar10,
                                  *(undefined8 *)puVar7,*(undefined8 *)puVar5,&uStack_138,0);
              *(long *)(lVar11 + 0x30) = lVar13;
              thunk_FUN_02134474((long *)(lVar11 + 0x30),lVar13);
              puVar9 = PTR_DAT_04caf378;
              puVar8 = PTR_DAT_04cad4a8;
              puVar7 = PTR_DAT_04cad498;
              puVar6 = PTR_DAT_04cad490;
              puVar5 = PTR_DAT_04cad488;
              if (lVar13 != 0) {
                UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar13,0);
                if (cRam0000000004f9b948 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cacfc0);
                  cRam0000000004f9b948 = '\x01';
                }
                uVar12 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (**(undefined4 **)(*(long *)puVar4 + 0xb8),
                                    (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],0xc2a70000,
                                    0xc2920000,0x3f400000,lVar10,*(undefined8 *)puVar5,
                                    *(undefined8 *)puVar7,0,0);
                *(undefined8 *)(lVar11 + 0x40) = uVar12;
                thunk_FUN_02134474();
                Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar9,0);
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
                System_Nullable_Color____ctor_2bc9090(&uStack_150,*(undefined8 *)puVar3);
                uStack_168 = uStack_148;
                uStack_170 = uStack_150;
                uStack_160 = uStack_140;
                uVar12 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                   (0x42280000,0x43160000,0x42500000,0x42280000,0xc2930000,lVar10,
                                    *(undefined8 *)puVar6,*(undefined8 *)puVar2,
                                    *(undefined8 *)puVar8,&uStack_170,0x202,0);
                *(undefined8 *)(lVar11 + 0x58) = uVar12;
                thunk_FUN_02134474();
                puVar4 = PTR_DAT_04caf360;
                if (lVar10 != 0) {
                  uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
                  lVar10 = *(long *)puVar4;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(lVar10);
                    lVar10 = *(long *)puVar4;
                  }
                  puVar2 = PTR_DAT_04cad948;
                  puVar14 = *(undefined8 **)(lVar10 + 0xb8);
                  lVar13 = puVar14[1];
                  if (lVar13 == 0) {
                    if (*(int *)(lVar10 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(lVar10);
                      puVar14 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                    }
                    uVar16 = *puVar14;
                    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    System_Action___ctor_47b5ed0(lVar13,uVar16,*(undefined8 *)PTR_DAT_04caf358,0);
                    plVar15 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                    *plVar15 = lVar13;
                    thunk_FUN_02134474(plVar15,lVar13);
                  }
                  Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar12,lVar13,1,*(undefined8 *)puVar2,0)
                  ;
                  Dino_BusSand_App_UI_StreakHomeBar__Refresh_21b5518(lVar11);
                  return lVar11;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

