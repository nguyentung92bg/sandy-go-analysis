/* IL2CPP: Dino.BusSand.Core.Road$$CompleteAll
void Dino_BusSand_Core_Road__CompleteAll (Dino_BusSand_Core_Road_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$CompleteAll
   void Dino_BusSand_Core_Road__CompleteAll (Dino_BusSand_Core_Road_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_Core_Road__CompleteAll_2411f38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9cb54 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb54 = 1;
  }
  puVar2 = PTR_DAT_04cb1898;
  puVar1 = PTR_DAT_04cb1890;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x28) == 1) {
        *(undefined4 *)(lStack_38 + 0x28) = 2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

