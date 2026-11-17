/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$U8
void Dino_BusSand_App_Meta_Journey_JourneyBytes__U8 (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$U8
   void Dino_BusSand_App_Meta_Journey_JourneyBytes__U8
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t v, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyBytes__U8_229560c(long param_1,undefined1 param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac((int)param_1,1);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined1 *)(lVar2 + (int)uVar1 + 0x20) = param_2;
  }
  return;
}

