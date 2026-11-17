/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Recording
bool Dino_BusSand_App_Meta_JourneyTracking__Recording (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$Recording
   bool Dino_BusSand_App_Meta_JourneyTracking__Recording (Dino_BusSand_Core_StageEngine_o* e, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd85 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = *(long **)(lVar3 + 0xb8);
  if (*plVar4 != 0) {
    bVar2 = false;
    if ((param_1 != 0) && (*(char *)(*plVar4 + 0x48) != '\0')) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
      }
      bVar2 = plVar4[2] == param_1;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

