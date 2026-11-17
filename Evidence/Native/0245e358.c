/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$TickAutoPlay
void Dino_BusSand_Cheat_CheatManager__TickAutoPlay (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$TickAutoPlay
   void Dino_BusSand_Cheat_CheatManager__TickAutoPlay (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

int * Dino_BusSand_Cheat_CheatManager__TickAutoPlay_235e358
                (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,undefined8 param_4,
                int *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float fVar26;
  int iVar27;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  ulong extraout_var;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined4 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  piVar17 = param_5;
  if ((bRam0000000004f9c738 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9550);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba4f0);
    FUN_02132f7c(PTR_DAT_04cba4f8);
    FUN_02132f7c(PTR_DAT_04cba500);
    FUN_02132f7c(PTR_DAT_04cba508);
    FUN_02132f7c(PTR_DAT_04cba510);
    piVar17 = (int *)FUN_02132f7c(PTR_DAT_04cba518);
    bRam0000000004f9c738 = 1;
  }
  puVar1 = PTR_DAT_04cac868;
  if ((char)param_5[0xe] == '\0') {
    return piVar17;
  }
  iVar27 = param_5[0x11];
  if (0 < iVar27) {
    piVar17 = (int *)Dino_BusSand_Cheat_CheatManager__GoLevel_235e95c
                               (param_5,iVar27,*(undefined8 *)PTR_DAT_04cba518);
    if (((ulong)piVar17 & 1) == 0) {
      return piVar17;
    }
    param_5[0x10] = iVar27;
    param_5[0x11] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = -0x40800000;
    param_5[0x13] = 0;
    return piVar17;
  }
  if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  lVar18 = *(long *)puVar1;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar18 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar18 = **(long **)(lVar18 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  piVar17 = (int *)UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
  puVar2 = PTR_DAT_04caba50;
  if (((ulong)piVar17 & 1) != 0) {
    return piVar17;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  piVar17 = *(int **)puVar2;
  if (piVar17[0x39] == 0) {
    thunk_FUN_0218fdac();
    piVar17 = *(int **)puVar2;
  }
  puVar3 = PTR_DAT_04cba458;
  puVar2 = PTR_DAT_04ca9ae8;
  if (**(long **)(piVar17 + 0x2e) == 0) goto LAB_0245e958;
  if (*(char *)(**(long **)(piVar17 + 0x2e) + 0x38) == '\0') {
    return piVar17;
  }
  if (lVar18 == 0) goto LAB_0245e958;
  iVar27 = *(int *)(lVar18 + 0x20);
  piVar12 = param_5 + 0x10;
  if (*(int *)(lVar18 + 0x28) != *piVar12) {
    if (iVar27 != 2) {
      return piVar17;
    }
    param_5[0x10] = *(int *)(lVar18 + 0x28);
    uVar20 = _UNK_00e69830;
    param_5[0x12] = 0;
    *(undefined8 *)(param_5 + 0x14) = uVar20;
    return piVar17;
  }
  if (iVar27 < 4) {
    if (iVar27 == 2) {
      if ((char)param_5[0x4e] != '\0') {
        return piVar17;
      }
      if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8();
      fVar28 = (float)param_5[0x14];
      fVar24 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
      lVar14 = *(long *)(param_5 + 0x40);
      param_5[0x14] = (int)(fVar28 + fVar24);
      if (lVar14 == 0) goto LAB_0245e958;
      if (*(float *)(lVar14 + 0x4c) < fVar28 + fVar24) {
        uVar20 = System_Int32__ToString_482d750(piVar12,0);
        uVar20 = System_String__Concat_46d2b84
                           (*(undefined8 *)PTR_DAT_04cba508,uVar20,*(undefined8 *)PTR_DAT_04cba4f8,0
                           );
                    /* try { // try from 0245e6d4 to 0255e6db has its CatchHandler @ 0245e854 */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
                    /* try { // try from 0245e6e8 to 0255e6ef has its CatchHandler @ 0245e850 */
        Dino_BusSand_Cheat_CheatManager__Log_235c924(uVar20);
        Dino_BusSand_Cheat_CheatManager__HideHand_235edd0(param_5);
        goto LAB_0245e638;
      }
                    /* try { // try from 0245e804 to 0255e807 has its CatchHandler @ 0245e84c */
      if (*(char *)(lVar14 + 0x50) == '\0') {
        fVar24 = (float)param_5[0x1d];
        piVar17 = (int *)UnityEngine_Time__get_deltaTime_43cd5e8(0);
        param_5[0x1d] = (int)(fVar24 + extraout_s0_04);
        if (*(long *)(param_5 + 0x40) != 0) {
          if (fVar24 + extraout_s0_04 < *(float *)(*(long *)(param_5 + 0x40) + 0x54)) {
            return piVar17;
          }
          fVar24 = (float)param_5[0x13];
          piVar17 = (int *)UnityEngine_Time__get_deltaTime_43cd5e8(0);
          param_5[0x13] = (int)(fVar24 + extraout_s0_05);
          if (*(long *)(param_5 + 0x40) != 0) {
            if (fVar24 + extraout_s0_05 < *(float *)(*(long *)(param_5 + 0x40) + 0x30)) {
              return piVar17;
            }
            param_5[0x13] = 0;
            if ((bRam0000000004f9c245 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04caba90,0);
              bRam0000000004f9c245 = 1;
            }
            if (*(int *)(lVar18 + 0x20) == 2) {
              lVar14 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18);
              if (lVar14 == 0) {
                return (int *)0x0;
              }
              uVar20 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18);
              iVar27 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar20,0);
              if (-1 < iVar27) {
                if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto_221bf34(0);
                if (*(long *)(lVar18 + 0x38) != 0) {
                  Dino_BusSand_View_GameView__TapVehicle_23a151c(*(long *)(lVar18 + 0x38),iVar27,0);
                  return (int *)0x1;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
            return (int *)0x0;
          }
        }
        goto LAB_0245e958;
      }
                    /* try { // try from 0245e808 to 0255e80b has its CatchHandler @ 0245e848 */
      plVar9 = (long *)(param_5 + 0x1a);
                    /* try { // try from 0245e80c to 0255e80f has its CatchHandler @ 0245e840 */
                    /* try { // try from 0245e810 to 0255e813 has its CatchHandler @ 0245e83c */
      lVar14 = *plVar9;
                    /* try { // try from 0245e814 to 0255e817 has its CatchHandler @ 0245e824 */
                    /* try { // try from 0245e818 to 0255e86f has its CatchHandler @ 0245e5c8 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0245e7c8 with catch @ 0245e81c */
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 0245e760 with catch @ 0245e820 */
                    /* catch() { ... } // from try @ 0245e814 with catch @ 0245e824 */
                    /* catch() { ... } // from try @ 0245e768 with catch @ 0245e828 */
                    /* catch() { ... } // from try @ 0245e74c with catch @ 0245e82c */
      uVar15 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
                    /* catch() { ... } // from try @ 0245e718 with catch @ 0245e830 */
      if ((uVar15 & 1) != 0) {
                    /* catch() { ... } // from try @ 0245e730 with catch @ 0245e834 */
                    /* catch() { ... } // from try @ 0245e738 with catch @ 0245e838 */
                    /* catch() { ... } // from try @ 0245e810 with catch @ 0245e83c */
        uVar20 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
                    /* catch() { ... } // from try @ 0245e80c with catch @ 0245e840 */
                    /* catch() { ... } // from try @ 0245e700 with catch @ 0245e844 */
                    /* catch() { ... } // from try @ 0245e808 with catch @ 0245e848 */
                    /* catch() { ... } // from try @ 0245e804 with catch @ 0245e84c */
                    /* catch() { ... } // from try @ 0245e6e8 with catch @ 0245e850 */
                    /* catch() { ... } // from try @ 0245e6d4 with catch @ 0245e854 */
        if (*(int *)(*(long *)PTR_DAT_04cb9550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb9550);
        }
        lVar14 = Dino_BusSand_Cheat_AutoPlayHand__Create_233ec0c(uVar20,0);
                    /* try { // try from 0245e870 to 0255e873 has its CatchHandler @ 0245e894 */
        *plVar9 = lVar14;
                    /* try { // try from 0245e874 to 0255e897 has its CatchHandler @ 0245e5c8 */
        thunk_FUN_02134474(plVar9,lVar14);
      }
      if (param_5[0x1c] == param_5[0x10]) {
        if (*plVar9 == 0) goto LAB_0245e958;
                    /* catch() { ... } // from try @ 0245e870 with catch @ 0245e894 */
                    /* try { // try from 0245e898 to 0255e89f has its CatchHandler @ 0245e8a8 */
        uVar15 = Dino_BusSand_Cheat_AutoPlayHand__get_Visible_233f470(*plVar9,0);
        if ((uVar15 & 1) == 0) goto LAB_0245e8a0;
      }
      else {
LAB_0245e8a0:
                    /* try { // try from 0245e8a0 to 0255e8ab has its CatchHandler @ 0245e5c8 */
                    /* catch() { ... } // from try @ 0245e898 with catch @ 0245e8a8 */
        if ((*(long *)(param_5 + 0x40) == 0) || (*(long *)(param_5 + 0x1a) == 0)) goto LAB_0245e958;
        Dino_BusSand_Cheat_AutoPlayHand__BeginLevel_233f504
                  (*(undefined4 *)(*(long *)(param_5 + 0x40) + 0x54),*(long *)(param_5 + 0x1a),0);
        param_5[0x1c] = param_5[0x10];
      }
      piVar17 = (int *)*plVar9;
      if (piVar17 == (int *)0x0) {
LAB_0245e958:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      piVar12 = piVar17;
      if ((bRam0000000004f9c677 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb9550,lVar18,0);
        FUN_02132f7c(PTR_DAT_04caba90);
        FUN_02132f7c(PTR_DAT_04cb4df0);
        FUN_02132f7c(PTR_DAT_04cb71d0);
        piVar12 = (int *)FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c677 = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
      uStack_60 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      uStack_70 = 0;
      if (piVar17[0x10] == 0) {
        return piVar12;
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      piVar12 = (int *)UnityEngine_Object__op_Equality_43c6f30(lVar18,0,0);
      if (((ulong)piVar12 & 1) != 0) {
        return piVar12;
      }
      if (lVar18 == 0) goto LAB_0243fd3c;
      uVar20 = *(undefined8 *)(lVar18 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      piVar12 = (int *)UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
      if (((ulong)piVar12 & 1) != 0) {
        return piVar12;
      }
      lVar14 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18,0);
      if (lVar14 == 0) {
        return (int *)0x0;
      }
      piVar12 = (int *)UnityEngine_Time__get_deltaTime_43cd5e8(0);
      if (extraout_s0 <= 0.0) {
        return piVar12;
      }
      uVar20 = *(undefined8 *)(piVar17 + 0x11);
      *(ulong *)(piVar17 + 0x11) =
           CONCAT44(extraout_s0 + (float)((ulong)uVar20 >> 0x20),extraout_s0 + (float)uVar20);
      piVar12 = (int *)Dino_BusSand_App_Gameplay_GameplayController__get_InputBlocked_229bf48
                                 (lVar18,0);
      fVar24 = (float)uVar20;
      if (((ulong)piVar12 & 1) == 0) {
        piVar12 = *(int **)(lVar18 + 0x38);
        if (piVar12 == (int *)0x0) goto LAB_0243fd3c;
        if ((char)piVar12[0x10] != '\0') goto LAB_0243f898;
        piVar12 = (int *)Dino_BusSand_View_GameView__get_IntroPlaying_239a200(piVar12,0);
        uVar21 = (uint)piVar12 ^ 1;
      }
      else {
LAB_0243f898:
        uVar21 = 0;
      }
      fVar28 = _UNK_00e20390;
      iVar27 = piVar17[0x10];
      if (iVar27 < 4) {
        if (iVar27 == 1) {
          param_3 = 0;
          piVar12 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Place_233f694
                                     (piVar17[0x16],piVar17[0x17],piVar17);
          fVar24 = (float)piVar17[0x1f];
          bVar6 = NAN((float)piVar17[0x12]) || NAN(fVar24);
          bVar5 = (float)piVar17[0x12] < fVar24;
LAB_0243fba0:
          if (bVar5 != bVar6 || ((uVar21 ^ 0xffffffff) & 1) != 0) {
            return piVar12;
          }
        }
        else {
          if (iVar27 == 2) {
            if (piVar17[0x1e] < 0) {
              uVar15 = *(ulong *)(piVar17 + 0x1c);
              uVar13 = 0;
            }
            else {
              auVar31 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(piVar17,lVar18);
              uStack_60 = auVar31._0_8_;
              uStack_58 = CONCAT44(uStack_58._4_4_,auVar31._8_4_);
              if ((uStack_60 & 0xff) == 0) goto LAB_0243fbac;
              System_Nullable_Vector2___get_Value_2bd0a60
                        (&uStack_60,*(undefined8 *)PTR_DAT_04cb71d0);
              uVar15 = CONCAT44(fVar24,extraout_s0_00);
              uVar13 = extraout_var;
            }
            uVar16 = *(undefined8 *)(piVar17 + 0x18);
            uVar20 = *(undefined8 *)(piVar17 + 0x1a);
            fVar28 = (float)piVar17[0x12] / (float)piVar17[0x13];
            fVar24 = 1.0;
            if (fVar28 <= 1.0) {
              fVar24 = fVar28;
            }
            fVar26 = 0.0;
            if (0.0 <= fVar28) {
              fVar26 = fVar24;
            }
            fVar24 = fVar26 * fVar26 * (3.0 - (fVar26 + fVar26));
            if (*(int *)(*(long *)PTR_DAT_04cb9550 + 0xe4) == 0) {
              uStack_80 = uVar15;
              uStack_78 = uVar13;
              thunk_FUN_0218fdac();
              uVar15 = uStack_80;
            }
            fVar30 = 1.0 - fVar24;
            fVar29 = fVar24 * (fVar30 + fVar30);
            fVar28 = (float)(uVar15 >> 0x20) * fVar24 * fVar24 +
                     (float)((ulong)uVar16 >> 0x20) * fVar30 * fVar30 +
                     (float)((ulong)uVar20 >> 0x20) * fVar29;
            uVar20 = CONCAT44(fVar28,(float)uVar15 * fVar24 * fVar24 +
                                     (float)uVar16 * fVar30 * fVar30 + (float)uVar20 * fVar29);
            *(undefined8 *)(piVar17 + 0x16) = uVar20;
            piVar12 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(uVar20,fVar28,0,piVar17)
            ;
            if (((uVar21 & piVar17[0x1e] < 0) == 1) &&
               ((float)piVar17[0x15] <= (float)piVar17[0x11])) {
              piVar17[0x15] = (int)((float)piVar17[0x11] + 0.25);
              uVar20 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18,0);
              piVar12 = (int *)Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar20,0);
              if (-1 < (int)piVar12) {
LAB_0243fcb4:
                piVar17 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Decide_233fd40(piVar17,lVar18);
                return piVar17;
              }
            }
            if (fVar26 < 1.0) {
              return piVar12;
            }
            piVar17[0x12] = 0;
            iVar27 = 3;
            if (piVar17[0x1e] < 0) {
              iVar27 = 6;
            }
            piVar17[0x10] = iVar27;
            fVar24 = _UNK_00e20a94;
            if (piVar17[0x1e] < 0) {
              piVar12 = (int *)UnityEngine_Random__Range_43b64a8(0x3f000000,_UNK_00e20178,0);
              fVar24 = extraout_s0_01 * _UNK_00e2068c;
            }
            piVar17[0x13] = (int)fVar24;
            return piVar12;
          }
          if (iVar27 != 3) {
            return piVar12;
          }
          auVar31 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc
                              (piVar17,lVar18,piVar17[0x1e]);
          uStack_70 = auVar31._0_8_;
          uStack_68 = CONCAT44(uStack_68._4_4_,auVar31._8_4_);
          if ((uStack_70 & 0xff) != 0) {
            iVar27 = System_Nullable_Vector2___get_Value_2bd0a60
                               (&uStack_70,*(undefined8 *)PTR_DAT_04cb71d0);
            fVar28 = _UNK_00e20a94;
            piVar17[0x16] = iVar27;
            piVar17[0x17] = (int)fVar24;
            piVar12 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(piVar17);
            if ((float)piVar17[0x12] < fVar28) {
              return piVar12;
            }
            if ((float)piVar17[0x11] - (float)piVar17[0x14] < _UNK_00e208e8 ||
                ((uVar21 ^ 0xffffffff) & 1) != 0) {
              return piVar12;
            }
            iVar27 = piVar17[0x1e];
            if (*(int *)(*(long *)PTR_DAT_04cb9550 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar15 = Dino_BusSand_Cheat_AutoPlayHand__StillGood_234019c(lVar18,iVar27);
            if ((uVar15 & 1) != 0) {
              if (0 < piVar17[0x20]) {
                fVar28 = (float)piVar17[0x11] - (float)piVar17[0x14];
                fVar24 = (float)piVar17[0x21];
                if (fVar28 <= (float)piVar17[0x21]) {
                  fVar24 = fVar28;
                }
                piVar17[0x21] = (int)fVar24;
              }
              puVar1 = PTR_DAT_04caba90;
              piVar17[0x14] = piVar17[0x11];
              piVar17[0x20] = piVar17[0x20] + 1;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto_221bf34(0);
              if (*(long *)(lVar18 + 0x38) != 0) {
                piVar12 = (int *)Dino_BusSand_View_GameView__TapVehicle_23a151c
                                           (*(long *)(lVar18 + 0x38),piVar17[0x1e],0);
                uVar20 = _UNK_00e6a598;
                piVar17[0x10] = 4;
                *(undefined8 *)(piVar17 + 0x12) = uVar20;
                return piVar12;
              }
LAB_0243fd3c:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            goto LAB_0243fcb4;
          }
        }
LAB_0243fbac:
        if ((bRam0000000004f9c678 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb4df0);
          FUN_02132f7c(PTR_DAT_04cb71d0);
          bRam0000000004f9c678 = 1;
        }
        uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
        if (lVar18 == 0) {
LAB_0243fef8:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar20 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18,0);
        iVar27 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar20,0);
        if (iVar27 < 0) {
          uStack_48 = uStack_48 & 0xffffffff00000000;
        }
        else {
          auVar31 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(piVar17,lVar18,iVar27);
          puVar1 = PTR_DAT_04cb71d0;
          fVar28 = (float)param_4;
          uStack_48 = CONCAT44(uStack_48._4_4_,auVar31._8_4_);
          if ((auVar31._0_8_ & 0xff) != 0) {
            fVar30 = (float)piVar17[0x16];
            fVar29 = (float)piVar17[0x17];
            piVar17[0x1e] = iVar27;
            fVar26 = (float)System_Nullable_Vector2___get_Value_2bd0a60
                                      (&stack0xffffffffffffffb0,*(undefined8 *)puVar1);
            if (cRam0000000004f9c550 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa200);
              cRam0000000004f9c550 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (*(long *)(piVar17 + 8) != 0) {
              UnityEngine_RectTransform__get_rect_43cf450(*(long *)(piVar17 + 8),0);
              uVar20 = *(undefined8 *)puVar1;
              fVar28 = SQRT((fVar30 - fVar26) * (fVar30 - fVar26) +
                            (fVar29 - fVar24) * (fVar29 - fVar24)) / (fVar28 * _UNK_00e208e8);
              fVar24 = 1.0;
              if (fVar28 <= 1.0) {
                fVar24 = fVar28;
              }
              fVar26 = 0.0;
              if (0.0 <= fVar28) {
                fVar26 = fVar24;
              }
              fVar24 = 0.0;
              if (0.0 <= fVar26) {
                fVar24 = fVar26;
              }
              piVar17[0x22] = (int)(fVar24 * _UNK_00e1fe7c + _UNK_00e20104);
              System_Nullable_Vector2___get_Value_2bd0a60(&stack0xffffffffffffffb0,uVar20);
              piVar17 = (int *)Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738(piVar17);
              return piVar17;
            }
            goto LAB_0243fef8;
          }
        }
      }
      else {
        if (iVar27 == 4) {
          piVar12 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Place_233f694
                                     (piVar17[0x16],piVar17[0x17],0x3f800000,piVar17);
          if ((float)piVar17[0x12] < (float)piVar17[0x13]) {
            return piVar12;
          }
          piVar17[0x12] = 0;
          piVar17[0x10] = 5;
          return piVar12;
        }
        if (iVar27 == 5) {
          fVar26 = (float)piVar17[0x12] / _UNK_00e20390;
          fVar24 = 1.0;
          if (fVar26 <= 1.0) {
            fVar24 = fVar26;
          }
          fVar29 = 1.0;
          if (0.0 <= fVar26) {
            fVar29 = 1.0 - fVar24;
          }
          param_3 = (ulong)(uint)fVar29;
          fVar24 = (float)piVar17[0x17];
          piVar12 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Place_233f694(piVar17[0x16],piVar17);
          bVar5 = false;
          bVar6 = true;
          if (!NAN((float)piVar17[0x12]) && !NAN(fVar28)) {
            bVar5 = (float)piVar17[0x12] < fVar28;
            bVar6 = false;
          }
          goto LAB_0243fba0;
        }
        if (iVar27 != 6) {
          return piVar12;
        }
        fVar28 = (float)piVar17[0x16];
        fVar26 = (float)piVar17[0x17];
        fVar24 = (float)func_0x049b5320((float)piVar17[0x11] * _UNK_00e205ec);
        param_3 = 0;
        piVar12 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Place_233f694
                                   (fVar28 + 0.0,fVar26 + fVar24 * 6.0,piVar17);
        if (((uVar21 & 1) != 0) && ((float)piVar17[0x15] <= (float)piVar17[0x11])) {
          fVar24 = 0.25;
          piVar17[0x15] = (int)((float)piVar17[0x11] + 0.25);
          uVar20 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18,0);
          piVar12 = (int *)Dino_BusSand_Core_SimBot__BestTap_241b8b8(uVar20,0);
          if (-1 < (int)piVar12) goto LAB_0243fbac;
        }
        fVar24 = (float)piVar17[0x13];
        if ((float)piVar17[0x12] < fVar24) {
          return piVar12;
        }
      }
      if ((bRam0000000004f9c679 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab9e0);
        FUN_02132f7c(PTR_DAT_04cab9e8);
        FUN_02132f7c(PTR_DAT_04cab9f0);
        FUN_02132f7c(PTR_DAT_04cab9f8);
        FUN_02132f7c(PTR_DAT_04cb4df0);
        FUN_02132f7c(PTR_DAT_04cb71d0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c679 = 1;
      }
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      uStack_80 = 0;
      uStack_a0 = 0;
      puStack_98 = (undefined8 *)0x0;
      lStack_90 = 0;
      uStack_48 = 0;
      piVar17[0x1e] = -1;
      fVar28 = (float)Dino_BusSand_Cheat_AutoPlayHand__RestPoint_233f554(piVar17);
      fVar26 = (float)UnityEngine_Random__get_value_43b6570(0);
      fVar29 = (float)param_4;
      uVar15 = (ulong)(uint)_UNK_00e2098c;
      if (fVar26 < _UNK_00e2098c) {
        if (((lVar18 == 0) ||
            (lVar14 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar18,0),
            lVar14 == 0)) || (*(long *)(lVar14 + 0x28) == 0)) goto LAB_024406a4;
        uStack_48 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar14 + 0x28),0);
        Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                  (&uStack_b8,&uStack_48,*(undefined8 *)PTR_DAT_04cab9f8);
        puVar2 = PTR_DAT_04cab9e8;
        puVar1 = PTR_DAT_04ca9ae8;
        iVar27 = 0;
        puStack_98 = puStack_b0;
        uStack_a0 = uStack_b8;
        iVar22 = -1;
        lStack_90 = lStack_a8;
        uStack_b8 = 0;
        puStack_b0 = &uStack_a0;
        while( true ) {
          uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_a0,*(undefined8 *)puVar2);
          lVar14 = lStack_90;
          fVar29 = (float)param_4;
          fVar30 = (float)param_3;
          fVar26 = (float)uVar15;
          if ((uVar13 & 1) == 0) break;
          if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(lVar18 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar20 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                             (*(long *)(lVar18 + 0x38),*(undefined4 *)(lStack_90 + 0x10),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
          if ((uVar13 & 1) != 0) {
            iVar27 = iVar27 + 1;
            iVar7 = UnityEngine_Random__Range_43b64e8(0,iVar27,0);
            if (iVar7 == 0) {
              iVar22 = *(int *)(lVar14 + 0x10);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cab9e0);
        if (iVar22 < 0) {
          uStack_80 = 0;
          uStack_78 = uStack_78 & 0xffffffff00000000;
        }
        else {
          auVar31 = Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc(piVar17,lVar18,iVar22);
          uStack_80 = auVar31._0_8_;
          uStack_78 = CONCAT44(uStack_78._4_4_,auVar31._8_4_);
          if ((uStack_80 & 0xff) != 0) {
            fVar28 = (float)System_Nullable_Vector2___get_Value_2bd0a60
                                      (&uStack_80,*(undefined8 *)PTR_DAT_04cb71d0);
            if (*(long *)(piVar17 + 8) == 0) goto LAB_024406a4;
            UnityEngine_RectTransform__get_rect_43cf450(*(long *)(piVar17 + 8),0);
            if (*(long *)(piVar17 + 8) == 0) goto LAB_024406a4;
            UnityEngine_RectTransform__get_rect_43cf450(*(long *)(piVar17 + 8),0);
            fVar28 = fVar28 + fVar30 * _UNK_00e20658;
            fVar24 = fVar26 + fVar29 * _UNK_00e20140;
          }
        }
      }
      cVar4 = cRam0000000004f9c550;
      fVar30 = (float)piVar17[0x16];
      fVar26 = (float)piVar17[0x17];
      piVar17[0x1c] = (int)fVar28;
      piVar17[0x1d] = (int)fVar24;
      if (cVar4 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9c550 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (*(long *)(piVar17 + 8) != 0) {
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(piVar17 + 8),0);
        fVar29 = SQRT((fVar30 - fVar28) * (fVar30 - fVar28) + (fVar26 - fVar24) * (fVar26 - fVar24))
                 / (fVar29 * _UNK_00e208e8);
        fVar26 = 1.0;
        if (fVar29 <= 1.0) {
          fVar26 = fVar29;
        }
        fVar30 = 0.0;
        if (0.0 <= fVar29) {
          fVar30 = fVar26;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar30) {
          fVar26 = fVar30;
        }
        piVar17 = (int *)Dino_BusSand_Cheat_AutoPlayHand__StartTravel_2340738
                                   (fVar28,fVar24,
                                    (fVar26 * _UNK_00e1fe7c + _UNK_00e20104) * _UNK_00e2068c,piVar17
                                   );
        return piVar17;
      }
LAB_024406a4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (iVar27 == 3) {
LAB_0245e5a8:
      Dino_BusSand_Cheat_CheatManager__HideHand_235edd0(param_5);
      if ((float)param_5[0x15] < 0.0) {
        iVar27 = UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 0245e5c8 to 0255e6d3 has its CatchHandler @ 0245e5c8
                       catch() { ... } // from try @ 0245e5c8 with catch @ 0245e5c8
                       catch() { ... } // from try @ 0245e7d0 with catch @ 0245e5c8
                       catch() { ... } // from try @ 0245e818 with catch @ 0245e5c8
                       catch() { ... } // from try @ 0245e874 with catch @ 0245e5c8
                       catch() { ... } // from try @ 0245e8a0 with catch @ 0245e5c8 */
        param_5[0x15] = iVar27;
        uVar20 = System_Int32__ToString_482d750(piVar12,0);
        uVar20 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba500,uVar20,0);
        if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cba458);
        }
        Dino_BusSand_Cheat_CheatManager__Log_235c924(uVar20);
      }
      piVar17 = (int *)UnityEngine_Time__get_unscaledTime_43cd610(0);
      if (extraout_s0_02 - (float)param_5[0x15] < _UNK_00e200f8) {
        return piVar17;
      }
LAB_0245e638:
      piVar17 = param_5;
      if ((bRam0000000004f9c73a & 1) == 0) {
        piVar17 = (int *)FUN_02132f7c(PTR_DAT_04cba4f0);
        bRam0000000004f9c73a = 1;
      }
      if (*(long *)(param_5 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (param_5[0x12] < *(int *)(*(long *)(param_5 + 0x40) + 0x48)) {
        param_5[0x11] = param_5[0x10];
        param_5[0x12] = param_5[0x12] + 1;
        return piVar17;
      }
      piVar17 = param_5 + 0xf;
      param_5[0x12] = 0;
      if (param_5[0x10] < *piVar17) {
        param_5[0x11] = param_5[0x10] + 1;
        return piVar17;
      }
      uVar20 = System_Int32__ToString_482d750(piVar17,0);
      lVar18 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba4f0,uVar20,0);
      goto Dino_BusSand_Cheat_CheatManager__StopAutoPlay_235def8;
    }
  }
  else {
    if (iVar27 == 4) {
                    /* try { // try from 0245e700 to 0255e70f has its CatchHandler @ 0245e844 */
      Dino_BusSand_Cheat_CheatManager__HideHand_235edd0(param_5);
      if ((float)param_5[0x15] < 0.0) {
        iVar27 = UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 0245e718 to 0255e72b has its CatchHandler @ 0245e830 */
        param_5[0x15] = iVar27;
        uVar20 = System_Int32__ToString_482d750(piVar12,0);
                    /* try { // try from 0245e730 to 0255e737 has its CatchHandler @ 0245e834 */
                    /* try { // try from 0245e738 to 0255e743 has its CatchHandler @ 0245e838 */
        uVar20 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba510,uVar20,0);
                    /* try { // try from 0245e74c to 0255e75b has its CatchHandler @ 0245e82c */
        if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
                    /* try { // try from 0245e760 to 0255e767 has its CatchHandler @ 0245e820 */
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cba458);
        }
                    /* try { // try from 0245e768 to 0255e773 has its CatchHandler @ 0245e828 */
        Dino_BusSand_Cheat_CheatManager__Log_235c924(uVar20);
      }
      piVar17 = (int *)UnityEngine_Time__get_unscaledTime_43cd610(0);
      if (*(long *)(param_5 + 0x40) == 0) goto LAB_0245e958;
      if (extraout_s0_03 - (float)param_5[0x15] < *(float *)(*(long *)(param_5 + 0x40) + 0x44)) {
        return piVar17;
      }
      piVar17 = param_5 + 0xf;
      param_5[0x12] = 0;
      if (param_5[0x10] < *piVar17) {
        param_5[0x11] = param_5[0x10] + 1;
        return piVar17;
      }
      uVar20 = System_Int32__ToString_482d750(piVar17,0);
                    /* try { // try from 0245e7c8 to 0255e7cf has its CatchHandler @ 0245e81c */
                    /* try { // try from 0245e7d0 to 0255e803 has its CatchHandler @ 0245e5c8 */
      lVar18 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cba4f0,uVar20,0);
Dino_BusSand_Cheat_CheatManager__StopAutoPlay_235def8:
      piVar17 = param_5;
      if ((bRam0000000004f9c736 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cba4e8);
        FUN_02132f7c(PTR_DAT_04caccc8);
        piVar17 = (int *)FUN_02132f7c(PTR_DAT_04ca9c30);
        bRam0000000004f9c736 = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((char)param_5[0xe] == '\0') {
        return piVar17;
      }
      uVar20 = *(undefined8 *)(param_5 + 0x1a);
      *(undefined1 *)(param_5 + 0xe) = 0;
      param_5[0x11] = 0;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
      if ((uVar15 & 1) != 0) {
        if (*(long *)(param_5 + 0x1a) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        Dino_BusSand_Cheat_AutoPlayHand__Hide_233f754(*(long *)(param_5 + 0x1a),0);
      }
      puVar1 = PTR_DAT_04cba4e8;
      param_5[0x1c] = -1;
      uVar20 = *(undefined8 *)puVar1;
      if (lVar18 == 0) {
        uVar16 = *(undefined8 *)PTR_DAT_04ca9c30;
      }
      else {
        uVar16 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04caccc8,lVar18,0);
      }
      lVar18 = System_String__Concat_46c82e0(uVar20,uVar16,0);
      puVar1 = PTR_DAT_04cba458;
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
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar18);
      piVar17 = (int *)Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_5);
      if (((ulong)piVar17 & 1) != 0) {
        return piVar17;
      }
      if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      piVar17 = (int *)UnityEngine_Application__get_isMobilePlatform_4352d28(0);
      puVar1 = PTR_DAT_04caba50;
      if (((ulong)piVar17 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar14 = *(long *)puVar1;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar1;
        }
        uVar20 = **(undefined8 **)(lVar14 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        piVar17 = (int *)UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
        if (((ulong)piVar17 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar14 = *(long *)puVar1;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar14 = *(long *)puVar1;
          }
          puVar1 = PTR_DAT_04cabb08;
          lVar14 = **(long **)(lVar14 + 0xb8);
          if (lVar14 == 0) goto LAB_0245de8c;
          if ((bRam0000000004f9b87c & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cabb08,lVar18,0);
            bRam0000000004f9b87c = 1;
          }
          lVar14 = *(long *)(lVar14 + 0x28);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar1 = PTR_DAT_04ca9ae8;
          uVar25 = _UNK_00e20094;
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
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          piVar17 = (int *)UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
          puVar2 = PTR_DAT_04cabb08;
          if (((ulong)piVar17 & 1) != 0) {
            return piVar17;
          }
          lVar8 = *(long *)PTR_DAT_04cabb08;
          lVar10 = *(long *)PTR_DAT_04ca9c30;
          if (lVar18 != 0) {
            lVar10 = lVar18;
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar2;
          }
          **(long **)(lVar8 + 0xb8) = lVar10;
          thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar10);
          uVar23 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
          *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar23;
          if (lVar14 == 0) goto LAB_023bd530;
          uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar14,4,0);
          plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
          uVar16 = *(undefined8 *)PTR_DAT_04cad730;
          if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
          }
          lVar14 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
          if (plVar9 == (long *)0x0) goto LAB_023bd530;
          if ((lVar14 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
            uVar20 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar20,0);
          }
          if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar9[4] = lVar14;
          thunk_FUN_02134474(plVar9 + 4,lVar14);
          lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
          UnityEngine_GameObject___ctor_43c2310(lVar14,*(undefined8 *)PTR_DAT_04cb6578,plVar9,0);
          if ((lVar14 == 0) ||
             (lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0), lVar10 == 0))
          goto LAB_023bd530;
          UnityEngine_Transform__SetParent_43d1e34(lVar10,uVar20,0,0);
          plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
          if (plVar9 == (long *)0x0) goto LAB_023bd530;
          if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar9);
          }
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar25,plVar9,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar25,plVar9,0);
          puVar3 = PTR_DAT_04cad330;
          lVar10 = *(long *)PTR_DAT_04cad330;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar10 = *(long *)puVar3;
          }
          puVar19 = *(undefined4 **)(lVar10 + 0xb8);
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
          System_Nullable_Color____ctor_2bc9090
                    (*puVar19,puVar19[1],puVar19[2],puVar19[3],&uStack_68,
                     *(undefined8 *)PTR_DAT_04cac878);
          uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_58);
          uStack_78 = uStack_60;
          uStack_80 = uStack_68;
          lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                             (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar9,
                              *(undefined8 *)PTR_DAT_04cb4e20,lVar18,*(undefined8 *)PTR_DAT_04cad4a8
                              ,&uStack_80,0x202,0);
          if (lVar10 == 0) goto LAB_023bd530;
          TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar10,1,0);
          fVar28 = 0.0;
          TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar10,lVar18,0);
          fVar24 = 150.0;
          if (150.0 <= fVar28 + 70.0) {
            fVar24 = fVar28 + 70.0;
          }
          lVar18 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar10,0);
          if (lVar18 == 0) goto LAB_023bd530;
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar24 + -50.0,lVar18,0);
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar24,plVar9,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          puStack_98 = (undefined8 *)0x0;
          lStack_90 = 0;
          uStack_88 = 0;
          fVar28 = 1.0;
          if (fVar24 / 241.0 <= 1.0) {
            fVar28 = fVar24 / 241.0;
          }
          lVar18 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                             (0x44660000,fVar24,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                              (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar28,plVar9,
                              *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,
                              &puStack_98,0);
          if (lVar18 == 0) goto LAB_023bd530;
          UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar18,0);
          uVar20 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = UnityEngine_Object__op_Equality_43c6f30(uVar20,0,0);
          if ((uVar15 & 1) == 0) {
            fVar24 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
            lVar18 = *(long *)puVar2;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar18 = *(long *)puVar2;
            }
            if (_UNK_00e200f8 < fVar24 - *(float *)(*(long *)(lVar18 + 0xb8) + 0x18))
            goto LAB_023bd36c;
          }
          else {
LAB_023bd36c:
            puVar3 = PTR_DAT_04cad568;
            if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b94e == '\0') {
              FUN_02132f7c(PTR_DAT_04cad568);
              cRam0000000004f9b94e = '\x01';
            }
            lVar18 = *(long *)puVar3;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar18 = *(long *)puVar3;
            }
            if (**(long **)(lVar18 + 0xb8) != 0) {
              Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar18 + 0xb8),0);
            }
          }
          lVar18 = *(long *)puVar2;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar18 = *(long *)puVar2;
          }
          uVar20 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
          if ((uVar15 & 1) != 0) {
            lVar18 = *(long *)puVar2;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar18 = *(long *)puVar2;
            }
            Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                      (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x10));
          }
          lVar18 = *(long *)puVar2;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar18 = *(long *)puVar2;
          }
          plVar11 = (long *)(*(long *)(lVar18 + 0xb8) + 0x10);
          *plVar11 = lVar14;
          thunk_FUN_02134474(plVar11,lVar14);
          uVar25 = UnityEngine_Time__get_unscaledTime_43cd610(0);
          iVar27 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
          *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar25;
          if (iVar27 == 0) {
            thunk_FUN_0218fdac();
          }
          lVar18 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar14,0);
          if (lVar18 != 0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar18,0,0);
            Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                      (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar9,0,0,0);
            Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar9,0,0);
            piVar17 = (int *)Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                                       (_UNK_00e208d0,_UNK_00e1fdec,lVar14);
            return piVar17;
          }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      if (*(long *)(param_5 + 0x44) != 0) {
        if (*(char *)(*(long *)(param_5 + 0x44) + 0x10) != '\0') {
          if (*(long *)(param_5 + 0x40) == 0) goto LAB_0245de8c;
          if (*(char *)(*(long *)(param_5 + 0x40) + 0x3c) == '\0') {
            return piVar17;
          }
        }
        lVar14 = *(long *)(param_5 + 0x58);
        thunk_FUN_02134474(&stack0xffffffffffffffc0,lVar18);
        fVar24 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        if ((*(long *)(param_5 + 0x40) != 0) &&
           (uVar15 = (ulong)(uint)(fVar24 + *(float *)(*(long *)(param_5 + 0x40) + 0x38)),
           lVar14 != 0)) {
          lVar10 = *(long *)(lVar14 + 0x10);
          lVar8 = *(long *)PTR_DAT_04cba4d8;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar21 = *(uint *)(lVar14 + 0x18);
            if (uVar21 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar21 * 0x10;
              *(uint *)(lVar14 + 0x18) = uVar21 + 1;
              plVar9 = (long *)(lVar10 + 0x20);
              *plVar9 = lVar18;
              *(ulong *)(lVar10 + 0x28) = uVar15;
              thunk_FUN_02134474(plVar9,0);
            }
            else {
              System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                        (lVar14,lVar18,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            piVar17 = *(int **)(param_5 + 0x58);
            if (piVar17 != (int *)0x0) {
              if (3 < piVar17[6]) {
                piVar17 = (int *)System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                                           (piVar17,0,*(undefined8 *)PTR_DAT_04cba4e0);
              }
              return piVar17;
            }
          }
        }
      }
LAB_0245de8c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (iVar27 == 5) goto LAB_0245e5a8;
  }
  if ((bRam0000000004f9c739 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c739 = 1;
  }
  uVar20 = *(undefined8 *)(param_5 + 0x1a);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  piVar17 = (int *)UnityEngine_Object__op_Inequality_43c8dec(uVar20,0,0);
  if (((ulong)piVar17 & 1) != 0) {
    if (*(long *)(param_5 + 0x1a) == 0) {
LAB_0245ee64:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    piVar17 = (int *)Dino_BusSand_Cheat_AutoPlayHand__get_Visible_233f470
                               (*(long *)(param_5 + 0x1a),0);
    if (((ulong)piVar17 & 1) != 0) {
      if (*(long *)(param_5 + 0x1a) == 0) goto LAB_0245ee64;
      piVar17 = (int *)Dino_BusSand_Cheat_AutoPlayHand__Hide_233f754(*(long *)(param_5 + 0x1a),0);
    }
  }
  param_5[0x1c] = -1;
  param_5[0x1d] = 0;
  return piVar17;
}

