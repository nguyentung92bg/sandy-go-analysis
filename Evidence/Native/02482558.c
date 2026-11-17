/* IL2CPP: Dino.BusSand.GameAudio$$SynthClips
System_Collections_Generic_IEnumerable_AudioClip__o* Dino_BusSand_GameAudio__SynthClips (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$SynthClips
   System_Collections_Generic_IEnumerable_AudioClip__o* Dino_BusSand_GameAudio__SynthClips
   (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method); */

long Dino_BusSand_GameAudio__SynthClips_2382558(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cbbc20;
  if ((bRam0000000004f9c86e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc20);
    bRam0000000004f9c86e = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x28) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),param_1);
  return lVar3;
}

