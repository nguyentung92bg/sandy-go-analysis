/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Begin
void Dino_BusSand_Core_SimProfiler__Begin (int32_t phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Begin
   void Dino_BusSand_Core_SimProfiler__Begin (int32_t phase, const MethodInfo* method); */

void Dino_BusSand_Core_SimProfiler__Begin_241dd30(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cbea80;
  if ((bRam0000000004f9cb8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea80);
    FUN_02132f7c(PTR_DAT_04cbea88);
    bRam0000000004f9cb8d = 1;
  }
  puVar2 = PTR_DAT_04cbea88;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = System_Diagnostics_Stopwatch__GetTimestamp_3fd4c44(0);
  if (lVar3 != 0) {
    if (param_1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + (long)(int)param_1 * 8 + 0x20) = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

