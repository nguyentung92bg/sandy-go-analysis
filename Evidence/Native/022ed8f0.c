/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClickTrophy
void Dino_BusSand_App_UI_YachtRacingPanel__OnClickTrophy (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClickTrophy
   void Dino_BusSand_App_UI_YachtRacingPanel__OnClickTrophy (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_YachtRacingPanel__OnClickTrophy_21ed8f0(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined1 auVar13 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 uVar15;
  undefined1 auVar14 [16];
  undefined8 extraout_var_02;
  uint uVar16;
  
  puVar2 = PTR_DAT_04cb10f0;
                    /* catch() { ... } // from try @ 022ed86c with catch @ 022ed904 */
                    /* catch() { ... } // from try @ 022ed838 with catch @ 022ed908 */
                    /* catch() { ... } // from try @ 022ed800 with catch @ 022ed90c */
  if ((bRam0000000004f9bc00 & 1) == 0) {
                    /* catch() { ... } // from try @ 022ed7a8 with catch @ 022ed910 */
    FUN_02132f7c(PTR_DAT_04cb10f0);
                    /* catch() { ... } // from try @ 022ed760 with catch @ 022ed920 */
    bRam0000000004f9bc00 = 1;
  }
                    /* catch() { ... } // from try @ 022ed714 with catch @ 022ed924 */
  lVar7 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 022ed73c with catch @ 022ed928 */
  uVar9 = *(undefined8 *)(param_1 + 0x88);
                    /* catch() { ... } // from try @ 022ed6f0 with catch @ 022ed92c */
                    /* catch() { ... } // from try @ 022ed6cc with catch @ 022ed930 */
  if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022ed6a8 with catch @ 022ed934 */
    thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 022ed5d8 with catch @ 022ed938 */
    lVar7 = *(long *)puVar2;
  }
                    /* catch() { ... } // from try @ 022ed578 with catch @ 022ed93c */
                    /* catch() { ... } // from try @ 022ed554 with catch @ 022ed940 */
                    /* catch() { ... } // from try @ 022ed52c with catch @ 022ed944 */
                    /* catch() { ... } // from try @ 022ed508 with catch @ 022ed948 */
  uVar12 = **(uint **)(lVar7 + 0xb8);
  auVar13 = ZEXT416(uVar12);
  uVar16 = (*(uint **)(lVar7 + 0xb8))[1];
  if ((bRam0000000004f9bbff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1210);
    FUN_02132f7c(PTR_DAT_04cb1218);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    auVar13 = FUN_02132f7c(PTR_DAT_04cadde8);
    bRam0000000004f9bbff = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x58) == 0) {
    return auVar13;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  auVar13._8_8_ = extraout_var;
  auVar13._0_8_ = extraout_d0;
  if ((uVar3 & 1) != 0) {
    return auVar13;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
LAB_022ed65c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__StageRewardId_225525c
                    (*(long *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),0);
  auVar1._8_8_ = extraout_var_00;
  auVar1._0_8_ = extraout_d0_00;
  if ((int)uVar4 < 1) {
    return auVar1;
  }
  lVar7 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uVar4,0);
  plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
  uVar4 = System_Int32__ToString_482d750(param_1 + 0x48,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar4,0);
  lVar10 = *(long *)PTR_DAT_04ca9d18;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  uVar4 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(uVar4,**(undefined8 **)(lVar8 + 0xb8),0);
  lVar8 = System_String__Concat_46d2b84
                    (*(undefined8 *)PTR_DAT_04cb1210,uVar4,*(undefined8 *)PTR_DAT_04cadde8,0);
  if (plVar5 == (long *)0x0) goto LAB_022ed65c;
  if ((lVar8 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
    uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar5[4] = lVar8;
  thunk_FUN_02134474(plVar5 + 4,lVar8);
  uVar4 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cb1218,plVar5,0);
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 == 0) goto LAB_022ed65c;
  lVar10 = *(long *)puVar2;
  *(uint *)(lVar8 + 0x14) = uVar12;
  *(uint *)(lVar8 + 0x18) = uVar16;
  lVar8 = *(long *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar5);
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x60);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar8 == 0) goto LAB_022ed65c;
  if ((bRam0000000004f9bc27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1220);
    FUN_02132f7c(PTR_DAT_04cb1228);
    bRam0000000004f9bc27 = 1;
  }
  uVar11 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
  uVar11 = extraout_d0_01;
  uVar15 = extraout_var_01;
  if ((uVar3 & 1) != 0) {
LAB_022ed71c:
    auVar14._8_8_ = uVar15;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
  if ((*(long *)(lVar8 + 0x20) == 0) ||
     (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x20),0), lVar10 == 0
     )) {
LAB_022ed8ec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_GameObject__SetActive_43c1408(lVar10,1,0);
  uVar11 = *(undefined8 *)(lVar8 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar3 & 1) != 0) {
    uVar12 = System_String__IsNullOrEmpty_46d2084(uVar4,0);
    if ((*(long *)(lVar8 + 0x40) == 0) ||
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x40),0),
       lVar10 == 0)) goto LAB_022ed8ec;
    UnityEngine_GameObject__SetActive_43c1408(lVar10,(uVar12 ^ 1) & 1,0);
    if ((uVar12 & 1) == 0) {
      plVar6 = *(long **)(lVar8 + 0x40);
      if (plVar6 == (long *)0x0) goto LAB_022ed8ec;
      (**(code **)(*plVar6 + 0x518))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x520));
    }
  }
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cb1228,0);
    if ((*(long *)(lVar8 + 0x20) != 0) &&
       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x20),0), lVar7 != 0
       )) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      if (lVar8 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar13 = (*pcRam0000000004fa8430)(lVar8,0);
        return auVar13;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
    }
    goto LAB_022ed8ec;
  }
  Dino_BusSand_App_UI_YachtRacingRewardTips__SpawnItems_21f1e74(lVar8,lVar7);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
    if ((uVar3 & 1) != 0) {
      Dino_BusSand_App_UI_YachtRacingRewardTips__AdjustPosition_21f23d0(lVar8,plVar5,uVar9);
    }
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar11 = extraout_d0_02;
  uVar15 = extraout_var_02;
  if ((uVar3 & 1) == 0) goto LAB_022ed71c;
  lVar7 = *(long *)(lVar8 + 0x58);
  uVar9 = *(undefined8 *)PTR_DAT_04cb1220;
  if ((bRam0000000004f9bc56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8,uVar9,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc56 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084(uVar9,0);
    if ((uVar3 & 1) != 0) {
      if (lVar7 == 0) goto LAB_022f8d88;
      uVar9 = UnityEngine_Animation__get_clip_43341a8(lVar7,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      uVar9 = 0;
      if ((uVar3 & 1) != 0) {
        lVar8 = UnityEngine_Animation__get_clip_43341a8(lVar7,0);
        if (lVar8 == 0) goto LAB_022f8d88;
        uVar9 = UnityEngine_Object__get_name_43c71a4(lVar8,0);
      }
    }
    uVar3 = System_String__IsNullOrEmpty_46d2084(uVar9,0);
    if ((uVar3 & 1) == 0) {
      if (lVar7 == 0) {
LAB_022f8d88:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = UnityEngine_Animation__get_Item_4334ee8(lVar7,uVar9,0);
      uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c2af & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,uVar9,0);
          bRam0000000004f9c2af = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = System_String__IsNullOrEmpty_46d2084(uVar9,0), (uVar3 & 1) == 0)) {
          if (lVar7 != 0) {
            lVar8 = UnityEngine_Animation__get_Item_4334ee8(lVar7,uVar9,0);
            uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar8,0,0);
            if ((uVar3 & 1) != 0) goto LAB_023a899c;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar7,1,0);
            UnityEngine_Animation__Stop_4334660(lVar7,0);
            if (lVar8 != 0) {
              UnityEngine_AnimationState__set_time_43370c0(0,lVar8,0);
              UnityEngine_Animation__Play_4335164(lVar7,uVar9,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(0,0);
              }
              lVar7 = *(long *)(lVar8 + 0x10);
              if (lVar7 != 0) {
                if (pcRam0000000004fa4d58 == (code *)0x0) {
                  pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
                }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar13 = (*pcRam0000000004fa4d58)(lVar7);
                return auVar13;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
LAB_023a899c:
        return ZEXT816(0);
      }
    }
  }
  return ZEXT816(0);
}

