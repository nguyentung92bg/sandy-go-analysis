/* IL2CPP: Dino.BusSand.GameAudio$$<FinishSynth>g__C|54_1
UnityEngine_AudioClip_o* Dino_BusSand_GameAudio___FinishSynth_g__C_54_1 (System_String_o* n, Dino_BusSand_GameAudio___c__DisplayClass54_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$<FinishSynth>g__C|54_1
   UnityEngine_AudioClip_o* Dino_BusSand_GameAudio___FinishSynth_g__C_54_1 (System_String_o* n,
   Dino_BusSand_GameAudio___c__DisplayClass54_0_o* , const MethodInfo* method); */

undefined8 Dino_BusSand_GameAudio___FinishSynth_g__C_54_1_23824e0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c876 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb1c8);
    bRam0000000004f9c876 = 1;
  }
  uStack_28 = 0;
  if (*param_2 != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*param_2,param_1,&uStack_28,*(undefined8 *)PTR_DAT_04cbb1c8);
    if ((uVar1 & 1) == 0) {
      uStack_28 = 0;
    }
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

