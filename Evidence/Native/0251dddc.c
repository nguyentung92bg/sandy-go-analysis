/* IL2CPP: Dino.BusSand.Core.SimProfiler$$End
void Dino_BusSand_Core_SimProfiler__End (int32_t phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimProfiler$$End
   void Dino_BusSand_Core_SimProfiler__End (int32_t phase, const MethodInfo* method); */

void Dino_BusSand_Core_SimProfiler__End_241dddc(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cbea80;
  if ((bRam0000000004f9cb8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea80);
    FUN_02132f7c(PTR_DAT_04cbea88);
    bRam0000000004f9cb8e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (param_1 < *(uint *)(lVar2 + 0x18)) {
      lVar5 = (long)(int)param_1;
      lVar6 = *(long *)(lVar2 + 0x20 + lVar5 * 8);
      if (*(int *)(*(long *)PTR_DAT_04cbea88 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = System_Diagnostics_Stopwatch__GetTimestamp_3fd4c44(0);
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_0251deb8;
      if (param_1 < *(uint *)(lVar4 + 0x18)) {
        *(long *)(lVar2 + 0x20 + lVar5 * 8) = (lVar3 + lVar6) - *(long *)(lVar4 + lVar5 * 8 + 0x20);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_0251deb8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

