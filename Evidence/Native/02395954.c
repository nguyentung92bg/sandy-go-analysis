/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$PatchU8
void Dino_BusSand_App_Meta_Journey_JourneyBytes__PatchU8 (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t at, int32_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$PatchU8
   void Dino_BusSand_App_Meta_Journey_JourneyBytes__PatchU8
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t at, int32_t v, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_Journey_JourneyBytes__PatchU8_2295954
               (long param_1,uint param_2,undefined1 param_3)

{
  long lVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x18))) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined1 *)(lVar1 + (ulong)param_2 + 0x20) = param_3;
  }
  return;
}

