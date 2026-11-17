/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$CivilFromDay
void Dino_BusSand_App_Meta_Ev07Util__CivilFromDay (int64_t day, int32_t* year, int32_t* month, int32_t* dom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Util$$CivilFromDay
   void Dino_BusSand_App_Meta_Ev07Util__CivilFromDay (int64_t day, int32_t* year, int32_t* month,
   int32_t* dom, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Ev07Util__CivilFromDay_222d994
               (long param_1,int *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1 + 0xafa6c;
  lVar1 = param_1 + 0x8bfbc;
  if (-1 < lVar4) {
    lVar1 = lVar4;
  }
  lVar4 = lVar4 + (lVar1 / 0x23ab1) * -0x23ab1;
  lVar6 = SUB168(SEXT816(lVar4) * SEXT816(-0x2ce33e6c02ce33e7),8);
  lVar7 = SUB168(SEXT816(lVar4) * SEXT816(0x1a537e05fff1a537),8) - lVar4;
  lVar6 = ((lVar6 >> 8) - (lVar6 >> 0x3f)) + lVar4 + lVar4 / 0x8eac +
          ((lVar7 >> 0x11) - (lVar7 >> 0x3f));
  lVar7 = SUB168(SEXT816(lVar6) * SEXT816(-0x2ce33e6c02ce33e7),8);
  iVar2 = (int)(lVar6 / 0x16d) + (int)(lVar1 / 0x23ab1) * 400;
  lVar6 = ((lVar7 >> 8) - (lVar7 >> 0x3f)) + lVar4 + lVar6 / 0x8e94 + (lVar6 / 0x16d) * -0x16d;
  lVar4 = lVar6 * 5 + 2;
  lVar1 = lVar4 / 0x99;
  auVar3 = SEXT816(lVar1 * 0x99 + 2) * SEXT816(-0x6666666666666667);
  iVar5 = 3;
  if (0x5f9 < lVar4) {
    iVar5 = -9;
  }
  iVar5 = iVar5 + (int)lVar1;
  *param_4 = ((int)(auVar3._8_8_ >> 1) - (auVar3._12_4_ >> 0x1f)) + (int)lVar6 + 1;
  if (iVar5 < 3) {
    iVar2 = iVar2 + 1;
  }
  *param_3 = iVar5;
  *param_2 = iVar2;
  return;
}

