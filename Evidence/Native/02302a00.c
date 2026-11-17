/* IL2CPP: Dino.BusSand.App.Meta.Economy$$UnlockLevel
int32_t Dino_BusSand_App_Meta_Economy__UnlockLevel (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$UnlockLevel
   int32_t Dino_BusSand_App_Meta_Economy__UnlockLevel (int32_t item, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(int param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcbb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bcbb = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02302a60 to 02402a73 has its CatchHandler @ 02302a8c */
  if ((param_1 == 0x3eb) || (param_1 == 0x2711)) {
                    /* catch() { ... } // from try @ 02302a60 with catch @ 02302a8c */
    return 0x7fffffff;
  }
                    /* try { // try from 02302a74 to 02402aa3 has its CatchHandler @ 02302978 */
  if (*(char *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 1) != '\0') {
    return 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 02302ba0 with catch @ 02302aa4 */
  if ((bRam0000000004f9bcbc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bcbc = 1;
  }
  if (param_1 != 0x3eb) {
    if (param_1 == 0x2711) {
      return 0x7fffffff;
    }
    if (param_1 - 0x2712U < 4) {
      uVar2 = Dino_BusSand_App_Meta_Monetization__UnlockLevel_2265fd8(param_1,0);
      if (0 < (int)uVar2) {
        return uVar2;
      }
      if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (param_1 - 0x2712U < 4) {
        return (ulong)*(uint *)(&UNK_00e6b340 + (ulong)(param_1 - 0x2712U) * 4);
      }
    }
    return 1;
  }
  return 0x7fffffff;
}

