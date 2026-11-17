/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$LevelInput
void Dino_BusSand_Cheat_CheatMobilePanel__LevelInput (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$LevelInput
   void Dino_BusSand_Cheat_CheatMobilePanel__LevelInput (Dino_BusSand_Cheat_CheatMobilePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel__LevelInput_236ad5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_04cbad50;
                    /* try { // try from 0246ad7c to 0256ad7f has its CatchHandler @ 0246b09c */
  if ((bRam0000000004f9c795 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cb5d00);
    FUN_02132f7c(PTR_DAT_04cb1868);
                    /* try { // try from 0246adbc to 0256ae0b has its CatchHandler @ 0246b0b4 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cbad58);
    FUN_02132f7c(PTR_DAT_04cbad60);
    FUN_02132f7c(PTR_DAT_04cbad50);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7d78);
    FUN_02132f7c(PTR_DAT_04cb7d80);
    FUN_02132f7c(PTR_DAT_04cbad68);
                    /* try { // try from 0246ae1c to 0256ae27 has its CatchHandler @ 0246b0b0 */
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb5d08);
    FUN_02132f7c(PTR_DAT_04cb5d10);
                    /* try { // try from 0246ae40 to 0256ae43 has its CatchHandler @ 0246b094 */
    FUN_02132f7c(PTR_DAT_04caf568);
    FUN_02132f7c(PTR_DAT_04cbad70);
    FUN_02132f7c(PTR_DAT_04cbad78);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c795 = 1;
  }
  uStack_54 = 0;
                    /* try { // try from 0246ae80 to 0256aecf has its CatchHandler @ 0246b0a8 */
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0___ctor_236dc2c(lVar7,0);
  puVar2 = PTR_DAT_04cad330;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar7 + 0x18),param_1);
    if (*(int *)(param_1 + 0x44) == 1) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 150.0;
    }
    puVar3 = PTR_DAT_04cbad70;
    puVar1 = PTR_DAT_04caf568;
                    /* try { // try from 0246aee0 to 0256af2f has its CatchHandler @ 0246b0bc */
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar8 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (0x43c80000,0x42f00000,0,0,0x3f800000,uVar12,*(undefined8 *)puVar3,
                                *(undefined8 *)puVar1,1,0);
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 0246af40 to 0256af47 has its CatchHandler @ 0246b0b4 */
      (**(code **)(*plVar8 + 0x2c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2d0));
      lVar9 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar8,0);
      puVar1 = PTR_DAT_04cb5d10;
      if (lVar9 != 0) {
                    /* try { // try from 0246af54 to 0256af57 has its CatchHandler @ 0246b0a0 */
        UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar9,0);
                    /* try { // try from 0246af74 to 0256af7b has its CatchHandler @ 0246b0bc */
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar9,0);
                    /* try { // try from 0246af8c to 0256af93 has its CatchHandler @ 0246b0a8 */
                    /* try { // try from 0246afa0 to 0256afa3 has its CatchHandler @ 0246b098 */
                    /* try { // try from 0246afa4 to 0256b07f has its CatchHandler @ 0246aafc */
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (0xc34f0000,-65.0 - *(float *)(param_1 + 0x40),lVar9,0);
        uVar12 = UnityEngine_Component__get_transform_43bcd18(plVar8,0);
        lVar9 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                          (0x41c00000,0x41200000,0x41c00000,0x41200000,uVar12,*(undefined8 *)puVar1,
                           0);
        plVar13 = (long *)(lVar7 + 0x10);
        *plVar13 = lVar9;
        thunk_FUN_02134474(plVar13,lVar9);
        if ((*plVar13 != 0) &&
           (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*plVar13,0),
           puVar6 = PTR_DAT_04cbad78, puVar5 = PTR_DAT_04cb5d08, puVar4 = PTR_DAT_04cb4e20,
           puVar3 = PTR_DAT_04cb1868, puVar1 = PTR_DAT_04ca9c30, lVar9 != 0)) {
          UnityEngine_GameObject__AddComponent_object__275a54c
                    (lVar9,*(undefined8 *)PTR_DAT_04cafbd0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uStack_54 = Dino_BusSand_Core_LevelCatalog__get_Count_2410650(0);
          uVar12 = System_Int32__ToString_482d750(&uStack_54,0);
          uVar12 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,uVar12,0);
                    /* try { // try from 0246b080 to 0256b083 has its CatchHandler @ 0246b0d0 */
                    /* try { // try from 0246b084 to 0256b087 has its CatchHandler @ 0246b0b8 */
                    /* try { // try from 0246b088 to 0256b08b has its CatchHandler @ 0246b0ac */
                    /* try { // try from 0246b08c to 0256b08f has its CatchHandler @ 0246b0a4 */
                    /* try { // try from 0246b090 to 0256b0ef has its CatchHandler @ 0246aafc */
                    /* catch() { ... } // from try @ 0246ae40 with catch @ 0246b094 */
                    /* catch() { ... } // from try @ 0246afa0 with catch @ 0246b098 */
          uVar12 = Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0___LevelInput_g__Line_0_236dc34
                             (_UNK_00e20094,_UNK_00e20114,_UNK_00e1fdd8,0x3f800000,lVar7,
                              *(undefined8 *)puVar5,uVar12,0);
                    /* catch() { ... } // from try @ 0246ad7c with catch @ 0246b09c */
                    /* catch() { ... } // from try @ 0246af54 with catch @ 0246b0a0 */
                    /* catch() { ... } // from try @ 0246b08c with catch @ 0246b0a4 */
                    /* catch() { ... } // from try @ 0246ae80 with catch @ 0246b0a8
                       catch() { ... } // from try @ 0246af8c with catch @ 0246b0a8 */
                    /* catch() { ... } // from try @ 0246b088 with catch @ 0246b0ac */
                    /* catch() { ... } // from try @ 0246ae1c with catch @ 0246b0b0 */
                    /* catch() { ... } // from try @ 0246adbc with catch @ 0246b0b4
                       catch() { ... } // from try @ 0246af40 with catch @ 0246b0b4 */
          puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                    /* catch() { ... } // from try @ 0246b084 with catch @ 0246b0b8 */
                    /* catch() { ... } // from try @ 0246aee0 with catch @ 0246b0bc
                       catch() { ... } // from try @ 0246af74 with catch @ 0246b0bc */
                    /* catch() { ... } // from try @ 0246ad38 with catch @ 0246b0c0 */
          uVar10 = Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass20_0___LevelInput_g__Line_0_236dc34
                             (*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar7,*(undefined8 *)puVar4,
                              *(undefined8 *)puVar1,0);
                    /* catch() { ... } // from try @ 0246ad58 with catch @ 0246b0c4 */
                    /* catch() { ... } // from try @ 0246ac98 with catch @ 0246b0c8 */
                    /* catch() { ... } // from try @ 0246ac84 with catch @ 0246b0cc */
                    /* catch() { ... } // from try @ 0246b080 with catch @ 0246b0d0 */
          lVar9 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0);
                    /* catch() { ... } // from try @ 0246accc with catch @ 0246b0d4 */
          if (lVar9 != 0) {
            lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (lVar9,*(undefined8 *)PTR_DAT_04cb5d00);
                    /* try { // try from 0246b0f0 to 0256b0f3 has its CatchHandler @ 0246b114 */
            plVar14 = (long *)(lVar7 + 0x20);
            *plVar14 = lVar9;
                    /* try { // try from 0246b0f4 to 0256b117 has its CatchHandler @ 0246aafc */
            thunk_FUN_02134474(plVar14,lVar9);
            if (*plVar14 != 0) {
              TMPro_TMP_InputField__set_textViewport_42bfcdc(*plVar14,*plVar13,0);
                    /* catch() { ... } // from try @ 0246b0f0 with catch @ 0246b114 */
              if (*plVar14 != 0) {
                    /* try { // try from 0246b118 to 0256b11f has its CatchHandler @ 0246b128 */
                    /* try { // try from 0246b120 to 0256b12b has its CatchHandler @ 0246aafc */
                TMPro_TMP_InputField__set_textComponent_42bfd3c(*plVar14,uVar10,0);
                    /* catch() { ... } // from try @ 0246b118 with catch @ 0246b128 */
                if (*plVar14 != 0) {
                  TMPro_TMP_InputField__set_placeholder_42bfdb8(*plVar14,uVar12,0);
                  if (*plVar14 != 0) {
                    UnityEngine_UI_Selectable__set_targetGraphic_4693db4(*plVar14,plVar8,0);
                    if (*plVar14 != 0) {
                      TMPro_TMP_InputField__set_lineType_42c0a14(*plVar14,0,0);
                      if (*plVar14 != 0) {
                        TMPro_TMP_InputField__set_contentType_42c0890(*plVar14,2,0);
                        puVar2 = PTR_DAT_04cabaf8;
                        if (*plVar14 != 0) {
                          TMPro_TMP_InputField__set_characterLimit_42c0474(*plVar14,5,0);
                          lVar9 = *plVar14;
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uStack_54 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                          uVar12 = System_Int32__ToString_482d750(&uStack_54,0);
                          if (lVar9 != 0) {
                            TMPro_TMP_InputField__set_text_42bf4d0(lVar9,uVar12,0);
                            puVar2 = PTR_DAT_04cbad58;
                            if (*plVar14 != 0) {
                              lVar9 = *(long *)(*plVar14 + 0x1a8);
                              uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7d78);
                              UnityEngine_Events_UnityAction_object____ctor_303b724
                                        (uVar12,lVar7,*(undefined8 *)puVar2,0);
                              puVar3 = PTR_DAT_04cbad68;
                              puVar1 = PTR_DAT_04cbad60;
                              puVar2 = PTR_DAT_04caa458;
                              if (lVar9 != 0) {
                                UnityEngine_Events_UnityEvent_object___AddListener_303d54c
                                          (lVar9,uVar12,*(undefined8 *)PTR_DAT_04cb7d80);
                                uVar12 = *(undefined8 *)puVar2;
                                *(undefined4 *)(param_1 + 0x44) = 1;
                                uVar12 = thunk_FUN_0216e89c(uVar12);
                                System_Action___ctor_47b5ed0(uVar12,lVar7,*(undefined8 *)puVar1,0);
                                Dino_BusSand_Cheat_CheatMobilePanel__Add_236b298
                                          (param_1,*(undefined8 *)puVar3,2,uVar12,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

