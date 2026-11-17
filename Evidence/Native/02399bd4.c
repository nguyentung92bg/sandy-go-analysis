/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$SetFlag
void Dino_BusSand_App_Meta_Journey_LevelJourney__SetFlag (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int32_t flag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$SetFlag
   void Dino_BusSand_App_Meta_Journey_LevelJourney__SetFlag
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int32_t flag, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_Journey_LevelJourney__SetFlag_2299bd4(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  param_2 = *(uint *)(param_1 + 0x30) | param_2;
  *(uint *)(param_1 + 0x30) = param_2;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (1 < *(int *)(lVar1 + 0x18)) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(char *)(lVar1 + 0x21) = (char)param_2;
  }
  return;
}

