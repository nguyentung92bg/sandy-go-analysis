/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<Rows>d__29$$System.Collections.Generic.IEnumerable<System.Collections.Generic.Dictionary<System.String,System.Object>>.GetEnumerator
System_Collections_Generic_IEnumerator_Dictionary_string__object___o* Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__System_Collections_Generic_IEnumerable_System_Collections_Generic_Dictionary_System_String_System_Object___GetEnumerator (Dino_BusSand_App_Meta_EconomySettings__Rows_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.App.Meta.EconomySettings.<Rows>d__29$$System.Collections.Generic.IEnumerable<System.Collections.Generic.Dictionary<System.String,System.Object>>.GetEnumerator
   System_Collections_Generic_IEnumerator_Dictionary_string__object___o*
   Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__System_Collections_Generic_IEnumerable_System_Collections_Generic_Dictionary_System_String_System_Object___GetEnumerator
   (Dino_BusSand_App_Meta_EconomySettings__Rows_d__29_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__System_Collections_Generic_IEnumerable_System_Collections_Generic_Dictionary_System_String_System_Object___GetEnumerator_220b904
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f9bced & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d78);
    bRam0000000004f9bced = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    param_1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1d78);
    System_Object___ctor_4870e5c(param_1,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_4872920(0);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  return param_1;
}

