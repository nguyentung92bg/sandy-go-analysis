/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Run
void Dino_BusSand_Cheat_CheatManager__Run (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0245dfb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Run
   void Dino_BusSand_Cheat_CheatManager__Run (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t a,
   const MethodInfo* method); */

ulong Dino_BusSand_Cheat_CheatManager__Run_2362fe4(ulong param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_40;
  
                    /* try { // try from 02462ff0 to 02562ff3 has its CatchHandler @ 02463014 */
                    /* try { // try from 02462ff4 to 02563017 has its CatchHandler @ 02462ba4 */
  uVar19 = param_1;
  if ((bRam0000000004f9c75e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
                    /* catch() { ... } // from try @ 02462ff0 with catch @ 02463014 */
    FUN_02132f7c(PTR_DAT_04cba458);
                    /* try { // try from 02463018 to 0256301f has its CatchHandler @ 02463078 */
                    /* try { // try from 02463020 to 0256303f has its CatchHandler @ 02462ba4 */
    FUN_02132f7c(PTR_DAT_04cba7d0);
                    /* catch() { ... } // from try @ 02462f3c with catch @ 02463024 */
    FUN_02132f7c(PTR_DAT_04cba7d8);
    FUN_02132f7c(PTR_DAT_04cba7e0);
                    /* try { // try from 02463040 to 02563043 has its CatchHandler @ 02463064 */
                    /* try { // try from 02463044 to 02563067 has its CatchHandler @ 02462ba4 */
    FUN_02132f7c(PTR_DAT_04cba7e8);
    FUN_02132f7c(PTR_DAT_04cba7f0);
    FUN_02132f7c(PTR_DAT_04cba7f8);
                    /* catch() { ... } // from try @ 02463040 with catch @ 02463064 */
                    /* try { // try from 02463068 to 0256306f has its CatchHandler @ 02463078 */
    FUN_02132f7c(PTR_DAT_04cba800);
                    /* try { // try from 02463070 to 0256307b has its CatchHandler @ 02462ba4 */
    FUN_02132f7c(PTR_DAT_04cba808);
                    /* catch() { ... } // from try @ 02462fc8 with catch @ 02463078
                       catch() { ... } // from try @ 02463018 with catch @ 02463078
                       catch() { ... } // from try @ 02463068 with catch @ 02463078 */
    uVar19 = FUN_02132f7c(PTR_DAT_04cba810);
    bRam0000000004f9c75e = 1;
  }
  puVar9 = PTR_DAT_04cba458;
  puVar7 = PTR_DAT_04cac868;
  puVar8 = PTR_DAT_04cabaf8;
  puVar6 = PTR_DAT_04cab380;
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x78) = 0;
    lVar18 = *(long *)puVar9;
    bVar2 = *(byte *)(param_1 + 0x120) ^ 1;
    *(byte *)(param_1 + 0x120) = bVar2;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar23 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(bVar2 != 0);
    uVar23 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba7e0,uVar23,0);
code_r0x0245c924:
    puVar8 = PTR_DAT_04cac868;
    puVar6 = PTR_DAT_04cab330;
    if ((bRam0000000004f9c77b & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9af8);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04cac868);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04caba68);
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04cab330);
      FUN_02132f7c(PTR_DAT_04cba478);
      FUN_02132f7c(PTR_DAT_04cba480);
      FUN_02132f7c(PTR_DAT_04cab2b8);
      FUN_02132f7c(PTR_DAT_04cba488);
      FUN_02132f7c(PTR_DAT_04cabf00);
      bRam0000000004f9c77b = 1;
    }
    uVar22 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    puVar6 = PTR_DAT_04cabaf8;
    lVar18 = *(long *)puVar8;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar18 = *(long *)puVar8;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar17 = *(long *)puVar6;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar17 = *(long *)puVar6;
    }
    puVar8 = PTR_DAT_04caba50;
    if (*(long *)(*(long *)(lVar17 + 0xb8) + 0x10) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      puVar7 = PTR_DAT_04ca9ae8;
      lVar17 = *(long *)puVar8;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar17 = *(long *)puVar8;
      }
      lVar14 = *(long *)puVar7;
      uVar22 = **(undefined8 **)(lVar17 + 0xb8);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar14);
      }
      uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar22,0,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar17 = *(long *)puVar8;
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar17 = *(long *)puVar8;
        }
        if (**(long **)(lVar17 + 0xb8) == 0) {
LAB_0245ccb8:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(**(long **)(lVar17 + 0xb8) + 0x38) != '\0') {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar19 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
          if ((uVar19 & 1) != 0) {
            if (lVar18 != 0) {
              uVar22 = System_Int32__ToString_482d750(&stack0xffffffffffffffbc,0);
              uStack_60 = *(undefined8 *)PTR_DAT_04caba68;
              uStack_58 = -1;
              uVar16 = System_Enum__ToString_4863070(&uStack_60,0);
              uVar22 = System_String__Concat_46d30e8
                                 (uVar22,*(undefined8 *)PTR_DAT_04cabf00,uVar16,
                                  *(undefined8 *)PTR_DAT_04cab2b8,0);
              goto LAB_0245cc4c;
            }
            goto LAB_0245ccb8;
          }
        }
      }
      puVar8 = PTR_DAT_04cba478;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      uVar22 = System_Int32__ToString_482d750(&stack0xffffffffffffffbc,0);
      uVar22 = System_String__Concat_46c82e0(uVar22,*(undefined8 *)puVar8,0);
    }
