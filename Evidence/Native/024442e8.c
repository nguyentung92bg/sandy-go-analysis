/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$<BusStreak>g__Points|42_7
int32_t Dino_BusSand_Cheat_AutoQa___BusStreak_g__Points_42_7 (int32_t t, Dino_BusSand_Cheat_AutoQa___c__DisplayClass42_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$<BusStreak>g__Points|42_7
   int32_t Dino_BusSand_Cheat_AutoQa___BusStreak_g__Points_42_7 (int32_t t,
   Dino_BusSand_Cheat_AutoQa___c__DisplayClass42_0_o* , const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa___BusStreak_g__Points_42_7_23442e8(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar4 = param_2[1];
    uVar2 = *(undefined1 *)(lVar3 + 0x54);
    uVar1 = *(undefined4 *)(lVar3 + 0x58);
    *(undefined1 *)(lVar3 + 0x54) = 1;
    *(undefined4 *)(lVar3 + 0x58) = param_1;
    if (lVar4 != 0) {
      Dino_BusSand_App_Meta_StreakRateFeature__WinAddScore_224c840(lVar4,lVar3,0);
      lVar3 = *param_2;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x58) = uVar1;
        *(undefined1 *)(lVar3 + 0x54) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

