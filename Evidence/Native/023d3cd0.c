/* IL2CPP: Dino.BusSand.App.UI.HallScene$$PlayFromStart
void Dino_BusSand_App_UI_HallScene__PlayFromStart (UnityEngine_Animation_o* anim, System_String_o* clip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$PlayFromStart
   void Dino_BusSand_App_UI_HallScene__PlayFromStart (UnityEngine_Animation_o* anim,
   System_String_o* clip, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_HallScene__PlayFromStart_22d3cd0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3c6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  if (param_1 != 0) {
    lVar4 = UnityEngine_Animation__get_Item_4334ee8(param_1,param_2,0);
    uVar3 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    UnityEngine_Animation__Stop_4334660(param_1,0);
    if (lVar4 != 0) {
      UnityEngine_AnimationState__set_wrapMode_4337024(lVar4,8,0);
      UnityEngine_AnimationState__set_speed_433716c(0x3f800000,lVar4,0);
      UnityEngine_AnimationState__set_time_43370c0(0,lVar4,0);
      if ((bRam0000000004fa4be8 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5b88,param_2,0);
        FUN_02132f7c(PTR_DAT_04cf5680);
        FUN_02132f7c(PTR_DAT_04cd5630);
        bRam0000000004fa4be8 = 1;
      }
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        if (param_2 == 0) {
          uStack_60 = 0;
          uStack_58 = 0;
        }
        else if (*(int *)(param_2 + 0x10) == 0) {
          uVar5 = System_UIntPtr__op_Explicit_488617c(1,0);
          uVar5 = System_UIntPtr__op_Explicit_4886184(uVar5,0);
          uStack_40 = 0;
          uStack_38 = 0;
          UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_40,uVar5,0,0);
          uStack_58 = uStack_38;
          uStack_60 = uStack_40;
        }
        else {
          if (cRam0000000004fa1b52 == '\0') {
            FUN_02132f7c(PTR_DAT_04cc73d8);
            cRam0000000004fa1b52 = '\x01';
          }
          uStack_50 = System_String__GetRawStringData_46cfab8(param_2,0);
          uStack_48 = (ulong)*(uint *)(param_2 + 0x10);
          uVar5 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                            (&uStack_50,*(undefined8 *)PTR_DAT_04cf5680);
          UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                    (&uStack_60,uVar5,uStack_48 & 0xffffffff,0);
        }
        if (pcRam0000000004fa4c70 == (code *)0x0) {
          pcRam0000000004fa4c70 = (code *)FUN_02132f40(&UNK_00e4a687);
        }
        uVar2 = (*pcRam0000000004fa4c70)(lVar4,&uStack_60,0);
        return (ulong)(uVar2 & 1);
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

