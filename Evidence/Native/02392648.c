/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<get_AllEventNames>d__27$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
System_Collections_Generic_IEnumerator_string__o* Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.App.Meta.TrackingPlan.<get_AllEventNames>d__27$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
   System_Collections_Generic_IEnumerator_string__o*
   Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
   (Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27_o* __this, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator_2292648
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f9c1dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4870);
    bRam0000000004f9c1dc = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20),
     iVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    param_1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4870);
    System_Object___ctor_4870e5c(param_1,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar3 = System_Environment__get_CurrentManagedThreadId_4872920(0);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  return param_1;
}

