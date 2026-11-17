/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$get_ShownToday
int32_t Dino_BusSand_App_Meta_OfferScheduler__get_ShownToday (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$get_ShownToday
   int32_t Dino_BusSand_App_Meta_OfferScheduler__get_ShownToday (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_OfferScheduler__get_ShownToday_220c500(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd04 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x1b0);
    lVar2 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
    if (lVar3 != lVar2) {
      return 0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 != 0) {
      return *(undefined4 *)(lVar2 + 0x1b8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

