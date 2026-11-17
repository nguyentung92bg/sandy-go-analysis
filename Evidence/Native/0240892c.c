/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$BuildBar
void Dino_BusSand_App_UI_HudPanel__BuildBar (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$BuildBar
   void Dino_BusSand_App_UI_HudPanel__BuildBar (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__BuildBar_230892c(long param_1)

{
  undefined *puVar1;
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
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if ((bRam0000000004f9c516 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb8060);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb8068);
    FUN_02132f7c(PTR_DAT_04cb8070);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb8078);
    FUN_02132f7c(PTR_DAT_04cb8080);
    FUN_02132f7c(PTR_DAT_04cb8088);
    FUN_02132f7c(PTR_DAT_04caf580);
    FUN_02132f7c(PTR_DAT_04cb8090);
    FUN_02132f7c(PTR_DAT_04cb8098);
    FUN_02132f7c(PTR_DAT_04cb80a0);
    FUN_02132f7c(PTR_DAT_04cb80a8);
    FUN_02132f7c(PTR_DAT_04cb80b0);
    FUN_02132f7c(PTR_DAT_04cb80b8);
    FUN_02132f7c(PTR_DAT_04cb80c0);
    FUN_02132f7c(PTR_DAT_04cb80c8);
    FUN_02132f7c(PTR_DAT_04cb80d0);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c516 = 1;
  }
  puVar2 = PTR_DAT_04cad330;
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar3 = PTR_DAT_04cb80d0;
  puVar1 = PTR_DAT_04cacfc0;
                    /* try { // try from 02408a98 to 02508c77 has its CatchHandler @ 02408a98
                       catch() { ... } // from try @ 02408a98 with catch @ 02408a98
                       catch() { ... } // from try @ 02408f6c with catch @ 02408a98
                       catch() { ... } // from try @ 02409064 with catch @ 02408a98
                       catch() { ... } // from try @ 024090ec with catch @ 02408a98
                       catch() { ... } // from try @ 02409118 with catch @ 02408a98 */
  uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar19 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                     (uVar18,uVar19,0,0,uVar14,*(undefined8 *)puVar3,0,0,0);
  plVar15 = (long *)(param_1 + 0x60);
  *plVar15 = lVar10;
  thunk_FUN_02134474(plVar15,lVar10);
  if (*plVar15 != 0) {
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0,*plVar15,0);
    if (*plVar15 != 0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0,*plVar15,0);
      if (*plVar15 != 0) {
        UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,*plVar15,0);
        if (*plVar15 != 0) {
          UnityEngine_RectTransform__set_offsetMin_43cfe84(0,0xc30c0000,*plVar15,0);
          puVar3 = PTR_DAT_04cb80a0;
          puVar2 = PTR_DAT_04cb8080;
          if (*plVar15 != 0) {
            UnityEngine_RectTransform__set_offsetMax_43d0018(0,0x43240000,*plVar15,0);
            lVar10 = *plVar15;
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            puVar12 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
            plVar15 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                        (*puVar12,puVar12[1],0,0,_UNK_00e200f8,lVar10,
                                         *(undefined8 *)puVar2,*(undefined8 *)puVar3,1,0);
            puVar2 = PTR_DAT_04caf580;
            if (plVar15 != (long *)0x0) {
              uVar14 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar15,0);
              Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,uVar14,0);
              (**(code **)(*plVar15 + 0x2c8))(plVar15,1,*(undefined8 *)(*plVar15 + 0x2d0));
              uVar14 = *(undefined8 *)(param_1 + 0x58);
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(PTR_DAT_04cacfc0);
                cRam0000000004f9b948 = '\x01';
              }
              puVar12 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
              lVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                 (0,0x43400000,*puVar12,puVar12[1],uVar14,*(undefined8 *)puVar2,0,0,
                                  0);
              puVar9 = PTR_DAT_04cb80c8;
              puVar8 = PTR_DAT_04cb80c0;
              puVar7 = PTR_DAT_04cb80b8;
              puVar6 = PTR_DAT_04cb80b0;
              puVar5 = PTR_DAT_04cb8098;
              puVar4 = PTR_DAT_04cb8090;
              puVar3 = PTR_DAT_04cb8088;
              puVar1 = PTR_DAT_04cb8078;
              puVar2 = PTR_DAT_04cb8070;
                    /* try { // try from 02408c78 to 02508c7f has its CatchHandler @ 024090cc */
              if (lVar10 != 0) {
                    /* try { // try from 02408c8c to 02508c97 has its CatchHandler @ 024090c8 */
                    /* try { // try from 02408ca8 to 02508cab has its CatchHandler @ 02409094 */
                    /* try { // try from 02408cac to 02508cbf has its CatchHandler @ 024090bc */
                UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0,lVar10,0);
                    /* try { // try from 02408ce4 to 02508ce7 has its CatchHandler @ 0240906c */
                    /* try { // try from 02408ce8 to 02508cf3 has its CatchHandler @ 02409090 */
                UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0,lVar10,0);
                UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,0x43200000,lVar10,0);
                    /* try { // try from 02408d0c to 02508d37 has its CatchHandler @ 024090a8 */
                UnityEngine_RectTransform__set_sizeDelta_43cfa70(0,0x43400000,lVar10,0);
                Dino_BusSand_App_UI_HudPanel__AddItem_230b4dc
                          (param_1,lVar10,0x2715,*(undefined8 *)puVar8,*(undefined8 *)puVar5,0);
                    /* try { // try from 02408d40 to 02508d4b has its CatchHandler @ 024090c0 */
                Dino_BusSand_App_UI_HudPanel__AddItem_230b4dc
                          (param_1,lVar10,0x2714,*(undefined8 *)puVar1,*(undefined8 *)puVar4,1);
                    /* try { // try from 02408d5c to 02508d5f has its CatchHandler @ 02409070 */
                    /* try { // try from 02408d60 to 02508d6b has its CatchHandler @ 0240909c */
                Dino_BusSand_App_UI_HudPanel__AddItem_230b4dc
                          (param_1,lVar10,0x2713,*(undefined8 *)puVar6,*(undefined8 *)puVar9,2);
                    /* try { // try from 02408d80 to 02508d83 has its CatchHandler @ 02409068 */
                Dino_BusSand_App_UI_HudPanel__AddItem_230b4dc
                          (param_1,lVar10,0x2712,*(undefined8 *)puVar3,*(undefined8 *)puVar7,3);
                    /* try { // try from 02408d90 to 02508da3 has its CatchHandler @ 02409078 */
                *(long *)(param_1 + 0xf8) = lVar10;
                thunk_FUN_02134474((long *)(param_1 + 0xf8),lVar10);
                uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* try { // try from 02408dbc to 02508dc3 has its CatchHandler @ 0240907c */
                  thunk_FUN_0218fdac(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                    /* try { // try from 02408dc4 to 02508dd7 has its CatchHandler @ 02409080 */
                puVar4 = PTR_DAT_04caf420;
                puVar3 = PTR_DAT_04cad330;
                puVar1 = PTR_DAT_04caa458;
                puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                lVar16 = puVar13[1];
                    /* try { // try from 02408de4 to 02508e17 has its CatchHandler @ 024090a0 */
                if (lVar16 == 0) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(lVar10);
                    puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                  }
                  uVar17 = *puVar13;
                  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                  System_Action___ctor_47b5ed0(lVar16,uVar17,*(undefined8 *)PTR_DAT_04cb8068,0);
                  plVar15 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                  *plVar15 = lVar16;
                  thunk_FUN_02134474(plVar15,lVar16);
                }
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                    /* try { // try from 02408e64 to 02508e6b has its CatchHandler @ 024090b0 */
                lVar10 = Dino_BusSand_App_UI_KitTopBar__Build_2283ff0
                                   (0xc2a80000,uVar14,lVar16,0,0,0,0,0,0);
                if (lVar10 != 0) {
                    /* try { // try from 02408e80 to 02508ecf has its CatchHandler @ 024090b4 */
                  Dino_BusSand_App_UI_KitTopBar__MarkAmbient_2283228(lVar10,0);
                  plVar15 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar10,0);
                  if (plVar15 == (long *)0x0) {
                    *(undefined8 *)(param_1 + 0x100) = 0;
                  }
                  else {
                    lVar16 = *(long *)PTR_DAT_04cabdb0;
                    if ((*plVar15 != lVar16) ||
                       (*(long **)(param_1 + 0x100) = plVar15, *plVar15 != lVar16)) {
                    /* catch() { ... } // from try @ 02409054 with catch @ 02409098 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02408d60 with catch @ 0240909c */
                      FUN_021335a4(plVar15);
                    }
                  }
                  puVar2 = PTR_DAT_04cad4c0;
                    /* try { // try from 02408ee0 to 02508ee3 has its CatchHandler @ 024090b0 */
                  thunk_FUN_02134474(param_1 + 0x100,plVar15);
                  uVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar2);
                  }
                  puVar2 = PTR_DAT_04cb80a8;
                  uVar14 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar14,0);
                  *(undefined8 *)(param_1 + 0xe8) = uVar14;
                  thunk_FUN_02134474((undefined8 *)(param_1 + 0xe8),uVar14);
                  uVar14 = *(undefined8 *)(param_1 + 0x100);
                    /* try { // try from 02408f38 to 02508f3f has its CatchHandler @ 02409088 */
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                    /* try { // try from 02408f50 to 02508f57 has its CatchHandler @ 024090b4 */
                  lVar16 = Dino_BusSand_App_UI_UiKit__SettingsButton_2284b34
                                     (uVar14,*(undefined8 *)puVar2,0);
                  plVar15 = (long *)(param_1 + 0xa0);
                  *plVar15 = lVar16;
                  thunk_FUN_02134474(plVar15,lVar16);
                    /* try { // try from 02408f68 to 02508f6b has its CatchHandler @ 02409088 */
                    /* try { // try from 02408f6c to 02509043 has its CatchHandler @ 02408a98 */
                  if (*plVar15 != 0) {
                    lVar16 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar15,0);
                    if (((*plVar15 != 0) &&
                        (lVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar15,0),
                        lVar11 != 0)) &&
                       (UnityEngine_RectTransform__set_anchorMax_43cf768
                                  (0x3f800000,0x3f000000,lVar11,0), lVar16 != 0)) {
                      UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                (0x3f800000,0x3f000000,lVar16,0);
                      if ((*plVar15 != 0) &&
                         (lVar16 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar15,0),
                         lVar16 != 0)) {
                        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                  (0xc2b80000,0,lVar16,0);
                        puVar3 = PTR_DAT_04cb8060;
                        puVar2 = PTR_DAT_04cad948;
                        if (*plVar15 != 0) {
                          uVar14 = UnityEngine_Component__get_gameObject_43bcde8(*plVar15,0);
                          uVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                          System_Action___ctor_47b5ed0(uVar17,param_1,*(undefined8 *)puVar3,0);
                          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                                    (uVar14,uVar17,1,*(undefined8 *)puVar2,0);
                    /* try { // try from 02409044 to 02509047 has its CatchHandler @ 024090c4 */
                    /* try { // try from 02409048 to 0250904b has its CatchHandler @ 024090b8 */
                    /* try { // try from 0240904c to 0250904f has its CatchHandler @ 024090ac */
                          Dino_BusSand_App_UI_KitTopBar__AddShade_2285574(lVar10,0,0);
                    /* try { // try from 02409050 to 02509053 has its CatchHandler @ 024090a4 */
                    /* try { // try from 02409054 to 02509057 has its CatchHandler @ 02409098 */
                          if (*(long *)(lVar10 + 0x70) != 0) {
                    /* try { // try from 02409058 to 0250905b has its CatchHandler @ 0240908c */
                    /* try { // try from 0240905c to 0250905f has its CatchHandler @ 02409084 */
                            uVar14 = UnityEngine_Component__get_gameObject_43bcde8
                                               (*(long *)(lVar10 + 0x70),0);
                    /* try { // try from 02409060 to 02509063 has its CatchHandler @ 02409074 */
                    /* try { // try from 02409064 to 025090e7 has its CatchHandler @ 02408a98 */
                            uVar14 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar14,0);
                    /* catch() { ... } // from try @ 02408d80 with catch @ 02409068 */
                    /* catch() { ... } // from try @ 02408ce4 with catch @ 0240906c */
                    /* catch() { ... } // from try @ 02408d5c with catch @ 02409070 */
                            *(undefined8 *)(param_1 + 0x108) = uVar14;
                    /* catch() { ... } // from try @ 02409060 with catch @ 02409074 */
                    /* catch() { ... } // from try @ 02408d90 with catch @ 02409078 */
                    /* catch() { ... } // from try @ 02408dbc with catch @ 0240907c */
                    /* catch() { ... } // from try @ 02408dc4 with catch @ 02409080 */
                    /* catch() { ... } // from try @ 0240905c with catch @ 02409084 */
                    /* catch() { ... } // from try @ 02408f38 with catch @ 02409088
                       catch() { ... } // from try @ 02408f68 with catch @ 02409088 */
                    /* catch() { ... } // from try @ 02409058 with catch @ 0240908c */
                    /* catch() { ... } // from try @ 02408ce8 with catch @ 02409090 */
                            if (iRam00000000051c1b10 != 0) {
                              FUN_02220bf0(1L << (param_1 + 0x108U >> 0xc & 0x3f),
                                           (param_1 + 0x108U >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
                            }
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
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02408ca8 with catch @ 02409094 */
  FUN_02133224();
}

