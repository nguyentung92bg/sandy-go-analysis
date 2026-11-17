/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_CurrentWinCount
int32_t Dino_BusSand_App_Meta_YachtRacingData__get_CurrentWinCount (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_CurrentWinCount
   int32_t Dino_BusSand_App_Meta_YachtRacingData__get_CurrentWinCount
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingData__get_CurrentWinCount_2255490(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x14);
  }
  return uVar1;
}

