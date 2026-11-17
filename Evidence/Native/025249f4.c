/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_FireTruckInLot
bool Dino_BusSand_Core_StageEngine__get_FireTruckInLot (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_FireTruckInLot
   bool Dino_BusSand_Core_StageEngine__get_FireTruckInLot (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__get_FireTruckInLot_24249f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9cb9c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    bRam0000000004f9cb9c = 1;
  }
  puVar3 = PTR_DAT_04cab9f8;
  puVar2 = PTR_DAT_04cab9e8;
  puVar1 = PTR_DAT_04cab9e0;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_40 = 0;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_40 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_38,&uStack_40,*(undefined8 *)puVar3);
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) break;
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(char *)(lStack_28 + 0x44) == '\0');
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)puVar1);
  }
  return uVar4 & 1;
}

