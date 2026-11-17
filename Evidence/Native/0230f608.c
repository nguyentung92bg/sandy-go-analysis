/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_Stuck
bool Dino_BusSand_App_Meta_Segments__get_Stuck (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_Stuck
   bool Dino_BusSand_App_Meta_Segments__get_Stuck (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Segments__get_Stuck_220f608(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd32 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x10) == 0) {
    return false;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x7c);
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(puVar2);
      lVar3 = *(long *)puVar2;
      cRam0000000004f9b894 = '\x01';
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      if (iVar1 != *(int *)(lVar4 + 0x14)) {
        return false;
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 != 0) {
        return 2 < *(int *)(lVar3 + 0x80);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

