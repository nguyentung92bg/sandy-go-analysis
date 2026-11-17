/* IL2CPP: Dino.BusSand.App.UI.HallScene$$SetCupIdle
void Dino_BusSand_App_UI_HallScene__SetCupIdle (Dino_BusSand_App_UI_HallScene_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$SetCupIdle
   void Dino_BusSand_App_UI_HallScene__SetCupIdle (Dino_BusSand_App_UI_HallScene_o* __this, int32_t
   level, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HallScene__SetCupIdle_22d2650(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04cac6d8;
  if ((bRam0000000004f9c3c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac6d8);
    bRam0000000004f9c3c1 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  uVar2 = Dino_BusSand_App_UI_HallScene__ChangeName_22d28e4(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3c7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (lVar5 != 0) {
    lVar4 = UnityEngine_Animation__get_Item_4334ee8(lVar5,uVar2,0);
    uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    UnityEngine_Animation__Stop_4334660(lVar5,0);
    if (lVar4 != 0) {
      UnityEngine_AnimationState__set_enabled_4336edc(lVar4,1,0);
      UnityEngine_AnimationState__set_weight_4336f78(0x3f800000,lVar4,0);
      fVar6 = (float)UnityEngine_AnimationState__get_length_4337218(lVar4,0);
      if (0.0 <= fVar6) {
        fVar6 = 0.0;
      }
      UnityEngine_AnimationState__set_time_43370c0(fVar6,lVar4,0);
      UnityEngine_Animation__Sample_4334b90(lVar5,0);
      UnityEngine_AnimationState__set_enabled_4336edc(lVar4,0,0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

