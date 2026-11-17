/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$HookLoaded
void Dino_BusSand_Sdk_DinoAdProvider__HookLoaded (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$HookLoaded
   void Dino_BusSand_Sdk_DinoAdProvider__HookLoaded (const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider__HookLoaded_24310a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_04cbeff0;
  if ((bRam0000000004f9cc19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa3d8);
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cbf030);
    FUN_02132f7c(PTR_DAT_04cbf038);
    FUN_02132f7c(PTR_DAT_04cbf028);
    bRam0000000004f9cc19 = 1;
  }
  puVar1 = PTR_DAT_04cbf028;
  if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = 1;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[7];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa3d8);
    System_Action_object__object____ctor_35f783c(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cbf030,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  MaxSdkCallbacks_Interstitial__add_OnAdLoadedEvent_3bc74e8(lVar6,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[8];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa3d8);
                    /* try { // try from 02531200 to 02631207 has its CatchHandler @ 02531a94 */
    System_Action_object__object____ctor_35f783c(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cbf038,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  puVar1 = PTR_DAT_04cca248;
  puVar2 = PTR_DAT_04cca0b8;
  if ((bRam0000000004fa08c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa3d8,0);
    FUN_02132f7c(PTR_DAT_04cca0b8);
    FUN_02132f7c(PTR_DAT_04cca248);
    bRam0000000004fa08c3 = 1;
  }
  MaxSdkCallbacks__LogSubscribedToEvent_3bc6ffc(*(undefined8 *)puVar1);
  lVar3 = System_Delegate__Combine_4872324(**(undefined8 **)(*(long *)puVar2 + 0xb8),lVar6,0);
  puVar1 = PTR_DAT_04caa3d8;
  if (lVar3 == 0) {
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    uVar8 = *(ulong *)(*(long *)puVar2 + 0xb8);
  }
  else {
    uVar7 = *(undefined8 *)PTR_DAT_04caa3d8;
    lVar6 = thunk_FUN_0216e7a0(lVar3,uVar7);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(lVar3,uVar7);
    }
    **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
    uVar7 = *(undefined8 *)puVar1;
    uVar8 = *(ulong *)(*(long *)puVar2 + 0xb8);
    lVar6 = thunk_FUN_0216e7a0(lVar3,uVar7);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(lVar3,uVar7);
    }
  }
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar8 >> 0xc & 0x3f),(uVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

