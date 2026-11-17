/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$PickPersona
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__PickPersona (System_Collections_Generic_List_BattleRoyalePersona__o* rows, int32_t groupId, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$PickPersona
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__PickPersona
   (System_Collections_Generic_List_BattleRoyalePersona__o* rows, int32_t groupId, System_Random_o*
   rng, const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_BattleRoyaleRules__PickPersona_2222908(long param_1,int param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9bded & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2aa0);
    FUN_02132f7c(PTR_DAT_04cb2aa8);
    FUN_02132f7c(PTR_DAT_04cb2ab0);
    FUN_02132f7c(PTR_DAT_04cb2ab8);
    FUN_02132f7c(PTR_DAT_04cb2af8);
    bRam0000000004f9bded = 1;
  }
  puVar2 = PTR_DAT_04cb2ab8;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,param_1,*(undefined8 *)PTR_DAT_04cb2ab8);
    puVar1 = PTR_DAT_04cb2aa8;
    iVar3 = 0;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_50 + 0x14) == param_2) {
        iVar3 = *(int *)(lStack_50 + 0x18) + iVar3;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cb2aa0);
    if (0 < iVar3) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar3 = (**(code **)(*param_3 + 0x198))(param_3,0,iVar3,*(undefined8 *)(*param_3 + 0x1a0));
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_78,param_1,*(undefined8 *)puVar2);
      lStack_50 = lStack_68;
      puStack_58 = puStack_70;
      uStack_60 = uStack_78;
      uStack_78 = 0;
      puStack_70 = &uStack_60;
      do {
        do {
          uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_60,*(undefined8 *)puVar1);
          if ((uVar4 & 1) == 0) {
            uVar5 = 0;
            goto LAB_02322aa0;
          }
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        } while (*(int *)(lStack_50 + 0x14) != param_2);
        iVar3 = iVar3 - *(int *)(lStack_50 + 0x18);
      } while (-1 < iVar3);
      uVar5 = *(undefined4 *)(lStack_50 + 0x10);
LAB_02322aa0:
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_60,*(undefined8 *)PTR_DAT_04cb2aa0);
      return uVar5;
    }
  }
  return 0;
}

