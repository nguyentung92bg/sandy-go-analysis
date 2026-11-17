/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$get_Progress
int32_t Dino_BusSand_App_Meta_WinChest__get_Progress (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$get_Progress
   int32_t Dino_BusSand_App_Meta_WinChest__get_Progress (const MethodInfo* method); */

int Dino_BusSand_App_Meta_WinChest__get_Progress_220d828(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd19 = 1;
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
  puVar2 = PTR_DAT_04caa200;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x178);
    iVar3 = Dino_BusSand_App_Meta_WinChest__get_Need_220d790();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    if (iVar3 <= iVar1) {
      iVar1 = iVar3;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

