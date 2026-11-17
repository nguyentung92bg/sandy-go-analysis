/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Done
void Dino_BusSand_App_Meta_Journey_LevelJourney__Done (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Done
   void Dino_BusSand_App_Meta_Journey_LevelJourney__Done
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_LevelJourney__Done_2299f4c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x24) == '\0') {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      return;
    }
    Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424
              (lVar2,*(undefined4 *)(param_1 + 0x34));
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x49) = 1;
    uVar1 = *(uint *)(param_1 + 0x30) | 1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x30) = uVar1;
    if (lVar2 != 0) {
      if (1 < *(int *)(lVar2 + 0x18)) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(char *)(lVar2 + 0x21) = (char)uVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

