/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_FinalRewardItems
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRewardItems (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_FinalRewardItems
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRewardItems
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRewardItems_2221834(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lVar9 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac();
  iVar7 = Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4(*(undefined8 *)(param_1 + 0x10))
  ;
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9bdec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bdec = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar10,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04caece8;
  puVar4 = PTR_DAT_04caece0;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  if (lVar9 != 0) {
    System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
              (&uStack_70,lVar9,*(undefined8 *)PTR_DAT_04caed00);
    uStack_80 = 0;
    puStack_78 = &uStack_70;
    while (uVar11 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                              (&uStack_70,*(undefined8 *)puVar5), uVar6 = uStack_60,
          (uVar11 & 1) != 0) {
      iVar8 = Dino_BusSand_App_Meta_BattleRoyaleRules__CeilToInt_2227238
                        ((float)lStack_58 / (float)(iVar7 + 1));
      uStack_90 = 0;
      uStack_88 = 0;
      System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                (&uStack_90,uVar6 & 0xffffffff,(long)iVar8,*(undefined8 *)puVar3);
      if (lVar10 == 0) {
LAB_02321a44:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *(long *)(lVar10 + 0x10);
      lVar12 = *(long *)puVar2;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_02321a44;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + 0x20) = uStack_90;
        *(undefined8 *)(lVar9 + 0x28) = uStack_88;
      }
      else {
        System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                  (lVar10,uStack_90,uStack_88,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
              (&uStack_70,*(undefined8 *)puVar4);
  }
  return lVar10;
}

