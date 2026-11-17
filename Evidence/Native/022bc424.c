/* IL2CPP: Dino.BusSand.App.UI.CupView$$<Rows>b__7_1
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_CupView___Rows_b__7_1 (Dino_BusSand_App_UI_CupView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CupView$$<Rows>b__7_1
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_CupView___Rows_b__7_1 (Dino_BusSand_App_UI_CupView_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_CupView___Rows_b__7_1_21bc424(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf810,0);
    FUN_02132f7c(PTR_DAT_04cb30b8);
    FUN_02132f7c(PTR_DAT_04cb2190);
    bRam0000000004f9be71 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_Model_222fec0(lVar4);
  uVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  puVar3 = PTR_DAT_04cb30b8;
  puVar2 = PTR_DAT_04cb2190;
  puVar1 = PTR_DAT_04caf810;
  if (lVar5 != 0) {
    uVar6 = Dino_BusSand_App_Meta_WeeklyCupModel__ClaimResult_2230df4(lVar5,uVar6);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar6 = Dino_BusSand_App_Meta_Ev07Rewards__Grant_222edfc(uVar6,*(undefined8 *)puVar2);
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar4,*(undefined8 *)puVar3);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

