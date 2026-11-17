/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_S
Dino_BusSand_App_Meta_WinStreakSave_o* Dino_BusSand_App_Meta_WinStreak__get_S (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_S
   Dino_BusSand_App_Meta_WinStreakSave_o* Dino_BusSand_App_Meta_WinStreak__get_S (const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb5400;
  if ((bRam0000000004f9c1eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5468);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb5400);
    FUN_02132f7c(PTR_DAT_04cb5470);
    bRam0000000004f9c1eb = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if (lVar3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_LiveOps__LoadBlob_object__27ef244
                      (*(undefined8 *)PTR_DAT_04cb5470,*(undefined8 *)PTR_DAT_04cb5468);
    plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar2 = lVar3;
    thunk_FUN_02134474(plVar2,lVar3);
  }
  return lVar3;
}

