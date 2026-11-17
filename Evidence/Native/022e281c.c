/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar.<PlayWin>d__21$$MoveNext
bool Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_d__21__MoveNext (Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_d__21_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar.<PlayWin>d__21$$MoveNext
   bool Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_d__21__MoveNext
   (Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_d__21_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakRateHallBar__PlayWin_d__21__MoveNext_21e281c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  if ((bRam0000000004f9bbb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0cb8);
    FUN_02132f7c(PTR_DAT_04cb0cc0);
                    /* try { // try from 022e28a0 to 023e28d7 has its CatchHandler @ 022e3a90 */
    FUN_02132f7c(PTR_DAT_04cb0c48);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb0cc8);
    FUN_02132f7c(PTR_DAT_04cb0cd0);
    FUN_02132f7c(PTR_DAT_04cb0cd8);
    FUN_02132f7c(PTR_DAT_04cb0bc8);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cb0bd0);
    FUN_02132f7c(PTR_DAT_04cb0ce0);
    FUN_02132f7c(PTR_DAT_04cb0ce8);
    FUN_02132f7c(PTR_DAT_04cb0cf0);
    FUN_02132f7c(PTR_DAT_04cb0cf8);
    FUN_02132f7c(PTR_DAT_04cb0d00);
    FUN_02132f7c(PTR_DAT_04cb0b88);
    FUN_02132f7c(PTR_DAT_04cb0d08);
    bRam0000000004f9bbb9 = 1;
  }
  puVar4 = PTR_DAT_04cb0cc0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 022e298c to 023e29db has its CatchHandler @ 022e3ab8 */
    System_Object___ctor_4870e5c(uVar6,0);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar6);
    puVar4 = PTR_DAT_04cae9a8;
    if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if ((lVar8 == 0) || (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar8 == 0)
       ) goto LAB_022e30c0;
    uVar7 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar8,0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x28) = 1;
    if (lVar9 == 0) goto LAB_022e30c0;
    uVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar9,*(undefined8 *)PTR_DAT_04cada30);
    Dino_BusSand_App_UI_StreakRateHallBar__ShowGetPanel_21e1140();
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_022e30c0;
                    /* try { // try from 022e2a58 to 023e2aa7 has its CatchHandler @ 022e3ad0 */
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0bc8,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar10,1);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_022e30c0;
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0ce0,0);
    uVar11 = System_Int32__ToString_482d750(param_1 + 0x20,0);
    puVar3 = PTR_DAT_04cad978;
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar11,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar11);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_022e30c0;
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0cc8,0);
                    /* try { // try from 022e2aec to 023e2aef has its CatchHandler @ 022e3acc */
    uVar11 = System_Int32__ToString_482d750(param_1 + 0x24,0);
    puVar2 = PTR_DAT_04cabb10;
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar11,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar11);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_022e30c0;
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0bd0,0);
    uVar11 = System_Int32__ToString_482d750(param_1 + 0x24,0);
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar11,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar11);
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_022e30c0;
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0cf8,0);
    uVar11 = System_Int32__ToString_482d750(param_1 + 0x28,0);
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar11,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar11);
    puVar3 = PTR_DAT_04cb0d00;
    puVar13 = (undefined8 *)PTR_DAT_04cb0b88;
    lVar8 = *(long *)puVar4;
    *(bool *)(param_1 + 0x40) = 1 < *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x24) < 2) {
      puVar13 = (undefined8 *)puVar3;
    }
    uVar10 = *puVar13;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_022e30c0;
    uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0cf0,0);
    puVar13 = (undefined8 *)(param_1 + 0x48);
    *puVar13 = uVar11;
    thunk_FUN_02134474(puVar13,uVar11);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(*puVar13,0);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar15 = (float)Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar6,uVar10,0);
    *(float *)(param_1 + 0x50) = fVar15;
    if (fVar15 <= 0.0) {
      *(undefined4 *)(param_1 + 0x50) =
           *(undefined4 *)(&UNK_00e69b30 + (ulong)(*(char *)(param_1 + 0x40) == '\0') * 4);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0cd0,0);
    uVar1 = _UNK_00e6a860;
    uVar7 = _UNK_00e6a2f0;
                    /* try { // try from 022e2cc4 to 023e2cc7 has its CatchHandler @ 022e3ad0 */
    bVar5 = *(char *)(param_1 + 0x40) == '\0';
    *(undefined4 *)(param_1 + 0x54) = 0x3ea8f5c3;
    *(ulong *)(param_1 + 0x58) =
         uVar7 ^ (uVar7 ^ uVar1) &
                 CONCAT44(-(uint)((int)((uint)bVar5 << 0x1f) < 0),
                          -(uint)((int)((uint)bVar5 << 0x1f) < 0));
    uVar16 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(undefined4 *)(param_1 + 0x60) = uVar16;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x66) = 0;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_022e30c0;
    *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x10) = 0;
  }
  puVar4 = PTR_DAT_04cae9a8;
  if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
  if ((uVar7 & 1) == 0) goto LAB_022e3048;
  fVar15 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (*(float *)(param_1 + 0x50) <= fVar15 - *(float *)(param_1 + 0x60)) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_022e30c0;
    if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0') goto LAB_022e3048;
  }
  fVar15 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  fVar15 = fVar15 - *(float *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 100) == '\0') && (*(float *)(param_1 + 0x54) <= fVar15)) {
    *(undefined1 *)(param_1 + 100) = 1;
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = 0;
LAB_022e2efc:
      Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar6,uVar10);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0d08,0);
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_04cb0c48;
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
      if (lVar8 == 0) goto LAB_022e30c0;
      uVar6 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0c48,0);
                    /* try { // try from 022e2e10 to 023e2e13 has its CatchHandler @ 022e3ab8 */
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      uVar6 = 0;
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 022e2e50 to 023e2e5f has its CatchHandler @ 022e3aac */
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
                    /* try { // try from 022e2e70 to 023e2e77 has its CatchHandler @ 022e3ad8 */
        if ((lVar8 == 0) ||
           (lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar3,0), lVar8 == 0))
        goto LAB_022e30c0;
        uVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar8,*(undefined8 *)PTR_DAT_04cada30);
      }
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022e2ea4 to 023e2f37 has its CatchHandler @ 022e3ad4 */
      fVar17 = (float)Dino_BusSand_App_UI_CommerceUi__Play_22a8904
                                (uVar6,*(undefined8 *)PTR_DAT_04cb0cd8,0);
      if (fVar17 <= 0.0) {
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = 1;
        goto LAB_022e2efc;
      }
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    uVar6 = Dino_BusSand_App_UI_StreakRateHallBar__DelayedSfx_21e19bc
                      (_UNK_00e20170,*(undefined8 *)PTR_DAT_04cb0ce8);
    if (lVar8 == 0) goto LAB_022e30c0;
    Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar8,uVar6,0);
  }
  if ((*(char *)(param_1 + 0x65) == '\0') && (*(float *)(param_1 + 0x58) <= fVar15)) {
    lVar8 = *(long *)puVar4;
                    /* try { // try from 022e2f64 to 023e2f6b has its CatchHandler @ 022e3ad8 */
    *(undefined1 *)(param_1 + 0x65) = 1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar9 = *(long *)(param_1 + 0x38);
    if (lVar9 == 0) {
LAB_022e30c0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar14 = *(long *)(lVar9 + 0x18);
    lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar14 == 0) {
      lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar14,lVar9,*(undefined8 *)PTR_DAT_04cb0cb8,0);
      *(long *)(lVar9 + 0x18) = lVar14;
      thunk_FUN_02134474((long *)(lVar9 + 0x18),lVar14);
      lVar8 = *(long *)puVar4;
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_UI_StreakRateHallBar__MoveSlider_21e1a60(uVar6,lVar14);
    if (lVar12 == 0) goto LAB_022e30c0;
                    /* try { // try from 022e3000 to 023e311b has its CatchHandler @ 022e3ab8 */
    Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar12,uVar6,0);
  }
  if ((*(char *)(param_1 + 0x66) == '\0') && (*(float *)(param_1 + 0x5c) <= fVar15)) {
    lVar8 = *(long *)puVar4;
    *(undefined1 *)(param_1 + 0x66) = 1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_StreakRateHallBar__HideGetPanel_21e0d90();
  }
  if (fVar15 <= *(float *)(param_1 + 0x50) + 8.0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_022e3048:
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x28) = 0;
  uVar7 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_StreakRateHallBar__HideGetPanel_21e0d90();
    return 0;
  }
  return 0;
}

