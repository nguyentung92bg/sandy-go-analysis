/* IL2CPP: Dino.Tracking.CustomParameterList$$Set
void Dino_Tracking_CustomParameterList__Set (System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* target, System_String_o* key, Dino_Common_DinoTrackingParameter_o parameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomParameterList$$Set
   void Dino_Tracking_CustomParameterList__Set
   (System_Collections_Generic_List_KeyValuePair_string__DinoTrackingParameter___o* target,
   System_String_o* key, Dino_Common_DinoTrackingParameter_o parameter, const MethodInfo* method);
    */

void Dino_Tracking_CustomParameterList__Set_2476938
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
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
  undefined8 uStack_50;
  
  if ((bRam0000000004f9cecb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1878);
    FUN_02132f7c(PTR_DAT_04cc1880);
    FUN_02132f7c(PTR_DAT_04cc1888);
    FUN_02132f7c(PTR_DAT_04cc1890);
    FUN_02132f7c(PTR_DAT_04cc1898);
    FUN_02132f7c(PTR_DAT_04cc18a0);
    bRam0000000004f9cecb = 1;
  }
  puVar3 = PTR_DAT_04cc1898;
  puVar2 = PTR_DAT_04cc1878;
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar7 = 0;
      do {
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                  (&uStack_80,param_1,iVar7,*(undefined8 *)puVar3);
        uVar4 = System_String__op_Inequality_46d110c(uStack_80,param_2,0);
        if ((uVar4 & 1) == 0) {
          uStack_78 = param_3[1];
          uStack_80 = *param_3;
          uStack_68 = param_3[3];
          uStack_70 = param_3[2];
          uStack_58 = param_3[5];
          uStack_60 = param_3[4];
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          System_Collections_Generic_KeyValuePair_object__DinoTrackingParameter____ctor_39107cc
                    (&uStack_c0,param_2,&uStack_80,*(undefined8 *)puVar2);
          uStack_78 = uStack_b8;
          uStack_80 = uStack_c0;
          uStack_68 = uStack_a8;
          uStack_70 = uStack_b0;
          uStack_58 = uStack_98;
          uStack_60 = uStack_a0;
          uStack_50 = uStack_90;
          System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____set_Item_396d220
                    (param_1,iVar7,&uStack_80,*(undefined8 *)PTR_DAT_04cc18a0);
          return;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x18));
    }
    puVar3 = PTR_DAT_04cc1888;
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_68 = param_3[3];
    uStack_70 = param_3[2];
    uStack_58 = param_3[5];
    uStack_60 = param_3[4];
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    System_Collections_Generic_KeyValuePair_object__DinoTrackingParameter____ctor_39107cc
              (&uStack_c0,param_2,&uStack_80,*(undefined8 *)puVar2);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)puVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x38;
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x50) = uStack_90;
        *(undefined8 *)(lVar5 + 0x38) = uStack_a8;
        *(undefined8 *)(lVar5 + 0x30) = uStack_b0;
        *(undefined8 *)(lVar5 + 0x48) = uStack_98;
        *(undefined8 *)(lVar5 + 0x40) = uStack_a0;
        *(undefined8 *)(lVar5 + 0x28) = uStack_b8;
        *(undefined8 *)(lVar5 + 0x20) = uStack_c0;
        thunk_FUN_02134474(lVar5 + 0x20,0);
      }
      else {
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
        uStack_68 = uStack_a8;
        uStack_70 = uStack_b0;
        uStack_58 = uStack_98;
        uStack_60 = uStack_a0;
        uStack_50 = uStack_90;
        System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____AddWithResize_396d568
                  (param_1,&uStack_80,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

