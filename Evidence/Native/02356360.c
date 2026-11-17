/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnPlayerSpend
void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerSpend (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, float amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnPlayerSpend
   void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerSpend
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, float amount, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerSpend_2256360(float param_1,long param_2)

{
  long lVar1;
  
  if ((0.0 < param_1) && (*(long *)(param_2 + 0x58) != 0)) {
    Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerSpend_2263234(*(long *)(param_2 + 0x58),0);
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02356398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

