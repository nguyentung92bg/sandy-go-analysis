/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow$$Pending
bool Dino_BusSand_App_UI_PostWinFlow__Pending (int32_t wonLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow$$Pending
   bool Dino_BusSand_App_UI_PostWinFlow__Pending (int32_t wonLevel, const MethodInfo* method); */

bool Dino_BusSand_App_UI_PostWinFlow__Pending_2313d84(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9c5a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21e8);
    bRam0000000004f9c5a7 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_WinChest__get_Ready_220d8f8(0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 02413dbc to 02513e93 has its CatchHandler @ 02413dbc
                       catch() { ... } // from try @ 02413dbc with catch @ 02413dbc
                       catch() { ... } // from try @ 02413e9c with catch @ 02413dbc
                       catch() { ... } // from try @ 02413f38 with catch @ 02413dbc
                       catch() { ... } // from try @ 02413f60 with catch @ 02413dbc
                       catch() { ... } // from try @ 02413f8c with catch @ 02413dbc */
    if (*(int *)(*(long *)PTR_DAT_04cb21e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_DailyGift__Available_220e1d4(param_1,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = Dino_BusSand_App_Meta_StarterOffer__get_PopupDue_220ca94(0);
      if ((uVar4 & 1) == 0) {
        return false;
      }
      uVar5 = 0;
      if ((bRam0000000004f9bd05 & 1) == 0) {
        uVar5 = FUN_02132f7c(PTR_DAT_04cb21b8);
        bRam0000000004f9bd05 = 1;
      }
      uVar4 = Dino_BusSand_App_Meta_OfferScheduler__get_Allowed_220c3e8(uVar5);
      if (((uVar4 & 1) == 0) ||
         (iVar3 = **(int **)(*(long *)PTR_DAT_04cb21b8 + 0xb8),
         iVar2 = Dino_BusSand_App_Meta_Monetization__get_OffersPerArrival_2267b5c(0), iVar2 <= iVar3
         )) {
        bVar1 = false;
      }
      else {
        iVar3 = Dino_BusSand_App_Meta_OfferScheduler__get_ShownToday_220c500();
        iVar2 = Dino_BusSand_App_Meta_Monetization__get_OffersPerDay_2267bb8(0);
        bVar1 = iVar3 < iVar2;
      }
      return bVar1;
    }
  }
  return true;
}

