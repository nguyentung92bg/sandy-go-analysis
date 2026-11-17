/* IL2CPP: Dino.BusSand.App.CrashContext$$get_PendingLogCount
int32_t Dino_BusSand_App_CrashContext__get_PendingLogCount (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$get_PendingLogCount
   int32_t Dino_BusSand_App_CrashContext__get_PendingLogCount (const MethodInfo* method); */

undefined4 Dino_BusSand_App_CrashContext__get_PendingLogCount_2173b1c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac450;
                    /* try { // try from 02273b34 to 02373b57 has its CatchHandler @ 02273b34
                       catch() { ... } // from try @ 02273b34 with catch @ 02273b34
                       catch() { ... } // from try @ 02273b60 with catch @ 02273b34 */
  if ((bRam0000000004f9b8be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacbd8);
    bRam0000000004f9b8be = 1;
  }
                    /* try { // try from 02273b58 to 02373b5f has its CatchHandler @ 02273b70 */
  lVar2 = *(long *)puVar1;
                    /* try { // try from 02273b60 to 02373b8b has its CatchHandler @ 02273b34 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 02273b58 with catch @ 02273b70 */
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

