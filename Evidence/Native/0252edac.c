/* IL2CPP: Dino.BusSand.Core.Lift.<get_Queue>d__18$$System.Collections.Generic.IEnumerable<(System.Int32id,Dino.BusSand.Core.BusKindkind,System.Int32angle)>.GetEnumerator
System_Collections_Generic_IEnumerator_ValueTuple_int__BusKind__int___o* Dino_BusSand_Core_Lift__get_Queue_d__18__System_Collections_Generic_IEnumerable__System_Int32id_Dino_BusSand_Core_BusKindkind_System_Int32angle___GetEnumerator (Dino_BusSand_Core_Lift__get_Queue_d__18_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.Core.Lift.<get_Queue>d__18$$System.Collections.Generic.IEnumerable<(System.Int32id,Dino.BusSand.Core.BusKindkind,System.Int32angle)>.GetEnumerator
   System_Collections_Generic_IEnumerator_ValueTuple_int__BusKind__int___o*
   Dino_BusSand_Core_Lift__get_Queue_d__18__System_Collections_Generic_IEnumerable__System_Int32id_Dino_BusSand_Core_BusKindkind_System_Int32angle___GetEnumerator
   (Dino_BusSand_Core_Lift__get_Queue_d__18_o* __this, const MethodInfo* method); */

long Dino_BusSand_Core_Lift__get_Queue_d__18__System_Collections_Generic_IEnumerable__System_Int32id_Dino_BusSand_Core_BusKindkind_System_Int32angle___GetEnumerator_242edac
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9cc01 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef40);
    bRam0000000004f9cc01 = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
  }
  else {
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbef40);
    System_Object___ctor_4870e5c(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_4872920(0);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    thunk_FUN_02134474();
  }
  return lVar4;
}

