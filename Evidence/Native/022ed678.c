/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$SetData
void Dino_BusSand_App_UI_YachtRacingRewardTips__SetData (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, UnityEngine_RectTransform_o* clickTarget, UnityEngine_RectTransform_o* parentRect, System_Collections_Generic_List_ActivityRewardEntry__o* rewards, System_String_o* title, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$SetData
   void Dino_BusSand_App_UI_YachtRacingRewardTips__SetData
   (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, UnityEngine_RectTransform_o* clickTarget,
   UnityEngine_RectTransform_o* parentRect, System_Collections_Generic_List_ActivityRewardEntry__o*
   rewards, System_String_o* title, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_YachtRacingRewardTips__SetData_21ed678
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022ed6a8 to 023ed6b7 has its CatchHandler @ 022ed934 */
  if ((bRam0000000004f9bc27 & 1) == 0) {
                    /* try { // try from 022ed6b8 to 023ed6cb has its CatchHandler @ 022ed970 */
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cae8a8);
                    /* try { // try from 022ed6cc to 023ed6db has its CatchHandler @ 022ed930 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022ed6dc to 023ed6ef has its CatchHandler @ 022ed970 */
    FUN_02132f7c(PTR_DAT_04cb1220);
    FUN_02132f7c(PTR_DAT_04cb1228);
                    /* try { // try from 022ed6f0 to 023ed6ff has its CatchHandler @ 022ed92c */
    bRam0000000004f9bc27 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 022ed700 to 023ed713 has its CatchHandler @ 022ed970 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ed714 to 023ed723 has its CatchHandler @ 022ed924 */
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  uVar8 = extraout_d0;
  uVar6 = extraout_var;
  if ((uVar3 & 1) != 0) {
LAB_022ed71c:
    auVar9._8_8_ = uVar6;
    auVar9._0_8_ = uVar8;
                    /* try { // try from 022ed724 to 023ed73b has its CatchHandler @ 022ed970 */
    return auVar9;
  }
                    /* try { // try from 022ed73c to 023ed74b has its CatchHandler @ 022ed928 */
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0), lVar4 == 0
     )) goto LAB_022ed8ec;
                    /* try { // try from 022ed74c to 023ed75f has its CatchHandler @ 022ed970 */
  UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022ed760 to 023ed76f has its CatchHandler @ 022ed920 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ed770 to 023ed787 has its CatchHandler @ 022ed970 */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(param_5,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_022ed8ec;
    lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x40),0);
    if (lVar4 == 0) goto LAB_022ed8ec;
                    /* try { // try from 022ed7a8 to 023ed7b3 has its CatchHandler @ 022ed910 */
    UnityEngine_GameObject__SetActive_43c1408(lVar4,(uVar2 ^ 1) & 1,0);
    if ((uVar2 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 0x40);
      if (plVar5 == (long *)0x0) goto LAB_022ed8ec;
                    /* try { // try from 022ed7cc to 023ed7df has its CatchHandler @ 022ed970 */
      (**(code **)(*plVar5 + 0x518))(plVar5,param_5,*(undefined8 *)(*plVar5 + 0x520));
    }
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x18) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cb1228,0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0),
       lVar4 != 0)) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar9 = (*pcRam0000000004fa8430)(lVar7,0);
        return auVar9;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
LAB_022ed8ec:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022ed8ec to 023ed987 has its CatchHandler @ 022ed3f0 */
    FUN_02133224();
  }
  Dino_BusSand_App_UI_YachtRacingRewardTips__SpawnItems_21f1e74(param_1,param_4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ed800 to 023ed80b has its CatchHandler @ 022ed90c */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022ed824 to 023ed837 has its CatchHandler @ 022ed970 */
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_3,0,0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 022ed838 to 023ed847 has its CatchHandler @ 022ed908 */
      Dino_BusSand_App_UI_YachtRacingRewardTips__AdjustPosition_21f23d0(param_1,param_3,param_2);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022ed858 to 023ed86b has its CatchHandler @ 022ed970 */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  puVar1 = PTR_DAT_04ca9ae8;
  uVar8 = extraout_d0_00;
  uVar6 = extraout_var_00;
  if ((uVar3 & 1) == 0) goto LAB_022ed71c;
                    /* try { // try from 022ed86c to 023ed87b has its CatchHandler @ 022ed904 */
  lVar4 = *(long *)(param_1 + 0x58);
  uVar8 = *(undefined8 *)PTR_DAT_04cb1220;
                    /* try { // try from 022ed88c to 023ed8eb has its CatchHandler @ 022ed970 */
  if ((bRam0000000004f9bc56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8,uVar8,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc56 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084(uVar8,0);
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) goto LAB_022f8d88;
      uVar8 = UnityEngine_Animation__get_clip_43341a8(lVar4,0);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      uVar8 = 0;
      if ((uVar3 & 1) != 0) {
        lVar7 = UnityEngine_Animation__get_clip_43341a8(lVar4,0);
        if (lVar7 == 0) goto LAB_022f8d88;
        uVar8 = UnityEngine_Object__get_name_43c71a4(lVar7,0);
      }
    }
    uVar3 = System_String__IsNullOrEmpty_46d2084(uVar8,0);
    if ((uVar3 & 1) == 0) {
      if (lVar4 == 0) {
LAB_022f8d88:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = UnityEngine_Animation__get_Item_4334ee8(lVar4,uVar8,0);
      uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c2af & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,uVar8,0);
          bRam0000000004f9c2af = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = System_String__IsNullOrEmpty_46d2084(uVar8,0), (uVar3 & 1) == 0)) {
          if (lVar4 != 0) {
            lVar7 = UnityEngine_Animation__get_Item_4334ee8(lVar4,uVar8,0);
            uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar7,0,0);
            if ((uVar3 & 1) != 0) goto LAB_023a899c;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar4,1,0);
            UnityEngine_Animation__Stop_4334660(lVar4,0);
            if (lVar7 != 0) {
              UnityEngine_AnimationState__set_time_43370c0(0,lVar7,0);
              UnityEngine_Animation__Play_4335164(lVar4,uVar8,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(0,0);
              }
              lVar4 = *(long *)(lVar7 + 0x10);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
              }
              if (pcRam0000000004fa4d58 == (code *)0x0) {
                pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
              }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar9 = (*pcRam0000000004fa4d58)(lVar4);
              return auVar9;
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

