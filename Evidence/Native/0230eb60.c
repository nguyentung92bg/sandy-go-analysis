/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_IsNew
bool Dino_BusSand_App_Meta_Segments__get_IsNew (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_IsNew
   bool Dino_BusSand_App_Meta_Segments__get_IsNew (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Segments__get_IsNew_220eb60(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd30 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
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
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
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
    if (*(int *)(lVar4 + 0x14) + -1 < 0x14) {
      bVar2 = true;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar3 = Dino_BusSand_App_Ads__get_InstallDay_2176334(0);
      bVar2 = iVar3 < 2;
    }
  }
  return bVar2;
}

