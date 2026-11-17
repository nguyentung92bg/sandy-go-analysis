/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$TryGetSessionParam
bool Dino_Tracking_CustomTrackingParameters__TryGetSessionParam (System_String_o* key, Dino_Common_DinoTrackingParameter_o* parameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$TryGetSessionParam
   bool Dino_Tracking_CustomTrackingParameters__TryGetSessionParam (System_String_o* key,
   Dino_Common_DinoTrackingParameter_o* parameter, const MethodInfo* method); */

bool Dino_Tracking_CustomTrackingParameters__TryGetSessionParam_24773a4
               (undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9ced7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1880);
    FUN_02132f7c(PTR_DAT_04cc18b0);
    FUN_02132f7c(PTR_DAT_04cc1890);
    FUN_02132f7c(PTR_DAT_04cc1898);
    bRam0000000004f9ced7 = 1;
  }
  puVar3 = PTR_DAT_04cc18d8;
  puVar2 = PTR_DAT_04cc1898;
  iVar7 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  while( true ) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    lVar6 = **(long **)(lVar4 + 0xb8);
    if (lVar6 == 0) goto LAB_02577544;
    iVar1 = *(int *)(lVar6 + 0x18);
    if (iVar1 <= iVar7) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar6 == 0) goto LAB_02577544;
    }
    System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
              (&uStack_a8,lVar6,iVar7,*(undefined8 *)puVar2);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uVar5 = System_String__op_Inequality_46d110c(uStack_a8,param_1,0);
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_02577544:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter____get_Item_396d1b0
                (&uStack_a8,**(long **)(lVar4 + 0xb8),iVar7,*(undefined8 *)puVar2);
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      param_2[1] = uStack_98;
      *param_2 = uStack_a0;
      param_2[3] = uStack_88;
      param_2[2] = uStack_90;
      param_2[5] = uStack_78;
      param_2[4] = uStack_80;
      thunk_FUN_02134474(param_2,0);
LAB_02577524:
      return iVar7 < iVar1;
    }
    iVar7 = iVar7 + 1;
  }
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  goto LAB_02577524;
}

