/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Append
void Dino_Tracking_CustomTrackingParameters__Append (System_Collections_Generic_List_DinoTrackingParameter__o* buffer, System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* values, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Append
   void Dino_Tracking_CustomTrackingParameters__Append
   (System_Collections_Generic_List_DinoTrackingParameter__o* buffer,
   System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* values, const
   MethodInfo* method); */

void Dino_Tracking_CustomTrackingParameters__Append_247768c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9ceda & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1880);
    FUN_02132f7c(PTR_DAT_04cc18b0);
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cc1890);
    FUN_02132f7c(PTR_DAT_04cc1898);
    bRam0000000004f9ceda = 1;
  }
  puVar4 = PTR_DAT_04cc18d8;
  puVar3 = PTR_DAT_04cc1898;
  puVar2 = PTR_DAT_04cbf440;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar11 = 0;
      do {
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                  (&uStack_c0,param_2,iVar11,*(undefined8 *)puVar3);
        uVar5 = uStack_c0;
        uStack_78 = uStack_b0;
        uStack_80 = uStack_b8;
        uStack_68 = uStack_a0;
        uStack_70 = uStack_a8;
        uStack_58 = uStack_90;
        uStack_60 = uStack_98;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_Tracking_CustomTrackingParameters__Contains_247786c(param_1,uVar5);
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                    (&uStack_c0,param_2,iVar11,*(undefined8 *)puVar3);
          uVar7 = uStack_98;
          uVar6 = uStack_a8;
          uVar5 = uStack_b8;
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          uStack_68 = uStack_a0;
          uStack_70 = uStack_a8;
          uStack_58 = uStack_90;
          uStack_60 = uStack_98;
          if (param_1 == 0) goto LAB_02577868;
          lVar9 = *(long *)(param_1 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_02577868;
          uVar1 = *(uint *)(param_1 + 0x18);
                    /* try { // try from 025777dc to 026777df has its CatchHandler @ 0257780c */
                    /* try { // try from 025777e0 to 026777e3 has its CatchHandler @ 02577800 */
                    /* try { // try from 025777e4 to 026777e7 has its CatchHandler @ 02577158 */
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 025777e8 to 026777eb has its CatchHandler @ 025777f4 */
            lVar9 = lVar9 + (long)(int)uVar1 * 0x30;
                    /* try { // try from 025777ec to 0267782f has its CatchHandler @ 02577158 */
                    /* catch() { ... } // from try @ 02577310 with catch @ 025777f0 */
                    /* catch() { ... } // from try @ 025777e8 with catch @ 025777f4 */
                    /* catch() { ... } // from try @ 02577324 with catch @ 025777f8 */
                    /* catch() { ... } // from try @ 025772e4 with catch @ 025777fc */
            *(uint *)(param_1 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 025777e0 with catch @ 02577800 */
                    /* catch() { ... } // from try @ 025772c0 with catch @ 02577804 */
            *(undefined8 *)(lVar9 + 0x28) = uStack_b0;
            *(undefined8 *)(lVar9 + 0x20) = uStack_b8;
            *(undefined8 *)(lVar9 + 0x38) = uStack_a0;
            *(undefined8 *)(lVar9 + 0x30) = uStack_a8;
                    /* catch() { ... } // from try @ 025772f8 with catch @ 02577808 */
            *(undefined8 *)(lVar9 + 0x48) = uStack_90;
            *(undefined8 *)(lVar9 + 0x40) = uStack_98;
                    /* catch() { ... } // from try @ 025777dc with catch @ 0257780c */
            thunk_FUN_02134474(lVar9 + 0x20,0);
                    /* catch() { ... } // from try @ 02577288 with catch @ 02577810 */
          }
          else {
                    /* catch() { ... } // from try @ 02577274 with catch @ 02577814 */
                    /* try { // try from 02577830 to 02677833 has its CatchHandler @ 0257784c */
            uStack_b8 = uStack_b0;
            uStack_c0 = uVar5;
            uStack_a8 = uStack_a0;
            uStack_b0 = uVar6;
                    /* try { // try from 02577834 to 0267784f has its CatchHandler @ 02577158 */
            uStack_98 = uStack_90;
            uStack_a0 = uVar7;
            System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                      (param_1,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_2 + 0x18));
    }
                    /* catch() { ... } // from try @ 02577830 with catch @ 0257784c */
                    /* try { // try from 02577850 to 02677857 has its CatchHandler @ 02577860 */
                    /* try { // try from 02577858 to 02677863 has its CatchHandler @ 02577158 */
                    /* catch() { ... } // from try @ 02577850 with catch @ 02577860 */
    return;
  }
LAB_02577868:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

