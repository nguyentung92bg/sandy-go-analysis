/* IL2CPP: Dino.BusSand.App.UI.YachtRacingQuitItem$$BindContinue
void Dino_BusSand_App_UI_YachtRacingQuitItem__BindContinue (Dino_BusSand_App_UI_UIPanel_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingQuitItem$$BindContinue
   void Dino_BusSand_App_UI_YachtRacingQuitItem__BindContinue (Dino_BusSand_App_UI_UIPanel_o* panel,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_YachtRacingQuitItem__BindContinue_21ef19c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadb60);
                    /* catch() { ... } // from try @ 022ef188 with catch @ 022ef1f0 */
    FUN_02132f7c(PTR_DAT_04cb1300);
    FUN_02132f7c(PTR_DAT_04cb12d0);
    FUN_02132f7c(PTR_DAT_04cada38);
    bRam0000000004f9bc0f = 1;
  }
                    /* try { // try from 022ef21c to 023ef2cb has its CatchHandler @ 022ef21c
                       catch() { ... } // from try @ 022ef21c with catch @ 022ef21c
                       catch() { ... } // from try @ 022ef2d4 with catch @ 022ef21c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  uVar3 = extraout_d0;
  uVar4 = extraout_var;
  if ((uVar2 & 1) != 0) goto LAB_022ef440;
  if (param_1 == 0) {
LAB_022ef450:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1300,0);
  lVar6 = *(long *)PTR_DAT_04ca9d18;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_0216b4cc(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
                    /* try { // try from 022ef2cc to 023ef2d3 has its CatchHandler @ 022ef334 */
  uVar4 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                    (*(undefined8 *)PTR_DAT_04cb12d0,**(undefined8 **)(lVar5 + 0xb8),0);
                    /* try { // try from 022ef2d4 to 023ef35f has its CatchHandler @ 022ef21c */
  Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar3,uVar4,0);
  Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cadb60,0);
  Dino_BusSand_App_UI_YachtRacingQuitItem__BindProgress_21eeeec();
  lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cada38,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* catch() { ... } // from try @ 022ef2cc with catch @ 022ef334 */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  lVar6 = 0;
  if ((uVar2 & 1) != 0) {
    if (lVar5 == 0) goto LAB_022ef450;
    lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar5,*(undefined8 *)PTR_DAT_04cada30);
                    /* try { // try from 022ef360 to 023ef40f has its CatchHandler @ 022ef360
                       catch() { ... } // from try @ 022ef360 with catch @ 022ef360
                       catch() { ... } // from try @ 022ef418 with catch @ 022ef360 */
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  uVar3 = extraout_d0_00;
  uVar4 = extraout_var_00;
  if ((uVar2 & 1) == 0) goto LAB_022ef440;
  if (lVar6 == 0) goto LAB_022ef450;
  uVar2 = UnityEngine_Animation__get_isPlaying_4334c44(lVar6,0);
  uVar3 = extraout_d0_01;
  uVar4 = extraout_var_01;
  if ((uVar2 & 1) != 0) {
LAB_022ef440:
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
  uVar3 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  uVar3 = extraout_d0_02;
  uVar4 = extraout_var_02;
  if ((uVar2 & 1) == 0) goto LAB_022ef440;
  lVar5 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
  if (lVar5 == 0) goto LAB_022ef450;
  uVar3 = UnityEngine_Object__get_name_43c71a4(lVar5,0);
  uVar3 = UnityEngine_Animation__get_Item_4334ee8(lVar6,uVar3,0);
  uVar2 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar3,0,0);
  uVar3 = extraout_d0_03;
  uVar4 = extraout_var_03;
  if ((uVar2 & 1) == 0) goto LAB_022ef440;
                    /* try { // try from 022ef410 to 023ef417 has its CatchHandler @ 022ef478 */
  lVar5 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
                    /* try { // try from 022ef418 to 023ef4a3 has its CatchHandler @ 022ef360 */
  if (lVar5 == 0) goto LAB_022ef450;
  uVar3 = UnityEngine_Object__get_name_43c71a4(lVar5,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8,uVar3,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc56 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (lVar6 == 0) goto LAB_022f8d88;
      uVar3 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        lVar5 = UnityEngine_Animation__get_clip_43341a8(lVar6,0);
        if (lVar5 == 0) goto LAB_022f8d88;
        uVar3 = UnityEngine_Object__get_name_43c71a4(lVar5,0);
      }
    }
    uVar2 = System_String__IsNullOrEmpty_46d2084(uVar3,0);
    if ((uVar2 & 1) == 0) {
      if (lVar6 == 0) {
LAB_022f8d88:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = UnityEngine_Animation__get_Item_4334ee8(lVar6,uVar3,0);
      uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c2af & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,uVar3,0);
          bRam0000000004f9c2af = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if (((uVar2 & 1) == 0) &&
           (uVar2 = System_String__IsNullOrEmpty_46d2084(uVar3,0), (uVar2 & 1) == 0)) {
          if (lVar6 != 0) {
            lVar5 = UnityEngine_Animation__get_Item_4334ee8(lVar6,uVar3,0);
            uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar5,0,0);
            if ((uVar2 & 1) != 0) goto LAB_023a899c;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar6,1,0);
            UnityEngine_Animation__Stop_4334660(lVar6,0);
            if (lVar5 != 0) {
              UnityEngine_AnimationState__set_time_43370c0(0,lVar5,0);
              UnityEngine_Animation__Play_4335164(lVar6,uVar3,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(0,0);
              }
              lVar6 = *(long *)(lVar5 + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
              }
              if (pcRam0000000004fa4d58 == (code *)0x0) {
                pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
              }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar7 = (*pcRam0000000004fa4d58)(lVar6);
              return auVar7;
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

