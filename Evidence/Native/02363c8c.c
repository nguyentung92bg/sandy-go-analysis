/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$PauseAllForLastLevel
void Dino_BusSand_App_Meta_RacingRobotSession__PauseAllForLastLevel (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t playerProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$PauseAllForLastLevel
   void Dino_BusSand_App_Meta_RacingRobotSession__PauseAllForLastLevel
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t playerProgress, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSession__PauseAllForLastLevel_2263c8c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_DAT_04caa200;
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
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = System_Math__Max_4830fc8(0,param_2 + -1,0);
  puVar3 = PTR_DAT_04cb4588;
  puVar2 = PTR_DAT_04cb4468;
  puVar1 = PTR_DAT_04cb4460;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_68,*(undefined8 *)puVar2), lVar4 = lStack_58, (uVar6 & 1) != 0
          ) {
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (param_2 <= *(int *)(lStack_58 + 0x9c)) {
        Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lStack_58,uVar5,0);
      }
      *(undefined4 *)(lVar4 + 0xa0) = 2;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_68,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x48) != 0) {
      System_Collections_Generic_HashSet_object___Clear_37e59fc
                (*(long *)(param_1 + 0x48),*(undefined8 *)puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

