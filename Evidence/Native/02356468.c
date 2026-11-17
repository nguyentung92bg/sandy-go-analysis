/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_PlayerBot
Dino_BusSand_App_Meta_YachtRacingBot_o* Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_PlayerBot
   Dino_BusSand_App_Meta_YachtRacingBot_o* Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9bffc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf718);
    FUN_02132f7c(PTR_DAT_04caf720);
    FUN_02132f7c(PTR_DAT_04caf728);
    FUN_02132f7c(PTR_DAT_04caf730);
    bRam0000000004f9bffc = 1;
  }
  puVar2 = PTR_DAT_04caf720;
  puVar1 = PTR_DAT_04caf718;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04caf730);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_38,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
      break;
    }
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = lStack_28;
  } while (*(char *)(lStack_28 + 0x2c) == '\0');
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_38,*(undefined8 *)puVar1);
  return lVar4;
}

