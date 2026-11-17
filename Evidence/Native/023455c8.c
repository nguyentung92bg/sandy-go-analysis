/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_BonusBankCoin
int32_t Dino_BusSand_App_Meta_PassportFeature__get_BonusBankCoin (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_BonusBankCoin
   int32_t Dino_BusSand_App_Meta_PassportFeature__get_BonusBankCoin
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_PassportFeature__get_BonusBankCoin_22455c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f9bf4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04caf650);
    bRam0000000004f9bf4b = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lVar3 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankSingleReward_224553c(param_1);
  puVar2 = PTR_DAT_04caf640;
  puVar1 = PTR_DAT_04caf638;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
            (&uStack_50,lVar3,*(undefined8 *)PTR_DAT_04caf650);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                      (&uStack_50,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      goto LAB_02345688;
    }
  } while ((int)uStack_40 != 0x3e9);
  uVar5 = (undefined4)uStack_38;
LAB_02345688:
  System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
            (&uStack_50,*(undefined8 *)puVar1);
  return uVar5;
}

