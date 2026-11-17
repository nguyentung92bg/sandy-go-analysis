/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Write
void Dino_Tracking_CustomTrackingParameters__Write (System_Collections_Generic_List_DinoTrackingParameter__o* buffer, System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* local, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$Write
   void Dino_Tracking_CustomTrackingParameters__Write
   (System_Collections_Generic_List_DinoTrackingParameter__o* buffer,
   System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* local, const
   MethodInfo* method); */

void Dino_Tracking_CustomTrackingParameters__Write_24775b8(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
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
  
  if ((bRam0000000004f9ced9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1890);
    bRam0000000004f9ced9 = 1;
  }
  puVar2 = PTR_DAT_04cc18d8;
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x18))) {
    if (*(int *)(*(long *)PTR_DAT_04cc18d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_Tracking_CustomTrackingParameters__Append_247768c(param_1,param_2);
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar10 = **(long **)(lVar8 + 0xb8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar10 + 0x18) < 1) {
    return;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
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
  if (lVar10 != 0) {
    if (0 < *(int *)(lVar10 + 0x18)) {
      iVar12 = 0;
      do {
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                  (&uStack_c0,lVar10,iVar12,*(undefined8 *)puVar3);
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
        uVar9 = Dino_Tracking_CustomTrackingParameters__Contains_247786c(param_1,uVar5);
        if ((uVar9 & 1) == 0) {
          System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                    (&uStack_c0,lVar10,iVar12,*(undefined8 *)puVar3);
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
          lVar8 = *(long *)(param_1 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_02577868;
          uVar1 = *(uint *)(param_1 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0x30;
            *(uint *)(param_1 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + 0x28) = uStack_b0;
            *(undefined8 *)(lVar8 + 0x20) = uStack_b8;
            *(undefined8 *)(lVar8 + 0x38) = uStack_a0;
            *(undefined8 *)(lVar8 + 0x30) = uStack_a8;
            *(undefined8 *)(lVar8 + 0x48) = uStack_90;
            *(undefined8 *)(lVar8 + 0x40) = uStack_98;
            thunk_FUN_02134474(lVar8 + 0x20,0);
          }
          else {
            uStack_b8 = uStack_b0;
            uStack_c0 = uVar5;
            uStack_a8 = uStack_a0;
            uStack_b0 = uVar6;
            uStack_98 = uStack_90;
            uStack_a0 = uVar7;
            System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                      (param_1,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar10 + 0x18));
    }
    return;
  }
LAB_02577868:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

