/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$SnapshotChanged
bool Dino_BusSand_App_Meta_JourneyTracking__SnapshotChanged (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$SnapshotChanged
   bool Dino_BusSand_App_Meta_JourneyTracking__SnapshotChanged (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_JourneyTracking__SnapshotChanged_2215444(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd91 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd91 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  plVar5 = *(long **)(lVar4 + 0xb8);
  lVar2 = plVar5[6];
  iVar1 = *(int *)((long)plVar5 + 0x34);
  if ((int)lVar2 != iVar1) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      plVar5 = *(long **)(*(long *)puVar3 + 0xb8);
    }
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)((long)plVar5 + 0x34) = *(undefined4 *)(*plVar5 + 0x4c);
  }
  return (int)lVar2 != iVar1;
}

