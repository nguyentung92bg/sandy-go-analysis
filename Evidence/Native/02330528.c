/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_SecondsLeft
int64_t Dino_BusSand_App_Meta_WeeklyCupFeature__get_SecondsLeft (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$get_SecondsLeft
   int64_t Dino_BusSand_App_Meta_WeeklyCupFeature__get_SecondsLeft
   (Dino_BusSand_App_Meta_WeeklyCupFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WeeklyCupFeature__get_SecondsLeft_2230528(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0();
  uVar2 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar1 != 0) {
    lVar1 = Dino_BusSand_App_Meta_WeeklyCupModel__RemainingMs_2230570(lVar1,uVar2);
    return lVar1 / 1000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

