/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$RemainSeconds
int32_t Dino_BusSand_App_Meta_YachtRacingData__RemainSeconds (Dino_BusSand_App_Meta_YachtRacingData_o* __this, int64_t now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$RemainSeconds
   int32_t Dino_BusSand_App_Meta_YachtRacingData__RemainSeconds
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, int64_t now, const MethodInfo* method); */

int Dino_BusSand_App_Meta_YachtRacingData__RemainSeconds_2258fdc(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  
  uVar3 = Dino_BusSand_App_Meta_YachtRacingData__IsValid_2255404();
  if ((uVar3 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    auVar1 = SEXT816(*(long *)(param_1 + 0x70) - param_2) * SEXT816(0x20c49ba5e353f7cf);
    iVar2 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  }
  return iVar2;
}

