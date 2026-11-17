/* IL2CPP: Dino.BusSand.App.UI.ArtPopup$$Intro
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_ArtPopup__Intro (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, System_String_o* plate, UnityEngine_Vector2_o clock, UnityEngine_Rect_o plateRect, UnityEngine_Vector2_o start, System_String_o* text, TMPro_TextMeshProUGUI_o** timer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ArtPopup$$Intro
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_ArtPopup__Intro
   (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, System_String_o* plate, UnityEngine_Vector2_o clock,
   UnityEngine_Rect_o plateRect, UnityEngine_Vector2_o start, System_String_o* text,
   TMPro_TextMeshProUGUI_o** timer, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_ArtPopup__Intro_217eda8
          (undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
          float param_6,undefined4 param_7,float param_8,long param_9,undefined8 param_10,
          undefined8 param_11,undefined8 *param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  puVar1 = PTR_DAT_04cad468;
                    /* catch() { ... } // from try @ 0227ee2c with catch @ 0227ede4 */
  if ((bRam0000000004f9b918 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* try { // try from 0227ee20 to 0237ee2b has its CatchHandler @ 0227ee4c */
    FUN_02132f7c(PTR_DAT_04cad468);
                    /* try { // try from 0227ee2c to 0237ee77 has its CatchHandler @ 0227ede4 */
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad470);
                    /* catch() { ... } // from try @ 0227ee20 with catch @ 0227ee4c */
    FUN_02132f7c(PTR_DAT_04cad4b0);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad4b8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cad478);
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cad4d0);
    FUN_02132f7c(PTR_DAT_04cad4d8);
    FUN_02132f7c(PTR_DAT_04cad4e0);
    FUN_02132f7c(PTR_DAT_04cad4e8);
    FUN_02132f7c(PTR_DAT_04cad4f0);
    bRam0000000004f9b918 = 1;
  }
  puVar3 = PTR_DAT_04cad4d8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227f000 with catch @ 0227eefc */
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_ArtPopup__Clock_217ea8c(param_1,param_2,param_9);
  *param_12 = uVar7;
  thunk_FUN_02134474(param_12,uVar7);
  param_3 = param_3 + param_5 * 0.5;
  param_4 = param_4 + param_6 * 0.5;
  Dino_BusSand_App_UI_ArtPopup__Plate_217e948
            (param_5,param_6,param_3,param_4,param_9,*(undefined8 *)puVar3,param_10);
  puVar6 = PTR_DAT_04cad4f0;
  puVar2 = PTR_DAT_04cad4c8;
  puVar1 = PTR_DAT_04cad330;
  if ((param_9 != 0) && (*(long *)(param_9 + 0x10) != 0)) {
                    /* try { // try from 0227ef8c to 0237ef97 has its CatchHandler @ 0227f040 */
    uVar7 = *(undefined8 *)(*(long *)(param_9 + 0x10) + 0x10);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_a8,
               *(undefined8 *)PTR_DAT_04cac878);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0227efd4 to 0237efdf has its CatchHandler @ 0227f02c */
    uStack_b0 = uStack_98;
    uStack_b8 = uStack_a0;
    uStack_c0 = uStack_a8;
                    /* try { // try from 0227eff4 to 0237efff has its CatchHandler @ 0227f024 */
                    /* try { // try from 0227f000 to 0237f04f has its CatchHandler @ 0227eefc */
    lVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (0x42440000,param_5 + -30.0,param_6 + -20.0,0,0,uVar7,*(undefined8 *)puVar6,
                       param_11,*(undefined8 *)puVar2,&uStack_c0,0x202,0);
    puVar1 = PTR_DAT_04cad4b0;
    if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 0227eff4 with catch @ 0227f024 */
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar8,1,0);
                    /* catch() { ... } // from try @ 0227efd4 with catch @ 0227f02c */
      TMPro_TMP_Text__set_lineSpacing_42cc758(0x41880000,lVar8,0);
                    /* catch() { ... } // from try @ 0227ef8c with catch @ 0227f040 */
      Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
                (param_3,param_4,param_9,lVar8,*(undefined8 *)puVar1);
      if (*(long *)(param_9 + 0x10) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_9 + 0x10) + 0x10);
        lVar11 = *(long *)PTR_DAT_04ca9d18;
        lVar8 = *(long *)(lVar11 + 0x38);
        if (lVar8 == 0) {
          FUN_0216b4cc(lVar11);
          lVar8 = *(long *)(lVar11 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar5 = PTR_DAT_04cad4e8;
        puVar4 = PTR_DAT_04cad4e0;
        puVar2 = PTR_DAT_04cad4d0;
        puVar1 = PTR_DAT_04cad470;
        lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 0227f110 with catch @ 0227f0bc */
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        uVar9 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                          (*(undefined8 *)puVar5,*(undefined8 *)puVar4,
                           **(undefined8 **)(lVar8 + 0xb8),0);
                    /* try { // try from 0227f108 to 0237f10f has its CatchHandler @ 0227f15c */
                    /* try { // try from 0227f110 to 0237f16f has its CatchHandler @ 0227f0bc */
        uVar7 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                          (0x44130000,0,0,0x42b40000,0x436c0000,uVar7,*(undefined8 *)puVar2,0,uVar9,
                           0,0);
        uVar7 = Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
                          (param_7,param_8,param_9,uVar7,*(undefined8 *)puVar1);
        lVar8 = Dino_BusSand_App_UI_KitParts__Label_2306b88(uVar7,0);
                    /* catch() { ... } // from try @ 0227f108 with catch @ 0227f15c */
        if (((lVar8 != 0) && (lVar8 = TMPro_TMP_Text__get_transform_42cd604(lVar8,0), lVar8 != 0))
           && (plVar10 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar8,0),
              plVar10 != (long *)0x0)) {
                    /* try { // try from 0227f17c to 0237f17f has its CatchHandler @ 0227f188 */
          if (*plVar10 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar10);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227f17c with catch @ 0227f188
                        */
                    /* try { // try from 0227f18c to 0237f1bb has its CatchHandler @ 0227f18c
                       catch() { ... } // from try @ 0227f18c with catch @ 0227f18c
                       catch() { ... } // from try @ 0227f1c8 with catch @ 0227f18c */
          fVar12 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar10,0);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (fVar12 + 0.0,param_8 + 6.0,plVar10,0);
                    /* try { // try from 0227f1bc to 0237f1c7 has its CatchHandler @ 0227f1e8 */
                    /* try { // try from 0227f1c8 to 0237f203 has its CatchHandler @ 0227f18c */
          Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e1fef8,_UNK_00e20170,uVar7,0);
          puVar1 = PTR_DAT_04caa038;
          if (*(long *)(param_9 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 0227f1bc with catch @ 0227f1e8 */
            uVar9 = *(undefined8 *)(*(long *)(param_9 + 0x10) + 0x10);
            lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cad4b8,3);
                    /* try { // try from 0227f204 to 0237f277 has its CatchHandler @ 0227f204
                       catch() { ... } // from try @ 0227f204 with catch @ 0227f204
                       catch() { ... } // from try @ 0227f28c with catch @ 0227f204 */
            lVar11 = FUN_02133068(*(undefined8 *)puVar1,1);
            if (lVar11 != 0) {
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_04cad478;
                thunk_FUN_02134474();
                if (lVar8 == 0) goto LAB_0227f364;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(long *)(lVar8 + 0x20) = lVar11;
                  thunk_FUN_02134474((long *)(lVar8 + 0x20),lVar11);
                  lVar11 = FUN_02133068(*(undefined8 *)puVar1,2);
                  if (lVar11 == 0) goto LAB_0227f364;
                  if (*(int *)(lVar11 + 0x18) != 0) {
                    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar3;
                    /* try { // try from 0227f278 to 0237f28b has its CatchHandler @ 0227f2a0 */
                    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20));
                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 0227f28c to 0237f2b7 has its CatchHandler @ 0227f204 */
                      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)puVar6;
                      thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 0227f278 with catch @ 0227f2a0 */
                      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                        *(long *)(lVar8 + 0x28) = lVar11;
                        thunk_FUN_02134474((long *)(lVar8 + 0x28),lVar11);
                        lVar11 = FUN_02133068(*(undefined8 *)puVar1,1);
                        if (lVar11 == 0) goto LAB_0227f364;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02134474();
                          puVar1 = PTR_DAT_04cad4c0;
                          if (2 < *(uint *)(lVar8 + 0x18)) {
                            *(long *)(lVar8 + 0x30) = lVar11;
                            thunk_FUN_02134474((long *)(lVar8 + 0x30),lVar11);
                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            Dino_BusSand_App_UI_UiMotion__Beats_2290f98
                                      (_UNK_00e20aec,_UNK_00e201f0,uVar9,lVar8,0);
                            return uVar7;
                          }
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
        }
      }
    }
  }
LAB_0227f364:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

