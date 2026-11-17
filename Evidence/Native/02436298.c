/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$BuildTower
void Dino_BusSand_App_UI_WinStreakPanel__BuildTower (Dino_BusSand_App_UI_WinStreakPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$BuildTower
   void Dino_BusSand_App_UI_WinStreakPanel__BuildTower (Dino_BusSand_App_UI_WinStreakPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__BuildTower_2336298(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int iStack_54;
  
  if ((bRam0000000004f9c63f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cb9288);
    FUN_02132f7c(PTR_DAT_04cb9290);
    FUN_02132f7c(PTR_DAT_04cb7e90);
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cafbd8);
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04cb5430);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02436250 with catch @ 02436350
                        */
    FUN_02132f7c(PTR_DAT_04cae0d0);
    FUN_02132f7c(PTR_DAT_04cae0d8);
                    /* try { // try from 0243636c to 0253636f has its CatchHandler @ 02436388 */
                    /* try { // try from 02436370 to 0253638b has its CatchHandler @ 024360f4 */
    FUN_02132f7c(PTR_DAT_04cb9298);
    FUN_02132f7c(PTR_DAT_04cb92a0);
                    /* catch() { ... } // from try @ 0243636c with catch @ 02436388 */
    FUN_02132f7c(PTR_DAT_04cb92a8);
                    /* try { // try from 0243638c to 02536393 has its CatchHandler @ 0243639c */
                    /* try { // try from 02436394 to 0253639f has its CatchHandler @ 024360f4 */
    FUN_02132f7c(PTR_DAT_04cb92b0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243638c with catch @ 0243639c
                        */
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb92b8);
    FUN_02132f7c(PTR_DAT_04cb92c0);
    FUN_02132f7c(PTR_DAT_04cb92c8);
    FUN_02132f7c(PTR_DAT_04cb92d0);
    FUN_02132f7c(PTR_DAT_04cad4d8);
    FUN_02132f7c(PTR_DAT_04cb4db8);
    FUN_02132f7c(PTR_DAT_04caf950);
    FUN_02132f7c(PTR_DAT_04cb92d8);
    FUN_02132f7c(PTR_DAT_04cb92e0);
    FUN_02132f7c(PTR_DAT_04cb92e8);
    FUN_02132f7c(PTR_DAT_04cafeb0);
    FUN_02132f7c(PTR_DAT_04cb92f0);
    FUN_02132f7c(PTR_DAT_04cb9228);
    FUN_02132f7c(PTR_DAT_04cb92f8);
    FUN_02132f7c(PTR_DAT_04cb9300);
    FUN_02132f7c(PTR_DAT_04cb9240);
    FUN_02132f7c(PTR_DAT_04cb9308);
    FUN_02132f7c(PTR_DAT_04cb9310);
    FUN_02132f7c(PTR_DAT_04cafe68);
    FUN_02132f7c(PTR_DAT_04cb1928);
    FUN_02132f7c(PTR_DAT_04cab288);
    FUN_02132f7c(PTR_DAT_04cb9248);
    bRam0000000004f9c63f = 1;
  }
  iStack_54 = 0;
  lVar9 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c(0);
  puVar3 = PTR_DAT_04cb9310;
  puVar5 = PTR_DAT_04cad330;
  if (lVar9 != 0) {
    iVar8 = *(int *)(lVar9 + 0x18);
    uVar10 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    lVar11 = Dino_BusSand_App_UI_UiKit__Fill_22817d8(0,0,0,0,uVar10,*(undefined8 *)puVar3,0);
    plVar14 = (long *)(param_1 + 0x38);
    *plVar14 = lVar11;
    thunk_FUN_02134474(plVar14,lVar11);
    Dino_BusSand_App_UI_UiKit__HitArea_228277c(*plVar14,0);
    if ((*plVar14 != 0) &&
       (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*plVar14,0),
       puVar4 = PTR_DAT_04cb9298, puVar3 = PTR_DAT_04caa458, lVar11 != 0)) {
      lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                         (lVar11,*(undefined8 *)PTR_DAT_04cb7e90);
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)puVar4,0);
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x20) = uVar10;
        thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20),uVar10);
        if ((*plVar14 != 0) &&
           (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*plVar14,0),
           puVar3 = PTR_DAT_04cb92e8, fVar19 = _UNK_00e1fe34, lVar11 != 0)) {
          fVar18 = (float)(iVar8 + 1) * _UNK_00e1fe34;
          UnityEngine_GameObject__AddComponent_object__275a54c
                    (lVar11,*(undefined8 *)PTR_DAT_04cafbd0);
          lVar11 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                             (0x44870000,fVar18 + 760.0 + 1000.0,0,0,*(undefined8 *)(param_1 + 0x38)
                              ,*(undefined8 *)puVar3,0,0,0);
          plVar13 = (long *)(param_1 + 0x40);
          *plVar13 = lVar11;
          thunk_FUN_02134474(plVar13,lVar11);
          lVar11 = *plVar13;
          if (lVar11 != 0) {
            UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar11,0);
            UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar11,0);
            if (*plVar13 != 0) {
              UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,*plVar13,0);
              if ((*plVar14 != 0) &&
                 (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*plVar14,0), lVar11 != 0))
              {
                lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                                   (lVar11,*(undefined8 *)PTR_DAT_04cafbd8);
                plVar16 = (long *)(param_1 + 0xa0);
                *plVar16 = lVar11;
                thunk_FUN_02134474(plVar16,lVar11);
                if (*plVar16 != 0) {
                  *(long *)(*plVar16 + 0x20) = *plVar13;
                  thunk_FUN_02134474();
                  if (*plVar16 != 0) {
                    UnityEngine_UI_ScrollRect__set_viewport_468e0c8(*plVar16,*plVar14,0);
                    puVar3 = PTR_DAT_04cb92a0;
                    uVar10 = _UNK_00e69e00;
                    lVar11 = *plVar16;
                    if (lVar11 != 0) {
                      lVar15 = *(long *)(lVar11 + 0x68);
                      uVar12 = *(undefined8 *)PTR_DAT_04cae0d0;
                      *(undefined1 *)(lVar11 + 0x28) = 0;
                      *(undefined8 *)(lVar11 + 0x2c) = 0x3dcccccd00000001;
                      *(undefined8 *)(lVar11 + 0x38) = uVar10;
                      uVar10 = thunk_FUN_0216e89c(uVar12);
                      UnityEngine_Events_UnityAction_Vector2____ctor_303b9ac
                                (uVar10,param_1,*(undefined8 *)puVar3,0);
                      if (lVar15 != 0) {
                        UnityEngine_Events_UnityEvent_Vector2___AddListener_303dee8
                                  (lVar15,uVar10,*(undefined8 *)PTR_DAT_04cae0d8);
                        puVar4 = PTR_DAT_04cb9308;
                        puVar3 = PTR_DAT_04cb92f0;
                        uVar2 = _UNK_00e2079c;
                        fVar18 = _UNK_00e20798;
                        uVar1 = _UNK_00e1ff90;
                        iStack_54 = -1;
                        if (-2 < *(int *)(lVar9 + 0x18)) {
                          do {
                            lVar11 = *plVar13;
                            uVar10 = System_Int32__ToString_482d750(&iStack_54,0);
                            uVar10 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar10,0);
                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar5);
                            }
                            plVar14 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                                        (uVar1,fVar19,0,0,0x3f800000,lVar11,uVar10,
                                                         *(undefined8 *)puVar3,0,0);
                            if (plVar14 == (long *)0x0) goto LAB_02436edc;
                            UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar14,0);
                            Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                                      (uVar2,(float)iStack_54 * fVar19 + 760.0 + fVar18 + 34.0);
                            (**(code **)(*plVar14 + 0x2c8))
                                      (plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
                            iStack_54 = iStack_54 + 1;
                          } while (iStack_54 <= *(int *)(lVar9 + 0x18));
                        }
                        puVar7 = PTR_DAT_04cb9300;
                        puVar6 = PTR_DAT_04cb92f8;
                        puVar4 = PTR_DAT_04cb92e0;
                        puVar3 = PTR_DAT_04cb92b8;
                        iVar8 = Dino_BusSand_App_Meta_WinStreak__get_TopFloor_2293148(0);
                        fVar19 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac
                                                  ((float)iVar8);
                        Dino_BusSand_App_UI_WinStreakPanel__Tiled_2337d04
                                  (0x42b80000,fVar19 + -760.0 + 40.0,*(undefined8 *)(param_1 + 0x40)
                                   ,*(undefined8 *)puVar6,*(undefined8 *)puVar7);
                    /* try { // try from 024368ec to 025369bf has its CatchHandler @ 024368ec
                       catch() { ... } // from try @ 024368ec with catch @ 024368ec
                       catch() { ... } // from try @ 024369f8 with catch @ 024368ec
                       catch() { ... } // from try @ 02436a28 with catch @ 024368ec
                       catch() { ... } // from try @ 02436a58 with catch @ 024368ec
                       catch() { ... } // from try @ 02436a7c with catch @ 024368ec */
                        Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                                  (0xc3dc0000,(fVar19 + 760.0) * 0.5);
                        lVar11 = Dino_BusSand_App_UI_WinStreakPanel__Tiled_2337d04
                                           (0x42900000,0x41200000,*(undefined8 *)(param_1 + 0x40),
                                            *(undefined8 *)puVar4,*(undefined8 *)puVar3);
                        plVar14 = (long *)(param_1 + 0x70);
                        *plVar14 = lVar11;
                        thunk_FUN_02134474(plVar14,lVar11);
                        if ((*plVar14 != 0) &&
                           (lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                                               (*plVar14,*(undefined8 *)PTR_DAT_04cad788),
                           lVar11 != 0)) {
                          UnityEngine_UI_Image__set_type_44afa58(lVar11,1,0);
                          puVar6 = PTR_DAT_04cb92d0;
                          puVar4 = PTR_DAT_04cb92c0;
                          puVar3 = PTR_DAT_04cb1928;
                          if (*plVar14 != 0) {
                            UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,*plVar14,0);
                            Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                                      (0xc3dc0000,0x443e0000,*plVar14);
                            lVar11 = *plVar13;
                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar1 = _UNK_00e20424;
                    /* try { // try from 024369c0 to 025369c7 has its CatchHandler @ 02436a38 */
                            lVar11 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                               (_UNK_00e20424,0x43070000,0,0,lVar11,
                                                *(undefined8 *)puVar3,0,0,0);
                    /* try { // try from 024369e0 to 025369e7 has its CatchHandler @ 02436a30 */
                            plVar14 = (long *)(param_1 + 0x58);
                            *plVar14 = lVar11;
                    /* try { // try from 024369f0 to 025369f7 has its CatchHandler @ 02436a2c */
                            thunk_FUN_02134474(plVar14,lVar11);
                    /* try { // try from 024369f8 to 02536a23 has its CatchHandler @ 024368ec */
                            lVar11 = Dino_BusSand_App_UI_WinStreakPanel__Tiled_2337d04
                                               (0x42800000,_UNK_00e2061c,*plVar14,
                                                *(undefined8 *)puVar4,*(undefined8 *)puVar6);
                            puVar4 = PTR_DAT_04cb9228;
                            puVar3 = PTR_DAT_04cad4d8;
                            if (lVar11 != 0) {
                    /* try { // try from 02436a24 to 02536a27 has its CatchHandler @ 02436a34 */
                    /* try { // try from 02436a28 to 02536a53 has its CatchHandler @ 024368ec */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024369f0 with catch @ 02436a2c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024369e0 with catch @ 02436a30
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02436a24 with catch @ 02436a34
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024369c0 with catch @ 02436a38
                        */
                              UnityEngine_RectTransform__set_anchorMax_43cf768
                                        (0x3f000000,0x3f000000,lVar11,0);
                              UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                        (0x3f000000,0x3f000000,lVar11,0);
                    /* try { // try from 02436a54 to 02536a57 has its CatchHandler @ 02436a70 */
                    /* try { // try from 02436a58 to 02536a73 has its CatchHandler @ 024368ec */
                              UnityEngine_RectTransform__set_pivot_43cfbf4
                                        (0x3f000000,0x3f800000,lVar11,0);
                    /* catch() { ... } // from try @ 02436a54 with catch @ 02436a70 */
                    /* try { // try from 02436a74 to 02536a7b has its CatchHandler @ 02436a84 */
                              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                                        (0x40800000,0xc1a00000,lVar11,0);
                    /* try { // try from 02436a7c to 02536a87 has its CatchHandler @ 024368ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02436a74 with catch @ 02436a84
                        */
                              plVar16 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                                          (uVar1,0x43070000,0,0,0x3f800000,*plVar14,
                                                           *(undefined8 *)puVar3,
                                                           *(undefined8 *)puVar4,0,0);
                              puVar6 = PTR_DAT_04cb4db8;
                              puVar4 = PTR_DAT_04cafe68;
                              puVar3 = PTR_DAT_04caf950;
                              if (plVar16 != (long *)0x0) {
                                (**(code **)(*plVar16 + 0x2c8))
                                          (plVar16,0,*(undefined8 *)(*plVar16 + 0x2d0));
                                uVar1 = _UNK_00e20138;
                                uVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                                   (0x43970000,_UNK_00e20138,0,0x43230000,
                                                    *(undefined8 *)(param_1 + 0x58),
                                                    *(undefined8 *)puVar4,0,0,0);
                                puVar17 = (undefined8 *)(param_1 + 0x60);
                                *puVar17 = uVar10;
                                thunk_FUN_02134474(puVar17,uVar10);
                                lVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                                   (0x43970000,uVar1,0,0,0x3f800000,*puVar17,
                                                    *(undefined8 *)puVar6,*(undefined8 *)puVar3,0,0)
                                ;
                                if (lVar11 != 0) {
                                  uVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14
                                                     (lVar11,0);
                                  *(undefined8 *)(param_1 + 0x68) = uVar10;
                                  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar10);
                                  if ((*(long *)(param_1 + 0x60) != 0) &&
                                     (lVar11 = UnityEngine_Component__get_gameObject_43bcde8
                                                         (*(long *)(param_1 + 0x60),0),
                                     puVar6 = PTR_DAT_04cb92d8, puVar4 = PTR_DAT_04cb92b0,
                                     puVar3 = PTR_DAT_04cb92a8, lVar11 != 0)) {
                                    UnityEngine_GameObject__AddComponent_object__275a54c
                                              (lVar11,*(undefined8 *)PTR_DAT_04cb9288);
                                    uVar10 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                                       (0x42e40000,0x43080000,0,0,
                                                        *(undefined8 *)(param_1 + 0x40),
                                                        *(undefined8 *)puVar4,0,0,0);
                                    puVar17 = (undefined8 *)(param_1 + 0x78);
                                    *puVar17 = uVar10;
                                    thunk_FUN_02134474(puVar17,uVar10);
                                    plVar16 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                                                (_UNK_00e207a0,_UNK_00e2013c,0,
                                                                 0xc0400000,0x3f800000,*puVar17,
                                                                 *(undefined8 *)puVar6,
                                                                 *(undefined8 *)puVar3,0,0);
                                    puVar7 = PTR_DAT_04cafeb0;
                                    puVar6 = PTR_DAT_04cad4c8;
                                    puVar4 = PTR_DAT_04cac878;
                                    puVar3 = PTR_DAT_04cab288;
                                    if (plVar16 != (long *)0x0) {
                                      (**(code **)(*plVar16 + 0x2c8))
                                                (plVar16,0,*(undefined8 *)(*plVar16 + 0x2d0));
                                      uVar10 = *(undefined8 *)(param_1 + 0x78);
                                      uStack_98 = 0;
                                      uStack_90 = 0;
                                      uStack_88 = 0;
                                      System_Nullable_Color____ctor_2bc9090
                                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                                 &uStack_98,*(undefined8 *)puVar4);
                                      uStack_a0 = uStack_88;
                                      uStack_a8 = uStack_90;
                                      uStack_b0 = uStack_98;
                                      uVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                                                         (0x42680000,0x42c80000,0x428c0000,0,
                                                          0x40000000,uVar10,*(undefined8 *)puVar7,
                                                          *(undefined8 *)puVar3,
                                                          *(undefined8 *)puVar6,&uStack_b0,0x202,0);
                                      *(undefined8 *)(param_1 + 0x88) = uVar10;
                                      thunk_FUN_02134474();
                                      puVar3 = PTR_DAT_04cb5430;
                                      if (0 < *(int *)(lVar9 + 0x18)) {
                                        iVar8 = 0;
                                        do {
                                          uVar10 = 
                                                  System_Collections_Generic_List_object___get_Item_3a81924
                                                            (lVar9,iVar8,*(undefined8 *)puVar3);
                                          Dino_BusSand_App_UI_WinStreakPanel__BuildStop_2337de8
                                                    (param_1,uVar10,iVar8);
                                          iVar8 = iVar8 + 1;
                                        } while (iVar8 < *(int *)(lVar9 + 0x18));
                                      }
                                      puVar3 = PTR_DAT_04cb92c8;
                                      lVar9 = *plVar13;
                                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                        thunk_FUN_0218fdac();
                                      }
                                      puVar4 = PTR_DAT_04cb9248;
                                      puVar5 = PTR_DAT_04cb9240;
                                      lVar9 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                                        (_UNK_00e200d4,_UNK_00e20620,0,0,lVar9,
                                                         *(undefined8 *)puVar3,0,0,0);
                                      plVar13 = (long *)(param_1 + 0x50);
                                      *plVar13 = lVar9;
                                      thunk_FUN_02134474(plVar13,lVar9);
                                      Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                                                (0x42200000,0x43f50000,*plVar13);
                                      lVar9 = *plVar13;
                                      if (cRam0000000004f9b948 == '\0') {
                                        FUN_02132f7c(PTR_DAT_04cacfc0);
                                        cRam0000000004f9b948 = '\x01';
                                      }
                                      plVar16 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                                                  (**(undefined4 **)
                                                                     (*(long *)PTR_DAT_04cacfc0 +
                                                                     0xb8),(*(undefined4 **)
                                                                             (*(long *)
                                                  PTR_DAT_04cacfc0 + 0xb8))[1],0,0,0x3f800000,lVar9,
                                                  *(undefined8 *)puVar4,*(undefined8 *)puVar5,0,0);
                                      if (plVar16 != (long *)0x0) {
                                        uVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14
                                                           (plVar16,0);
                                        Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,uVar10,0)
                                        ;
                                        UnityEngine_UI_Image__set_preserveAspect_44afae0
                                                  (plVar16,0,0);
                                        (**(code **)(*plVar16 + 0x2c8))
                                                  (plVar16,0,*(undefined8 *)(*plVar16 + 0x2d0));
                                        if (((*plVar13 != 0) &&
                                            (lVar9 = UnityEngine_Component__get_gameObject_43bcde8
                                                               (*plVar13,0), lVar9 != 0)) &&
                                           (lVar9 = 
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (lVar9,*(undefined8 *)PTR_DAT_04cb9290),
                                           lVar9 != 0)) {
                                          lVar11 = *plVar14;
                    /* try { // try from 02436e8c to 02536fdb has its CatchHandler @ 02436e8c
                       catch() { ... } // from try @ 02436e8c with catch @ 02436e8c
                       catch() { ... } // from try @ 02436fe4 with catch @ 02436e8c
                       catch() { ... } // from try @ 02437048 with catch @ 02436e8c
                       catch() { ... } // from try @ 0243706c with catch @ 02436e8c */
                                          *(undefined4 *)(lVar9 + 0x20) = 0x41d00000;
                                          if (lVar11 != 0) {
                                            UnityEngine_Transform__SetAsLastSibling_43d4684
                                                      (lVar11,0);
                                            if (*plVar13 != 0) {
                                              UnityEngine_Transform__SetAsLastSibling_43d4684
                                                        (*plVar13,0);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02436edc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

