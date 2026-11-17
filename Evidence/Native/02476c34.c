/* IL2CPP: Dino.BusSand.AudioHub$$LoopLowPass
UnityEngine_AudioLowPassFilter_o* Dino_BusSand_AudioHub__LoopLowPass (Dino_BusSand_AudioHub_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$LoopLowPass
   UnityEngine_AudioLowPassFilter_o* Dino_BusSand_AudioHub__LoopLowPass (Dino_BusSand_AudioHub_o*
   __this, System_String_o* id, const MethodInfo* method); */

long Dino_BusSand_AudioHub__LoopLowPass_2376c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000004f9c7f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb2e8);
    FUN_02132f7c(PTR_DAT_04cbb2f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f5 = 1;
  }
  lVar2 = Dino_BusSand_AudioHub__LoopVoiceOf_23768b0(param_1,param_2);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x10) == 0) {
LAB_02476d2c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*(long *)(lVar2 + 0x10),*(undefined8 *)PTR_DAT_04cbb2e8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (((*(long *)(lVar2 + 0x10) == 0) ||
          (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar2 + 0x10),0),
          lVar2 == 0)) ||
         (lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar2,*(undefined8 *)PTR_DAT_04cbb2f0), lVar3 == 0)) goto LAB_02476d2c;
      UnityEngine_AudioLowPassFilter__set_lowpassResonanceQ_4349060(0x3f800000,lVar3,0);
    }
  }
  return lVar3;
}

