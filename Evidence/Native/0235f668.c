/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$RollFail
bool Dino_BusSand_App_Meta_RacingRobotAgent__RollFail (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, bool playerJustFailed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$RollFail
   bool Dino_BusSand_App_Meta_RacingRobotAgent__RollFail (Dino_BusSand_App_Meta_RacingRobotAgent_o*
   __this, bool playerJustFailed, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_RacingRobotAgent__RollFail_225f668(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  double dVar7;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f9c031 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4398);
    FUN_02132f7c(PTR_DAT_04cb43a0);
    FUN_02132f7c(PTR_DAT_04cb43a8);
    FUN_02132f7c(PTR_DAT_04cb43b0);
    FUN_02132f7c(PTR_DAT_04cb43b8);
    bRam0000000004f9c031 = 1;
  }
  puVar2 = PTR_DAT_04cb43b0;
  lVar4 = *(long *)(param_1 + 0x78);
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
    return 0;
  }
  System_Collections_Generic_List_RacingFailRule___GetEnumerator_3a98acc
            (&uStack_78,lVar4,*(undefined8 *)PTR_DAT_04cb43b0);
  puVar1 = PTR_DAT_04cb43a0;
  puStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  do {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_RacingFailRule___MoveNext_35dabb8
                        (&uStack_60,*(undefined8 *)puVar1);
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 0235f76c to 0245f783 has its CatchHandler @ 0235f7bc */
        System_Collections_Generic_List_Enumerator_RacingFailRule___Dispose_35dabb4
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cb4398);
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* try { // try from 0235f784 to 0245f7df has its CatchHandler @ 0235f4bc */
        System_Collections_Generic_List_RacingFailRule___GetEnumerator_3a98acc
                  (&uStack_78,*(long *)(param_1 + 0x78),*(undefined8 *)puVar2);
        uStack_50 = uStack_68;
        puStack_58 = puStack_70;
        uStack_60 = uStack_78;
        uStack_78 = 0;
        puStack_70 = &uStack_60;
        goto LAB_0235f7a4;
      }
                    /* try { // try from 0235f738 to 0245f73f has its CatchHandler @ 0235f7c4 */
    } while ((int)uStack_50 != 5);
    plVar6 = *(long **)(param_1 + 0x88);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar3 = uStack_50._4_4_;
                    /* try { // try from 0235f74c to 0245f757 has its CatchHandler @ 0235f7c0 */
    dVar7 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  } while (fVar3 <= (float)dVar7);
  goto LAB_0235f808;
LAB_0235f7a4:
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_RacingFailRule___MoveNext_35dabb8
                      (&uStack_60,*(undefined8 *)puVar1);
    if ((uVar5 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_RacingFailRule___Dispose_35dabb4
                (&uStack_60,*(undefined8 *)PTR_DAT_04cb4398);
      return 0;
    }
    fVar3 = uStack_50._4_4_;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f76c with catch @ 0235f7bc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f74c with catch @ 0235f7c0
                        */
    if ((int)uStack_50 == 1) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0235f738 with catch @ 0235f7c4
                        */
      plVar6 = *(long **)(param_1 + 0x88);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      dVar7 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    }
    else {
                    /* try { // try from 0235f7e0 to 0245f7e3 has its CatchHandler @ 0235f804 */
                    /* try { // try from 0235f7e4 to 0245f807 has its CatchHandler @ 0235f4bc */
      if (((int)uStack_50 != 4) || ((param_2 & 1) == 0)) goto LAB_0235f7a4;
      plVar6 = *(long **)(param_1 + 0x88);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      dVar7 = (double)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    }
                    /* catch() { ... } // from try @ 0235f7e0 with catch @ 0235f804 */
  } while (fVar3 <= (float)dVar7);
LAB_0235f808:
                    /* try { // try from 0235f808 to 0245f80f has its CatchHandler @ 0235f818 */
                    /* try { // try from 0235f810 to 0245f81b has its CatchHandler @ 0235f4bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0235f808 with catch @ 0235f818
                        */
  System_Collections_Generic_List_Enumerator_RacingFailRule___Dispose_35dabb4
            (&uStack_60,*(undefined8 *)PTR_DAT_04cb4398);
  return 1;
}

