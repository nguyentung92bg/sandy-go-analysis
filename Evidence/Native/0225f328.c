/* IL2CPP: Dino.BusSand.App.Tables.<Rows>d__5$$System.Collections.Generic.IEnumerable<System.Collections.Generic.Dictionary<System.String,System.Object>>.GetEnumerator
System_Collections_Generic_IEnumerator_Dictionary_string__object___o* Dino_BusSand_App_Tables__Rows_d__5__System_Collections_Generic_IEnumerable_System_Collections_Generic_Dictionary_System_String_System_Object___GetEnumerator (Dino_BusSand_App_Tables__Rows_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.App.Tables.<Rows>d__5$$System.Collections.Generic.IEnumerable<System.Collections.Generic.Dictionary<System.String,System.Object>>.GetEnumerator
   System_Collections_Generic_IEnumerator_Dictionary_string__object___o*
   Dino_BusSand_App_Tables__Rows_d__5__System_Collections_Generic_IEnumerable_System_Collections_Generic_Dictionary_System_String_System_Object___GetEnumerator
   (Dino_BusSand_App_Tables__Rows_d__5_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Tables__Rows_d__5__System_Collections_Generic_IEnumerable_System_Collections_Generic_Dictionary_System_String_System_Object___GetEnumerator_215f328
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9b817 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac038);
    bRam0000000004f9b817 = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
  }
  else {
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac038);
                    /* try { // try from 0225f390 to 0235f3f7 has its CatchHandler @ 0225f564 */
    System_Object___ctor_4870e5c(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_4872920(0);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
  }
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_02134474();
  return lVar4;
}

