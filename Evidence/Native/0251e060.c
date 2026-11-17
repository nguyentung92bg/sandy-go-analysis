/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Ms
double Dino_BusSand_Core_SimProfiler__Ms (int32_t phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Ms
   double Dino_BusSand_Core_SimProfiler__Ms (int32_t phase, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_SimProfiler__Ms_241e060(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_04cbea80;
  if ((bRam0000000004f9cb91 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea80);
    FUN_02132f7c(PTR_DAT_04cbea88);
    bRam0000000004f9cb91 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cbea88;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (param_1 < *(uint *)(lVar2 + 0x18)) {
      lVar3 = *(long *)(lVar2 + (long)(int)param_1 * 8 + 0x20);
      lVar2 = *(long *)PTR_DAT_04cbea88;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      auVar4._0_8_ = ((double)lVar3 * _UNK_00e6a6f0) / (double)**(long **)(lVar2 + 0xb8);
      auVar4._8_8_ = 0;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

