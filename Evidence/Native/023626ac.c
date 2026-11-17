/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$EnforcePayProtectInTick
void Dino_BusSand_App_Meta_RacingRobotSession__EnforcePayProtectInTick (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$EnforcePayProtectInTick
   void Dino_BusSand_App_Meta_RacingRobotSession__EnforcePayProtectInTick
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__EnforcePayProtectInTick_22626ac(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9c04b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb44f8);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c04b = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 < *(int *)(*(long *)(param_1 + 0x18) + 0x18) + -1) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_023628c8;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
      puVar3 = PTR_DAT_04cb44f8;
      puVar2 = PTR_DAT_04cb4468;
      uStack_48 = puStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      uStack_68 = 0;
      puStack_60 = &uStack_50;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_50,*(undefined8 *)puVar2), lVar4 = lStack_40,
            (uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                          (*(long *)(param_1 + 0x48),lStack_40,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lVar4 + 0xa0) == 0) {
            if (*(int *)(param_1 + 0x50) < *(int *)(lVar4 + 0x9c)) {
              Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0
                        (lVar4,*(int *)(param_1 + 0x50),0);
              *(undefined4 *)(lVar4 + 0xa0) = 2;
            }
          }
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = System_Math__Max_4830fc8(0,iVar1 + -1,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_023628c8;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
      puVar2 = PTR_DAT_04cb4468;
      uStack_48 = puStack_60;
      uStack_50 = uStack_68;
      lStack_40 = lStack_58;
      uStack_68 = 0;
      puStack_60 = &uStack_50;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_50,*(undefined8 *)puVar2), lVar4 = lStack_40,
            (uVar6 & 1) != 0) {
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(param_1 + 0x50) <= *(int *)(lStack_40 + 0x9c)) {
          Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lStack_40,uVar5,0);
        }
        *(undefined4 *)(lVar4 + 0xa0) = 2;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_50,*(undefined8 *)PTR_DAT_04cb4460);
    return;
  }
LAB_023628c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

