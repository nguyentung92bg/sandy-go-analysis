/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$NewWindowIsValid
bool Dino_BusSand_App_Meta_YachtRacingData__NewWindowIsValid (Dino_BusSand_App_Meta_YachtRacingData_o* __this, int64_t start, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$NewWindowIsValid
   bool Dino_BusSand_App_Meta_YachtRacingData__NewWindowIsValid
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, int64_t start, int64_t end, const MethodInfo*
   method); */

uint Dino_BusSand_App_Meta_YachtRacingData__NewWindowIsValid_2258634
               (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9bffd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3f28);
    FUN_02132f7c(PTR_DAT_04cb3f30);
    FUN_02132f7c(PTR_DAT_04cb3f38);
    FUN_02132f7c(PTR_DAT_04cb3f40);
    bRam0000000004f9bffd = 1;
  }
  puVar2 = PTR_DAT_04cb3f30;
  puVar1 = PTR_DAT_04cb3f28;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cb3f40);
  while( true ) {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (((*(long *)(lStack_38 + 0x18) <= param_2) && (param_2 <= *(long *)(lStack_38 + 0x20))) ||
       ((*(long *)(lStack_38 + 0x18) <= param_3 && (param_3 <= *(long *)(lStack_38 + 0x20)))))
    break;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return (uVar3 ^ 1) & 1;
}

