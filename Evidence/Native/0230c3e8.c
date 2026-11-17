/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$get_Allowed
bool Dino_BusSand_App_Meta_OfferScheduler__get_Allowed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$get_Allowed
   bool Dino_BusSand_App_Meta_OfferScheduler__get_Allowed (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_OfferScheduler__get_Allowed_220c3e8(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd03 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd03 = 1;
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
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    iVar3 = Dino_BusSand_App_Meta_Monetization__get_OffersFromLevel_2267aa4(0);
    if (iVar3 <= iVar2) {
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
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 != 0) {
        return 1 < *(int *)(lVar4 + 0x138);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return false;
}

