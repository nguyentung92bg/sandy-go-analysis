/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$get_UnlockGiftCount
int32_t Dino_BusSand_App_UI_LevelEnterFlow__get_UnlockGiftCount (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$get_UnlockGiftCount
   int32_t Dino_BusSand_App_UI_LevelEnterFlow__get_UnlockGiftCount (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_LevelEnterFlow__get_UnlockGiftCount_233cf40(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
                    /* try { // try from 0243cf40 to 0253cf7f has its CatchHandler @ 0243cc74 */
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c662 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9c662 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0243cf3c with catch @ 0243cf7c */
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcd2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1d60);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    bRam0000000004f9bcd2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_EconomySettings__Ensure_2205454();
  lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0x18);
    uVar4 = (undefined4)(uVar3 >> 0x20);
    if ((uVar3 & 0xff) == 0) {
      uVar4 = 1;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

