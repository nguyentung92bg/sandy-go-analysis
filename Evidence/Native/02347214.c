/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CanClaimFreeForHud
bool Dino_BusSand_App_Meta_PassportFeature__CanClaimFreeForHud (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CanClaimFreeForHud
   bool Dino_BusSand_App_Meta_PassportFeature__CanClaimFreeForHud
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__CanClaimFreeForHud_2247214
               (undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uStack_18;
  
  uVar2 = Dino_BusSand_App_Meta_PassportFeature__IsFreeClaimed_2246fe4();
  if ((uVar2 & 1) != 0) {
    return false;
  }
  uVar1 = Dino_BusSand_App_Meta_PassportFeature__get_DisplayedKeysForHud_22469e8();
  uStack_18 = 0;
  Dino_BusSand_App_Meta_PassportFeature__Simulate_2246ae8
            (param_1,uVar1,(long)&uStack_18 + 4,&uStack_18);
  return param_2 < uStack_18._4_4_;
}

