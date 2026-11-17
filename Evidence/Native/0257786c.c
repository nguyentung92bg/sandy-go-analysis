/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Contains
bool Dino_Tracking_CustomTrackingParameters__Contains (System_Collections_Generic_List_DinoTrackingParameter__o* buffer, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Contains
   bool Dino_Tracking_CustomTrackingParameters__Contains
   (System_Collections_Generic_List_DinoTrackingParameter__o* buffer, System_String_o* key, const
   MethodInfo* method); */

bool Dino_Tracking_CustomTrackingParameters__Contains_247786c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  bool bVar4;
  undefined8 auStack_60 [6];
  
  if ((bRam0000000004f9cedb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18e8);
    FUN_02132f7c(PTR_DAT_04cc18f0);
    bRam0000000004f9cedb = 1;
  }
  puVar1 = PTR_DAT_04cc18f0;
  if (param_1 != 0) {
    bVar4 = 0 < *(int *)(param_1 + 0x18);
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar3 = 0;
      do {
        System_Collections_Generic_List_DinoTrackingParameter___get_Item_3a1462c
                  (auStack_60,param_1,iVar3,*(undefined8 *)puVar1);
        uVar2 = System_String__op_Equality_46d1108(auStack_60[0],param_2,0);
        if ((uVar2 & 1) != 0) {
          return bVar4;
        }
        iVar3 = iVar3 + 1;
        bVar4 = iVar3 < *(int *)(param_1 + 0x18);
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

