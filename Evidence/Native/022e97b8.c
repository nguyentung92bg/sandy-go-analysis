/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnStateChanged
void Dino_BusSand_App_UI_YachtRacingHallButton__OnStateChanged (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnStateChanged
   void Dino_BusSand_App_UI_YachtRacingHallButton__OnStateChanged
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__OnStateChanged_21e97b8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uStack_34;
  
  uVar9 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704();
  if ((uVar9 & 1) == 0) {
    if ((bRam0000000004f9bbe1 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04cb0f38);
      FUN_02132f7c(PTR_DAT_04cb0f48);
      bRam0000000004f9bbe1 = 1;
    }
    puVar2 = PTR_DAT_04caa458;
    if ((*(char *)(param_1 + 0x8f) != '\0') && (*(long *)(param_1 + 0x28) != 0)) {
      plVar10 = (long *)(*(long *)(param_1 + 0x28) + 0x30);
      lVar6 = *plVar10;
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb0f48,0);
      plVar5 = (long *)System_Delegate__Remove_4872510(lVar6,uVar7,0);
      if (plVar5 == (long *)0x0) {
        *plVar10 = 0;
      }
      else {
        lVar6 = *(long *)puVar2;
        if ((*plVar5 != lVar6) || (*plVar10 = (long)plVar5, *plVar5 != lVar6)) goto LAB_022e8b40;
      }
      thunk_FUN_02134474(plVar10,plVar5);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar10 = (long *)(*(long *)(param_1 + 0x28) + 0x38);
      lVar6 = *plVar10;
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb0f38,0);
      plVar5 = (long *)System_Delegate__Remove_4872510(lVar6,uVar7,0);
      if (plVar5 == (long *)0x0) {
        *plVar10 = 0;
      }
      else {
        lVar6 = *(long *)puVar2;
        if ((*plVar5 != lVar6) || (*plVar10 = (long)plVar5, *plVar5 != lVar6)) {
LAB_022e8b40:
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar5);
        }
      }
      thunk_FUN_02134474(plVar10,plVar5);
    }
    *(undefined2 *)(param_1 + 0x8e) = 0;
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return;
  }
  if ((bRam0000000004f9bbe5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cadcf8);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    bRam0000000004f9bbe5 = 1;
  }
  uStack_34 = 0;
  uVar9 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(param_1);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x8c) != '\0') {
    *(undefined1 *)(param_1 + 0x8d) = 1;
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
  uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar9 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
    uVar9 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8(*(long *)(param_1 + 0x28),0)
    ;
    if ((uVar9 & 1) == 0) goto LAB_022e92e4;
    goto code_r0x022e908c;
  }
LAB_022e92e4:
  Dino_BusSand_App_UI_YachtRacingHallButton__HideAll_21e98f4(param_1);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < 5) {
    if (iVar1 != 0) {
      if (iVar1 != 2) {
        if (iVar1 == 3) goto LAB_022e9330;
        goto code_r0x022e908c;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_022e9468;
    }
    uVar9 = Dino_BusSand_App_UI_YachtRacingHallButton__ShouldShowLocked_21e9970();
    if ((uVar9 & 1) == 0) {
code_r0x022e908c:
      lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar6 == 0) {
LAB_022e91e8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
      if ((uVar3 & 1) != 0) {
        lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
        if (lVar6 == 0) goto LAB_022e91e8;
        UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
      }
      return;
    }
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x48),1,0);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    uVar7 = 0;
    if ((uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_022e9644;
      uVar7 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cadcf0,0);
    }
    lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5,0);
    uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    if (lVar6 == 0) goto LAB_022e9644;
    FUN_01e7704c(lVar6,uVar11);
    FUN_01e76ff0(lVar6,0,uVar11);
    uVar11 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cadcf8,lVar6,0);
    Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar7,uVar11,0);
  }
  else {
    if (iVar1 == 5) {
LAB_022e9358:
      uVar7 = *(undefined8 *)(param_1 + 0x50);
    }
    else if (iVar1 == 6) {
LAB_022e9330:
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
      uVar9 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc
                        (*(long *)(param_1 + 0x28),0);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_022e9644;
        uVar9 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8
                          (*(long *)(param_1 + 0x28),0);
        if ((uVar9 & 1) != 0) goto LAB_022e9358;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      if (iVar1 != 7) goto code_r0x022e908c;
      uVar7 = *(undefined8 *)(param_1 + 0x58);
    }
LAB_022e9468:
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(uVar7,1,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar9 = Dino_BusSand_App_Meta_YachtRacingCore__get_IsSettlementState_22555a4
                      (*(long *)(param_1 + 0x28),0);
    if (((uVar9 & 1) == 0) && ((*(uint *)(param_1 + 0x88) | 4) != 7)) {
LAB_022e9624:
      Dino_BusSand_App_UI_YachtRacingHallButton__SetVisible_21e908c(param_1,1);
      return;
    }
    Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x68),1,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      Dino_BusSand_App_Meta_YachtRacingCore__get_PlayerRanking_22554a8(*(long *)(param_1 + 0x28),0);
      uVar11 = *(undefined8 *)(param_1 + 0x68);
      uVar7 = System_Int32__ToString_482d750(&stack0xffffffffffffffdc,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar7,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x60);
        uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454
                              (*(long *)(param_1 + 0x28),0);
        uVar7 = System_Int32__ToString_482d750(&uStack_34,0);
        uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar7,0);
        lVar12 = *(long *)PTR_DAT_04ca9d18;
        lVar6 = *(long *)(lVar12 + 0x38);
        if (lVar6 == 0) {
          FUN_0216b4cc(lVar12);
          lVar6 = *(long *)(lVar12 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        uVar7 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                          (uVar7,**(undefined8 **)(lVar6 + 0xb8),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar7,0);
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 100) < 0) {
            Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentWinCount_225546c(lVar6,0);
          }
          uVar11 = *(undefined8 *)(param_1 + 0x80);
          uVar7 = System_Int32__ToString_482d750(&stack0xffffffffffffffd8,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            uStack_34 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                                  (*(long *)(param_1 + 0x28),0xffffffff,0);
            uVar8 = System_Int32__ToString_482d750(&uStack_34,0);
            uVar7 = System_String__Concat_46d2b84(uVar7,*(undefined8 *)PTR_DAT_04cabd10,uVar8,0);
            Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar11,uVar7,0);
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

