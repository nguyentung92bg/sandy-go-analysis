/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Reset
void Dino_BusSand_Core_SimProfiler__Reset (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimProfiler$$Reset
   void Dino_BusSand_Core_SimProfiler__Reset (const MethodInfo* method); */

void Dino_BusSand_Core_SimProfiler__Reset_241df50(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04cbea80;
  if ((bRam0000000004f9cb90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea80);
    bRam0000000004f9cb90 = 1;
  }
  lVar3 = *(long *)puVar2;
  uVar5 = 0;
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_0251e058;
    if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
      uVar5 = 0;
      goto LAB_0251dfec;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
      lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_0251e058;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar5) break;
    lVar1 = uVar5 * 8;
    uVar5 = uVar5 + 1;
    *(undefined8 *)(lVar4 + lVar1 + 0x20) = 0;
  }
LAB_0251e05c:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
LAB_0251dfec:
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar4 == 0) {
LAB_0251e058:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (lVar4 == 0) goto LAB_0251e058;
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_0251e05c;
  lVar1 = uVar5 * 8;
  uVar5 = uVar5 + 1;
  *(undefined8 *)(lVar4 + lVar1 + 0x20) = 0;
  goto LAB_0251dfec;
}

