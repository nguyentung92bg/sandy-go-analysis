/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$CompleteToday
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_DailyChallengeFeature__CompleteToday (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$CompleteToday
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_DailyChallengeFeature__CompleteToday
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_DailyChallengeFeature__CompleteToday_222fb4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9be65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf810);
    FUN_02132f7c(PTR_DAT_04cb3088);
    FUN_02132f7c(PTR_DAT_04cb2188);
    bRam0000000004f9be65 = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Model_222f838(param_1);
  uVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  puVar3 = PTR_DAT_04cb3088;
  puVar2 = PTR_DAT_04cb2188;
  puVar1 = PTR_DAT_04caf810;
  if (lVar4 != 0) {
    uVar5 = Dino_BusSand_App_Meta_DailyChallengeModel__Complete_222e2a0(lVar4,uVar5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = Dino_BusSand_App_Meta_Ev07Rewards__Grant_222edfc(uVar5,*(undefined8 *)puVar2);
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar3);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

