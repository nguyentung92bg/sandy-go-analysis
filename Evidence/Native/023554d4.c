/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_PlayerRanking
int32_t Dino_BusSand_App_Meta_YachtRacingData__get_PlayerRanking (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_PlayerRanking
   int32_t Dino_BusSand_App_Meta_YachtRacingData__get_PlayerRanking
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingData__get_PlayerRanking_22554d4(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
  }
  return uVar1;
}

