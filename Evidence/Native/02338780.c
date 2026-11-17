/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsAtPurchaseLimit
bool Dino_BusSand_App_Meta_GiftPackFeature__IsAtPurchaseLimit (Dino_BusSand_App_Meta_GiftPackConfig_o* c, Dino_BusSand_App_Meta_GiftPackState_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsAtPurchaseLimit
   bool Dino_BusSand_App_Meta_GiftPackFeature__IsAtPurchaseLimit
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, Dino_BusSand_App_Meta_GiftPackState_o* s, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackFeature__IsAtPurchaseLimit_2238780(long param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x20) < 1) {
      return false;
    }
    bVar1 = *(int *)(param_1 + 0x20) <= *(int *)(param_2 + 0x1c);
  }
  return bVar1;
}

