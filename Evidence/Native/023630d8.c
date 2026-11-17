/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$OnPlayerFailed
void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerFailed (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$OnPlayerFailed
   void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerFailed
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerFailed_22630d8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02363058 with catch @ 023630d8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02363048 with catch @ 023630dc
                        */
  if ((bRam0000000004f9c03e & 1) == 0) {
                    /* try { // try from 023630f8 to 024630fb has its CatchHandler @ 02363114 */
                    /* try { // try from 023630fc to 02463117 has its CatchHandler @ 02362f30 */
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
                    /* catch() { ... } // from try @ 023630f8 with catch @ 02363114 */
    FUN_02132f7c(PTR_DAT_04cb4470);
                    /* try { // try from 02363118 to 0246311f has its CatchHandler @ 02363128 */
                    /* try { // try from 02363120 to 0246312b has its CatchHandler @ 02362f30 */
    FUN_02132f7c(PTR_DAT_04cb4478);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02363118 with catch @ 02363128
                        */
    bRam0000000004f9c03e = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(char *)(param_1 + 0x6d) == '\0') {
    Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc(param_1);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
    puVar1 = PTR_DAT_04cb4468;
    while (uVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_38,*(undefined8 *)puVar1), (uVar2 & 1) != 0) {
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_RacingRobotAgent__Advance_225f17c
                (0,*(undefined4 *)(param_1 + 0x60),lStack_28,*(undefined4 *)(param_1 + 0x50),1);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cb4460);
    Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot_2260e0c(param_1);
  }
  return;
}

