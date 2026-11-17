/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StageRewards
System_Collections_Generic_List_PassportFeature_Reward__o* Dino_BusSand_App_Meta_PassportFeature__StageRewards (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, bool paid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StageRewards
   System_Collections_Generic_List_PassportFeature_Reward__o*
   Dino_BusSand_App_Meta_PassportFeature__StageRewards (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t i, bool paid, const MethodInfo* method); */

long Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468
               (undefined8 param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9bf49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb39e0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf49 = 1;
  }
  puVar1 = PTR_DAT_04caef48;
  if ((param_3 & 1) == 0) {
    lVar3 = Dino_BusSand_App_Meta_PassportFeature__FreeRewards_2245140(param_1,param_2);
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__FreeBox_2245294(param_1,param_2);
  }
  else {
    lVar3 = Dino_BusSand_App_Meta_PassportFeature__PassRewards_2245198();
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__PassBox_22452ec(param_1,param_2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__BoxRewards_2245344(uVar2);
  if (lVar3 != 0) {
    System_Collections_Generic_List_PassportFeature_Reward___AddRange_3b585dc
              (lVar3,uVar4,*(undefined8 *)PTR_DAT_04cb39e0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

