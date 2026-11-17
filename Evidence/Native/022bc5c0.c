/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$Stakes
System_Collections_Generic_List_IStakeActivity__o* Dino_BusSand_App_UI_EventStakeUi__Stakes (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$Stakes
   System_Collections_Generic_List_IStakeActivity__o* Dino_BusSand_App_UI_EventStakeUi__Stakes
   (const MethodInfo* method); */

long Dino_BusSand_App_UI_EventStakeUi__Stakes_21bc5c0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_04cadaa0;
  if ((bRam0000000004f9bac8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04caf8d0);
    FUN_02132f7c(PTR_DAT_04caf8d8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bac8 = 1;
  }
  puVar2 = PTR_DAT_04cac668;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar4 = Dino_BusSand_App_Meta_LiveOps__AtStake_22420d0(uVar8,0);
  uVar5 = Dino_BusSand_App_Meta_WinStreak__get_WouldLoseProgress_229451c(0);
  puVar3 = PTR_DAT_04caf8d0;
  if ((uVar5 & 1) == 0) {
    return lVar4;
  }
  lVar6 = *(long *)PTR_DAT_04caf8d0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0x10);
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    lVar6 = *(long *)PTR_DAT_04caf8d8;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        thunk_FUN_02134474();
        return lVar4;
      }
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar4,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

