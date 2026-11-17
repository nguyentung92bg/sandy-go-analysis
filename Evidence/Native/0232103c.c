/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_ColdTimeMs
int64_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_ColdTimeMs (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_ColdTimeMs
   int64_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_ColdTimeMs
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_ColdTimeMs_222103c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = (long)*(int *)(lVar1 + 0x24) * 1000;
  }
  return lVar2;
}

