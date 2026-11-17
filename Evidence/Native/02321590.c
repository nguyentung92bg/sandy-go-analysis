/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_FinalStagePerson
Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalStagePerson (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_FinalStagePerson
   Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o*
   Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalStagePerson
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalStagePerson_2221590(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0x50);
  lVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRows_221fcc8();
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
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
    lVar5 = 0;
  }
  else {
    lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar5,0,*(undefined8 *)PTR_DAT_04cb2ae8);
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar5,*(undefined8 *)PTR_DAT_04cb2ad8);
    puVar4 = PTR_DAT_04cb2ac8;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar4), lVar5 = lVar6, (uVar7 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar2 = *(int *)(lStack_38 + 0x14);
      iVar1 = *(int *)(lStack_38 + 0x18);
      if (*(int *)(lStack_38 + 0x18) <= iVar2) {
        iVar1 = iVar2;
      }
      if ((iVar2 <= iVar3) && (lVar5 = lStack_38, iVar3 < iVar1)) break;
      if (iVar1 <= iVar3) {
        lVar6 = lStack_38;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cb2ac0);
  }
  return lVar5;
}

