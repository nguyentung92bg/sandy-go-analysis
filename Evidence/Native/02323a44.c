/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$GiveReward
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_BattleRoyaleCore__GiveReward (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$GiveReward
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__GiveReward (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__GiveReward_2223a44(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9bdc6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacec0);
    bRam0000000004f9bdc6 = 1;
  }
  puStack_68 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar8 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
  if (lVar8 == 0) {
    return 0;
  }
  lVar8 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRewardItems_2221834(param_1);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
      return 0;
    }
    System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
              (&uStack_90,lVar8,*(undefined8 *)PTR_DAT_04caed00);
    puVar4 = PTR_DAT_04caece8;
    puVar3 = PTR_DAT_04cacec0;
    puVar2 = PTR_DAT_04cabaf8;
    puStack_68 = puStack_88;
    uStack_70 = uStack_90;
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    uStack_90 = 0;
    puStack_88 = &uStack_70;
    while (uVar9 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                             (&uStack_70,*(undefined8 *)puVar4), uVar6 = uStack_58,
          uVar5 = uStack_60, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(puVar2);
        cRam0000000004f9b894 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar2;
      }
      if (*(long *)(*(long *)(lVar10 + 0xb8) + 0x10) != 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__Add_2272578(uVar5 & 0xffffffff,uVar6,*(undefined8 *)puVar3,0)
        ;
      }
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
              (&uStack_70,*(undefined8 *)PTR_DAT_04caece0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x7c);
      iVar7 = Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4();
      Dino_BusSand_App_Meta_BattleRoyaleTrack__Reward_2223cd4(uVar1,iVar7 + 1,lVar8);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

