/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_CurrentSlot
Dino_BusSand_App_Meta_StreakRateSlot_o* Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$get_CurrentSlot
   Dino_BusSand_App_Meta_StreakRateSlot_o* Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cb3b48;
  if ((bRam0000000004f9bfa4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3b50);
    FUN_02132f7c(PTR_DAT_04cb3b58);
    FUN_02132f7c(PTR_DAT_04cb3b60);
    FUN_02132f7c(PTR_DAT_04cb3b68);
    FUN_02132f7c(PTR_DAT_04cb3b48);
    bRam0000000004f9bfa4 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb3b58;
  puVar1 = PTR_DAT_04cb3b50;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_38,*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_04cb3b68);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_38,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
      break;
    }
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = lStack_28;
  } while (*(int *)(lStack_28 + 0x28) != 0);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_38,*(undefined8 *)puVar1);
  return lVar3;
}

