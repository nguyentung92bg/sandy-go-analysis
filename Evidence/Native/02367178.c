/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_PlayOnOfferEnabled
bool Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferEnabled (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_PlayOnOfferEnabled
   bool Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferEnabled (const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_Monetization__get_PlayOnOfferEnabled_2267178(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c06f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c06f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_MonetizationSettings__get_PlayOn_22671d4();
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

