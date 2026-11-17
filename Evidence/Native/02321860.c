/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$SplitReward
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_BattleRoyaleRules__SplitReward (System_Collections_Generic_List_KeyValuePair_int__long___o* pool, int32_t aliveBots, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$SplitReward
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_BattleRoyaleRules__SplitReward
   (System_Collections_Generic_List_KeyValuePair_int__long___o* pool, int32_t aliveBots, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleRules__SplitReward_2221860(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
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
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar8,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04caece8;
  puVar4 = PTR_DAT_04caece0;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  if (param_1 != 0) {
    System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
              (&uStack_70,param_1,*(undefined8 *)PTR_DAT_04caed00);
    uStack_80 = 0;
    puStack_78 = &uStack_70;
    while (uVar9 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                             (&uStack_70,*(undefined8 *)puVar5), uVar6 = uStack_60, (uVar9 & 1) != 0
          ) {
      iVar7 = Dino_BusSand_App_Meta_BattleRoyaleRules__CeilToInt_2227238
                        ((float)lStack_58 / (float)(param_2 + 1));
      uStack_90 = 0;
      uStack_88 = 0;
      System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                (&uStack_90,uVar6 & 0xffffffff,(long)iVar7,*(undefined8 *)puVar3);
      if (lVar8 == 0) {
LAB_02321a44:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_02321a44;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + 0x20) = uStack_90;
        *(undefined8 *)(lVar10 + 0x28) = uStack_88;
      }
      else {
        System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                  (lVar8,uStack_90,uStack_88,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
              (&uStack_70,*(undefined8 *)puVar4);
  }
  return lVar8;
}

