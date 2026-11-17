/* IL2CPP: Dino.Tracking.CustomParams$$get_Count
int32_t Dino_Tracking_CustomParams__get_Count (Dino_Tracking_CustomParams_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomParams$$get_Count
   int32_t Dino_Tracking_CustomParams__get_Count (Dino_Tracking_CustomParams_o* __this, const
   MethodInfo* method); */

undefined4 Dino_Tracking_CustomParams__get_Count_247b504(long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000004f9cf38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1890);
                    /* try { // try from 0257b52c to 0267b5eb has its CatchHandler @ 0257b52c
                       catch() { ... } // from try @ 0257b52c with catch @ 0257b52c
                       catch() { ... } // from try @ 0257b770 with catch @ 0257b52c
                       catch() { ... } // from try @ 0257b820 with catch @ 0257b52c
                       catch() { ... } // from try @ 0257b870 with catch @ 0257b52c
                       catch() { ... } // from try @ 0257b8cc with catch @ 0257b52c
                       catch() { ... } // from try @ 0257b904 with catch @ 0257b52c */
    bRam0000000004f9cf38 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  return uVar1;
}

