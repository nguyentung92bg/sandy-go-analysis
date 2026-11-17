/* IL2CPP: Dino.BusSand.GameAudio$$<FinishSynth>b__54_0
UnityEngine_AudioClip_o* Dino_BusSand_GameAudio___FinishSynth_b__54_0 (Dino_BusSand_GameAudio_o* __this, System_String_o* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$<FinishSynth>b__54_0
   UnityEngine_AudioClip_o* Dino_BusSand_GameAudio___FinishSynth_b__54_0 (Dino_BusSand_GameAudio_o*
   __this, System_String_o* n, const MethodInfo* method); */

undefined8 Dino_BusSand_GameAudio___FinishSynth_b__54_0_2386290(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c877 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb1c8);
    bRam0000000004f9c877 = 1;
  }
  uStack_28 = 0;
  if (param_2 == 0) {
    uStack_28 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0x118),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cbb1c8
                      );
    if ((uVar1 & 1) == 0) {
      uStack_28 = 0;
    }
  }
  return uStack_28;
}

