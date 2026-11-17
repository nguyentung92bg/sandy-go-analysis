/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$ShowTooltip
void Dino_BusSand_App_UI_WinStreakPanel__ShowTooltip (Dino_BusSand_App_UI_WinStreakPanel_o* __this, Dino_BusSand_App_UI_WinStreakPanel_Stop_o* st, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$ShowTooltip
   void Dino_BusSand_App_UI_WinStreakPanel__ShowTooltip (Dino_BusSand_App_UI_WinStreakPanel_o*
   __this, Dino_BusSand_App_UI_WinStreakPanel_Stop_o* st, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__ShowTooltip_23393a4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a4;
  
  if ((bRam0000000004f9c64e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caf688);
    FUN_02132f7c(PTR_DAT_04cb8ff0);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb8ff8);
    FUN_02132f7c(PTR_DAT_04cb9408);
    FUN_02132f7c(PTR_DAT_04cb9410);
    FUN_02132f7c(PTR_DAT_04cb9418);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb9420);
    FUN_02132f7c(PTR_DAT_04cb6238);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cb4e18);
    FUN_02132f7c(PTR_DAT_04caf218);
    FUN_02132f7c(PTR_DAT_04cb93f8);
    FUN_02132f7c(PTR_DAT_04cb6250);
    bRam0000000004f9c64e = 1;
  }
  iStack_a4 = 0;
  uStack_b0 = 0;
  Dino_BusSand_App_UI_WinStreakPanel__HideTooltip_233923c(param_1);
  puVar3 = PTR_DAT_04cb9418;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    lVar11 = *(long *)(*(long *)(param_2 + 0x10) + 0x20);
    lVar6 = *(long *)PTR_DAT_04cb9418;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    puVar10 = *(undefined8 **)(lVar6 + 0xb8);
    lVar12 = puVar10[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar15 = *puVar10;
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8ff8);
      System_Predicate_KeyValuePair_int__long_____ctor_2c49858
                (lVar12,uVar15,*(undefined8 *)PTR_DAT_04cb9408,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar7 = lVar12;
      thunk_FUN_02134474(plVar7,lVar12);
    }
    puVar4 = PTR_DAT_04cb8ff0;
    if (lVar11 != 0) {
      lVar6 = System_Collections_Generic_List_KeyValuePair_int__long____FindAll_3965f50
                        (lVar11,lVar12,*(undefined8 *)PTR_DAT_04cb8ff0);
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar11 = *(long *)puVar3;
        lVar12 = *(long *)(*(long *)(param_2 + 0x10) + 0x20);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        puVar10 = *(undefined8 **)(lVar11 + 0xb8);
        lVar16 = puVar10[2];
        if (lVar16 == 0) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar15 = *puVar10;
          lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8ff8);
          System_Predicate_KeyValuePair_int__long_____ctor_2c49858
                    (lVar16,uVar15,*(undefined8 *)PTR_DAT_04cb9410,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar7 = lVar16;
          thunk_FUN_02134474(plVar7,lVar16);
        }
        if ((lVar12 != 0) &&
           (uVar15 = System_Collections_Generic_List_KeyValuePair_int__long____FindAll_3965f50
                               (lVar12,lVar16,*(undefined8 *)puVar4), lVar6 != 0)) {
          System_Collections_Generic_List_KeyValuePair_int__long____AddRange_3965a54
                    (lVar6,uVar15,*(undefined8 *)PTR_DAT_04caf688);
          puVar4 = PTR_DAT_04cb93f8;
          puVar3 = PTR_DAT_04cad330;
          iVar2 = *(int *)(lVar6 + 0x18);
          iVar1 = iVar2;
          if (iVar2 < 2) {
            iVar1 = 1;
          }
          fVar23 = 202.0;
          if (940.0 / (float)iVar1 <= 202.0) {
            fVar23 = 940.0 / (float)iVar1;
          }
          fVar17 = fVar23 * (float)iVar2 + 60.0;
          fVar20 = 280.0;
          if (280.0 <= fVar17) {
            fVar20 = fVar17;
          }
          if (*(long *)(param_2 + 0x10) != 0) {
            uVar13 = *(undefined8 *)(param_1 + 0x40);
            uVar15 = System_Int32__ToString_482d750(*(long *)(param_2 + 0x10) + 0x10,0);
            uVar15 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar15,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar15 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                               (fVar20,0x43660000,0,0,uVar13,uVar15,0,0,0);
            puVar5 = PTR_DAT_04cb9428;
            puVar4 = PTR_DAT_04cb4e18;
            if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 024397a0 to 025397a7 has its CatchHandler @ 02439848 */
              fVar19 = fVar20 * _UNK_00e2065c + -103.5;
              fVar17 = (540.0 - fVar20 * 0.5) + -20.0;
              fVar18 = fVar20 * 0.5 + -540.0 + 20.0;
              if (fVar19 <= fVar17) {
                fVar17 = fVar19;
              }
                    /* try { // try from 024397cc to 025397cf has its CatchHandler @ 02439840 */
              if (fVar18 <= fVar19) {
                fVar18 = fVar17;
              }
                    /* try { // try from 024397d0 to 025397d3 has its CatchHandler @ 02439844 */
                    /* try { // try from 024397d4 to 02539863 has its CatchHandler @ 0243916c */
              fVar17 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac
                                        ((float)*(int *)(*(long *)(param_2 + 0x10) + 0x14));
              Dino_BusSand_App_UI_WinStreakPanel__Place_2337b50
                        (fVar18,fVar17 + _UNK_00e20290,uVar15);
              uStack_c8 = 0;
              uStack_c0 = 0;
              uStack_b8 = 0;
              lVar11 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                                 (0x42800000,0x42800000,-103.5 - fVar18,0xc2e60000,_UNK_00e2098c,
                                  uVar15,*(undefined8 *)puVar5,*(undefined8 *)puVar4,&uStack_c8,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024397cc with catch @ 02439840
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024397d0 with catch @ 02439844
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024397a0 with catch @ 02439848
                        */
              UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0,_UNK_00e2006c,0);
              puVar4 = PTR_DAT_04cb9420;
              if (lVar11 != 0) {
                UnityEngine_Transform__set_localRotation_43d156c(lVar11,0);
                    /* try { // try from 02439864 to 02539867 has its CatchHandler @ 02439888 */
                    /* try { // try from 02439868 to 0253988b has its CatchHandler @ 0243916c */
                if (cRam0000000004f9b948 == '\0') {
                  FUN_02132f7c(PTR_DAT_04cacfc0);
                  cRam0000000004f9b948 = '\x01';
                }
                    /* catch() { ... } // from try @ 02439864 with catch @ 02439888 */
                    /* try { // try from 0243988c to 02539893 has its CatchHandler @ 0243989c */
                uVar21 = 0x43660000;
                    /* try { // try from 02439894 to 0253989f has its CatchHandler @ 0243916c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243988c with catch @ 0243989c
                        */
                    /* try { // try from 024398a0 to 0253998f has its CatchHandler @ 024398a0
                       catch() { ... } // from try @ 024398a0 with catch @ 024398a0
                       catch() { ... } // from try @ 02439998 with catch @ 024398a0
                       catch() { ... } // from try @ 02439a24 with catch @ 024398a0
                       catch() { ... } // from try @ 02439a48 with catch @ 024398a0 */
                uVar13 = Dino_BusSand_App_UI_KitPopup__Panel_2282a2c
                                   (fVar20,0x43660000,
                                    **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                                    (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],uVar15,
                                    *(undefined8 *)puVar4,0);
                iStack_a4 = 0;
                if (0 < iVar2) {
                  do {
                    auVar24 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                                        (lVar6,iStack_a4,*(undefined8 *)PTR_DAT_04cadda0);
                    iVar1 = iStack_a4;
                    uVar8 = System_Int32__ToString_482d750(&iStack_a4,0);
                    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb6250,uVar8,0);
                    iVar14 = auVar24._0_4_;
                    uVar22 = 0x43430000;
                    uVar21 = 0x43080000;
                    if (iVar14 != 0x3e9) {
                      uVar21 = 0x43160000;
                      uVar22 = 0x43160000;
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar3);
                    }
                    fVar20 = fVar23 * ((float)iVar1 - (float)(iVar2 + -1) / 2.0);
                    /* try { // try from 02439990 to 02539997 has its CatchHandler @ 02439a04 */
                    lVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                                       (uVar22,uVar21,fVar20,0,0x3f800000,uVar13,uVar8,0,0,0);
                    /* try { // try from 02439998 to 02539a1f has its CatchHandler @ 024398a0 */
                    if (iVar14 == 0x3e9) {
                      lVar12 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4
                                         (*(undefined8 *)PTR_DAT_04caf218,0);
                    }
                    else {
                      lVar12 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0
                                         (auVar24._0_8_ & 0xffffffff,0);
                      if (lVar12 == 0) {
                        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8,0);
                        }
                        lVar12 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8
                                           (auVar24._0_8_ & 0xffffffff,0,0);
                      }
                    }
                    if (lVar11 == 0) goto LAB_02439c20;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02439990 with catch @ 02439a04
                        */
                    UnityEngine_UI_Image__set_sprite_44a7258(lVar11,lVar12,0);
                    UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar11,1,0);
                    uStack_b0 = auVar24._8_8_;
                    /* try { // try from 02439a20 to 02539a23 has its CatchHandler @ 02439a3c */
                    /* try { // try from 02439a24 to 02539a3f has its CatchHandler @ 024398a0 */
                    uVar8 = System_Int64__ToString_482e7e4(&uStack_b0,0);
                    if (iVar14 != 0x3e9) {
                    /* catch() { ... } // from try @ 02439a20 with catch @ 02439a3c */
                    /* try { // try from 02439a40 to 02539a47 has its CatchHandler @ 02439a50 */
                    /* try { // try from 02439a48 to 02539a53 has its CatchHandler @ 024398a0 */
                      uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar8,0)
                      ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02439a40 with catch @ 02439a50
                        */
                    }
                    uVar9 = System_Int32__ToString_482d750(&iStack_a4,0);
                    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb6238,uVar9,0);
                    uStack_e0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    System_Nullable_Color____ctor_2bc9090
                              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_e0,
                               *(undefined8 *)PTR_DAT_04cac878);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar21 = 0x43160000;
                    uStack_f8 = uStack_d8;
                    uStack_100 = uStack_e0;
                    uStack_f0 = uStack_d0;
                    Dino_BusSand_App_UI_UiKit__Text_2282314
                              (0x42700000,0x43160000,0x428c0000,fVar20 + 45.0,0xc25c0000,uVar13,
                               uVar9,uVar8,*(undefined8 *)PTR_DAT_04caf460,&uStack_100,0x202,0);
                    iStack_a4 = iStack_a4 + 1;
                  } while (iStack_a4 < iVar2);
                }
                *(undefined8 *)(param_1 + 0x80) = uVar15;
                thunk_FUN_02134474((undefined8 *)(param_1 + 0x80),uVar15);
                puVar4 = PTR_DAT_04cad568;
                puVar3 = PTR_DAT_04cad4c0;
                if (*(long *)(param_1 + 0x40) != 0) {
                  UnityEngine_RectTransform__get_anchoredPosition_43cf828
                            (*(long *)(param_1 + 0x40),0);
                  lVar6 = *(long *)puVar3;
                  *(undefined4 *)(param_1 + 0x98) = uVar21;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                            (0,_UNK_00e20094,0x3e800000,_UNK_00e2032c,uVar15,0,0,0);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b94e == '\0') {
                    FUN_02132f7c(PTR_DAT_04cad568);
                    cRam0000000004f9b94e = '\x01';
                  }
                  lVar6 = *(long *)puVar4;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar6 = *(long *)puVar4;
                  }
                  if (**(long **)(lVar6 + 0xb8) != 0) {
                    Dino_BusSand_GameAudio__UiPop_2382f58(**(long **)(lVar6 + 0xb8),0);
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
LAB_02439c20:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

