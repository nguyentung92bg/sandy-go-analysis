/* IL2CPP: Dino.BusSand.Core.Road$$FrozenAt
bool Dino_BusSand_Core_Road__FrozenAt (Dino_BusSand_Core_Road_o* __this, int64_t tick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$FrozenAt
   bool Dino_BusSand_Core_Road__FrozenAt (Dino_BusSand_Core_Road_o* __this, int64_t tick, const
   MethodInfo* method); */

uint Dino_BusSand_Core_Road__FrozenAt_2412604(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_2 <= *(long *)(param_1 + 0xa0)) {
    return 0;
  }
  if ((bRam0000000004f9cb58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb58 = 1;
  }
  puVar2 = PTR_DAT_04cb1898;
  puVar1 = PTR_DAT_04cb1890;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_38,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_38,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (1 < *(int *)(lStack_28 + 0x28) - 1U);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_38,*(undefined8 *)puVar1);
  return uVar3 & 1;
}

