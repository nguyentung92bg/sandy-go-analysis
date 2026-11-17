/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$WeekStartMs
int64_t Dino_BusSand_App_Meta_LiveClock__WeekStartMs (int64_t utcMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveClock$$WeekStartMs
   int64_t Dino_BusSand_App_Meta_LiveClock__WeekStartMs (int64_t utcMs, const MethodInfo* method);
    */

long Dino_BusSand_App_Meta_LiveClock__WeekStartMs_22406c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (param_1 / 86400000 + -4) % 7;
  uVar2 = uVar1 + 7;
  if (uVar1 < 0xfffffffffffffff9) {
    uVar2 = uVar1;
  }
  return (param_1 / 86400000 - uVar2) * 86400000;
}

