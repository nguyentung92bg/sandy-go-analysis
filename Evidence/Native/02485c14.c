/* IL2CPP: Dino.BusSand.GameAudio$$Noise
System_Single_array* Dino_BusSand_GameAudio__Noise (System_Random_o* rng, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$Noise
   System_Single_array* Dino_BusSand_GameAudio__Noise (System_Random_o* rng, int32_t n, const
   MethodInfo* method); */

long Dino_BusSand_GameAudio__Noise_2385c14(long *param_1,uint param_2)

{
  double dVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9c86f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c86f = 1;
  }
  lVar3 = FUN_02133068(*(undefined8 *)puVar2,(ulong)param_2);
  if (0 < (int)param_2) {
    if (param_1 == (long *)0x0) {
LAB_02485cd4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = 0;
    do {
      dVar1 = (double)(**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      if (lVar3 == 0) goto LAB_02485cd4;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(float *)(lVar3 + 0x20 + uVar4 * 4) = (float)dVar1 + (float)dVar1 + -1.0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
  }
  return lVar3;
}

