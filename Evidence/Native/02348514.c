/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AllUnclaimedRewards
System_Collections_Generic_List_PassportFeature_Reward__o* Dino_BusSand_App_Meta_PassportFeature__AllUnclaimedRewards (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AllUnclaimedRewards
   System_Collections_Generic_List_PassportFeature_Reward__o*
   Dino_BusSand_App_Meta_PassportFeature__AllUnclaimedRewards
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PassportFeature__AllUnclaimedRewards_2248514(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04cb0390;
  puVar1 = PTR_DAT_04cb0388;
  if ((bRam0000000004f9bf76 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf76 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
            (uVar5,*(undefined8 *)puVar1);
  iVar3 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
  puVar1 = PTR_DAT_04caef48;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      uVar6 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFree_2247144(param_1,iVar3);
      if ((uVar6 & 1) != 0) {
        uVar7 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(param_1,iVar3,0);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
        Dino_BusSand_App_Meta_PassportFeature__Merge_224864c(uVar5,uVar7);
      }
      uVar6 = Dino_BusSand_App_Meta_PassportFeature__CanClaimPass_2247180(param_1,iVar3);
      if ((uVar6 & 1) != 0) {
        uVar7 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(param_1,iVar3,1);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
        Dino_BusSand_App_Meta_PassportFeature__Merge_224864c(uVar5,uVar7);
      }
      iVar3 = iVar3 + 1;
      iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    } while (iVar3 < iVar4);
  }
  return uVar5;
}

