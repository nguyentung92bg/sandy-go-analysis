/* IL2CPP: Dino.BusSand.GameAudio$$PaintChord
System_Collections_IEnumerator_o* Dino_BusSand_GameAudio__PaintChord (Dino_BusSand_GameAudio_o* __this, int32_t top, float pan, int32_t from, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$PaintChord
   System_Collections_IEnumerator_o* Dino_BusSand_GameAudio__PaintChord (Dino_BusSand_GameAudio_o*
   __this, int32_t top, float pan, int32_t from, const MethodInfo* method); */

long Dino_BusSand_GameAudio__PaintChord_23846e0
               (undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbbc30;
  if ((bRam0000000004f9c85d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc30);
    bRam0000000004f9c85d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x28) = param_1;
  *(undefined4 *)(lVar2 + 0x20) = param_4;
  *(undefined4 *)(lVar2 + 0x24) = param_3;
  return lVar2;
}

