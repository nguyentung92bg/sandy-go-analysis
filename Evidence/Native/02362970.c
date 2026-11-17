/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$TriggerForceEnd
void Dino_BusSand_App_Meta_RacingRobotSession__TriggerForceEnd (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$TriggerForceEnd
   void Dino_BusSand_App_Meta_RacingRobotSession__TriggerForceEnd
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__TriggerForceEnd_2262970(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c04c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb4478);
    bRam0000000004f9c04c = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(char *)(param_1 + 0x6d) == '\0') {
    *(undefined1 *)(param_1 + 0x6d) = 1;
    if (*(long *)(param_1 + 0x30) != 0) {
      Dino_BusSand_App_Meta_RacingRobotSave__ClearAgentSnapshot_225fbb0();
    }
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_02362aac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02362a08 to 02462a0b has its CatchHandler @ 02362a30 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
    puVar1 = PTR_DAT_04cb4468;
                    /* try { // try from 02362a0c to 02462a47 has its CatchHandler @ 02362690 */
    lVar4 = 0;
    iVar2 = -1;
    while (iVar6 = iVar2, lVar5 = lVar4,
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_48,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02362a08 with catch @ 02362a30
                        */
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = lStack_38;
      iVar2 = *(int *)(lStack_38 + 0x9c);
      if (*(int *)(lStack_38 + 0x9c) <= iVar6) {
        lVar4 = lVar5;
        iVar2 = iVar6;
      }
    }
                    /* try { // try from 02362a5c to 02462ac3 has its CatchHandler @ 02362690 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cb4460);
    if (lVar5 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_02362aac;
      Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0
                (lVar5,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),0);
    }
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return;
}

