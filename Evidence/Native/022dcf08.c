/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<KeysGain>d__26$$MoveNext
bool Dino_BusSand_App_UI_PassportUi__KeysGain_d__26__MoveNext (Dino_BusSand_App_UI_PassportUi__KeysGain_d__26_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<KeysGain>d__26$$MoveNext
   bool Dino_BusSand_App_UI_PassportUi__KeysGain_d__26__MoveNext
   (Dino_BusSand_App_UI_PassportUi__KeysGain_d__26_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_PassportUi__KeysGain_d__26__MoveNext_21dcf08(float param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar12;
  float fVar13;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar14;
  
  if ((bRam0000000004f9bb92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0350);
    FUN_02132f7c(PTR_DAT_04cb0a98);
    FUN_02132f7c(PTR_DAT_04cae760);
    FUN_02132f7c(PTR_DAT_04cb0aa0);
    param_1 = (float)FUN_02132f7c(PTR_DAT_04cb0aa8);
    bRam0000000004f9bb92 = 1;
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if (iVar6 == 2) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    iVar6 = *(int *)(param_2 + 0x60) + 1;
    *(int *)(param_2 + 0x60) = iVar6;
    if (iVar6 < *(int *)(param_2 + 0x5c)) goto LAB_022dd2c0;
  }
  else {
    if (iVar6 == 1) {
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar6 != 0) {
        return 0;
      }
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
      puVar2 = PTR_DAT_04cb0a98;
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_022dd510;
      uVar8 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_2 + 0x20),*(undefined8 *)PTR_DAT_04cb0a98,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      uVar8 = 0;
      if ((uVar9 & 1) != 0) {
        param_1 = extraout_s0;
                    /* try { // try from 022dd020 to 023dd093 has its CatchHandler @ 022dd2b4 */
        if ((*(long *)(param_2 + 0x20) == 0) ||
           (lVar10 = UnityEngine_Transform__Find_43d4bec
                               (*(long *)(param_2 + 0x20),*(undefined8 *)puVar2,0),
           param_1 = extraout_s0_00, lVar10 == 0)) goto LAB_022dd510;
        uVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar10,*(undefined8 *)PTR_DAT_04cad788);
      }
      *(undefined8 *)(param_2 + 0x40) = uVar8;
      param_1 = (float)thunk_FUN_02134474((undefined8 *)(param_2 + 0x40));
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_022dd510;
      uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8
                        (*(long *)(param_2 + 0x28),0);
      uVar5 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(*(undefined8 *)(param_2 + 0x28))
      ;
      *(undefined4 *)(param_2 + 0x48) = uVar5;
      param_1 = (float)Dino_BusSand_App_UI_PassportUi__Fill_21dc780
                                 (*(undefined8 *)(param_2 + 0x28),uVar4);
      *(float *)(param_2 + 0x4c) = param_1;
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_022dd510;
      param_1 = (float)Dino_BusSand_App_Meta_PassportFeature__ClearHallCommandProduce_22469e0
                                 (*(long *)(param_2 + 0x28),0);
      lVar10 = *(long *)(param_2 + 0x28);
      if (lVar10 == 0) goto LAB_022dd510;
      uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8(lVar10,0);
      param_1 = (float)Dino_BusSand_App_UI_PassportUi__Fill_21dc780(lVar10,uVar5);
      lVar10 = *(long *)(param_2 + 0x28);
      *(float *)(param_2 + 0x50) = param_1;
      if (lVar10 == 0) goto LAB_022dd510;
      uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8(lVar10,0);
      iVar6 = Dino_BusSand_App_Meta_PassportFeature__SimulateStageIndexWithKeys_2246acc
                        (lVar10,uVar5,0);
      param_1 = extraout_s0_01;
      if (*(long *)(param_2 + 0x28) == 0) goto LAB_022dd510;
      iVar7 = Dino_BusSand_App_Meta_PassportFeature__SimulateStageIndexWithKeys_2246acc
                        (*(long *)(param_2 + 0x28),uVar4,0);
      puVar3 = PTR_DAT_04cb0350;
      puVar2 = PTR_DAT_04cab1e8;
                    /* try { // try from 022dd0f4 to 023dd0fb has its CatchHandler @ 022dd2b0 */
      *(undefined4 *)(param_2 + 0x58) = 0;
      lVar11 = *(long *)puVar3;
      lVar10 = *(long *)puVar2;
      *(bool *)(param_2 + 0x54) = iVar7 < iVar6;
      iVar6 = *(int *)(lVar10 + 0xe4);
      *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 0x10) = 1;
      if (iVar6 == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0aa0,0);
    }
    fVar13 = _UNK_00e200f8;
    if (*(float *)(param_2 + 0x58) < _UNK_00e200f8) {
      uVar8 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
                    /* try { // try from 022dd198 to 023dd19f has its CatchHandler @ 022dd2b8 */
      if ((uVar9 & 1) != 0) {
        fVar14 = *(float *)(param_2 + 0x58);
        fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar14 = fVar14 + fVar12;
        fVar13 = fVar14 / fVar13;
        *(float *)(param_2 + 0x58) = fVar14;
        fVar12 = 1.0;
        if (fVar13 <= 1.0) {
          fVar12 = fVar13;
        }
        fVar14 = 1.0;
        if (0.0 <= fVar13) {
          fVar14 = 1.0 - fVar12;
        }
        fVar13 = 1.0 - fVar14 * fVar14;
        if (*(char *)(param_2 + 0x54) == '\0') {
          fVar12 = 1.0;
          if (fVar13 <= 1.0) {
            fVar12 = fVar13;
          }
          param_1 = *(float *)(param_2 + 0x4c);
          fVar14 = 0.0;
          if (0.0 <= fVar13) {
            fVar14 = fVar12;
          }
          fVar14 = fVar14 * (*(float *)(param_2 + 0x50) - param_1);
        }
        else if (0.5 <= fVar13) {
          fVar12 = fVar13 + -0.5 + fVar13 + -0.5;
          fVar13 = 1.0;
          if (fVar12 <= 1.0) {
            fVar13 = fVar12;
          }
          param_1 = 0.0;
          if (0.0 <= fVar12) {
            param_1 = fVar13;
          }
          param_1 = param_1 * (*(float *)(param_2 + 0x50) + _UNK_00e207d8);
          fVar14 = _UNK_00e20754;
        }
        else {
                    /* try { // try from 022dd1ec to 023dd1ff has its CatchHandler @ 022dd2ac */
          fVar13 = fVar13 + fVar13;
          fVar12 = 1.0;
          if (fVar13 <= 1.0) {
            fVar12 = fVar13;
          }
                    /* try { // try from 022dd200 to 023dd2d3 has its CatchHandler @ 022dcec4 */
          param_1 = *(float *)(param_2 + 0x4c);
          fVar14 = 0.0;
          if (0.0 <= fVar13) {
            fVar14 = fVar12;
          }
          fVar14 = fVar14 * (1.0 - param_1);
        }
        param_1 = param_1 + fVar14;
        if (*(long *)(param_2 + 0x40) != 0) {
          UnityEngine_UI_Image__set_fillAmount_44afc70(*(long *)(param_2 + 0x40),0);
          *(undefined8 *)(param_2 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(param_2 + 0x18),0);
          *(undefined4 *)(param_2 + 0x10) = 1;
          return 1;
        }
        goto LAB_022dd510;
      }
    }
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      param_1 = extraout_s0_02;
      if (*(long *)(param_2 + 0x40) == 0) goto LAB_022dd510;
      UnityEngine_UI_Image__set_fillAmount_44afc70
                (*(undefined4 *)(param_2 + 0x50),*(long *)(param_2 + 0x40),0);
    }
    uVar1 = *(uint *)(param_2 + 0x30);
    *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cb0350 + 0xb8) + 0x10) = 0;
    if ((int)uVar1 < 2) {
      uVar4 = 1;
    }
    else if (uVar1 < 4) {
                    /* catch() { ... } // from try @ 022dd1ec with catch @ 022dd2ac */
      uVar4 = 2;
                    /* catch() { ... } // from try @ 022dd0f4 with catch @ 022dd2b0 */
    }
    else {
      uVar4 = 3;
                    /* catch() { ... } // from try @ 022dd020 with catch @ 022dd2b4 */
                    /* catch() { ... } // from try @ 022dd198 with catch @ 022dd2b8 */
      if (uVar1 == 4) {
        uVar4 = 1;
      }
    }
    *(undefined4 *)(param_2 + 0x5c) = uVar4;
    *(undefined4 *)(param_2 + 0x60) = 0;
