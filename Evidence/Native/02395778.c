/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$U32
void Dino_BusSand_App_Meta_Journey_JourneyBytes__U32 (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, uint32_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$U32
   void Dino_BusSand_App_Meta_Journey_JourneyBytes__U32
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, uint32_t v, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyBytes__U32_2295778(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac((int)param_1,4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar1 + 1;
  if (lVar2 == 0) {
LAB_0239584c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)param_2;
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    if (lVar2 == 0) goto LAB_0239584c;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((uint)param_2 >> 8);
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar2 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      if (lVar2 == 0) goto LAB_0239584c;
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((uint)param_2 >> 0x10);
        uVar1 = *(uint *)(param_1 + 0x18);
        lVar2 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        if (lVar2 == 0) goto LAB_0239584c;
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((uint)param_2 >> 0x18);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

