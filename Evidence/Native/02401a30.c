/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupNameInput
void Dino_BusSand_App_UI_PlayerSettingPanel__SetupNameInput (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022f4f88) */
/* WARNING: Removing unreachable block (ram,0x022f4f90) */
/* WARNING: Removing unreachable block (ram,0x022f4fb0) */
/* WARNING: Removing unreachable block (ram,0x022f4fb8) */
/* WARNING: Removing unreachable block (ram,0x022f4fcc) */
/* WARNING: Removing unreachable block (ram,0x022f4fd4) */
/* WARNING: Removing unreachable block (ram,0x022f4fe8) */
/* WARNING: Removing unreachable block (ram,0x022f4fec) */
/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetupNameInput
   void Dino_BusSand_App_UI_PlayerSettingPanel__SetupNameInput
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_PlayerSettingPanel__SetupNameInput_2301a30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  puVar1 = PTR_DAT_04cb7d20;
  if ((bRam0000000004f9c4ea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cb5d00);
    FUN_02132f7c(PTR_DAT_04cb7d28);
    FUN_02132f7c(PTR_DAT_04cb7d30);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb7d38);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7d40);
    FUN_02132f7c(PTR_DAT_04cb7d48);
    FUN_02132f7c(PTR_DAT_04cb7d50);
    FUN_02132f7c(PTR_DAT_04cb7d58);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb7d60);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cb7d68);
    FUN_02132f7c(PTR_DAT_04cb7d70);
    FUN_02132f7c(PTR_DAT_04cb7d78);
    FUN_02132f7c(PTR_DAT_04cb7d80);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb7d20);
    FUN_02132f7c(PTR_DAT_04cb7d88);
    FUN_02132f7c(PTR_DAT_04cb7d90);
    bRam0000000004f9c4ea = 1;
  }
  puVar4 = PTR_DAT_04cabdb0;
  puVar2 = PTR_DAT_04ca9ae8;
  plVar7 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar1,0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != *(long *)puVar4) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(plVar7,0,0);
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  lVar15 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_024024c0;
    uVar14 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x80),0);
    lVar15 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar14,*(undefined8 *)PTR_DAT_04cb4e20,0)
    ;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
  plVar16 = (long *)0x0;
  if ((uVar8 & 1) != 0) {
    if (lVar15 == 0) goto LAB_024024c0;
    plVar16 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar15,*(undefined8 *)PTR_DAT_04cad790);
  }
  puVar5 = PTR_DAT_04cad748;
  plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
  puVar1 = PTR_DAT_04cad730;
  uVar14 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar15 = System_Type__GetTypeFromHandle_483f0b4(uVar14,0);
  if (plVar9 == (long *)0x0) goto LAB_024024c0;
  if ((lVar15 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_024024c8:
    uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024024d0 to 025024e7 has its CatchHandler @ 02402554 */
    FUN_021330e8(uVar14,0);
  }
  if ((int)plVar9[3] == 0) {
LAB_024024c4:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar9[4] = lVar15;
  thunk_FUN_02134474(plVar9 + 4,lVar15);
  lVar15 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb7d38,0);
  if ((lVar15 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
  goto LAB_024024c8;
  if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_024024c4;
  plVar9[5] = lVar15;
  thunk_FUN_02134474(plVar9 + 5,lVar15);
  puVar3 = PTR_DAT_04caa070;
  lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar15,*(undefined8 *)PTR_DAT_04cb7d88,plVar9,0);
  if ((lVar15 == 0) ||
     (lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0), lVar10 == 0))
  goto LAB_024024c0;
  UnityEngine_Transform__SetParent_43d1e34(lVar10,plVar7,0,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar19 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar4)) {
LAB_024024d8:
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar9);
  }
  Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c(uVar18,uVar19,uVar18,uVar19,plVar9,0);
  plVar9 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                             (lVar15,*(undefined8 *)PTR_DAT_04cb7d28);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar5,2);
    lVar10 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
    if (plVar9 != (long *)0x0) {
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_024024c8;
      if ((int)plVar9[3] == 0) goto LAB_024024c4;
      plVar9[4] = lVar10;
      thunk_FUN_02134474(plVar9 + 4,lVar10);
      lVar10 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb7d58,0);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_024024c8;
      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_024024c4;
      plVar9[5] = lVar10;
      thunk_FUN_02134474(plVar9 + 5,lVar10);
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      UnityEngine_GameObject___ctor_43c2310(lVar10,*(undefined8 *)PTR_DAT_04cb7d90,plVar9,0);
      if (lVar10 != 0) {
        lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
        uVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
        if (lVar11 != 0) {
                    /* try { // try from 02401f4c to 02501faf has its CatchHandler @ 02401f4c
                       catch() { ... } // from try @ 02401f4c with catch @ 02401f4c
                       catch() { ... } // from try @ 02401fb4 with catch @ 02401f4c
                       catch() { ... } // from try @ 02401ff0 with catch @ 02401f4c
                       catch() { ... } // from try @ 02402094 with catch @ 02401f4c */
          UnityEngine_Transform__SetParent_43d1e34(lVar11,uVar14,0,0);
          plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
          if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)PTR_DAT_04cabdb0)) goto LAB_024024d8;
          Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
                    (0x41200000,0,0xc1200000,0,plVar9,0);
          plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar5,2);
                    /* try { // try from 02401fb0 to 02501fb3 has its CatchHandler @ 02401fc0 */
                    /* try { // try from 02401fb4 to 02501fd7 has its CatchHandler @ 02401f4c */
          lVar11 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02401fb0 with catch @ 02401fc0
                        */
          if (plVar9 == (long *)0x0) goto LAB_024024c0;
                    /* try { // try from 02401fd8 to 02501fef has its CatchHandler @ 0240208c */
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
          goto LAB_024024c8;
          if ((int)plVar9[3] == 0) goto LAB_024024c4;
                    /* try { // try from 02401ff0 to 0250207b has its CatchHandler @ 02401f4c */
          plVar9[4] = lVar11;
          thunk_FUN_02134474(plVar9 + 4,lVar11);
          lVar11 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb7d60,0);
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
          goto LAB_024024c8;
          if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_024024c4;
          plVar9[5] = lVar11;
          thunk_FUN_02134474(plVar9 + 5,lVar11);
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          UnityEngine_GameObject___ctor_43c2310(lVar11,*(undefined8 *)PTR_DAT_04cb4e20,plVar9,0);
          if (lVar11 != 0) {
            lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                    /* try { // try from 0240207c to 0250208b has its CatchHandler @ 0240208c */
            uVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
            if (lVar12 != 0) {
                    /* catch() { ... } // from try @ 02401fd8 with catch @ 0240208c
                       catch() { ... } // from try @ 0240207c with catch @ 0240208c */
                    /* try { // try from 02402090 to 02502093 has its CatchHandler @ 0240209c */
                    /* try { // try from 02402094 to 0250209f has its CatchHandler @ 02401f4c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02402090 with catch @ 0240209c
                        */
              UnityEngine_Transform__SetParent_43d1e34(lVar12,uVar14,0,0);
                    /* try { // try from 024020a0 to 025020eb has its CatchHandler @ 024020a0
                       catch() { ... } // from try @ 024020a0 with catch @ 024020a0
                       catch() { ... } // from try @ 024020f0 with catch @ 024020a0
                       catch() { ... } // from try @ 0240212c with catch @ 024020a0
                       catch() { ... } // from try @ 0240218c with catch @ 024020a0 */
              plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(PTR_DAT_04cacfc0);
                cRam0000000004f9b948 = '\x01';
              }
              uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
              uVar19 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
                    /* try { // try from 024020ec to 025020ef has its CatchHandler @ 024020fc */
                    /* try { // try from 024020f0 to 02502113 has its CatchHandler @ 024020a0 */
              if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(plVar9);
              }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024020ec with catch @ 024020fc
                        */
              Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
                        (uVar18,uVar19,uVar18,uVar19,plVar9,0);
                    /* try { // try from 02402114 to 0250212b has its CatchHandler @ 02402184 */
              plVar9 = (long *)UnityEngine_GameObject__GetComponent_object__275a5dc
                                         (lVar11,*(undefined8 *)PTR_DAT_04cb7d30);
                    /* try { // try from 0240212c to 02502173 has its CatchHandler @ 024020a0 */
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar8 = UnityEngine_Object__op_Inequality_43c8dec(plVar16,0,0);
              if ((uVar8 & 1) == 0) {
                if (plVar9 == (long *)0x0) goto LAB_024024c0;
              }
              else {
                if ((plVar16 == (long *)0x0) || (plVar9 == (long *)0x0)) goto LAB_024024c0;
                TMPro_TMP_Text__set_font_42cb6ac(plVar9,plVar16[0x1f],0);
                    /* try { // try from 02402174 to 02502183 has its CatchHandler @ 02402184 */
                uVar14 = (**(code **)(*plVar16 + 0x528))(plVar16,*(undefined8 *)(*plVar16 + 0x530));
                    /* catch() { ... } // from try @ 02402114 with catch @ 02402184
                       catch() { ... } // from try @ 02402174 with catch @ 02402184 */
                    /* try { // try from 02402188 to 0250218b has its CatchHandler @ 02402194 */
                    /* try { // try from 0240218c to 02502197 has its CatchHandler @ 024020a0 */
                (**(code **)(*plVar9 + 0x538))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x540));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02402188 with catch @ 02402194
                        */
                (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0));
                (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
                lVar11 = 0x20c;
                if ((char)plVar16[0x4c] != '\0') {
                  lVar11 = 0x27c;
                }
                TMPro_TMP_Text__set_fontSize_42cc224
                          (*(undefined4 *)((long)plVar16 + lVar11),plVar9,0);
              }
              TMPro_TMP_Text__set_enableAutoSizing_42cc454(plVar9,1,0);
              TMPro_TMP_Text__set_fontSizeMin_42cc4a4(0x41900000,plVar9,0);
              if (*(float *)((long)plVar9 + 0x27c) < *(float *)((long)plVar9 + 0x20c)) {
                TMPro_TMP_Text__set_fontSizeMax_42cc4f0(plVar9,0);
              }
              TMPro_TMP_Text__set_alignment_42cc610(plVar9,0x202,0);
              TMPro_TMP_Text__set_richText_42ccfa8(plVar9,0,0);
                    /* try { // try from 02402250 to 0250243b has its CatchHandler @ 02402250
                       catch() { ... } // from try @ 02402250 with catch @ 02402250
                       catch() { ... } // from try @ 02402470 with catch @ 02402250
                       catch() { ... } // from try @ 024024e8 with catch @ 02402250
                       catch() { ... } // from try @ 0240255c with catch @ 02402250 */
              TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar9,0,0);
              lVar11 = UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar15,*(undefined8 *)PTR_DAT_04cb5d00);
              plVar17 = (long *)(param_1 + 0xd0);
              *plVar17 = lVar11;
              thunk_FUN_02134474(plVar17,lVar11);
              lVar11 = *plVar17;
              plVar16 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
              if (lVar11 != 0) {
                if ((plVar16 != (long *)0x0) && (*plVar16 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024024e8 to 02502543 has its CatchHandler @ 02402250 */
                  FUN_021335a4(plVar16);
                }
                TMPro_TMP_InputField__set_textViewport_42bfcdc(lVar11,plVar16,0);
                if (*plVar17 != 0) {
                  TMPro_TMP_InputField__set_textComponent_42bfd3c(*plVar17,plVar9,0);
                  lVar10 = *plVar17;
                  uVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (lVar15,*(undefined8 *)PTR_DAT_04cb7d28);
                  if (lVar10 != 0) {
                    UnityEngine_UI_Selectable__set_targetGraphic_4693db4(lVar10,uVar14,0);
                    if (*plVar17 != 0) {
                      TMPro_TMP_InputField__set_characterLimit_42c0474(*plVar17,0xc,0);
                      if (*plVar17 != 0) {
                        TMPro_TMP_InputField__set_lineType_42c0a14(*plVar17,0,0);
                        if (*plVar17 != 0) {
                          TMPro_TMP_InputField__set_contentType_42c0890(*plVar17,0,0);
                          if (*plVar17 != 0) {
                            TMPro_TMP_InputField__set_richText_42c0e30(*plVar17,0,0);
                            puVar1 = PTR_DAT_04cb7d70;
                            lVar11 = *plVar17;
                            lVar10 = *(long *)PTR_DAT_04cb7d70;
                            if (*(int *)(lVar10 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar10 = *(long *)puVar1;
                            }
                            puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                            lVar12 = puVar13[1];
                            if (lVar12 == 0) {
                              if (*(int *)(lVar10 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                                puVar13 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
                              }
                              uVar14 = *puVar13;
                              lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7d40);
                              TMPro_TMP_InputField_OnValidateInput___ctor_42ec4f8
                                        (lVar12,uVar14,*(undefined8 *)PTR_DAT_04cb7d68,0);
                              plVar16 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                              *plVar16 = lVar12;
                              thunk_FUN_02134474(plVar16,lVar12);
                            }
                            if (lVar11 != 0) {
                              TMPro_TMP_InputField__set_onValidateInput_42c0414(lVar11,lVar12,0);
                              if (*plVar17 != 0) {
                                lVar10 = *(long *)(*plVar17 + 0x1a0);
                                uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7d78);
                                UnityEngine_Events_UnityAction_object____ctor_303b724
                                          (uVar14,param_1,*(undefined8 *)PTR_DAT_04cb7d50,0);
                                if (lVar10 != 0) {
                                  UnityEngine_Events_UnityEvent_object___AddListener_303d54c
                                            (lVar10,uVar14,*(undefined8 *)PTR_DAT_04cb7d80);
                    /* try { // try from 0240243c to 0250246f has its CatchHandler @ 024024b8 */
                                  UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
                                  if (plVar7 != (long *)0x0) {
                                    lVar15 = UnityEngine_Component__get_gameObject_43bcde8(plVar7,0)
                                    ;
                    /* try { // try from 02402470 to 025024cf has its CatchHandler @ 02402250 */
                                    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                                    System_Action___ctor_47b5ed0
                                              (uVar14,param_1,*(undefined8 *)PTR_DAT_04cb7d48,0);
                                    puVar1 = PTR_DAT_04cb1660;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240243c with catch @ 024024b8
                        */
                                    if ((bRam0000000004f9bc9d & 1) == 0) {
                                      FUN_02132f7c(PTR_DAT_04cb1668);
                                      FUN_02132f7c(PTR_DAT_04cacf98);
                                      FUN_02132f7c(PTR_DAT_04cb1670);
                                      FUN_02132f7c(PTR_DAT_04cb0eb8);
                                      FUN_02132f7c(PTR_DAT_04cb1678);
                                      FUN_02132f7c(PTR_DAT_04cb1680);
                                      FUN_02132f7c(PTR_DAT_04ca9ae8);
                                      FUN_02132f7c(PTR_DAT_04cb1688);
                                      FUN_02132f7c(PTR_DAT_04cb1660);
                                      FUN_02132f7c(PTR_DAT_04caa8b8);
                                      bRam0000000004f9bc9d = 1;
                                    }
                                    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                                    System_Object___ctor_4870e5c(lVar10,0);
                                    if (lVar10 != 0) {
                                      plVar7 = (long *)(lVar10 + 0x18);
                                      *plVar7 = lVar15;
                                      thunk_FUN_02134474(plVar7,lVar15);
                                      *(undefined8 *)(lVar10 + 0x20) = uVar14;
                                      thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20),uVar14);
                                      puVar1 = PTR_DAT_04ca9ae8;
                                      if (*plVar7 != 0) {
                                        uVar8 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                                          (*plVar7,*(undefined8 *)PTR_DAT_04cb0eb8);
                                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac(*(long *)puVar1);
                                        }
                                        uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
                                        if ((uVar6 & 1) == 0) {
                                          if (uVar8 == 0) goto LAB_022f5018;
                                        }
                                        else {
                                          if (*plVar7 == 0) goto LAB_022f5018;
                                          uVar14 = 
                                                  UnityEngine_GameObject__GetComponent_object__275a5dc
                                                            (*plVar7,*(undefined8 *)PTR_DAT_04cb1678
                                                            );
                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac(*(long *)puVar1);
                                          }
                                          uVar8 = UnityEngine_Object__op_Equality_43c6f30
                                                            (uVar14,0,0);
                                          if ((uVar8 & 1) != 0) {
                                            if ((*plVar7 == 0) ||
                                               (plVar16 = (long *)
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (*plVar7,*(undefined8 *)PTR_DAT_04cacf98
                                                            ), plVar16 == (long *)0x0))
                                            goto LAB_022f5018;
                                            (**(code **)(*plVar16 + 0x2a8))
                                                      (0x3f800000,0x3f800000,0x3f800000,0,plVar16,
                                                       *(undefined8 *)(*plVar16 + 0x2b0));
                                          }
                                          if ((*plVar7 == 0) ||
                                             (uVar8 = 
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (*plVar7,*(undefined8 *)PTR_DAT_04cb1668
                                                            ), uVar8 == 0)) goto LAB_022f5018;
                                          UnityEngine_UI_Selectable__set_transition_4693ba8
                                                    (uVar8,0,0);
                                        }
                                        puVar4 = PTR_DAT_04cb1688;
                                        puVar2 = PTR_DAT_04caa8b8;
                                        if (*(long *)(uVar8 + 0x100) != 0) {
                                          UnityEngine_Events_UnityEventBase__RemoveAllListeners_43d861c
                                                    (*(long *)(uVar8 + 0x100),0);
                                          uVar14 = *(undefined8 *)puVar2;
                                          lVar15 = *(long *)(uVar8 + 0x100);
                                          *(undefined4 *)(lVar10 + 0x10) = 0xbf800000;
                                          uVar14 = thunk_FUN_0216e89c(uVar14);
                                          UnityEngine_Events_UnityAction___ctor_43d86d4
                                                    (uVar14,lVar10,*(undefined8 *)puVar4,0);
                                          if (lVar15 != 0) {
                                            UnityEngine_Events_UnityEvent__AddListener_43d87a4
                                                      (lVar15,uVar14,0);
                                            uVar14 = *(undefined8 *)(uVar8 + 0xe0);
                                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                                            uVar6 = UnityEngine_Object__op_Inequality_43c8dec
                                                              (uVar14,0,0);
                                            if ((uVar6 & 1) == 0) {
                                              if (*plVar7 == 0) goto LAB_022f5018;
                                              plVar7 = (long *)
                                                  UnityEngine_GameObject__GetComponent_object__275a5dc
                                                            (*plVar7,*(undefined8 *)PTR_DAT_04cb1678
                                                            );
                                            }
                                            else {
                                              plVar7 = *(long **)(uVar8 + 0xe0);
                                            }
                                            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac();
                                            }
                                            uVar6 = UnityEngine_Object__op_Inequality_43c8dec
                                                              (plVar7,0,0);
                                            if ((uVar6 & 1) != 0) {
                                              if (plVar7 == (long *)0x0) goto LAB_022f5018;
                                              (**(code **)(*plVar7 + 0x2c8))
                                                        (plVar7,1,*(undefined8 *)(*plVar7 + 0x2d0));
                                            }
                                            return uVar8;
                                          }
                                        }
                                      }
                                    }
LAB_022f5018:
                    /* WARNING: Subroutine does not return */
                                    FUN_02133224();
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
LAB_024024c0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

