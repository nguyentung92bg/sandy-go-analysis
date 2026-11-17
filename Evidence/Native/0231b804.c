/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnQuitting
void Dino_BusSand_App_Meta_JourneyTracking__OnQuitting (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnQuitting
   void Dino_BusSand_App_Meta_JourneyTracking__OnQuitting (const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__OnQuitting_221b804(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd8b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bd8b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__AppQuitting_2214c74();
  return;
}

