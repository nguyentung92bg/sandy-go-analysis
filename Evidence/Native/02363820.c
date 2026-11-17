/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$CheckAnyBotWin
bool Dino_BusSand_App_Meta_RacingRobotSession__CheckAnyBotWin (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$CheckAnyBotWin
   bool Dino_BusSand_App_Meta_RacingRobotSession__CheckAnyBotWin
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_RacingRobotSession__CheckAnyBotWin_2263820(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c040 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb4478);
    bRam0000000004f9c040 = 1;
  }
  puVar2 = PTR_DAT_04cb4468;
  puVar1 = PTR_DAT_04cb4460;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (*(int *)(lStack_38 + 0x9c) < *(int *)(*(long *)(param_1 + 0x18) + 0x18));
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return uVar3 & 1;
}

