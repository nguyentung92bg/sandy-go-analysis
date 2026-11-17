/* IL2CPP: Dino.Tracking.TrackingEventBase$$WriteParameters
void Dino_Tracking_TrackingEventBase__WriteParameters (Dino_Tracking_TrackingEventBase_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventBase$$WriteParameters
   void Dino_Tracking_TrackingEventBase__WriteParameters (Dino_Tracking_TrackingEventBase_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventBase__WriteParameters_247b068(long *param_1,long param_2)

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
  long lVar11;
  int iVar12;
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
  
  puVar2 = PTR_DAT_04cc18d8;
                    /* catch() { ... } // from try @ 0257adfc with catch @ 0257b06c */
                    /* catch() { ... } // from try @ 0257ac20 with catch @ 0257b070 */
                    /* catch() { ... } // from try @ 0257afc0 with catch @ 0257b074 */
                    /* catch() { ... } // from try @ 0257b01c with catch @ 0257b078 */
                    /* catch() { ... } // from try @ 0257b008 with catch @ 0257b07c */
                    /* catch() { ... } // from try @ 0257aeb4 with catch @ 0257b080 */
                    /* catch() { ... } // from try @ 0257aeb0 with catch @ 0257b084 */
                    /* catch() { ... } // from try @ 0257b004 with catch @ 0257b088 */
                    /* catch() { ... } // from try @ 0257aff0 with catch @ 0257b08c */
  if ((bRam0000000004f9cf34 & 1) == 0) {
                    /* catch() { ... } // from try @ 0257afe4 with catch @ 0257b090 */
                    /* catch() { ... } // from try @ 0257aca4 with catch @ 0257b094 */
                    /* catch() { ... } // from try @ 0257afe0 with catch @ 0257b098 */
    FUN_02132f7c(PTR_DAT_04cc18d8);
                    /* catch() { ... } // from try @ 0257afa8 with catch @ 0257b09c
                       catch() { ... } // from try @ 0257b018 with catch @ 0257b09c */
                    /* catch() { ... } // from try @ 0257acfc with catch @ 0257b0a0 */
    bRam0000000004f9cf34 = 1;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1c0));
  lVar11 = param_1[2];
                    /* try { // try from 0257b0c0 to 0267b0c3 has its CatchHandler @ 0257b0cc */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9ced9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1890);
    bRam0000000004f9ced9 = 1;
  }
  puVar2 = PTR_DAT_04cc18d8;
  if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
    if (*(int *)(*(long *)PTR_DAT_04cc18d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_Tracking_CustomTrackingParameters__Append_247768c(param_2,lVar11);
  }
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar2;
  }
  lVar9 = **(long **)(lVar11 + 0xb8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar9 + 0x18) < 1) {
    return;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
  }
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
  if (lVar9 != 0) {
    if (0 < *(int *)(lVar9 + 0x18)) {
      iVar12 = 0;
      do {
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                  (&uStack_c0,lVar9,iVar12,*(undefined8 *)puVar3);
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
        uVar8 = Dino_Tracking_CustomTrackingParameters__Contains_247786c(param_2,uVar5);
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                    (&uStack_c0,lVar9,iVar12,*(undefined8 *)puVar3);
          uVar7 = uStack_98;
          uVar6 = uStack_a8;
          uVar5 = uStack_b8;
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          uStack_68 = uStack_a0;
          uStack_70 = uStack_a8;
          uStack_58 = uStack_90;
          uStack_60 = uStack_98;
          if (param_2 == 0) goto LAB_02577868;
          lVar11 = *(long *)(param_2 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_02577868;
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar1 * 0x30;
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + 0x28) = uStack_b0;
            *(undefined8 *)(lVar11 + 0x20) = uStack_b8;
            *(undefined8 *)(lVar11 + 0x38) = uStack_a0;
            *(undefined8 *)(lVar11 + 0x30) = uStack_a8;
            *(undefined8 *)(lVar11 + 0x48) = uStack_90;
            *(undefined8 *)(lVar11 + 0x40) = uStack_98;
            thunk_FUN_02134474(lVar11 + 0x20,0);
          }
          else {
            uStack_b8 = uStack_b0;
            uStack_c0 = uVar5;
            uStack_a8 = uStack_a0;
            uStack_b0 = uVar6;
            uStack_98 = uStack_90;
            uStack_a0 = uVar7;
            System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                      (param_2,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar9 + 0x18));
    }
    return;
  }
LAB_02577868:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

