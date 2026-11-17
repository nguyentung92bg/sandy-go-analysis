/* IL2CPP: Dino.Tracking.CustomParameterList$$Remove
bool Dino_Tracking_CustomParameterList__Remove (System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* target, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomParameterList$$Remove
   bool Dino_Tracking_CustomParameterList__Remove
   (System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* target,
   System_String_o* key, const MethodInfo* method); */

undefined8 Dino_Tracking_CustomParameterList__Remove_2476b68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 auStack_68 [7];
  
  if ((bRam0000000004f9cecc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1880);
    FUN_02132f7c(PTR_DAT_04cc18a8);
    FUN_02132f7c(PTR_DAT_04cc1890);
    FUN_02132f7c(PTR_DAT_04cc1898);
    bRam0000000004f9cecc = 1;
  }
  if (((param_1 != 0) &&
      (uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0), puVar1 = PTR_DAT_04cc1898,
      (uVar2 & 1) == 0)) && (0 < *(int *)(param_1 + 0x18))) {
    iVar3 = 0;
    do {
      System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                (auStack_68,param_1,iVar3,*(undefined8 *)puVar1);
      uVar2 = System_String__op_Inequality_46d110c(auStack_68[0],param_2,0);
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____RemoveAt_396f17c
                  (param_1,iVar3,*(undefined8 *)PTR_DAT_04cc18a8);
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return 0;
}

