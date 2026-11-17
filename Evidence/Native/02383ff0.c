/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Build
Dino_BusSand_App_UI_KitTopBar_o* Dino_BusSand_App_UI_KitTopBar__Build (UnityEngine_Transform_o* parent, System_Action_o* onCoin, System_Action_o* onHeart, System_Action_o* onSettings, float y, int64_t hold, bool hearts, bool avatar, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Build
   Dino_BusSand_App_UI_KitTopBar_o* Dino_BusSand_App_UI_KitTopBar__Build (UnityEngine_Transform_o*
   parent, System_Action_o* onCoin, System_Action_o* onHeart, System_Action_o* onSettings, float y,
   int64_t hold, bool hearts, bool avatar, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitTopBar__Build_2283ff0
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6,ulong param_7,ulong param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  puVar2 = PTR_DAT_04cb4e90;
  puVar4 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c153 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cb4e98);
    FUN_02132f7c(PTR_DAT_04caf420);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4ea0);
    FUN_02132f7c(PTR_DAT_04caf5f0);
    FUN_02132f7c(PTR_DAT_04caf390);
    FUN_02132f7c(PTR_DAT_04cb4e60);
    FUN_02132f7c(PTR_DAT_04caf2b8);
    FUN_02132f7c(PTR_DAT_04cb4ea8);
    FUN_02132f7c(PTR_DAT_04cb4eb0);
    FUN_02132f7c(PTR_DAT_04cb4eb8);
    FUN_02132f7c(PTR_DAT_04cb4ec0);
    FUN_02132f7c(PTR_DAT_04cad9d0);
    FUN_02132f7c(PTR_DAT_04cb4ec8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cadf58);
    bRam0000000004f9c153 = 1;
  }
  puVar3 = PTR_DAT_04cb4ec0;
  lStack_68 = 0;
  uStack_c0 = (ulong)uStack_c0._4_4_ << 0x20;
  uStack_c8 = 0;
  System_Nullable_Vector2____ctor_2bd0a48(0x3f000000,0x3f800000,&uStack_c8,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (0,0x430c0000,0,param_1,param_2,*(undefined8 *)puVar3,uStack_c8,
                     uStack_c0 & 0xffffffff);
  if (lVar6 != 0) {
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,lVar6,0);
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f800000,lVar6,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0,0x430c0000,lVar6,0);
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
                    /* try { // try from 02384228 to 0248422f has its CatchHandler @ 0238434c */
    if ((lVar7 != 0) &&
       (lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar7,*(undefined8 *)PTR_DAT_04cb4e98), puVar2 = PTR_DAT_04caa200,
       lVar7 != 0)) {
      *(undefined4 *)(lVar7 + 0x68) = param_1;
                    /* try { // try from 02384244 to 02484247 has its CatchHandler @ 02384340 */
                    /* try { // try from 02384248 to 02484257 has its CatchHandler @ 02384348 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = System_Math__Max_4830fd4(0,param_6,0);
      *(undefined8 *)(lVar7 + 0x48) = uVar8;
      if ((param_8 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02384318 with catch @ 02384344
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02384248 with catch @ 02384348
                        */
        uVar12 = 0x42ac0000;
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02384298 to 024842a3 has its CatchHandler @ 02384338 */
        plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (0,0,0,0,0x3f800000,lVar6,*(undefined8 *)PTR_DAT_04cb4ea0,
                                    *(undefined8 *)PTR_DAT_04caf2b8,0);
                    /* try { // try from 023842b0 to 024842b7 has its CatchHandler @ 0238433c */
        if (plVar9 == (long *)0x0) goto LAB_0238472c;
                    /* try { // try from 023842c0 to 024842c7 has its CatchHandler @ 02384334 */
        (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
        lVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
                    /* try { // try from 023842d8 to 024842e7 has its CatchHandler @ 02384328 */
        lVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
                    /* try { // try from 023842e8 to 02484317 has its CatchHandler @ 02383fb0 */
        if ((lVar11 == 0) ||
           (UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f000000,lVar11,0), lVar10 == 0))
        goto LAB_0238472c;
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f000000,lVar10,0);
                    /* try { // try from 02384318 to 0248431b has its CatchHandler @ 02384344 */
                    /* try { // try from 0238431c to 0248431f has its CatchHandler @ 02384330 */
        lVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
                    /* try { // try from 02384320 to 02484323 has its CatchHandler @ 0238432c */
        if (lVar10 == 0) goto LAB_0238472c;
                    /* try { // try from 02384324 to 02484367 has its CatchHandler @ 02383fb0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023842d8 with catch @ 02384328
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02384320 with catch @ 0238432c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0238431c with catch @ 02384330
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023842c0 with catch @ 02384334
                        */
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(_UNK_00e208f4,0x3f800000,lVar10,0);
        uVar12 = _UNK_00e20264;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02384298 with catch @ 02384338
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023842b0 with catch @ 0238433c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02384244 with catch @ 02384340
                        */
      }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02384228 with catch @ 0238434c
                        */
      puVar3 = PTR_DAT_04caf5f0;
      puVar2 = PTR_DAT_04caf420;
      lVar10 = *(long *)PTR_DAT_04caf420;
                    /* try { // try from 02384368 to 0248436b has its CatchHandler @ 0238438c */
                    /* try { // try from 0238436c to 0248438f has its CatchHandler @ 02383fb0 */
      uVar8 = *(undefined8 *)PTR_DAT_04cad9d0;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar2;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
                    /* catch() { ... } // from try @ 02384368 with catch @ 0238438c */
                    /* try { // try from 02384390 to 02484397 has its CatchHandler @ 023843a0 */
      uStack_88 = *(undefined8 *)(lVar10 + 0x28);
      uStack_90 = *(undefined8 *)(lVar10 + 0x20);
                    /* try { // try from 02384398 to 024843a3 has its CatchHandler @ 02383fb0 */
      uStack_80 = *(undefined8 *)(lVar10 + 0x30);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02384390 with catch @ 023843a0
                        */
      lVar10 = Dino_BusSand_App_UI_KitTopBar__Pill_2284730
                         (uVar12,lVar6,uVar8,&uStack_90,*(undefined8 *)puVar3,lVar7 + 0x20,
                          &lStack_68,param_3);
      if (lStack_68 != 0) {
        uVar8 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lStack_68,0);
        *(undefined8 *)(lVar7 + 0x60) = uVar8;
        thunk_FUN_02134474();
        if (lVar10 != 0) {
          plVar9 = (long *)UnityEngine_Transform__Find_43d4bec
                                     (lVar10,*(undefined8 *)PTR_DAT_04caf390,0);
          if (plVar9 == (long *)0x0) {
            *(undefined8 *)(lVar7 + 0x58) = 0;
          }
          else {
            lVar10 = *(long *)PTR_DAT_04cabdb0;
            if ((*plVar9 != lVar10) || (*(long **)(lVar7 + 0x58) = plVar9, *plVar9 != lVar10)) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar9);
            }
          }
          puVar3 = PTR_DAT_04cac458;
          thunk_FUN_02134474(lVar7 + 0x58,plVar9);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar10 = *(long *)puVar3;
          }
          if ((*(char *)(*(long *)(lVar10 + 0xb8) + 2) != '\0') && ((param_7 & 1) != 0)) {
            lVar10 = *(long *)puVar2;
            uVar12 = _UNK_00e20a8c;
            if ((param_8 & 1) == 0) {
              uVar12 = 0x43d50000;
            }
            uVar8 = *(undefined8 *)PTR_DAT_04cadf58;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar2;
            }
            lVar10 = *(long *)(lVar10 + 0xb8);
            uStack_a8 = *(undefined8 *)(lVar10 + 0x40);
            uStack_b0 = *(undefined8 *)(lVar10 + 0x38);
            uStack_a0 = *(undefined8 *)(lVar10 + 0x48);
            lVar10 = Dino_BusSand_App_UI_KitTopBar__Pill_2284730
                               (uVar12,lVar6,uVar8,&uStack_b0,*(undefined8 *)PTR_DAT_04cb4e60,
                                lVar7 + 0x28,lVar7 + 0x30,param_4);
            if (param_4 != 0) {
              if ((lVar10 == 0) ||
                 (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar11 == 0))
              goto LAB_0238472c;
              uVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (lVar11,*(undefined8 *)PTR_DAT_04cb0890);
              *(undefined8 *)(lVar7 + 0xa0) = uVar8;
              thunk_FUN_02134474();
              lVar10 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb4ec8,0)
              ;
              if (lVar10 == 0) goto LAB_0238472c;
              uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
              *(undefined8 *)(lVar7 + 0xa8) = uVar8;
              thunk_FUN_02134474();
            }
            if (*(long *)(lVar7 + 0x30) == 0) goto LAB_0238472c;
            uVar8 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar7 + 0x30),0);
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            System_Nullable_Color____ctor_2bc9090
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_c8,
                       *(undefined8 *)PTR_DAT_04cac878);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uStack_d8 = uStack_c0;
            uStack_e0 = uStack_c8;
            uStack_d0 = uStack_b8;
            uVar8 = Dino_BusSand_App_UI_UiKit__Text_2282314
                              (0x42600000,0x42c80000,0x428c0000,0,0x40800000,uVar8,
                               *(undefined8 *)PTR_DAT_04cb4eb8,*(undefined8 *)PTR_DAT_04ca9c30,
                               *(undefined8 *)PTR_DAT_04cb4ea8,&uStack_e0,0x202);
            *(undefined8 *)(lVar7 + 0x98) = uVar8;
            thunk_FUN_02134474();
          }
          puVar2 = PTR_DAT_04cb4eb0;
          if (param_5 == 0) {
LAB_023846f4:
            Dino_BusSand_App_UI_KitTopBar__Place_2284c6c(lVar7);
            Dino_BusSand_App_UI_KitTopBar__Refresh_2283510(lVar7);
            return lVar7;
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar6 = Dino_BusSand_App_UI_UiKit__SettingsButton_2284b34(lVar6,*(undefined8 *)puVar2);
          if (lVar6 != 0) {
            lVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar6,0);
            lVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar6,0);
            if ((lVar11 != 0) &&
               (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f800000,0x3f000000,lVar11,0),
               lVar10 != 0)) {
              UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f800000,0x3f000000,lVar10,0);
              lVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar6,0);
              puVar4 = PTR_DAT_04cad948;
              if (lVar10 != 0) {
                bVar5 = (param_8 & 1) == 0;
                uVar12 = 0xc2cf0000;
                if (bVar5) {
                  uVar12 = 0xc2b80000;
                }
                uVar1 = 0xbfc00000;
                if (bVar5) {
                  uVar1 = 0;
                }
                UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar12,uVar1,lVar10,0);
                uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
                Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,param_5,1,*(undefined8 *)puVar4,0);
                goto LAB_023846f4;
              }
            }
          }
        }
      }
    }
  }
LAB_0238472c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

