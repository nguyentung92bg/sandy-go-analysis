/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$FinalStageFor
Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o* Dino_BusSand_App_Meta_BattleRoyaleRules__FinalStageFor (int32_t playerWorth, System_Collections_Generic_List_BattleRoyaleFinalStage__o* rows, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$FinalStageFor
   Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o*
   Dino_BusSand_App_Meta_BattleRoyaleRules__FinalStageFor (int32_t playerWorth,
   System_Collections_Generic_List_BattleRoyaleFinalStage__o* rows, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleRules__FinalStageFor_22215b8(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9bdeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ac0);
    FUN_02132f7c(PTR_DAT_04cb2ac8);
    FUN_02132f7c(PTR_DAT_04cb2ad0);
    FUN_02132f7c(PTR_DAT_04cb2ad8);
    FUN_02132f7c(PTR_DAT_04cb2ae0);
    FUN_02132f7c(PTR_DAT_04cb2ae8);
    bRam0000000004f9bdeb = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    lVar6 = 0;
  }
  else {
    lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                      (param_2,0,*(undefined8 *)PTR_DAT_04cb2ae8);
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,param_2,*(undefined8 *)PTR_DAT_04cb2ad8);
    puVar3 = PTR_DAT_04cb2ac8;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar3), lVar6 = lVar4, (uVar5 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar2 = *(int *)(lStack_38 + 0x14);
      iVar1 = *(int *)(lStack_38 + 0x18);
      if (*(int *)(lStack_38 + 0x18) <= iVar2) {
        iVar1 = iVar2;
      }
      if ((iVar2 <= param_1) && (lVar6 = lStack_38, param_1 < iVar1)) break;
      if (iVar1 <= param_1) {
        lVar4 = lStack_38;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cb2ac0);
  }
  return lVar6;
}

