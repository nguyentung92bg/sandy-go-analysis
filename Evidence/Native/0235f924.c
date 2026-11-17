/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$SpeedVars
System_Collections_Generic_Dictionary_string__double__o* Dino_BusSand_App_Meta_RacingRobotAgent__SpeedVars (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$SpeedVars
   System_Collections_Generic_Dictionary_string__double__o*
   Dino_BusSand_App_Meta_RacingRobotAgent__SpeedVars (Dino_BusSand_App_Meta_RacingRobotAgent_o*
   __this, int32_t progress, const MethodInfo* method); */

long Dino_BusSand_App_Meta_RacingRobotAgent__SpeedVars_225f924(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cb4380;
  puVar1 = PTR_DAT_04cb4378;
  if ((bRam0000000004f9c033 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4388);
    FUN_02132f7c(PTR_DAT_04cb4380);
    FUN_02132f7c(PTR_DAT_04cb4378);
    FUN_02132f7c(PTR_DAT_04cb4390);
    FUN_02132f7c(PTR_DAT_04cb43c0);
    FUN_02132f7c(PTR_DAT_04cb43c8);
    FUN_02132f7c(PTR_DAT_04cb43d0);
    FUN_02132f7c(PTR_DAT_04cb43d8);
                    /* try { // try from 0235f9c0 to 0245fa6f has its CatchHandler @ 0235f9c0
                       catch() { ... } // from try @ 0235f9c0 with catch @ 0235f9c0
                       catch() { ... } // from try @ 0235fa7c with catch @ 0235f9c0
                       catch() { ... } // from try @ 0235fb28 with catch @ 0235f9c0
                       catch() { ... } // from try @ 0235fb7c with catch @ 0235f9c0 */
    FUN_02132f7c(PTR_DAT_04cb43e0);
    bRam0000000004f9c033 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__double____ctor_34a5244(lVar7,*(undefined8 *)puVar2);
  puVar6 = PTR_DAT_04cb43e0;
  puVar5 = PTR_DAT_04cb43d8;
  puVar4 = PTR_DAT_04cb43d0;
  puVar3 = PTR_DAT_04cb43c0;
  puVar2 = PTR_DAT_04cb4390;
  puVar1 = PTR_DAT_04cb4388;
  if (lVar7 != 0) {
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)param_2,lVar7,*(undefined8 *)PTR_DAT_04cb43c8,*(undefined8 *)PTR_DAT_04cb4388
              );
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)*(float *)(param_1 + 0x1c),lVar7,*(undefined8 *)puVar2,*(undefined8 *)puVar1)
    ;
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)*(int *)(param_1 + 0x18),lVar7,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
                    /* try { // try from 0235fa70 to 0245fa7b has its CatchHandler @ 0235faf8 */
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)*(float *)(param_1 + 0x20),lVar7,*(undefined8 *)puVar6,*(undefined8 *)puVar1)
    ;
                    /* try { // try from 0235fa7c to 0245fb23 has its CatchHandler @ 0235f9c0 */
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)*(float *)(param_1 + 0x24),lVar7,*(undefined8 *)puVar5,*(undefined8 *)puVar1)
    ;
    System_Collections_Generic_Dictionary_object__double___Add_34a5fbc
              ((double)*(float *)(param_1 + 0x28),lVar7,*(undefined8 *)puVar3,*(undefined8 *)puVar1)
    ;
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

