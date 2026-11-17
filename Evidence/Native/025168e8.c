/* IL2CPP: Dino.BusSand.Core.Road$$AnyActiveBusCanCollect
bool Dino_BusSand_Core_Road__AnyActiveBusCanCollect (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_SandGrid_o* grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$AnyActiveBusCanCollect
   bool Dino_BusSand_Core_Road__AnyActiveBusCanCollect (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_SandGrid_o* grid, const MethodInfo* method); */

uint Dino_BusSand_Core_Road__AnyActiveBusCanCollect_24168e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9cb71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb71 = 1;
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
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (((1 < *(int *)(lStack_38 + 0x28)) ||
           (((*(int *)(lStack_38 + 0x28) == 1 && (0 < *(int *)(lStack_38 + 0x5c))) &&
            (*(int *)(lStack_38 + 0x20) <= *(int *)(lStack_38 + 0x24))))) ||
          (uVar4 = Dino_BusSand_Core_Road__AnyColorInBottomBand_2416850
                             (param_1,param_2,*(undefined1 *)(lStack_38 + 0x14)), (uVar4 & 1) == 0))
  ;
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return uVar3 & 1;
}

