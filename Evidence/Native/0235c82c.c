/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$<HookSpend>b__22_1
void Dino_BusSand_App_Meta_YachtRacingFeature___HookSpend_b__22_1 (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t price, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$<HookSpend>b__22_1
   void Dino_BusSand_App_Meta_YachtRacingFeature___HookSpend_b__22_1
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t price, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature___HookSpend_b__22_1_225c82c
               (undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((0.0 < (float)param_2) && (*(long *)(lVar1 + 0x58) != 0)) {
    Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerSpend_2263234(*(long *)(lVar1 + 0x58),0);
    lVar1 = *(long *)(lVar1 + 0x28);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02356398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

