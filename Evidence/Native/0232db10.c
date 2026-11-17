/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$DaysInMonth
int32_t Dino_BusSand_App_Meta_Ev07Util__DaysInMonth (int32_t year, int32_t month, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$DaysInMonth
   int32_t Dino_BusSand_App_Meta_Ev07Util__DaysInMonth (int32_t year, int32_t month, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Ev07Util__DaysInMonth_222db10(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x1f;
  if (3 < param_2) {
    if (param_2 != 6) {
      if (param_2 == 5) {
        return 0x1f;
      }
      if (param_2 != 4) goto LAB_0232db9c;
    }
    return 0x1e;
  }
  if (param_2 == 2) {
    uVar2 = 0x1c;
    if ((param_1 & 3) == 0) {
      uVar1 = param_1 * -0x3d70a3d7 + 0x51eb850;
      uVar2 = 0x1c;
      if ((uVar1 >> 4 | param_1 * -0x70000000) < 0xa3d70b ||
          0x28f5c28 < (uVar1 >> 2 | param_1 * 0x40000000)) {
        uVar2 = 0x1d;
      }
      return uVar2;
    }
  }
  else if (param_2 != 3) {
LAB_0232db9c:
    uVar2 = 0x1e;
    if ((param_2 - 9U & 0xfffffffd) != 0) {
      uVar2 = 0x1f;
    }
    return uVar2;
  }
  return uVar2;
}

