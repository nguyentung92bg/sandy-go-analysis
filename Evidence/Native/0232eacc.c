/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DaysInMonth
int32_t Dino_BusSand_App_Meta_DailyChallengeModel__DaysInMonth (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DaysInMonth
   int32_t Dino_BusSand_App_Meta_DailyChallengeModel__DaysInMonth
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

undefined4
Dino_BusSand_App_Meta_DailyChallengeModel__DaysInMonth_222eacc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uStack_14;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  lVar4 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
  uStack_14 = 0;
  uVar1 = param_2 / 86400000;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = (lVar4 >> 0x19) - (lVar4 >> 0x3f);
  }
  Dino_BusSand_App_Meta_Ev07Util__CivilFromDay_222d994
            (uVar1,(long)&uStack_8 + 4,&uStack_8,&uStack_14);
  uVar3 = 0x1f;
  if ((int)uStack_8 < 4) {
    if ((int)uStack_8 == 2) {
      uVar3 = 0x1c;
      if ((uStack_8 & 0x300000000) == 0) {
        uVar2 = uStack_8._4_4_ * -0x3d70a3d7 + 0x51eb850;
        uVar3 = 0x1c;
        if ((uVar2 >> 4 | uStack_8._4_4_ * -0x70000000) < 0xa3d70b ||
            0x28f5c28 < (uVar2 >> 2 | uStack_8._4_4_ * 0x40000000)) {
          uVar3 = 0x1d;
        }
        return uVar3;
      }
    }
    else if ((int)uStack_8 != 3) {
LAB_0232db9c:
      uVar3 = 0x1e;
      if (((int)uStack_8 - 9U & 0xfffffffd) != 0) {
        uVar3 = 0x1f;
      }
      return uVar3;
    }
    return uVar3;
  }
  if ((int)uStack_8 != 6) {
    if ((int)uStack_8 == 5) {
      return 0x1f;
    }
    if ((int)uStack_8 != 4) goto LAB_0232db9c;
  }
  return 0x1e;
}

