/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$Hook
void Dino_BusSand_Sdk_DinoAdProvider__Hook (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$Hook
   void Dino_BusSand_Sdk_DinoAdProvider__Hook (const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider__Hook_2430c78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_04cbeff0;
  if ((bRam0000000004f9cc18 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04caa3d8);
    FUN_02132f7c(PTR_DAT_04caa5d0);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cbeff8);
    FUN_02132f7c(PTR_DAT_04cbf000);
    FUN_02132f7c(PTR_DAT_04cbf008);
    FUN_02132f7c(PTR_DAT_04cbf010);
    FUN_02132f7c(PTR_DAT_04cbf018);
    FUN_02132f7c(PTR_DAT_04cbf020);
    FUN_02132f7c(PTR_DAT_04cbf028);
    bRam0000000004f9cc18 = 1;
  }
  puVar2 = PTR_DAT_04cbf028;
  if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) != '\0') {
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = 1;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa5d0);
    System_Action_object__MaxSdkBase_Reward__object____ctor_35f8ccc
              (lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbeff8,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  MaxSdkCallbacks_Rewarded__add_OnAdReceivedRewardEvent_3bc8ec0(lVar9,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[2];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa3d8);
    System_Action_object__object____ctor_35f783c(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbf000,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  MaxSdkCallbacks_Rewarded__add_OnAdDisplayedEvent_3bc86e0(lVar9,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[3];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
                    /* try { // try from 02530ea4 to 026311ff has its CatchHandler @ 02530ea4
                       catch() { ... } // from try @ 02530ea4 with catch @ 02530ea4
                       catch() { ... } // from try @ 0253126c with catch @ 02530ea4
                       catch() { ... } // from try @ 02531a8c with catch @ 02530ea4
                       catch() { ... } // from try @ 02531ab8 with catch @ 02530ea4
                       catch() { ... } // from try @ 02531adc with catch @ 02530ea4 */
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa3d8);
    System_Action_object__object____ctor_35f783c(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbf008,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  MaxSdkCallbacks_Rewarded__add_OnAdHiddenEvent_3bc90b8(lVar9,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[4];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa3d8);
    System_Action_object__object____ctor_35f783c(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbf010,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  MaxSdkCallbacks_Interstitial__add_OnAdDisplayedEvent_3bc78f8(lVar9,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[5];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa3d8);
    System_Action_object__object____ctor_35f783c(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbf018,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  MaxSdkCallbacks_Interstitial__add_OnAdHiddenEvent_3bc80d8(lVar9,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[6];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbf020,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004fa5ab9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420,0);
    FUN_02132f7c(PTR_DAT_04caa210);
    bRam0000000004fa5ab9 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cac420;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  do {
    lVar6 = System_Delegate__Combine_4872324(lVar4,lVar9,0);
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    else {
      uVar10 = *(undefined8 *)puVar2;
      lVar7 = thunk_FUN_0216e7a0(lVar6,uVar10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,uVar10);
      }
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 0x20,lVar7,lVar4);
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
  return;
}

