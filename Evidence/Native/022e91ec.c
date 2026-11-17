/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$RefreshState
void Dino_BusSand_App_UI_YachtRacingHallButton__RefreshState (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022e90e8) */
/* WARNING: Removing unreachable block (ram,0x022e90f8) */
/* WARNING: Removing unreachable block (ram,0x022e9118) */
/* WARNING: Removing unreachable block (ram,0x022e912c) */
/* WARNING: Removing unreachable block (ram,0x022e916c) */
/* WARNING: Removing unreachable block (ram,0x022e9170) */
/* WARNING: Removing unreachable block (ram,0x022e9174) */
/* WARNING: Removing unreachable block (ram,0x022e9190) */
/* WARNING: Removing unreachable block (ram,0x022e91a4) */
/* WARNING: Removing unreachable block (ram,0x022e91a8) */
/* WARNING: Removing unreachable block (ram,0x044d1c04) */
/* WARNING: Removing unreachable block (ram,0x044d1c18) */
/* WARNING: Removing unreachable block (ram,0x044d1c1c) */
/* WARNING: Removing unreachable block (ram,0x044d1c24) */
/* WARNING: Removing unreachable block (ram,0x044d1c30) */
/* WARNING: Removing unreachable block (ram,0x044d1c44) */
/* WARNING: Removing unreachable block (ram,0x044d1c64) */
/* WARNING: Removing unreachable block (ram,0x044d1c60) */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$RefreshState
   void Dino_BusSand_App_UI_YachtRacingHallButton__RefreshState
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__RefreshState_21e91ec(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9bbe5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cadcf8);
                    /* try { // try from 022e9254 to 023e925b has its CatchHandler @ 022e92b8 */
                    /* try { // try from 022e925c to 023e92e7 has its CatchHandler @ 022e91bc */
    FUN_02132f7c(PTR_DAT_04cb0f98);
    bRam0000000004f9bbe5 = 1;
  }
  uStack_34 = 0;
  uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(param_1);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x8c) != '\0') {
    *(undefined1 *)(param_1 + 0x8d) = 1;
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
  uVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
  if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 022e9254 with catch @ 022e92b8 */
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
    uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8(*(long *)(param_1 + 0x28),0)
    ;
    if ((uVar5 & 1) == 0) goto LAB_022e92e4;
    goto code_r0x022e908c;
  }
LAB_022e92e4:
                    /* try { // try from 022e92e8 to 023e937f has its CatchHandler @ 022e92e8
                       catch() { ... } // from try @ 022e92e8 with catch @ 022e92e8
                       catch() { ... } // from try @ 022e9388 with catch @ 022e92e8 */
  Dino_BusSand_App_UI_YachtRacingHallButton__HideAll_21e98f4(param_1);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < 5) {
    if (iVar1 != 0) {
      if (iVar1 != 2) {
        if (iVar1 == 3) goto LAB_022e9330;
        goto code_r0x022e908c;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_022e9468;
    }
    uVar5 = Dino_BusSand_App_UI_YachtRacingHallButton__ShouldShowLocked_21e9970();
    if ((uVar5 & 1) == 0) {
code_r0x022e908c:
      lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar4 == 0) {
LAB_022e91e8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
        if (lVar4 == 0) goto LAB_022e91e8;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
      }
      return;
    }
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x48),1,0);
                    /* try { // try from 022e9380 to 023e9387 has its CatchHandler @ 022e93e4 */
                    /* try { // try from 022e9388 to 023e9413 has its CatchHandler @ 022e92e8 */
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_022e9644;
      uVar6 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
                    /* catch() { ... } // from try @ 022e9380 with catch @ 022e93e4 */
    lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5,0);
    uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
                    /* try { // try from 022e9414 to 023e94ab has its CatchHandler @ 022e9414
                       catch() { ... } // from try @ 022e9414 with catch @ 022e9414
                       catch() { ... } // from try @ 022e94b4 with catch @ 022e9414 */
    if (lVar4 == 0) goto LAB_022e9644;
    FUN_01e7704c(lVar4,uVar8);
    FUN_01e76ff0(lVar4,0,uVar8);
    uVar8 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cadcf8,lVar4,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar6,uVar8,0);
  }
  else {
    if (iVar1 == 5) {
LAB_022e9358:
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    else if (iVar1 == 6) {
LAB_022e9330:
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
      uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc
                        (*(long *)(param_1 + 0x28),0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
        uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8
                          (*(long *)(param_1 + 0x28),0);
        if ((uVar5 & 1) != 0) goto LAB_022e9358;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      if (iVar1 != 7) goto code_r0x022e908c;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
    }
LAB_022e9468:
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar6,1,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__get_IsSettlementState_22555a4
                      (*(long *)(param_1 + 0x28),0);
    if (((uVar5 & 1) == 0) && ((*(uint *)(param_1 + 0x88) | 4) != 7)) {
LAB_022e9624:
      Dino_BusSand_App_UI_YachtRacingHallButton__SetVisible_21e908c(param_1,1);
                    /* catch() { ... } // from try @ 022e95d8 with catch @ 022e963c */
      return;
    }
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x68),1,0);
                    /* try { // try from 022e94ac to 023e94b3 has its CatchHandler @ 022e9510 */
    if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 022e94b4 to 023e953f has its CatchHandler @ 022e9414 */
      Dino_BusSand_App_Meta_YachtRacingCore__get_PlayerRanking_22554a8(*(long *)(param_1 + 0x28),0);
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      uVar6 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar8,uVar6,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454
                              (*(long *)(param_1 + 0x28),0);
        uVar6 = System_Int32__ToString_482d750(&uStack_34,0);
                    /* catch() { ... } // from try @ 022e94ac with catch @ 022e9510 */
        uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar6,0);
        lVar9 = *(long *)PTR_DAT_04ca9d18;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_0216b4cc(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
                    /* try { // try from 022e9540 to 023e95d7 has its CatchHandler @ 022e9540
                       catch() { ... } // from try @ 022e9540 with catch @ 022e9540
                       catch() { ... } // from try @ 022e95e0 with catch @ 022e9540 */
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        uVar6 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                          (uVar6,**(undefined8 **)(lVar4 + 0xb8),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar8,uVar6,0);
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 100) < 0) {
            Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(lVar4,0);
          }
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          uVar6 = System_Int32__ToString_482d750(&stack0xffffffffffffffd8,0);
          if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 022e95d8 to 023e95df has its CatchHandler @ 022e963c */
                    /* try { // try from 022e95e0 to 023e966b has its CatchHandler @ 022e9540 */
            uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                                  (*(long *)(param_1 + 0x28),0xffffffff,0);
            uVar7 = System_Int32__ToString_482d750(&uStack_34,0);
            uVar6 = System_String__Concat_46d2b84(uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
            Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar8,uVar6,0);
            goto LAB_022e9624;
          }
        }
      }
    }
  }
LAB_022e9644:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

