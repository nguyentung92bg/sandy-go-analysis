/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$RemoveSessionParam
bool Dino_Tracking_CustomTrackingParameters__RemoveSessionParam (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$RemoveSessionParam
   bool Dino_Tracking_CustomTrackingParameters__RemoveSessionParam (System_String_o* key, const
   MethodInfo* method); */

undefined8 Dino_Tracking_CustomTrackingParameters__RemoveSessionParam_24772ac(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 auStack_68 [9];
  
  puVar1 = PTR_DAT_04cc18d8;
                    /* try { // try from 025772c0 to 026772c7 has its CatchHandler @ 02577804 */
  if ((bRam0000000004f9ced5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    bRam0000000004f9ced5 = 1;
  }
  lVar3 = *(long *)puVar1;
                    /* try { // try from 025772e4 to 026772ef has its CatchHandler @ 025777fc */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 025772f8 to 02677303 has its CatchHandler @ 02577808 */
  lVar3 = **(long **)(lVar3 + 0xb8);
  if ((bRam0000000004f9cecc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1880);
    FUN_02132f7c(PTR_DAT_04cc18a8);
    FUN_02132f7c(PTR_DAT_04cc1890);
    FUN_02132f7c(PTR_DAT_04cc1898);
    bRam0000000004f9cecc = 1;
  }
  if (((lVar3 != 0) &&
      (uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0), puVar1 = PTR_DAT_04cc1898,
      (uVar2 & 1) == 0)) && (0 < *(int *)(lVar3 + 0x18))) {
    iVar4 = 0;
    do {
      System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                (auStack_68,lVar3,iVar4,*(undefined8 *)puVar1);
      uVar2 = System_String__op_Inequality_46d110c(auStack_68[0],param_1,0);
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____RemoveAt_396f17c
                  (lVar3,iVar4,*(undefined8 *)PTR_DAT_04cc18a8);
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar3 + 0x18));
  }
  return 0;
}

