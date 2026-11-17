/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$MarkForced
void Dino_BusSand_App_Meta_JourneyTracking__MarkForced (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$MarkForced
   void Dino_BusSand_App_Meta_JourneyTracking__MarkForced (Dino_BusSand_Core_StageEngine_o* e, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__MarkForced_221cf50(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd9d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(param_1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_Journey_LevelJourney__SetFlag_2299bd4(**(long **)(lVar3 + 0xb8),0x20,0);
  }
  return;
}

