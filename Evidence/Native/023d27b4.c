/* IL2CPP: Dino.BusSand.App.UI.HallScene$$SampleAt
bool Dino_BusSand_App_UI_HallScene__SampleAt (UnityEngine_Animation_o* anim, System_String_o* clip, float time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$SampleAt
   bool Dino_BusSand_App_UI_HallScene__SampleAt (UnityEngine_Animation_o* anim, System_String_o*
   clip, float time, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_HallScene__SampleAt_22d27b4(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3c7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar3 = UnityEngine_Animation__get_Item_4334ee8(param_2,param_3,0);
    uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    UnityEngine_Animation__Stop_4334660(param_2,0);
    if (lVar3 != 0) {
      UnityEngine_AnimationState__set_enabled_4336edc(lVar3,1,0);
      UnityEngine_AnimationState__set_weight_4336f78(0x3f800000,lVar3,0);
      fVar4 = (float)UnityEngine_AnimationState__get_length_4337218(lVar3,0);
      if (param_1 <= fVar4) {
        fVar4 = param_1;
      }
      fVar5 = 0.0;
      if (0.0 <= param_1) {
        fVar5 = fVar4;
      }
      UnityEngine_AnimationState__set_time_43370c0(fVar5,lVar3,0);
      UnityEngine_Animation__Sample_4334b90(param_2,0);
      UnityEngine_AnimationState__set_enabled_4336edc(lVar3,0,0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

