/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$ShowRewardTips
void Dino_BusSand_App_UI_YachtRacingPanel__ShowRewardTips (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, UnityEngine_RectTransform_o* clickTarget, UnityEngine_Vector2_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$ShowRewardTips
   void Dino_BusSand_App_UI_YachtRacingPanel__ShowRewardTips
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, UnityEngine_RectTransform_o* clickTarget,
   UnityEngine_Vector2_o offset, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_YachtRacingPanel__ShowRewardTips_21ed38c
          (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 uVar15;
  undefined1 auVar13 [16];
  undefined8 extraout_d0_02;
  undefined8 extraout_var_02;
  undefined1 auVar14 [16];
  
  uVar1 = param_1._0_4_;
  if ((bRam0000000004f9bbff & 1) == 0) {
                    /* catch() { ... } // from try @ 022ed35c with catch @ 022ed3c0 */
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
                    /* catch() { ... } // from try @ 022ed4b4 with catch @ 022ed3f0
                       catch() { ... } // from try @ 022ed8ec with catch @ 022ed3f0
                       catch() { ... } // from try @ 022ed98c with catch @ 022ed3f0
                       catch() { ... } // from try @ 022ed9e4 with catch @ 022ed3f0 */
    FUN_02132f7c(PTR_DAT_04cb1210);
    FUN_02132f7c(PTR_DAT_04cb1218);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    param_1 = FUN_02132f7c(PTR_DAT_04cadde8);
    bRam0000000004f9bbff = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_3 + 0x58) == 0) {
                    /* try { // try from 022ed5f0 to 023ed6a7 has its CatchHandler @ 022ed970 */
    return param_1;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  auVar14._8_8_ = extraout_var;
  auVar14._0_8_ = extraout_d0;
  if ((uVar5 & 1) != 0) {
    return auVar14;
  }
  if (*(long *)(param_3 + 0x40) == 0) {
LAB_022ed65c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__StageRewardId_225525c
                    (*(long *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x48),0);
  auVar2._8_8_ = extraout_var_00;
  auVar2._0_8_ = extraout_d0_00;
  if ((int)uVar6 < 1) {
    return auVar2;
  }
  lVar7 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uVar6,0);
                    /* try { // try from 022ed484 to 023ed497 has its CatchHandler @ 022ed960 */
  plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
  uVar6 = System_Int32__ToString_482d750(param_3 + 0x48,0);
                    /* try { // try from 022ed4ac to 023ed4b3 has its CatchHandler @ 022ed958 */
                    /* try { // try from 022ed4b4 to 023ed4ff has its CatchHandler @ 022ed3f0 */
  uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar6,0);
  lVar11 = *(long *)PTR_DAT_04ca9d18;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
                    /* try { // try from 022ed500 to 023ed507 has its CatchHandler @ 022ed970 */
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ed508 to 023ed517 has its CatchHandler @ 022ed948 */
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                    /* try { // try from 022ed518 to 023ed52b has its CatchHandler @ 022ed970 */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
                    /* try { // try from 022ed52c to 023ed53b has its CatchHandler @ 022ed944 */
  uVar6 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(uVar6,**(undefined8 **)(lVar10 + 0xb8),0);
                    /* try { // try from 022ed53c to 023ed553 has its CatchHandler @ 022ed970 */
                    /* try { // try from 022ed554 to 023ed563 has its CatchHandler @ 022ed940 */
  lVar10 = System_String__Concat_46d2b84
                     (*(undefined8 *)PTR_DAT_04cb1210,uVar6,*(undefined8 *)PTR_DAT_04cadde8,0);
  if (plVar8 == (long *)0x0) goto LAB_022ed65c;
                    /* try { // try from 022ed564 to 023ed577 has its CatchHandler @ 022ed970 */
                    /* try { // try from 022ed578 to 023ed587 has its CatchHandler @ 022ed93c */
  if ((lVar10 != 0) &&
     (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* try { // try from 022ed588 to 023ed5c3 has its CatchHandler @ 022ed970 */
  plVar8[4] = lVar10;
  thunk_FUN_02134474(plVar8 + 4,lVar10);
  uVar6 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cb1218,plVar8,0);
  lVar10 = *(long *)(param_3 + 0x58);
  if (lVar10 == 0) goto LAB_022ed65c;
  lVar11 = *(long *)puVar3;
  *(undefined4 *)(lVar10 + 0x14) = uVar1;
  *(undefined4 *)(lVar10 + 0x18) = param_2;
  lVar10 = *(long *)(param_3 + 0x58);
  uVar12 = *(undefined8 *)(param_3 + 0x60);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ed5d8 to 023ed5df has its CatchHandler @ 022ed938 */
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar5 & 1) == 0) {
    plVar8 = (long *)UnityEngine_Component__get_transform_43bcd18(param_3,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar8);
    }
  }
  else {
    plVar8 = *(long **)(param_3 + 0x60);
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (lVar10 == 0) goto LAB_022ed65c;
  if ((bRam0000000004f9bc27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1220);
    FUN_02132f7c(PTR_DAT_04cb1228);
    bRam0000000004f9bc27 = 1;
  }
  uVar12 = *(undefined8 *)(lVar10 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  uVar12 = extraout_d0_01;
  uVar15 = extraout_var_01;
  if ((uVar5 & 1) != 0) {
LAB_022ed71c:
    auVar13._8_8_ = uVar15;
    auVar13._0_8_ = uVar12;
    return auVar13;
  }
  if ((*(long *)(lVar10 + 0x20) == 0) ||
     (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x20),0),
     lVar11 == 0)) {
LAB_022ed8ec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_GameObject__SetActive_43c1408(lVar11,1,0);
  uVar12 = *(undefined8 *)(lVar10 + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    uVar4 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
    if ((*(long *)(lVar10 + 0x40) == 0) ||
       (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x40),0),
       lVar11 == 0)) goto LAB_022ed8ec;
    UnityEngine_GameObject__SetActive_43c1408(lVar11,(uVar4 ^ 1) & 1,0);
    if ((uVar4 & 1) == 0) {
      plVar9 = *(long **)(lVar10 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_022ed8ec;
      (**(code **)(*plVar9 + 0x518))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x520));
    }
  }
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cb1228,0);
    if ((*(long *)(lVar10 + 0x20) != 0) &&
       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar10 + 0x20),0),
       lVar7 != 0)) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *(long *)(lVar7 + 0x10);
      if (lVar10 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar14 = (*pcRam0000000004fa8430)(lVar10,0);
        return auVar14;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
    }
    goto LAB_022ed8ec;
  }
  Dino_BusSand_App_UI_YachtRacingRewardTips__SpawnItems_21f1e74(lVar10,lVar7);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_4,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
    if ((uVar5 & 1) != 0) {
      Dino_BusSand_App_UI_YachtRacingRewardTips__AdjustPosition_21f23d0(lVar10,plVar8,param_4);
    }
  }
  uVar6 = *(undefined8 *)(lVar10 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  puVar3 = PTR_DAT_04ca9ae8;
  uVar12 = extraout_d0_02;
  uVar15 = extraout_var_02;
  if ((uVar5 & 1) == 0) goto LAB_022ed71c;
  lVar7 = *(long *)(lVar10 + 0x58);
  uVar6 = *(undefined8 *)PTR_DAT_04cb1220;
  if ((bRam0000000004f9bc56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8,uVar6,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc56 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
    if ((uVar5 & 1) != 0) {
      if (lVar7 == 0) goto LAB_022f8d88;
      uVar6 = UnityEngine_Animation__get_clip_43341a8(lVar7,0);
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      uVar6 = 0;
      if ((uVar5 & 1) != 0) {
        lVar10 = UnityEngine_Animation__get_clip_43341a8(lVar7,0);
        if (lVar10 == 0) goto LAB_022f8d88;
        uVar6 = UnityEngine_Object__get_name_43c71a4(lVar10,0);
      }
    }
    uVar5 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
    if ((uVar5 & 1) == 0) {
      if (lVar7 == 0) {
LAB_022f8d88:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar12 = UnityEngine_Animation__get_Item_4334ee8(lVar7,uVar6,0);
      uVar5 = UnityEngine_TrackedReference__op_Equality_43c6a1c(uVar12,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar3 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c2af & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,uVar6,0);
          bRam0000000004f9c2af = 1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = System_String__IsNullOrEmpty_46d2084(uVar6,0), (uVar5 & 1) == 0)) {
          if (lVar7 != 0) {
            lVar10 = UnityEngine_Animation__get_Item_4334ee8(lVar7,uVar6,0);
            uVar5 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar10,0,0);
            if ((uVar5 & 1) != 0) goto LAB_023a899c;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar7,1,0);
            UnityEngine_Animation__Stop_4334660(lVar7,0);
            if (lVar10 != 0) {
              UnityEngine_AnimationState__set_time_43370c0(0,lVar10,0);
              UnityEngine_Animation__Play_4335164(lVar7,uVar6,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(0,0);
              }
              lVar7 = *(long *)(lVar10 + 0x10);
              if (lVar7 != 0) {
                if (pcRam0000000004fa4d58 == (code *)0x0) {
                  pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
                }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar14 = (*pcRam0000000004fa4d58)(lVar7);
                return auVar14;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
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

