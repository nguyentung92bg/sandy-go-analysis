/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_PlayerId
System_String_o* Dino_BusSand_App_Meta_Profile__get_PlayerId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_PlayerId
   System_String_o* Dino_BusSand_App_Meta_Profile__get_PlayerId (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Profile__get_PlayerId_2274008(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c10e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb4808);
    bRam0000000004f9c10e = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar5 = (undefined8 *)PTR_DAT_04ca9c30;
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) == 0) {
LAB_023741e4:
    return *puVar5;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar2 + 0xa8),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      auStack_30 = System_Guid__NewGuid_48283c0(0);
      uVar4 = System_Guid__ToString_482a814(auStack_30,*(undefined8 *)PTR_DAT_04cb4808,0);
      if (lVar2 == 0) goto LAB_023741f8;
      puVar5 = (undefined8 *)(lVar2 + 0xa8);
      *puVar5 = uVar4;
      thunk_FUN_02134474(puVar5,uVar4);
      Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 0xa8);
      goto LAB_023741e4;
    }
  }
LAB_023741f8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

