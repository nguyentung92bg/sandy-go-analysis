/* IL2CPP: Dino.BusSand.Core.Road$$get_ActiveCount
int32_t Dino_BusSand_Core_Road__get_ActiveCount (Dino_BusSand_Core_Road_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$get_ActiveCount
   int32_t Dino_BusSand_Core_Road__get_ActiveCount (Dino_BusSand_Core_Road_o* __this, const
   MethodInfo* method); */

int Dino_BusSand_Core_Road__get_ActiveCount_2412078(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9cb55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb55 = 1;
  }
  puVar2 = PTR_DAT_04cb1898;
  puVar1 = PTR_DAT_04cb1890;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
  iVar4 = 0;
  while( true ) {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)puVar1);
      return iVar4;
    }
    if (lStack_38 == 0) break;
    if (*(int *)(lStack_38 + 0x28) < 2) {
      iVar4 = iVar4 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

