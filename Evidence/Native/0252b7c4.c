/* IL2CPP: Dino.BusSand.Core.StageEngine$$GarageById
Dino_BusSand_Core_Garage_o* Dino_BusSand_Core_StageEngine__GarageById (Dino_BusSand_Core_StageEngine_o* __this, int32_t gid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$GarageById
   Dino_BusSand_Core_Garage_o* Dino_BusSand_Core_StageEngine__GarageById
   (Dino_BusSand_Core_StageEngine_o* __this, int32_t gid, const MethodInfo* method); */

long Dino_BusSand_Core_StageEngine__GarageById_242b7c4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9cbbf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cbc368);
    bRam0000000004f9cbbf = 1;
  }
  puVar2 = PTR_DAT_04cbc308;
  puVar1 = PTR_DAT_04cbc300;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbc368);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
      break;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = lStack_38;
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return lVar4;
}

