/* IL2CPP: Dino.BusSand.App.Meta.WelcomeBack$$get_Pending
bool Dino_BusSand_App_Meta_WelcomeBack__get_Pending (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WelcomeBack$$get_Pending
   bool Dino_BusSand_App_Meta_WelcomeBack__get_Pending (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_WelcomeBack__get_Pending_220ec8c(void)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bd29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd29 = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_WelcomeBack__get_On_220e99c();
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = *(char *)(lVar4 + 0x1a0) != '\0';
  }
  return bVar2;
}

