/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Count
void Dino_BusSand_Core_SimProfiler__Count (int32_t what, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Count
   void Dino_BusSand_Core_SimProfiler__Count (int32_t what, int64_t n, const MethodInfo* method); */

void Dino_BusSand_Core_SimProfiler__Count_241dec0(uint param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbea80;
  if ((bRam0000000004f9cb8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea80);
    bRam0000000004f9cb8f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    if (param_1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)param_1 * 8;
      *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + param_2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

