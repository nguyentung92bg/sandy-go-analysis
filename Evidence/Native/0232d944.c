/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$DayOf
int64_t Dino_BusSand_App_Meta_Ev07Util__DayOf (int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$DayOf
   int64_t Dino_BusSand_App_Meta_Ev07Util__DayOf (int64_t nowMs, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_Ev07Util__DayOf_222d944(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = SUB168(SEXT816((long)(86399999 - param_1)) * SEXT816(-0x636ba875fd33dc87),8);
  uVar1 = param_1 / 86400000;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar1 = (lVar2 >> 0x19) - (lVar2 >> 0x3f);
  }
  return uVar1;
}

