/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Sample
void Dino_BusSand_App_UI_BattleRoyaleUi__Sample (UnityEngine_Animation_o* anim, System_String_o* clip, bool last, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleUi$$Sample
   void Dino_BusSand_App_UI_BattleRoyaleUi__Sample (UnityEngine_Animation_o* anim, System_String_o*
   clip, bool last, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleUi__Sample_219cf34
               (long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba02 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba02 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    lVar5 = 0;
    if ((uVar2 & 1) == 0) {
      if (param_1 == 0) goto LAB_0229d0e0;
      lVar5 = UnityEngine_Animation__get_Item_4334ee8(param_1,param_2,0);
    }
    uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 0) goto LAB_0229d0e0;
      uVar3 = UnityEngine_Animation__get_clip_43341a8(param_1,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        lVar5 = UnityEngine_Animation__get_clip_43341a8(param_1,0);
        if (lVar5 == 0) goto LAB_0229d0e0;
        uVar3 = UnityEngine_Object__get_name_43c71a4(lVar5,0);
        lVar5 = UnityEngine_Animation__get_Item_4334ee8(param_1,uVar3,0);
      }
    }
    uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if ((param_1 != 0) && (UnityEngine_Animation__Stop_4334660(param_1,0), lVar5 != 0)) {
        UnityEngine_AnimationState__set_enabled_4336edc(lVar5,1,0);
        UnityEngine_AnimationState__set_weight_4336f78(0x3f800000,lVar5,0);
        if ((param_3 & 1) != 0) {
          UnityEngine_AnimationState__get_length_4337218(0,lVar5,0);
        }
        UnityEngine_AnimationState__set_time_43370c0(lVar5,0);
        UnityEngine_Animation__Sample_4334b90(param_1,0);
        if (lVar5 != 0) {
          lVar4 = *(long *)(lVar5 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
          }
          if (pcRam0000000004fa4d30 == (code *)0x0) {
            pcRam0000000004fa4d30 = (code *)FUN_02132f40(&UNK_00e482f2);
          }
                    /* WARNING: Could not recover jumptable at 0x04436f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa4d30)(lVar4,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0,0,0);
      }
LAB_0229d0e0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

