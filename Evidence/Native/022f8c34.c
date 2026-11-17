/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$PlayClip
float Dino_BusSand_App_UI_YachtRacingUi__PlayClip (UnityEngine_Animation_o* a, System_String_o* clip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$PlayClip
   float Dino_BusSand_App_UI_YachtRacingUi__PlayClip (UnityEngine_Animation_o* a, System_String_o*
   clip, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_YachtRacingUi__PlayClip_21f8c34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc56 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 0) goto LAB_022f8d88;
      uVar3 = UnityEngine_Animation__get_clip_43341a8(param_1,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      param_2 = 0;
      if ((uVar2 & 1) != 0) {
        lVar4 = UnityEngine_Animation__get_clip_43341a8(param_1,0);
        if (lVar4 == 0) goto LAB_022f8d88;
        param_2 = UnityEngine_Object__get_name_43c71a4(lVar4,0);
      }
    }
    uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    if ((uVar2 & 1) == 0) {
      if (param_1 == 0) {
LAB_022f8d88:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_Animation__get_Item_4334ee8(param_1,param_2,0);
      uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c2af & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,param_2,0);
          bRam0000000004f9c2af = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
        if (((uVar2 & 1) == 0) &&
           (uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0), (uVar2 & 1) == 0)) {
          if (param_1 != 0) {
            lVar4 = UnityEngine_Animation__get_Item_4334ee8(param_1,param_2,0);
            uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar4,0,0);
            if ((uVar2 & 1) != 0) goto LAB_023a899c;
            UnityEngine_Behaviour__set_enabled_43bc50c(param_1,1,0);
            UnityEngine_Animation__Stop_4334660(param_1,0);
            if (lVar4 != 0) {
              UnityEngine_AnimationState__set_time_43370c0(0,lVar4,0);
              UnityEngine_Animation__Play_4335164(param_1,param_2,0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(0,0);
              }
              lVar5 = *(long *)(lVar4 + 0x10);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
              }
              if (pcRam0000000004fa4d58 == (code *)0x0) {
                pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
              }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar6 = (*pcRam0000000004fa4d58)(lVar5);
              return auVar6;
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

