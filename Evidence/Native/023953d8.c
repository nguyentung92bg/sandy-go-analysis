/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$get_Item
uint8_t Dino_BusSand_App_Meta_Journey_JourneyBytes__get_Item (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$get_Item
   uint8_t Dino_BusSand_App_Meta_Journey_JourneyBytes__get_Item
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t i, const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_Journey_JourneyBytes__get_Item_22953d8(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    return *(undefined1 *)(lVar1 + (int)param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

