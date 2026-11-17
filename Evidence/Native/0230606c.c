/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$ResetForTests
void Dino_BusSand_App_Meta_EconomySettings__ResetForTests (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$ResetForTests
   void Dino_BusSand_App_Meta_EconomySettings__ResetForTests (const MethodInfo* method); */

void Dino_BusSand_App_Meta_EconomySettings__ResetForTests_220606c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcd9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d80);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1db0);
    FUN_02132f7c(PTR_DAT_04cb1db8);
    FUN_02132f7c(PTR_DAT_04cb1dc0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bcd9 = 1;
  }
  puVar3 = PTR_DAT_04cb1db0;
  puVar1 = PTR_DAT_04ca9c30;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  uVar5 = *(undefined8 *)puVar3;
  *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = 0;
  uVar5 = thunk_FUN_0216e89c(uVar5);
  Dino_BusSand_App_Meta_EconomySettings_Parsed___ctor_2206260();
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
  *puVar6 = uVar5;
  thunk_FUN_02134474(puVar6,uVar5);
  puVar3 = PTR_DAT_04cb1dc0;
  lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary_object__object___Clear_34b452c
              (lVar4,*(undefined8 *)PTR_DAT_04cb1d80);
    uVar5 = *(undefined8 *)puVar3;
    if (cRam0000000004f9bd00 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      cRam0000000004f9bd00 = '\x01';
    }
    puVar3 = PTR_DAT_04cb1db8;
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar4 + 0xb8) = uVar5;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
    uVar5 = *(undefined8 *)puVar3;
    if (cRam0000000004f9bd01 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      cRam0000000004f9bd01 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
                    /* try { // try from 023061fc to 0240622b has its CatchHandler @ 023062c8 */
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
    *puVar6 = uVar5;
    thunk_FUN_02134474(puVar6,uVar5);
    uVar5 = *(undefined8 *)puVar1;
    if (cRam0000000004f9bd02 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      cRam0000000004f9bd02 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    *puVar6 = uVar5;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                   ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

