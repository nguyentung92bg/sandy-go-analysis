/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_InLevel
bool Dino_BusSand_App_Meta_GameTracking__get_InLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$get_InLevel
   bool Dino_BusSand_App_Meta_GameTracking__get_InLevel (const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_GameTracking__get_InLevel_2210d98(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd3f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bd3f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined1 **)(lVar2 + 0xb8);
}

