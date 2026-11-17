/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$<HookSpend>b__22_0
void Dino_BusSand_App_Meta_YachtRacingFeature___HookSpend_b__22_0 (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t id, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$<HookSpend>b__22_0
   void Dino_BusSand_App_Meta_YachtRacingFeature___HookSpend_b__22_0
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t id, int64_t n, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_YachtRacingFeature___HookSpend_b__22_0_225c794
               (undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9c01d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9c01d = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  iVar2 = Dino_BusSand_App_Meta_Economy__ItemPrice_2203f6c(param_2,0);
  if (lVar3 != 0) {
    if ((0.0 < ((float)iVar2 / 2.0) * (float)param_3) && (*(long *)(lVar3 + 0x58) != 0)) {
      Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerSpend_2263234(*(long *)(lVar3 + 0x58),0);
      lVar3 = *(long *)(lVar3 + 0x28);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02356398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

