/* IL2CPP: Dino.BusSand.App.UI.DailyView.<>c__DisplayClass10_0$$<Rows>b__0
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_DailyView___c__DisplayClass10_0___Rows_b__0 (Dino_BusSand_App_UI_DailyView___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyView.<>c__DisplayClass10_0$$<Rows>b__0
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_DailyView___c__DisplayClass10_0___Rows_b__0
   (Dino_BusSand_App_UI_DailyView___c__DisplayClass10_0_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_DailyView___c__DisplayClass10_0___Rows_b__0_21bb878(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((bRam0000000004f9be66 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf810,uVar1,0);
    FUN_02132f7c(PTR_DAT_04cb3088);
    FUN_02132f7c(PTR_DAT_04cb3090);
    bRam0000000004f9be66 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Model_222f838(lVar7);
  uVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  puVar4 = PTR_DAT_04cb3090;
  puVar3 = PTR_DAT_04cb3088;
  puVar2 = PTR_DAT_04caf810;
  if (lVar5 != 0) {
    uVar6 = Dino_BusSand_App_Meta_DailyChallengeModel__ClaimMilestone_222e8f8(lVar5,uVar1,uVar6);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = Dino_BusSand_App_Meta_Ev07Rewards__Grant_222edfc(uVar6,*(undefined8 *)puVar4);
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar7,*(undefined8 *)puVar3);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

