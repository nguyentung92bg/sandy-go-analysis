/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$ApplyPayProtectNormalLevel
void Dino_BusSand_App_Meta_RacingRobotSession__ApplyPayProtectNormalLevel (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$ApplyPayProtectNormalLevel
   void Dino_BusSand_App_Meta_RacingRobotSession__ApplyPayProtectNormalLevel
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__ApplyPayProtectNormalLevel_2263e54(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar4 = PTR_DAT_04cb4410;
  puVar3 = PTR_DAT_04cb4408;
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
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar3);
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
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_68,*(undefined8 *)puVar7);
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_68,*(undefined8 *)puVar6);
        uVar1 = *(undefined4 *)(param_1 + 0x50);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Collections_Generic_HashSet_object____ctor_37e5358(uVar10,*(undefined8 *)puVar4);
        Dino_BusSand_App_Meta_RacingRobotSession__ReselectCompeting_22640b4
                  (param_1,lVar8,uVar1,uVar10);
        return;
      }
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_58 + 0x9c) < *(int *)(param_1 + 0x50)) break;
      *(undefined4 *)(lStack_58 + 0xa0) = 1;
    }
    if (lVar8 == 0) break;
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar12 = *(long *)puVar5;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lStack_58;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar8,lStack_58,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

