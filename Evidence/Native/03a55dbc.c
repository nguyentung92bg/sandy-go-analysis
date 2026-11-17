/* IL2CPP: Dino.BusSand.Core.ListView<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
System_Collections_Generic_IEnumerator_T__o* Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_3955DBC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.Core.ListView<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
   System_Collections_Generic_IEnumerator_T__o*
   Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator
   (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_3955DBC* method); */

void Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable_T__GetEnumerator_3955dbc
               (long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470(lVar4);
  }
  lVar4 = (long)&lStack_50 -
          ((ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0xfc) + 0xf & 0x1fffffff0);
  lVar6 = *param_1;
  if (lVar6 == 0) {
    if (*(long *)(lVar2 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0216b470(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar3 = *(long *)(param_2 + 0x20);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0216b470(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    lStack_50 = lVar4;
    (**(code **)(lVar3 + 0x10))(uVar7,lVar3,lVar6,&lStack_50,lVar4);
    lVar6 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470();
    }
    FUN_02133100(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30),lVar4);
    if (*(long *)(lVar2 + 0x28) == lStack_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

