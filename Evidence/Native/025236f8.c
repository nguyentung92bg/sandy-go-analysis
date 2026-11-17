/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_GarageRemaining
int32_t Dino_BusSand_Core_StageEngine__get_GarageRemaining (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_GarageRemaining
   int32_t Dino_BusSand_Core_StageEngine__get_GarageRemaining (Dino_BusSand_Core_StageEngine_o*
   __this, const MethodInfo* method); */

int Dino_BusSand_Core_StageEngine__get_GarageRemaining_24236f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9cb95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cbc368);
    bRam0000000004f9cb95 = 1;
  }
  puVar2 = PTR_DAT_04cbc308;
  puVar1 = PTR_DAT_04cbc300;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbc368);
    iVar5 = 0;
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return iVar5;
      }
      if (lStack_38 == 0) break;
      iVar3 = Dino_BusSand_Core_Garage__get_Remaining_2423ac0();
      iVar5 = iVar3 + iVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

