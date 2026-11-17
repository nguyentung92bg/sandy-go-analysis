/* IL2CPP: Dino.BusSand.Core.LevelTweaks$$DeclaresMechanics
bool Dino_BusSand_Core_LevelTweaks__DeclaresMechanics (Dino_BusSand_Core_LevelData_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelTweaks$$DeclaresMechanics
   bool Dino_BusSand_Core_LevelTweaks__DeclaresMechanics (Dino_BusSand_Core_LevelData_o* level,
   const MethodInfo* method); */

uint Dino_BusSand_Core_LevelTweaks__DeclaresMechanics_2410db0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9cb49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb59a8);
    FUN_02132f7c(PTR_DAT_04cb59b0);
    FUN_02132f7c(PTR_DAT_04cb59b8);
    FUN_02132f7c(PTR_DAT_04cb59c0);
    FUN_02132f7c(PTR_DAT_04cb5978);
    FUN_02132f7c(PTR_DAT_04cbd068);
    FUN_02132f7c(PTR_DAT_04cb5980);
    FUN_02132f7c(PTR_DAT_04cb5988);
    FUN_02132f7c(PTR_DAT_04cb59c8);
    bRam0000000004f9cb49 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    if ((((*(long *)(lVar3 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar3 + 0x20) + 0x18))) ||
        ((*(long *)(lVar3 + 0x28) != 0 && (0 < *(int *)(*(long *)(lVar3 + 0x28) + 0x18))))) ||
       (((*(long *)(lVar3 + 0x30) != 0 && (0 < *(int *)(*(long *)(lVar3 + 0x30) + 0x18))) ||
        ((*(long *)(lVar3 + 0x38) != 0 && (0 < *(int *)(*(long *)(lVar3 + 0x38) + 0x18))))))) {
      uVar2 = 1;
      goto LAB_02510f6c;
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_38,*(long *)(lVar3 + 0x18),*(undefined8 *)PTR_DAT_04cb59c0);
      puVar1 = PTR_DAT_04cb59b0;
      while( true ) {
        uVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_38,*(undefined8 *)puVar1);
        if ((uVar2 & 1) == 0) break;
        if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((((((*(char *)(lStack_28 + 0x30) != '\0') || (0 < *(int *)(lStack_28 + 0x34))) ||
              (0 < *(int *)(lStack_28 + 0x38))) ||
             ((0 < *(int *)(lStack_28 + 0x3c) || (*(char *)(lStack_28 + 0x40) != '\0')))) ||
            ((0 < *(int *)(lStack_28 + 0x44) || (*(char *)(lStack_28 + 0x48) != '\0')))) ||
           ((*(long *)(lStack_28 + 0x50) != 0 && (0 < *(int *)(*(long *)(lStack_28 + 0x50) + 0x18)))
           )) break;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_38,*(undefined8 *)PTR_DAT_04cb59a8);
      goto LAB_02510f6c;
    }
  }
  uVar2 = 0;
LAB_02510f6c:
  return uVar2 & 1;
}

