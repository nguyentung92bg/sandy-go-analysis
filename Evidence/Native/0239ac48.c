/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Reset
void Dino_BusSand_App_Meta_Journey_UiJourney__Reset (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Reset
   void Dino_BusSand_App_Meta_Journey_UiJourney__Reset (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_UiJourney__Reset_229ac48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar1 + 0x1c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

