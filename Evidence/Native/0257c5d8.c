/* IL2CPP: Dino.Tracking.DinoEventTracking$$get_CustomParameterCount
int32_t Dino_Tracking_DinoEventTracking__get_CustomParameterCount (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$get_CustomParameterCount
   int32_t Dino_Tracking_DinoEventTracking__get_CustomParameterCount (const MethodInfo* method); */

undefined4 Dino_Tracking_DinoEventTracking__get_CustomParameterCount_247c5d8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cc18d8;
  if ((bRam0000000004f9cf49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    bRam0000000004f9cf49 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0257c614 to 0267c717 has its CatchHandler @ 0257c614
                       catch() { ... } // from try @ 0257c614 with catch @ 0257c614
                       catch() { ... } // from try @ 0257c768 with catch @ 0257c614
                       catch() { ... } // from try @ 0257c7e8 with catch @ 0257c614
                       catch() { ... } // from try @ 0257c820 with catch @ 0257c614
                       catch() { ... } // from try @ 0257c844 with catch @ 0257c614 */
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cc18d8;
  if ((bRam0000000004f9ced8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1890);
    bRam0000000004f9ced8 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    return *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

