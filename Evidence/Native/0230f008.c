/* IL2CPP: Dino.BusSand.App.Meta.StuckHelp$$get_Offered
bool Dino_BusSand_App_Meta_StuckHelp__get_Offered (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StuckHelp$$get_Offered
   bool Dino_BusSand_App_Meta_StuckHelp__get_Offered (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StuckHelp__get_Offered_220f008(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd2c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  uVar5 = Dino_BusSand_App_Meta_StuckHelp__get_On_220ef98();
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(int *)(lVar4 + 0x7c) == *(int *)(lVar4 + 0x14)) &&
       (iVar1 = *(int *)(lVar4 + 0x80),
       iVar3 = Dino_BusSand_App_Meta_Monetization__get_StuckHelpLosses_22686dc(0), iVar3 <= iVar1))
    {
      return *(int *)(lVar4 + 0x1a4) != *(int *)(lVar4 + 0x14);
    }
  }
  return false;
}

