/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Grant
System_Collections_Generic_List_ActivityRewardEntry__o* Dino_BusSand_App_Meta_StreakTowerUtil__Grant (int32_t rewardId, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Grant
   System_Collections_Generic_List_ActivityRewardEntry__o*
   Dino_BusSand_App_Meta_StreakTowerUtil__Grant (int32_t rewardId, System_String_o* reason, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakTowerUtil__Grant_224ef30(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
                    /* try { // try from 0234ef3c to 0244ef43 has its CatchHandler @ 0234f3bc */
  if ((bRam0000000004f9bfd4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae8f8);
                    /* try { // try from 0234ef64 to 0244ef73 has its CatchHandler @ 0234f2fc */
    FUN_02132f7c(PTR_DAT_04cae900);
    FUN_02132f7c(PTR_DAT_04cae908);
                    /* try { // try from 0234ef7c to 0244ef83 has its CatchHandler @ 0234f318 */
    FUN_02132f7c(PTR_DAT_04cae918);
                    /* try { // try from 0234ef88 to 0244ef93 has its CatchHandler @ 0234f300 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfd4 = 1;
  }
                    /* try { // try from 0234efa4 to 0244efa7 has its CatchHandler @ 0234f2f0 */
  uStack_50 = 0;
                    /* try { // try from 0234efa8 to 0244efaf has its CatchHandler @ 0234f304 */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(param_1);
  puVar3 = PTR_DAT_04cae900;
  puVar2 = PTR_DAT_04cae8f8;
  puVar1 = PTR_DAT_04cabaf8;
  if (lVar6 != 0) {
                    /* try { // try from 0234efb8 to 0244efc7 has its CatchHandler @ 0234f31c */
                    /* try { // try from 0234efcc to 0244efd7 has its CatchHandler @ 0234f314 */
                    /* try { // try from 0234efd8 to 0244f057 has its CatchHandler @ 0234eb70 */
    System_Collections_Generic_List_ActivityRewardEntry___GetEnumerator_39e28ec
              (&uStack_70,lVar6,*(undefined8 *)PTR_DAT_04cae918);
    while (uVar7 = System_Collections_Generic_List_Enumerator_ActivityRewardEntry___MoveNext_35bed20
                             (&uStack_70,*(undefined8 *)puVar3), uVar5 = uStack_58,
          uVar4 = uStack_60, (uVar7 & 1) != 0) {
      if ((uStack_50 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__Add_2272578(uVar4 & 0xffffffff,uVar5,param_2,0);
      }
      else if ((int)uStack_60 == 0x3ea) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0234f058 to 0244f05f has its CatchHandler @ 0234f378 */
        Dino_BusSand_App_Meta_Profile__AddInfiniteHearts_2273010(uVar5,param_2,0);
      }
    }
                    /* try { // try from 0234f068 to 0244f077 has its CatchHandler @ 0234f350 */
    System_Collections_Generic_List_Enumerator_ActivityRewardEntry___Dispose_35bed1c
              (&uStack_70,*(undefined8 *)puVar2);
                    /* try { // try from 0234f07c to 0244f087 has its CatchHandler @ 0234f34c */
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