LAB_022dd2c0:
    uVar8 = *(undefined8 *)(param_2 + 0x20);
                    /* try { // try from 022dd2d4 to 023dd413 has its CatchHandler @ 022dd2d4
                       catch() { ... } // from try @ 022dd2d4 with catch @ 022dd2d4
                       catch() { ... } // from try @ 022dd870 with catch @ 022dd2d4 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar12 = (float)Dino_BusSand_App_UI_GiftPackUi__Play_21ada68
                                (uVar8,*(undefined8 *)PTR_DAT_04cb0aa8,0);
      fVar13 = _UNK_00e20754;
      if (_UNK_00e20754 <= fVar12) {
        fVar13 = fVar12;
      }
      uVar8 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(fVar13,0);
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      thunk_FUN_02134474((undefined8 *)(param_2 + 0x18),uVar8);
      *(undefined4 *)(param_2 + 0x10) = 2;
      return 1;
    }
  }
  iVar6 = Dino_BusSand_App_UI_PassportUi__HudClaimables_21dc850(*(undefined8 *)(param_2 + 0x28));
  if (*(int *)(param_2 + 0x48) < iVar6) {
    param_1 = extraout_s0_03;
    if (*(long *)(param_2 + 0x28) == 0) {
LAB_022dd510:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(param_1);
    }
    Dino_BusSand_App_Meta_PassportFeature__SetForceCloseOpen_22491e8(*(long *)(param_2 + 0x28),0,0);
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae760,0);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022dd414 to 023dd41b has its CatchHandler @ 022dd900 */
      Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar8,*(undefined8 *)PTR_DAT_04cb0aa8,0);
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    Dino_BusSand_App_UI_PassportUi__RefreshButton_21dc124(*(undefined8 *)(param_2 + 0x20),0);
  }
  lVar10 = *(long *)(param_2 + 0x38);
  if (lVar10 != 0) {
                    /* try { // try from 022dd460 to 023dd48b has its CatchHandler @ 022dd904 */
    (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
  }
  return 0;
}

