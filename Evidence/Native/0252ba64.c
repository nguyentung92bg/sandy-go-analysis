/* IL2CPP: Dino.BusSand.Core.StageEngine$$AnyDuneStanding
bool Dino_BusSand_Core_StageEngine__AnyDuneStanding (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$AnyDuneStanding
   bool Dino_BusSand_Core_StageEngine__AnyDuneStanding (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__AnyDuneStanding_242ba64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9cbc3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbed28);
    FUN_02132f7c(PTR_DAT_04cbed40);
    FUN_02132f7c(PTR_DAT_04cbed48);
    FUN_02132f7c(PTR_DAT_04cbed60);
    bRam0000000004f9cbc3 = 1;
  }
  puVar2 = PTR_DAT_04cbed40;
  puVar1 = PTR_DAT_04cbed28;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_38,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cbed60);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_38,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (*(char *)(lStack_28 + 0x50) != '\0');
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_38,*(undefined8 *)puVar1);
  return uVar3 & 1;
}

