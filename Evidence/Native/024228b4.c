/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_GiftStoreItem
int32_t Dino_BusSand_App_UI_LiveOpsHome__get_GiftStoreItem (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_GiftStoreItem
   int32_t Dino_BusSand_App_UI_LiveOpsHome__get_GiftStoreItem (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_LiveOpsHome__get_GiftStoreItem_23228b4(void)

{
  long lVar1;
  
  lVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  if (lVar1 == 0) {
    return 0x7d1;
  }
  lVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
  if (lVar1 != 0) {
    lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar1,0x3ec,0);
    if (lVar1 == 0) {
      return 0x7d1;
    }
    lVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74();
    if ((lVar1 != 0) &&
       (lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar1,0x3ec,0), lVar1 != 0)) {
      return *(undefined4 *)(lVar1 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

