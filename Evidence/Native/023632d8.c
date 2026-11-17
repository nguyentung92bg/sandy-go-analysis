/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$TriggerPayProtect
void Dino_BusSand_App_Meta_RacingRobotSession__TriggerPayProtect (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$TriggerPayProtect
   void Dino_BusSand_App_Meta_RacingRobotSession__TriggerPayProtect
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__TriggerPayProtect_22632d8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = PTR_DAT_04cb4410;
  puVar4 = PTR_DAT_04cb4408;
  puVar3 = PTR_DAT_04caa200;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) + -1 <= iVar1) {
    if ((bRam0000000004f9c047 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb4460);
      FUN_02132f7c(PTR_DAT_04cb4468);
      FUN_02132f7c(PTR_DAT_04cb4470);
      FUN_02132f7c(PTR_DAT_04cb4588);
      FUN_02132f7c(PTR_DAT_04cb4478);
      FUN_02132f7c(PTR_DAT_04caa200);
      bRam0000000004f9c047 = 1;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    lStack_58 = 0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = System_Math__Max_4830fc8(0,iVar1 + -1,0);
    puVar5 = PTR_DAT_04cb4588;
    puVar4 = PTR_DAT_04cb4468;
    puVar3 = PTR_DAT_04cb4460;
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_68,*(undefined8 *)puVar4), lVar9 = lStack_58,
            (uVar10 & 1) != 0) {
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (iVar1 <= *(int *)(lStack_58 + 0x9c)) {
          Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lStack_58,uVar8,0);
        }
        *(undefined4 *)(lVar9 + 0xa0) = 2;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_68,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x48) != 0) {
        System_Collections_Generic_HashSet_object___Clear_37e59fc
                  (*(long *)(param_1 + 0x48),*(undefined8 *)puVar5);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c049 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb43f8);
    FUN_02132f7c(PTR_DAT_04cb43f0);
    FUN_02132f7c(PTR_DAT_04cb4400);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04cb4408);
    FUN_02132f7c(PTR_DAT_04cb4410);
    bRam0000000004f9c049 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)puVar4);
  puVar7 = PTR_DAT_04cb4468;
  puVar6 = PTR_DAT_04cb4460;
  puVar5 = PTR_DAT_04cb4400;
  puVar4 = PTR_DAT_04cb43f8;
  puVar3 = PTR_DAT_04cb43f0;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
  while( true ) {
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_68,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_68,*(undefined8 *)puVar6);
        uVar8 = *(undefined4 *)(param_1 + 0x50);
        uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Collections_Generic_HashSet_object____ctor_37e5358(uVar11,*(undefined8 *)puVar4);
        Dino_BusSand_App_Meta_RacingRobotSession__ReselectCompeting_22640b4
                  (param_1,lVar9,uVar8,uVar11);
        return;
      }
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_58 + 0x9c) < *(int *)(param_1 + 0x50)) break;
      *(undefined4 *)(lStack_58 + 0xa0) = 1;
    }
    if (lVar9 == 0) break;
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar13 = *(long *)puVar5;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lStack_58;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar9,lStack_58,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

