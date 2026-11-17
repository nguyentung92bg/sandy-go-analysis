/* IL2CPP: Dino.BusSand.App.BootTrace$$get_Verbose
bool Dino_BusSand_App_BootTrace__get_Verbose (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$get_Verbose
   bool Dino_BusSand_App_BootTrace__get_Verbose (const MethodInfo* method); */

void Dino_BusSand_App_BootTrace__get_Verbose_214dec8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04ca9af8;
  if ((bRam0000000004f9b7ab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
                    /* catch() { ... } // from try @ 0224dff8 with catch @ 0224def4 */
    bRam0000000004f9b7ab = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (pcRam0000000004fa6278 == (code *)0x0) {
    pcRam0000000004fa6278 = (code *)FUN_02132f40(&UNK_00e237e0);
  }
                    /* WARNING: Could not recover jumptable at 0x04462244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa6278)();
  return;
}

