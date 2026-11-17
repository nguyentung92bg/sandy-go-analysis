/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshEnd
void Dino_BusSand_App_UI_PassportPanel__RefreshEnd (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshEnd
   void Dino_BusSand_App_UI_PassportPanel__RefreshEnd (Dino_BusSand_App_UI_PassportPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__RefreshEnd_21d62b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  int iStack_64;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf0c0);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf08);
    FUN_02132f7c(PTR_DAT_04cadc78);
    FUN_02132f7c(PTR_DAT_04cb0788);
    FUN_02132f7c(PTR_DAT_04cb0790);
    FUN_02132f7c(PTR_DAT_04cb0798);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb07a0);
    FUN_02132f7c(PTR_DAT_04cb07a8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb07b0);
                    /* try { // try from 022d63a0 to 023d644b has its CatchHandler @ 022d5e0c */
    FUN_02132f7c(PTR_DAT_04cb07b8);
    bRam0000000004f9bb5b = 1;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  iStack_64 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar13 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_04cadc80,0);
                    /* catch() { ... } // from try @ 022d5e98 with catch @ 022d6404 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022d620c with catch @ 022d6408 */
                    /* catch() { ... } // from try @ 022d5fa8 with catch @ 022d640c */
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
                    /* catch() { ... } // from try @ 022d5f08 with catch @ 022d6410
                       catch() { ... } // from try @ 022d6044 with catch @ 022d6410 */
    uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
    if ((uVar12 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar7 = Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport_2246400
                          (*(long *)(param_1 + 0x40),0), lVar13 != 0)) {
      uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cb07a8,0);
                    /* try { // try from 022d6454 to 023d64df has its CatchHandler @ 022d6454
                       catch() { ... } // from try @ 022d6454 with catch @ 022d6454
                       catch() { ... } // from try @ 022d69e8 with catch @ 022d6454 */
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar15,(uVar7 ^ 0xffffffff) & 1,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar8 = Dino_BusSand_App_Meta_PassportFeature__IsReachBonusBank_2246e10
                          (*(long *)(param_1 + 0x40),0);
        puVar4 = PTR_DAT_04cadf08;
        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cadf08,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar15,(uVar8 ^ 0xffffffff) & 1,0);
        puVar6 = PTR_DAT_04cb0788;
        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cb0788,0);
                    /* try { // try from 022d64e0 to 023d64f3 has its CatchHandler @ 022d6a4c */
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar15,uVar8 & 1,0);
        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cadc78,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar15,uVar8 & 1,0);
        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)puVar4,0);
        puVar2 = (undefined8 *)PTR_DAT_04cb07a0;
        puVar4 = PTR_DAT_04ca9d18;
        lVar18 = *(long *)PTR_DAT_04ca9d18;
        puVar1 = (undefined8 *)PTR_DAT_04cb07a0;
        if ((uVar7 & 1) == 0) {
          puVar1 = (undefined8 *)PTR_DAT_04cb07b0;
        }
        uVar17 = *puVar1;
        lVar14 = *(long *)(lVar18 + 0x38);
        if (lVar14 == 0) {
                    /* try { // try from 022d6550 to 023d6597 has its CatchHandler @ 022d6a58 */
          FUN_0216b4cc(lVar18);
          lVar14 = *(long *)(lVar18 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_0216b470();
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
        if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_0216b470();
        }
        uVar19 = **(undefined8 **)(lVar18 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
        }
        uVar17 = Dino_BusSand_App_Lang__Get_215f9c0(uVar17,uVar19,0);
        puVar5 = PTR_DAT_04caec68;
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
        }
                    /* try { // try from 022d65f0 to 023d6663 has its CatchHandler @ 022d6a54 */
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar15,uVar17,0);
        uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)puVar6,0);
        lVar18 = *(long *)puVar4;
        if ((uVar7 & 1) == 0) {
          puVar2 = (undefined8 *)PTR_DAT_04cb0798;
        }
        lVar14 = *(long *)(lVar18 + 0x38);
        uVar17 = *puVar2;
        if (lVar14 == 0) {
          FUN_0216b4cc(lVar18);
          lVar14 = *(long *)(lVar18 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_0216b470();
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
        if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_0216b470();
        }
        uVar19 = **(undefined8 **)(lVar18 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                    /* try { // try from 022d668c to 023d681f has its CatchHandler @ 022d6a58 */
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
        }
        uVar17 = Dino_BusSand_App_Lang__Get_215f9c0(uVar17,uVar19,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar5);
        }
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar15,uVar17,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          iVar9 = Dino_BusSand_App_Meta_PassportFeature__get_BankStageCount_2246e78
                            (*(long *)(param_1 + 0x40),0);
          if (*(long *)(param_1 + 0x40) != 0) {
            iVar10 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50
                               (*(long *)(param_1 + 0x40),0);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              iVar11 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankCoin_22455c8
                                 (*(long *)(param_1 + 0x40),0);
              uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cadc78,0)
              ;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
              plVar16 = (long *)0x0;
              if ((uVar12 & 1) != 0) {
                lVar18 = UnityEngine_Transform__Find_43d4bec
                                   (lVar13,*(undefined8 *)PTR_DAT_04cadc78,0);
                if (lVar18 == 0) goto LAB_022d68dc;
                plVar16 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                            (lVar18,*(undefined8 *)PTR_DAT_04caf0c0);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar12 = UnityEngine_Object__op_Inequality_43c8dec(plVar16,0,0);
              if ((uVar12 & 1) != 0) {
                if (plVar16 == (long *)0x0) goto LAB_022d68dc;
                UnityEngine_UI_Slider__set_minValue_4695bc8(0,plVar16,0);
                UnityEngine_UI_Slider__set_maxValue_4695c60(0x3f800000,plVar16,0);
                (**(code **)(*plVar16 + 0x428))
                          ((float)iVar9 / (float)iVar10,plVar16,*(undefined8 *)(*plVar16 + 0x430));
              }
              uVar15 = UnityEngine_Transform__Find_43d4bec(lVar13,*(undefined8 *)PTR_DAT_04cb0790,0)
              ;
              iStack_64 = iVar11 * iVar9;
              uVar17 = System_Int32__ToString_482d750(&iStack_64,0);
              iStack_64 = iVar11 * iVar10;
              uVar19 = System_Int32__ToString_482d750(&iStack_64,0);
                    /* try { // try from 022d6854 to 023d69e7 has its CatchHandler @ 022d6a50 */
              uVar17 = System_String__Concat_46d2b84
                                 (uVar17,*(undefined8 *)PTR_DAT_04cabd10,uVar19,0);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar5);
              }
              Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar15,uVar17,0);
              if (*(char *)(param_1 + 0x4a) != '\0') {
                return;
              }
              lVar13 = *(long *)puVar5;
              uVar15 = *(undefined8 *)(param_1 + 0x68);
              *(undefined1 *)(param_1 + 0x4a) = 1;
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar15,*(undefined8 *)PTR_DAT_04cb07b8,0)
              ;
              return;
            }
          }
        }
      }
    }
  }
LAB_022d68dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

