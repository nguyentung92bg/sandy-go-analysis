/* IL2CPP: Dino.BusSand.Core.TruckGrid$$get_AnyEscapable
bool Dino_BusSand_Core_TruckGrid__get_AnyEscapable (Dino_BusSand_Core_TruckGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$get_AnyEscapable
   bool Dino_BusSand_Core_TruckGrid__get_AnyEscapable (Dino_BusSand_Core_TruckGrid_o* __this, const
   MethodInfo* method); */

undefined1 Dino_BusSand_Core_TruckGrid__get_AnyEscapable_242cb5c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cbd5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    bRam0000000004f9cbd5 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x48)) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
    puVar1 = PTR_DAT_04cab9e8;
    do {
      uVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar2 & 1) == 0) goto LAB_0252cc20;
      uVar2 = Dino_BusSand_Core_TruckGrid__CanEscape_2427af4(param_1,uStack_28,0);
    } while ((uVar2 & 1) == 0);
    *(undefined1 *)(param_1 + 0x50) = 1;
LAB_0252cc20:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cab9e0);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  }
  return *(undefined1 *)(param_1 + 0x50);
}