LAB_0245cc4c:
    puVar6 = PTR_DAT_04ca9af8;
    uVar23 = System_String__Concat_46d30e8
                       (*(undefined8 *)PTR_DAT_04cba480,uVar23,*(undefined8 *)PTR_DAT_04cba488,
                        uVar22,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    uVar19 = UnityEngine_Debug__Log_4360fc8(uVar23,0);
    return uVar19;
  case 1:
    lVar18 = *(long *)(param_1 + 0x110);
    if (lVar18 == 0) {
LAB_02463434:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Cheat_CheatUiHider__SetHideAll_236e068(lVar18,*(char *)(lVar18 + 0x10) == '\0',0);
    lVar18 = *(long *)(param_1 + 0x110);
    if (lVar18 == 0) goto LAB_02463434;
    if (*(char *)(lVar18 + 0x10) != '\0') {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_02463434;
      if (*(char *)(*(long *)(param_1 + 0x100) + 0x3c) == '\0') {
        if (*(long *)(param_1 + 0x160) == 0) goto LAB_02463434;
        FUN_01e7a4ec(*(long *)(param_1 + 0x160),*(undefined8 *)PTR_DAT_04cba7d0);
        lVar18 = *(long *)(param_1 + 0x110);
        if (lVar18 == 0) goto LAB_02463434;
      }
    }
    cVar4 = *(char *)(lVar18 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar23 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(cVar4 != '\0');
    puVar21 = (undefined8 *)PTR_DAT_04cba800;
    goto LAB_02463394;
  case 2:
    lVar18 = *(long *)(param_1 + 0x110);
    if (lVar18 == 0) goto LAB_02463434;
    Dino_BusSand_Cheat_CheatUiHider__SetHideLevel_236e164(lVar18,*(char *)(lVar18 + 0x11) == '\0',0)
    ;
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_02463434;
    cVar4 = *(char *)(*(long *)(param_1 + 0x110) + 0x11);
    if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar23 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(cVar4 != '\0');
    puVar21 = (undefined8 *)PTR_DAT_04cba7e8;
    goto LAB_02463394;
  case 3:
    if ((bRam0000000004f9c75f & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04caa038);
      FUN_02132f7c(PTR_DAT_04cad978);
      FUN_02132f7c(PTR_DAT_04cae4e8);
      FUN_02132f7c(PTR_DAT_04cab2b8);
      FUN_02132f7c(PTR_DAT_04cad048);
      FUN_02132f7c(PTR_DAT_04cba900);
      bRam0000000004f9c75f = 1;
    }
    puVar8 = PTR_DAT_04cad048;
    puVar6 = PTR_DAT_04caa038;
    if (*(long *)(param_1 + 0x100) != 0) {
      uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__Add_2272578(0x3e9,uVar23,*(undefined8 *)puVar8,0);
      Dino_BusSand_App_Meta_Profile__Save_226c548(0);
      lVar18 = FUN_02133068(*(undefined8 *)puVar6,5);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x18) != 0) {
          *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_04cad978;
          thunk_FUN_02134474();
          puVar6 = PTR_DAT_04cae4e8;
          if (*(long *)(param_1 + 0x100) == 0) goto LAB_024670ac;
          uVar23 = System_Int64__ToString_482ec3c
                             (*(long *)(param_1 + 0x100) + 0x18,*(undefined8 *)PTR_DAT_04cae4e8,0);
          if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar18 + 0x28) = uVar23;
            thunk_FUN_02134474((undefined8 *)(lVar18 + 0x28),uVar23);
            if (2 < *(uint *)(lVar18 + 0x18)) {
              *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)PTR_DAT_04cba900;
              thunk_FUN_02134474((undefined8 *)(lVar18 + 0x30));
              Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
              uVar23 = System_Int64__ToString_482ec3c
                                 (&stack0xffffffffffffffd8,*(undefined8 *)puVar6,0);
              if ((*(uint *)(lVar18 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar18 + 0x38) = uVar23;
                thunk_FUN_02134474((undefined8 *)(lVar18 + 0x38),uVar23);
                if (4 < *(uint *)(lVar18 + 0x18)) {
                  *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)PTR_DAT_04cab2b8;
                  thunk_FUN_02134474();
                  uVar23 = System_String__Concat_46d31f0(lVar18,0);
                  uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
                  return uVar19;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
LAB_024670ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  case 4:
    iVar11 = *(int *)(*(long *)PTR_DAT_04cba458 + 0xe4);
    **(byte **)(*(long *)PTR_DAT_04cab380 + 0xb8) =
         **(byte **)(*(long *)PTR_DAT_04cab380 + 0xb8) ^ 1;
    if (iVar11 == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Cheat_CheatManager__RefreshHud_235d608();
    uVar23 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc
                       (**(undefined1 **)(*(long *)puVar6 + 0xb8));
    puVar21 = (undefined8 *)PTR_DAT_04cba808;
    goto LAB_02463394;
  case 5:
    if ((bRam0000000004f9c761 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04cabd10);
      FUN_02132f7c(PTR_DAT_04cba970);
      bRam0000000004f9c761 = 1;
    }
    puVar7 = PTR_DAT_04cba970;
    puVar6 = PTR_DAT_04cabd10;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar23 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
    Dino_BusSand_App_Meta_Profile__AddHearts_227275c(uVar23,0);
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
    uVar23 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
    Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
    uVar22 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
    uVar23 = System_String__Concat_46d30e8
                       (*(undefined8 *)puVar7,uVar23,*(undefined8 *)puVar6,uVar22,0);
    uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
    return uVar19;
  case 6:
    iVar11 = *(int *)(*(long *)PTR_DAT_04cba458 + 0xe4);
    *(byte *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 1) =
         *(byte *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 1) ^ 1;
    if (iVar11 == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Cheat_CheatManager__RefreshHud_235d608();
    uVar23 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc
                       (*(undefined1 *)(*(long *)(*(long *)puVar6 + 0xb8) + 1));
    puVar21 = (undefined8 *)PTR_DAT_04cba7f0;
LAB_02463394:
    lVar18 = System_String__Concat_46c82e0(*puVar21,uVar23,0);
    break;
  case 7:
    if ((bRam0000000004f9c765 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04cba4b8);
      FUN_02132f7c(PTR_DAT_04cba978);
      bRam0000000004f9c765 = 1;
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
    puVar6 = PTR_DAT_04cba978;
    if ((uVar19 & 1) == 0) {
      lVar18 = *(long *)PTR_DAT_04cba4b8;
      break;
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar11 = Dino_BusSand_Cheat_CheatManager__get_CurrentLevel_235e1c4();
    uVar23 = *(undefined8 *)puVar6;
    goto Dino_BusSand_Cheat_CheatManager__GoLevel_235e95c;
  case 8:
    if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar11 = Dino_BusSand_Cheat_CheatManager__get_CurrentLevel_235e1c4();
    iVar11 = iVar11 + 1;
    puVar21 = (undefined8 *)PTR_DAT_04cba7f8;
    goto LAB_02463404;
  case 9:
    if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar11 = Dino_BusSand_Cheat_CheatManager__get_CurrentLevel_235e1c4();
    iVar11 = iVar11 + -1;
    puVar21 = (undefined8 *)PTR_DAT_04cba7d8;
LAB_02463404:
    uVar23 = *puVar21;
Dino_BusSand_Cheat_CheatManager__GoLevel_235e95c:
    puVar6 = PTR_DAT_04cba458;
    if ((bRam0000000004f9c766 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab380);
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04cacb18);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cabaf8);
      FUN_02132f7c(PTR_DAT_04caa038);
      FUN_02132f7c(PTR_DAT_04cba520);
      FUN_02132f7c(PTR_DAT_04cba4b8);
      FUN_02132f7c(PTR_DAT_04cba528);
      FUN_02132f7c(PTR_DAT_04cab2b8);
      bRam0000000004f9c766 = 1;
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
    if ((uVar19 & 1) == 0) {
      Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,*(undefined8 *)PTR_DAT_04cba4b8);
    }
    else {
      fVar25 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      puVar6 = PTR_DAT_04caba50;
      if (*(float *)(param_1 + 0x14c) <= fVar25) {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar18 = *(long *)puVar6;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar18 = *(long *)puVar6;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 != 0) {
          uVar22 = *(undefined8 *)(lVar18 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar22,0,0);
          if ((uVar19 & 1) != 0) {
            if (*(long *)(lVar18 + 0x20) == 0) goto LAB_0245ece4;
            if (*(int *)(*(long *)(lVar18 + 0x20) + 0x20) == 1) {
              return 0;
            }
          }
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          fVar25 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
          *(float *)(param_1 + 0x14c) = fVar25 + _UNK_00e20590;
          Dino_BusSand_Cheat_CheatManager__ResetTransientState_2367c74(param_1);
          if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(iVar11,0);
          Dino_BusSand_App_Meta_Profile__Save_226c548(0);
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 3) = 1;
          Dino_BusSand_App_GameApp__EnterLevel_21644c8(lVar18,2,0);
          lVar18 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
          if (lVar18 != 0) {
            if (*(int *)(lVar18 + 0x18) != 0) {
              *(undefined8 *)(lVar18 + 0x20) = uVar23;
              thunk_FUN_02134474((undefined8 *)(lVar18 + 0x20),uVar23);
              if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)PTR_DAT_04cba520;
                thunk_FUN_02134474((undefined8 *)(lVar18 + 0x28));
                uVar23 = System_Int32__ToString_482d750(&stack0xffffffffffffffcc,0);
                if (2 < *(uint *)(lVar18 + 0x18)) {
                  *(undefined8 *)(lVar18 + 0x30) = uVar23;
                  thunk_FUN_02134474((undefined8 *)(lVar18 + 0x30),uVar23);
                  if ((*(uint *)(lVar18 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)PTR_DAT_04cba528;
                    thunk_FUN_02134474();
                    if (*(int *)(*(long *)PTR_DAT_04cacb18 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(iVar11,0);
                    uVar23 = System_Int32__ToString_482d750(&stack0xffffffffffffffc8,0);
                    if (4 < *(uint *)(lVar18 + 0x18)) {
                      *(undefined8 *)(lVar18 + 0x40) = uVar23;
                      thunk_FUN_02134474((undefined8 *)(lVar18 + 0x40),uVar23);
                      if (5 < *(uint *)(lVar18 + 0x18)) {
                        *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)PTR_DAT_04cab2b8;
                        thunk_FUN_02134474();
                        uVar23 = System_String__Concat_46d31f0(lVar18,0);
                        Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
                        return 1;
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
LAB_0245ece4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    return 0;
  case 10:
    if ((bRam0000000004f9c768 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04cba4b8);
      FUN_02132f7c(PTR_DAT_04ca9c30);
      bRam0000000004f9c768 = 1;
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
    if ((uVar19 & 1) != 0) {
      uVar19 = param_1 + 0x128;
      uVar23 = *(undefined8 *)PTR_DAT_04ca9c30;
      *(undefined1 *)(param_1 + 0x121) = 1;
      *(undefined8 *)(param_1 + 0x128) = uVar23;
      if (iRam00000000051c1b10 != 0) {
        uVar19 = FUN_02220bf0(1L << (uVar19 >> 0xc & 0x3f),(uVar19 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8
                             );
      }
      return uVar19;
    }
    lVar18 = *(long *)PTR_DAT_04cba4b8;
    break;
  case 0xb:
    if ((bRam0000000004f9c76a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac868);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cba980);
      FUN_02132f7c(PTR_DAT_04cba988);
      bRam0000000004f9c76a = 1;
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    puVar6 = PTR_DAT_04ca9ae8;
    lVar18 = *(long *)puVar7;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar18 = *(long *)puVar7;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    uVar19 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
    if ((uVar19 & 1) == 0) {
      if (lVar18 == 0) {
LAB_024674b4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar18 + 0x20) == 2) {
        if (*(long *)(param_1 + 0x118) != 0) {
          Dino_BusSand_Cheat_CheatHint__Hide_235c314();
          if ((bRam0000000004f9c776 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cba4d0);
            bRam0000000004f9c776 = 1;
          }
          if (*(char *)(param_1 + 0x141) != '\0') {
            *(undefined1 *)(param_1 + 0x141) = 0;
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            Dino_BusSand_Cheat_CheatManager__SetPaused_23676f4(param_1,0);
          }
          Dino_BusSand_App_Gameplay_GameplayController__ForceWin_229fb40(lVar18,0);
          uVar23 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
          uVar23 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba980,uVar23,0);
          uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
          return uVar19;
        }
        goto LAB_024674b4;
      }
    }
    lVar18 = *(long *)PTR_DAT_04cba988;
    break;
  case 0xc:
    if ((bRam0000000004f9c76b & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac868);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cba990);
      FUN_02132f7c(PTR_DAT_04cba998);
      bRam0000000004f9c76b = 1;
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    puVar6 = PTR_DAT_04ca9ae8;
    lVar18 = *(long *)puVar7;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar18 = *(long *)puVar7;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    uVar19 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
    if ((uVar19 & 1) == 0) {
      if (lVar18 == 0) {
LAB_02467668:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar18 + 0x20) == 2) {
        if (*(long *)(param_1 + 0x118) != 0) {
          Dino_BusSand_Cheat_CheatHint__Hide_235c314();
          if ((bRam0000000004f9c776 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cba4d0);
            bRam0000000004f9c776 = 1;
          }
          if (*(char *)(param_1 + 0x141) != '\0') {
            *(undefined1 *)(param_1 + 0x141) = 0;
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            Dino_BusSand_Cheat_CheatManager__SetPaused_23676f4(param_1,0);
          }
          Dino_BusSand_App_Gameplay_GameplayController__ForceFail_229fab4(lVar18,0);
          uVar23 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
          uVar23 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba998,uVar23,0);
          uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
          return uVar19;
        }
        goto LAB_02467668;
      }
    }
    lVar18 = *(long *)PTR_DAT_04cba990;
    break;
  case 0xd:
    if ((bRam0000000004f9c76d & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04cba4b8);
      bRam0000000004f9c76d = 1;
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
    if ((uVar19 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x122) = 1;
      return uVar19;
    }
    lVar18 = *(long *)PTR_DAT_04cba4b8;
    break;
  case 0xe:
    bVar10 = *(char *)(param_1 + 0x138) == '\0';
    if ((bRam0000000004f9c771 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac868);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cba9a0);
      FUN_02132f7c(PTR_DAT_04cb8788);
      FUN_02132f7c(PTR_DAT_04cab2b8);
      bRam0000000004f9c771 = 1;
    }
    lVar18 = *(long *)puVar7;
    *(bool *)(param_1 + 0x138) = bVar10;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    puVar6 = PTR_DAT_04ca9ae8;
    lVar18 = *(long *)puVar7;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar18 = *(long *)puVar7;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    uVar19 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
    if ((uVar19 & 1) != 0) {
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dd50(lVar18,bVar10,0);
    }
    if (bVar10) {
      UnityEngine_Time__set_timeScale_43cd6d8(0,0);
      puVar6 = PTR_DAT_04cb8788;
      *(undefined1 *)(param_1 + 0x140) = 1;
      uVar23 = *(undefined8 *)puVar6;
    }
    else {
      Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
      UnityEngine_Time__set_timeScale_43cd6d8(0);
      *(undefined1 *)(param_1 + 0x140) = 1;
      Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
      uVar23 = System_Single__ToString_48425d0(&stack0xffffffffffffffcc,0);
      uVar23 = System_String__Concat_46d2b84
                         (*(undefined8 *)PTR_DAT_04cba9a0,uVar23,*(undefined8 *)PTR_DAT_04cab2b8,0);
    }
    uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
    return uVar19;
  case 0xf:
    iVar11 = *(int *)(param_1 + 0x13c) + 1;
    goto code_r0x02463234;
  case 0x10:
    iVar11 = *(int *)(param_1 + 0x13c) + -1;
code_r0x02463234:
    if ((bRam0000000004f9c772 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba890);
      bRam0000000004f9c772 = 1;
    }
    puVar6 = PTR_DAT_04cba890;
    if ((*(long *)(param_1 + 0x100) != 0) &&
       (lVar18 = *(long *)(*(long *)(param_1 + 0x100) + 0x28), lVar18 != 0)) {
      iVar3 = *(int *)(lVar18 + 0x18);
      *(undefined1 *)(param_1 + 0x140) = 1;
      iVar3 = iVar3 + -1;
      iVar1 = iVar11;
      if (iVar3 <= iVar11) {
        iVar1 = iVar3;
      }
      iVar3 = 0;
      if (-1 < iVar11) {
        iVar3 = iVar1;
      }
      *(int *)(param_1 + 0x13c) = iVar3;
      if (*(char *)(param_1 + 0x138) == '\0') {
        Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
        UnityEngine_Time__set_timeScale_43cd6d8(0);
      }
      Dino_BusSand_Cheat_CheatManager__get_Speed_236479c(param_1);
      uVar23 = System_Single__ToString_48425d0(&stack0xffffffffffffffdc,0);
      uVar23 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,uVar23,0);
      uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
      return uVar19;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  case 0x11:
    if ((bRam0000000004f9c774 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04cac868);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cba9a8);
      FUN_02132f7c(PTR_DAT_04cba9b0);
      FUN_02132f7c(PTR_DAT_04cba9b8);
      bRam0000000004f9c774 = 1;
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    puVar6 = PTR_DAT_04ca9ae8;
    lVar18 = *(long *)puVar7;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar18 = *(long *)puVar7;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    uVar19 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
    plVar13 = (long *)PTR_DAT_04cba9b8;
    if ((uVar19 & 1) == 0) {
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lVar18 + 0x20) == 2) {
        if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8();
        uVar19 = Dino_BusSand_App_Gameplay_GameplayController__BotStep_229eadc(lVar18,0);
        plVar13 = (long *)PTR_DAT_04cba9b0;
        if ((uVar19 & 1) == 0) {
          plVar13 = (long *)PTR_DAT_04cba9a8;
        }
      }
    }
    lVar18 = *plVar13;
    break;
  case 0x12:
    if ((bRam0000000004f9c775 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04cac868);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cba9c0);
      FUN_02132f7c(PTR_DAT_04cba9c8);
      FUN_02132f7c(PTR_DAT_04cba9d0);
      bRam0000000004f9c775 = 1;
    }
    puVar6 = PTR_DAT_04cac868;
    if (*(char *)(param_1 + 0x141) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9bcf9 == '\0') {
        FUN_02132f7c(PTR_DAT_04cac868);
        cRam0000000004f9bcf9 = '\x01';
      }
      lVar18 = *(long *)puVar6;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar18 = *(long *)puVar6;
      }
      lVar18 = **(long **)(lVar18 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar19 = UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
      if ((uVar19 & 1) == 0) {
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar18 + 0x20) == 2) {
          if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8();
          puVar6 = PTR_DAT_04cba9d0;
          *(undefined1 *)(param_1 + 0x141) = 1;
          uVar26 = *(undefined4 *)(lVar18 + 0x28);
          *(undefined4 *)(param_1 + 0x144) = 0;
          uVar23 = *(undefined8 *)puVar6;
          *(undefined4 *)(param_1 + 0x148) = uVar26;
          Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
          uVar23 = *(undefined8 *)PTR_DAT_04cba9c0;
          goto code_r0x0245c924;
        }
      }
      lVar18 = *(long *)PTR_DAT_04cba9c8;
    }
    else {
      uVar19 = param_1;
      if ((bRam0000000004f9c776 & 1) == 0) {
        uVar19 = FUN_02132f7c(PTR_DAT_04cba4d0);
        bRam0000000004f9c776 = 1;
      }
      if (*(char *)(param_1 + 0x141) == '\0') {
        return uVar19;
      }
      *(undefined1 *)(param_1 + 0x141) = 0;
      lVar18 = *(long *)PTR_DAT_04cba4d0;
    }
    break;
  case 0x13:
    if ((bRam0000000004f9c778 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04cba9d8);
      FUN_02132f7c(PTR_DAT_04cba9e0);
      bRam0000000004f9c778 = 1;
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8();
    if ((*(long *)(param_1 + 0x100) != 0) && (*(long *)(param_1 + 0x118) != 0)) {
      uVar19 = Dino_BusSand_Cheat_CheatHint__Show_235bc50
                         (*(undefined4 *)(*(long *)(param_1 + 0x100) + 0x34),
                          *(long *)(param_1 + 0x118),&stack0xffffffffffffffd8);
      if ((uVar19 & 1) == 0) {
        uVar23 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba9e0,0,0);
      }
      else {
        uVar23 = *(undefined8 *)PTR_DAT_04cba9d8;
      }
      uVar19 = Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar23);
      return uVar19;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  case 0x14:
    lVar18 = *(long *)PTR_DAT_04cba810;
    break;
  case 0x15:
    if ((bRam0000000004f9c737 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba458);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c737 = 1;
    }
    puVar6 = PTR_DAT_04caba50;
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar18 = *(long *)puVar6;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar18 = *(long *)puVar6;
      }
      puVar6 = PTR_DAT_04ca9ae8;
      lVar18 = **(long **)(lVar18 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar19 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
      if ((uVar19 & 1) != 0) {
        if (lVar18 == 0) {
LAB_0245e1c0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lVar18 + 0x38) != '\0') {
          uVar23 = *(undefined8 *)(lVar18 + 0x20);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
          if ((uVar19 & 1) != 0) {
            if (*(long *)(lVar18 + 0x20) == 0) goto LAB_0245e1c0;
            iVar11 = *(int *)(*(long *)(lVar18 + 0x20) + 0x28);
            if (0 < iVar11) goto LAB_0245e188;
          }
        }
      }
      System_Int32__TryParse_482de64(*(undefined8 *)(param_1 + 0x58),&stack0xffffffffffffffdc,0);
      if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar11 = Dino_BusSand_Cheat_CheatManager__get_CurrentLevel_235e1c4();
LAB_0245e188:
      System_Int32__TryParse_482de64(*(undefined8 *)(param_1 + 0x60),&stack0xffffffffffffffd8,0);
      uVar19 = Dino_BusSand_Cheat_CheatManager__StartAutoPlay_235d76c(param_1,iVar11,0);
      return uVar19;
    }
    uVar19 = param_1;
    if ((bRam0000000004f9c736 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cba4e8);
      FUN_02132f7c(PTR_DAT_04caccc8);
      uVar19 = FUN_02132f7c(PTR_DAT_04ca9c30);
      bRam0000000004f9c736 = 1;
    }
    puVar6 = PTR_DAT_04ca9ae8;
    if (*(char *)(param_1 + 0x38) == '\0') {
      return uVar19;
    }
    uVar23 = *(undefined8 *)(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
    if ((uVar19 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_Cheat_AutoPlayHand__Hide_233f754(*(long *)(param_1 + 0x68),0);
    }
    puVar6 = PTR_DAT_04cba4e8;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    lVar18 = System_String__Concat_46c82e0(*(undefined8 *)puVar6,*(undefined8 *)PTR_DAT_04ca9c30,0);
    break;
  default:
    return uVar19;
  }
  puVar6 = PTR_DAT_04cba458;
  if ((bRam0000000004f9c77a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cba4d8);
    FUN_02132f7c(PTR_DAT_04cba4e0);
    FUN_02132f7c(PTR_DAT_04cba490);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c77a = 1;
  }
  lStack_40 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar18);
  uVar19 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_1);
  if ((uVar19 & 1) != 0) {
    return uVar19;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar19 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  puVar6 = PTR_DAT_04caba50;
  if ((uVar19 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar17 = *(long *)puVar6;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar17 = *(long *)puVar6;
    }
    uVar23 = **(undefined8 **)(lVar17 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
    if ((uVar19 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar17 = *(long *)puVar6;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar17 = *(long *)puVar6;
      }
      puVar6 = PTR_DAT_04cabb08;
      lVar17 = **(long **)(lVar17 + 0xb8);
      if (lVar17 == 0) goto LAB_0245de8c;
      if ((bRam0000000004f9b87c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabb08,lVar18,0);
        bRam0000000004f9b87c = 1;
      }
      lVar17 = *(long *)(lVar17 + 0x28);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar6 = PTR_DAT_04ca9ae8;
      uVar26 = _UNK_00e20094;
      if ((bRam0000000004f9c314 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568,lVar18,0);
        FUN_02132f7c(PTR_DAT_04caa070);
        FUN_02132f7c(PTR_DAT_04cac878);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cad730);
        FUN_02132f7c(PTR_DAT_04cabdb0);
        FUN_02132f7c(PTR_DAT_04cabb08);
        FUN_02132f7c(PTR_DAT_04cad748);
        FUN_02132f7c(PTR_DAT_04cad330);
        FUN_02132f7c(PTR_DAT_04cad4c0);
        FUN_02132f7c(PTR_DAT_04cb4e20);
        FUN_02132f7c(PTR_DAT_04cafbb8);
        FUN_02132f7c(PTR_DAT_04cb6578);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        FUN_02132f7c(PTR_DAT_04cb64b8);
        FUN_02132f7c(PTR_DAT_04cad4a8);
        bRam0000000004f9c314 = 1;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = UnityEngine_Object__op_Equality_43c6f30(lVar17,0,0);
      puVar8 = PTR_DAT_04cabb08;
      if ((uVar19 & 1) != 0) {
        return uVar19;
      }
      lVar12 = *(long *)PTR_DAT_04cabb08;
      lVar14 = *(long *)PTR_DAT_04ca9c30;
      if (lVar18 != 0) {
        lVar14 = lVar18;
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar8;
      }
      **(long **)(lVar12 + 0xb8) = lVar14;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar8 + 0xb8),lVar14);
      uVar24 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 8) = uVar24;
      if (lVar17 == 0) goto LAB_023bd530;
      uVar23 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,4,0);
      plVar13 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
      uVar22 = *(undefined8 *)PTR_DAT_04cad730;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar17 = System_Type__GetTypeFromHandle_483f0b4(uVar22,0);
      if (plVar13 == (long *)0x0) goto LAB_023bd530;
      if ((lVar17 != 0) &&
         (lVar14 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
        uVar23 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar23,0);
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar13[4] = lVar17;
      thunk_FUN_02134474(plVar13 + 4,lVar17);
      lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar17,*(undefined8 *)PTR_DAT_04cb6578,plVar13,0);
      if ((lVar17 == 0) ||
         (lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0), lVar14 == 0))
      goto LAB_023bd530;
      UnityEngine_Transform__SetParent_43d1e34(lVar14,uVar23,0,0);
      plVar13 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
      if (plVar13 == (long *)0x0) goto LAB_023bd530;
      if (*plVar13 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar13);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar26,plVar13,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar26,plVar13,0);
      puVar7 = PTR_DAT_04cad330;
      lVar14 = *(long *)PTR_DAT_04cad330;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar7;
      }
      puVar20 = *(undefined4 **)(lVar14 + 0xb8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
      System_Nullable_Color____ctor_2bc9090
                (*puVar20,puVar20[1],puVar20[2],puVar20[3],&uStack_68,
                 *(undefined8 *)PTR_DAT_04cac878);
      uStack_70 = (undefined4)uStack_58;
      uStack_78 = uStack_60;
      uStack_80 = uStack_68;
      lVar14 = Dino_BusSand_App_UI_UiKit__Text_2282314
                         (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar13,
                          *(undefined8 *)PTR_DAT_04cb4e20,lVar18,*(undefined8 *)PTR_DAT_04cad4a8,
                          &uStack_80,0x202,0);
      if (lVar14 == 0) goto LAB_023bd530;
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar14,1,0);
      fVar27 = 0.0;
      TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar14,lVar18,0);
      fVar25 = 150.0;
      if (150.0 <= fVar27 + 70.0) {
        fVar25 = fVar27 + 70.0;
      }
      lVar18 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar14,0);
      if (lVar18 == 0) goto LAB_023bd530;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar25 + -50.0,lVar18,0);
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar25,plVar13,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      fVar27 = 1.0;
      if (fVar25 / 241.0 <= 1.0) {
        fVar27 = fVar25 / 241.0;
      }
      lVar18 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44660000,fVar25,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar27,plVar13,
                          *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98
                          ,0);
      if (lVar18 == 0) goto LAB_023bd530;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar18,0);
      uVar23 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = UnityEngine_Object__op_Equality_43c6f30(uVar23,0,0);
      if ((uVar19 & 1) == 0) {
        fVar25 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        lVar18 = *(long *)puVar8;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar18 = *(long *)puVar8;
        }
        if (_UNK_00e200f8 < fVar25 - *(float *)(*(long *)(lVar18 + 0xb8) + 0x18)) goto LAB_023bd36c;
      }
      else {
LAB_023bd36c:
        puVar7 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar18 = *(long *)puVar7;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar18 = *(long *)puVar7;
        }
        if (**(long **)(lVar18 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar18 + 0xb8),0);
        }
      }
      lVar18 = *(long *)puVar8;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar18 = *(long *)puVar8;
      }
      uVar23 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar6);
      }
      uVar19 = UnityEngine_Object__op_Inequality_43c8dec(uVar23,0,0);
      if ((uVar19 & 1) != 0) {
        lVar18 = *(long *)puVar8;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar18 = *(long *)puVar8;
        }
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                  (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x10));
      }
      lVar18 = *(long *)puVar8;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar18 = *(long *)puVar8;
      }
      plVar15 = (long *)(*(long *)(lVar18 + 0xb8) + 0x10);
      *plVar15 = lVar17;
      thunk_FUN_02134474(plVar15,lVar17);
      uVar26 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      iVar11 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x18) = uVar26;
      if (iVar11 == 0) {
        thunk_FUN_0218fdac();
      }
      lVar18 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar17,0);
      if (lVar18 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar18,0,0);
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar13,0,0,0);
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar13,0,0);
        uVar19 = Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar17);
        return uVar19;
      }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x110) + 0x10) != '\0') {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_0245de8c;
      if (*(char *)(*(long *)(param_1 + 0x100) + 0x3c) == '\0') {
        return uVar19;
      }
    }
    lVar17 = *(long *)(param_1 + 0x160);
    lStack_40 = lVar18;
    thunk_FUN_02134474(&lStack_40,lVar18);
    fVar25 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if ((*(long *)(param_1 + 0x100) != 0) &&
       (uVar19 = (ulong)(uint)(fVar25 + *(float *)(*(long *)(param_1 + 0x100) + 0x38)), lVar17 != 0)
       ) {
      lVar18 = *(long *)(lVar17 + 0x10);
      lVar14 = *(long *)PTR_DAT_04cba4d8;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (lVar18 != 0) {
        uVar5 = *(uint *)(lVar17 + 0x18);
        if (uVar5 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + (long)(int)uVar5 * 0x10;
          *(uint *)(lVar17 + 0x18) = uVar5 + 1;
          plVar13 = (long *)(lVar18 + 0x20);
          *plVar13 = lStack_40;
          *(ulong *)(lVar18 + 0x28) = uVar19;
          thunk_FUN_02134474(plVar13,0);
        }
        else {
          System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                    (lVar17,lStack_40,uVar19,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar19 = *(ulong *)(param_1 + 0x160);
        if (uVar19 != 0) {
          if (3 < *(int *)(uVar19 + 0x18)) {
            uVar19 = System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                               (uVar19,0,*(undefined8 *)PTR_DAT_04cba4e0);
          }
          return uVar19;
        }
      }
    }
  }
LAB_0245de8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

