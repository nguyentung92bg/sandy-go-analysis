/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_PopupDue
bool Dino_BusSand_App_Meta_StarterOffer__get_PopupDue (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StarterOffer$$get_PopupDue
   bool Dino_BusSand_App_Meta_StarterOffer__get_PopupDue (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StarterOffer__get_PopupDue_220ca94(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000004f9bd0c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd0c = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_StarterOffer__get_On_220c868();
  if ((((uVar4 & 1) == 0) ||
      (uVar4 = Dino_BusSand_App_Meta_StarterOffer__get_Bought_220c938(), (uVar4 & 1) != 0)) ||
     (uVar4 = Dino_BusSand_App_Meta_StarterOffer__get_NonPayer_220c9a8(), puVar1 = PTR_DAT_04cabaf8,
     (uVar4 & 1) == 0)) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x1a8) != 0) {
      return false;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    iVar3 = Dino_BusSand_App_Meta_Monetization__get_StarterFromLevel_22679ec(0);
    puVar1 = PTR_DAT_04cabaf8;
    if (iVar3 <= iVar2 + -1) {
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
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
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
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar1;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar5 != 0) {
            return 1 < *(int *)(lVar5 + 0x138);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      return false;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

