/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$WeekStartMs
int64_t Dino_BusSand_App_Meta_Ev07Util__WeekStartMs (int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$WeekStartMs
   int64_t Dino_BusSand_App_Meta_Ev07Util__WeekStartMs (int64_t nowMs, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Ev07Util__WeekStartMs_222dbb0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = SUB168(SEXT816((long)(86399999 - param_1)) * SEXT816(-0x636ba875fd33dc87),8);
  uVar2 = param_1 / 86400000;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar2 = (lVar4 >> 0x19) - (lVar4 >> 0x3f);
  }
  uVar1 = (long)(uVar2 + 3) % 7;
  uVar3 = uVar1 + 7;
  if (uVar1 < 0xfffffffffffffff9) {
    uVar3 = uVar1;
  }
  return (uVar2 - uVar3) * 86400000;
}

