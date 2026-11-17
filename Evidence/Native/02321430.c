/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Persona
Dino_BusSand_App_Meta_BattleRoyalePersona_o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_Persona (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Persona
   Dino_BusSand_App_Meta_BattleRoyalePersona_o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_Persona
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_Persona_2221430(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9bdc2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2aa0);
    FUN_02132f7c(PTR_DAT_04cb2aa8);
    FUN_02132f7c(PTR_DAT_04cb2ab0);
    FUN_02132f7c(PTR_DAT_04cb2ab8);
    bRam0000000004f9bdc2 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Personas_221f600(param_1);
  puVar2 = PTR_DAT_04cb2aa8;
  puVar1 = PTR_DAT_04cb2aa0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04cb2ab8);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
      break;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = lStack_38;
  } while (*(int *)(lStack_38 + 0x10) != *(int *)(*(long *)(param_1 + 0x10) + 100));
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return lVar3;
}

