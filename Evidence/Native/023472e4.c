/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$HaveAnyClaimableReward
bool Dino_BusSand_App_Meta_PassportFeature__HaveAnyClaimableReward (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$HaveAnyClaimableReward
   bool Dino_BusSand_App_Meta_PassportFeature__HaveAnyClaimableReward
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PassportFeature__HaveAnyClaimableReward_22472e4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFree_2247144(param_1,iVar1);
      if (((uVar3 & 1) != 0) ||
         (uVar3 = Dino_BusSand_App_Meta_PassportFeature__CanClaimPass_2247180(param_1,iVar1),
         (uVar3 & 1) != 0)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    } while (iVar1 < iVar2);
  }
  return 0;
}

