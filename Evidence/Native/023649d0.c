/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession.<>c$$<GetRankings>b__50_0
int32_t Dino_BusSand_App_Meta_RacingRobotSession___c___GetRankings_b__50_0 (Dino_BusSand_App_Meta_RacingRobotSession___c_o* __this, System_ValueTuple_RacingRanking__float__int__o a, System_ValueTuple_RacingRanking__float__int__o b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession.<>c$$<GetRankings>b__50_0
   int32_t Dino_BusSand_App_Meta_RacingRobotSession___c___GetRankings_b__50_0
   (Dino_BusSand_App_Meta_RacingRobotSession___c_o* __this,
   System_ValueTuple_RacingRanking__float__int__o a, System_ValueTuple_RacingRanking__float__int__o
   b, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_RacingRobotSession___c___GetRankings_b__50_0_22649d0
                (undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = System_Int32__CompareTo_482d6dc(param_3 + 4,*(undefined4 *)(param_2 + 4),0);
  if (((int)uVar1 == 0) &&
     (uVar1 = System_Single__CompareTo_4842498(*(undefined4 *)(param_3 + 0xc),param_2 + 0xc,0),
     (int)uVar1 == 0)) {
    uVar2 = (uint)(*(int *)(param_3 + 0x10) < *(int *)(param_2 + 0x10));
    if (*(int *)(param_2 + 0x10) < *(int *)(param_3 + 0x10)) {
      uVar2 = 0xffffffff;
    }
    return (ulong)uVar2;
  }
  return uVar1;
}

