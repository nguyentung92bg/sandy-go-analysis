/* IL2CPP: Dino.BusSand.App.UI.ArtPopup$$Build
Dino_BusSand_App_UI_ArtPopup_Parts_o* Dino_BusSand_App_UI_ArtPopup__Build (Dino_BusSand_App_UI_UIPanel_o* panel, Dino_BusSand_App_UI_ArtPopup_Look_o* look, System_String_o* fallbackTitle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ArtPopup$$Build
   Dino_BusSand_App_UI_ArtPopup_Parts_o* Dino_BusSand_App_UI_ArtPopup__Build
   (Dino_BusSand_App_UI_UIPanel_o* panel, Dino_BusSand_App_UI_ArtPopup_Look_o* look,
   System_String_o* fallbackTitle, const MethodInfo* method); */

long Dino_BusSand_App_UI_ArtPopup__Build_217e350
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e2ec with catch @ 0227e350
                        */
  puVar1 = PTR_DAT_04cad418;
                    /* try { // try from 0227e354 to 0237e35b has its CatchHandler @ 0227e364 */
                    /* try { // try from 0227e35c to 0237e36b has its CatchHandler @ 0227e250 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e354 with catch @ 0227e364
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e31c with catch @ 0227e368
                        */
  if ((bRam0000000004f9b915 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad420);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad428);
    FUN_02132f7c(PTR_DAT_04cad430);
    FUN_02132f7c(PTR_DAT_04cad438);
    FUN_02132f7c(PTR_DAT_04cad418);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad440);
    FUN_02132f7c(PTR_DAT_04cad448);
    FUN_02132f7c(PTR_DAT_04cad450);
    FUN_02132f7c(PTR_DAT_04cad458);
    FUN_02132f7c(PTR_DAT_04cad460);
    bRam0000000004f9b915 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 != 0) {
    puVar13 = (undefined8 *)(lVar6 + 0x10);
    *puVar13 = param_5;
    thunk_FUN_02134474(puVar13,param_5);
    puVar2 = PTR_DAT_04cad430;
    puVar1 = PTR_DAT_04ca9ae8;
    if (param_6 != 0) {
      lVar7 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)(param_6 + 0x10),0);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar8,0);
                    /* try { // try from 0227e498 to 0237e56f has its CatchHandler @ 0227e498
                       catch(type#1 @ 00000000) { ... } // from try @ 0227e498 with catch @ 0227e498
                       catch(type#1 @ 00000000) { ... } // from try @ 0227e63c with catch @ 0227e498
                        */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      uVar17 = _UNK_00e204cc;
      if ((uVar9 & 1) != 0) {
        if (lVar7 == 0) goto LAB_0227e934;
        UnityEngine_Sprite__get_rect_434ee28(lVar7,0);
        uVar17 = param_3;
      }
      if (lVar8 != 0) {
        lVar10 = *(long *)puVar1;
        *(undefined4 *)(lVar8 + 0x30) = uVar17;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        uVar17 = _UNK_00e20024;
        if ((uVar9 & 1) != 0) {
          if (lVar7 == 0) goto LAB_0227e934;
          UnityEngine_Sprite__get_rect_434ee28(lVar7,0);
          uVar17 = param_4;
        }
        uVar11 = *puVar13;
        uVar16 = *(undefined4 *)(param_6 + 0x18);
        *(undefined4 *)(lVar8 + 0x34) = uVar17;
        lVar7 = Dino_BusSand_App_UI_KitPopup__Build_2280d34
                          (0x44750000,uVar17,uVar16,uVar11,param_7,0,0,0,0);
        *(long *)(lVar8 + 0x10) = lVar7;
        thunk_FUN_02134474((long *)(lVar8 + 0x10),lVar7);
        if ((lVar7 != 0) && (plVar12 = *(long **)(lVar7 + 0x40), plVar12 != (long *)0x0)) {
                    /* try { // try from 0227e570 to 0237e573 has its CatchHandler @ 0227e630 */
                    /* try { // try from 0227e578 to 0237e583 has its CatchHandler @ 0227e628 */
          (**(code **)(*plVar12 + 0x2a8))(0,0,0,0,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
          if (*(long *)(lVar7 + 0x48) != 0) {
            lVar10 = *(long *)(lVar7 + 0x18);
            *(undefined4 *)(*(long *)(lVar7 + 0x48) + 0x28) = 0x3f6147ae;
                    /* try { // try from 0227e5b4 to 0237e5b7 has its CatchHandler @ 0227e62c */
            if ((lVar10 != 0) &&
               (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 != 0)) {
                    /* try { // try from 0227e5bc to 0237e5c7 has its CatchHandler @ 0227e624 */
              UnityEngine_GameObject__SetActive_43c1408(lVar10,0,0);
              if ((*(long *)(lVar7 + 0x20) != 0) &&
                 (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar7 + 0x20),0),
                 puVar3 = PTR_DAT_04cad450, puVar2 = PTR_DAT_04cad428, puVar1 = PTR_DAT_04cad330,
                 lVar10 != 0)) {
                UnityEngine_GameObject__SetActive_43c1408(lVar10,0,0);
                    /* try { // try from 0227e5fc to 0237e603 has its CatchHandler @ 0227e620 */
                uVar17 = *(undefined4 *)(lVar8 + 0x30);
                uVar16 = *(undefined4 *)(lVar8 + 0x34);
                uVar11 = *(undefined8 *)(lVar7 + 0x10);
                uVar15 = *(undefined8 *)(param_6 + 0x10);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e5fc with catch @ 0227e620
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e5bc with catch @ 0227e624
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e578 with catch @ 0227e628
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e5b4 with catch @ 0227e62c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e570 with catch @ 0227e630
                        */
                    /* try { // try from 0227e634 to 0237e63b has its CatchHandler @ 0227e644 */
                    /* try { // try from 0227e63c to 0237e647 has its CatchHandler @ 0227e498 */
                uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (uVar17,uVar16,0,0,0x3f800000,uVar11,*(undefined8 *)puVar3,uVar15
                                    ,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e634 with catch @ 0227e644
                        */
                lVar10 = Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
                                   (*(float *)(lVar8 + 0x30) * 0.5,*(float *)(lVar8 + 0x34) * 0.5,
                                    lVar8,uVar11,*(undefined8 *)puVar2);
                plVar12 = (long *)(lVar8 + 0x18);
                *plVar12 = lVar10;
                thunk_FUN_02134474(plVar12,lVar10);
                if (*plVar12 != 0) {
                  UnityEngine_UI_Image__set_preserveAspect_44afae0(*plVar12,0,0);
                  if (*plVar12 != 0) {
                    lVar10 = UnityEngine_Component__get_transform_43bcd18(*plVar12,0);
                    if ((*(long *)(lVar7 + 0x18) != 0) &&
                       (iVar5 = UnityEngine_Transform__GetSiblingIndex_43d48f4
                                          (*(long *)(lVar7 + 0x18),0), lVar10 != 0)) {
                      UnityEngine_Transform__SetSiblingIndex_43d4730(lVar10,iVar5 + 1,0);
                      uVar9 = System_String__IsNullOrEmpty_46d2084
                                        (*(undefined8 *)(param_6 + 0x20),0);
                      if ((uVar9 & 1) == 0) {
                        uVar15 = *(undefined8 *)(lVar7 + 0x10);
                        uVar11 = *(undefined8 *)(param_6 + 0x20);
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                           (0,0,0,0,0x3f800000,uVar15,
                                            *(undefined8 *)PTR_DAT_04cad440,uVar11,0,0);
                    /* try { // try from 0227e734 to 0237e737 has its CatchHandler @ 0227e744 */
                        uVar11 = Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
                                           (*(undefined4 *)(param_6 + 0x28),
                                            *(undefined4 *)(param_6 + 0x2c),lVar8,uVar11,
                                            *(undefined8 *)puVar2);
                        *(undefined8 *)(lVar8 + 0x20) = uVar11;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e734 with catch @ 0227e744
                        */
                        thunk_FUN_02134474();
                      }
                      puVar3 = PTR_DAT_04cad458;
                      uVar15 = *(undefined8 *)(lVar7 + 0x10);
                      uVar11 = *(undefined8 *)(param_6 + 0x30);
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                         (0,0,0,0,0x3f800000,uVar15,*(undefined8 *)puVar3,uVar11,0,0
                                         );
                    /* try { // try from 0227e7a0 to 0237e7ab has its CatchHandler @ 0227e7b4 */
                      lVar10 = Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
                                         (*(undefined4 *)(param_6 + 0x38),
                                          *(undefined4 *)(param_6 + 0x3c),lVar8,uVar11,
                                          *(undefined8 *)puVar2);
                      plVar12 = (long *)(lVar8 + 0x28);
                      *plVar12 = lVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227e7a0 with catch @ 0227e7b4
                        */
                      thunk_FUN_02134474(plVar12,lVar10);
                      if (*plVar12 != 0) {
                        lVar10 = *(long *)(lVar7 + 0x48);
                        uVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar12,0);
                        puVar4 = PTR_DAT_04cad460;
                        puVar3 = PTR_DAT_04cad448;
                        if (lVar10 != 0) {
                          puVar14 = (undefined8 *)(lVar10 + 0x38);
                          *puVar14 = uVar11;
                          thunk_FUN_02134474(puVar14,uVar11);
                          uVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                             (0,0,0,0,0x3f800000,*(undefined8 *)(lVar7 + 0x10),
                                              *(undefined8 *)puVar4,*(undefined8 *)puVar3,0,0);
                          plVar12 = (long *)Dino_BusSand_App_UI_ArtPopup_Parts__At_object__2970578
                                                      (*(undefined4 *)(param_6 + 0x40),
                                                       *(undefined4 *)(param_6 + 0x44),lVar8,uVar11,
                                                       *(undefined8 *)puVar2);
                          puVar2 = PTR_DAT_04cad420;
                          if (plVar12 != (long *)0x0) {
                    /* try { // try from 0227e838 to 0237e887 has its CatchHandler @ 0227e838
                       catch() { ... } // from try @ 0227e838 with catch @ 0227e838
                       catch() { ... } // from try @ 0227e990 with catch @ 0227e838 */
                            (**(code **)(*plVar12 + 0x2c8))
                                      (plVar12,1,*(undefined8 *)(*plVar12 + 0x2d0));
                            uVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar12,0);
                            *(undefined8 *)(lVar7 + 0x38) = uVar11;
                            thunk_FUN_02134474();
                            lVar10 = thunk_FUN_0216e7a0(*puVar13,*(undefined8 *)puVar2);
                            if (lVar10 == 0) {
                    /* try { // try from 0227e888 to 0237e88f has its CatchHandler @ 0227e998 */
                              uVar11 = *(undefined8 *)(lVar7 + 0x10);
                              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                    /* try { // try from 0227e898 to 0237e89f has its CatchHandler @ 0227e9c8 */
                              Dino_BusSand_App_UI_UiKit__HitArea_228277c(uVar11,0);
                              *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar7 + 0x48);
                              thunk_FUN_02134474();
                    /* try { // try from 0227e8b4 to 0237e8c7 has its CatchHandler @ 0227e99c */
                              if (*(long *)(lVar7 + 0x40) == 0) goto LAB_0227e934;
                              uVar11 = UnityEngine_Component__get_gameObject_43bcde8
                                                 (*(long *)(lVar7 + 0x40),0);
                              uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 0227e8f4 to 0237e8fb has its CatchHandler @ 0227e990 */
                              System_Action___ctor_47b5ed0
                                        (uVar15,lVar6,*(undefined8 *)PTR_DAT_04cad438,0);
                    /* try { // try from 0227e904 to 0237e90b has its CatchHandler @ 0227e9a4 */
                              Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar11,uVar15,0,0,0);
                            }
                            return lVar8;
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
LAB_0227e934:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

