/* IL2CPP: Dino.BusSand.App.UI.StarterPanel$$get_StoreItem
int32_t Dino_BusSand_App_UI_StarterPanel__get_StoreItem (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StarterPanel$$get_StoreItem
   int32_t Dino_BusSand_App_UI_StarterPanel__get_StoreItem (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_StarterPanel__get_StoreItem_232dfa4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c07f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c07f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_MonetizationSettings__get_Starter_2267934();
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

