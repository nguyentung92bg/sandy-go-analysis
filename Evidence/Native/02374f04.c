/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Concat
System_String_array* Dino_BusSand_App_Meta_TrackingPlan__Concat (System_String_array* a, System_String_array* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Concat
   System_String_array* Dino_BusSand_App_Meta_TrackingPlan__Concat (System_String_array* a,
   System_String_array* b, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_TrackingPlan__Concat_2274f04(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000004f9c117 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038);
    bRam0000000004f9c117 = 1;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,
                         *(int *)(param_2 + 0x18) + *(int *)(param_1 + 0x18));
    System_Array__CopyTo_4851fc4(param_1,uVar1,0,0);
    System_Array__CopyTo_4851fc4(param_2,uVar1,*(undefined4 *)(param_1 + 0x18),0);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

