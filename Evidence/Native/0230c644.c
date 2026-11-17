/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$get_CanShowPopup
bool Dino_BusSand_App_Meta_OfferScheduler__get_CanShowPopup (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.OfferScheduler$$get_CanShowPopup
   bool Dino_BusSand_App_Meta_OfferScheduler__get_CanShowPopup (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_OfferScheduler__get_CanShowPopup_220c644(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if ((bRam0000000004f9bd05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21b8);
    bRam0000000004f9bd05 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_OfferScheduler__get_Allowed_220c3e8();
  if (((uVar4 & 1) == 0) ||
     (iVar3 = **(int **)(*(long *)PTR_DAT_04cb21b8 + 0xb8),
     iVar2 = Dino_BusSand_App_Meta_Monetization__get_OffersPerArrival_2267b5c(0), iVar2 <= iVar3)) {
    bVar1 = false;
  }
  else {
    iVar3 = Dino_BusSand_App_Meta_OfferScheduler__get_ShownToday_220c500();
    iVar2 = Dino_BusSand_App_Meta_Monetization__get_OffersPerDay_2267bb8(0);
    bVar1 = iVar3 < iVar2;
  }
  return bVar1;
}

