/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$ReachedUnclaimed
System_Collections_Generic_List_WinStreakCheckpoint__o* Dino_BusSand_App_Meta_WinStreak__ReachedUnclaimed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$ReachedUnclaimed
   System_Collections_Generic_List_WinStreakCheckpoint__o*
   Dino_BusSand_App_Meta_WinStreak__ReachedUnclaimed (const MethodInfo* method); */

long Dino_BusSand_App_Meta_WinStreak__ReachedUnclaimed_22937e4(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar4 = PTR_DAT_04cb5438;
  puVar3 = PTR_DAT_04cb5420;
  if ((bRam0000000004f9c1f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caffc0);
    FUN_02132f7c(PTR_DAT_04caffc8);
    FUN_02132f7c(PTR_DAT_04caffd0);
    FUN_02132f7c(PTR_DAT_04cb5410);
    FUN_02132f7c(PTR_DAT_04caffd8);
    FUN_02132f7c(PTR_DAT_04cb5420);
    FUN_02132f7c(PTR_DAT_04cb5438);
    bRam0000000004f9c1f6 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar3);
  lVar7 = Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c();
  puVar5 = PTR_DAT_04cb5410;
  puVar4 = PTR_DAT_04caffc8;
  puVar3 = PTR_DAT_04caffc0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,lVar7,*(undefined8 *)PTR_DAT_04caffd8);
  lStack_50 = lStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar4);
      lVar7 = lStack_50;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)puVar3);
        return lVar6;
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar1 = *(int *)(lStack_50 + 0x14);
      lVar9 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while ((*(int *)(lVar9 + 0x18) < iVar1) ||
            (uVar8 = Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(lVar7), (uVar8 & 1) != 0));
    if (lVar6 == 0) break;
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)puVar5;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *plVar10 = lVar7;
      thunk_FUN_02134474(plVar10,lVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

