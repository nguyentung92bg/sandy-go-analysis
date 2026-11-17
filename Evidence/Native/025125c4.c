/* IL2CPP: Dino.BusSand.Core.Road$$AnyBusLeavingMoving
bool Dino_BusSand_Core_Road__AnyBusLeavingMoving (Dino_BusSand_Core_Road_o* __this, int64_t tick, int32_t graceTicks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$AnyBusLeavingMoving
   bool Dino_BusSand_Core_Road__AnyBusLeavingMoving (Dino_BusSand_Core_Road_o* __this, int64_t tick,
   int32_t graceTicks, const MethodInfo* method); */

bool Dino_BusSand_Core_Road__AnyBusLeavingMoving_24125c4(long param_1,long param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Dino_BusSand_Core_Road__get_AnyBusLeaving_24121d8();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 - *(long *)(param_1 + 0xa8) <= (long)param_3;
  }
  return bVar1;
}

