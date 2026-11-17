/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$Seed
int32_t Dino_BusSand_App_Meta_WeeklyCupFeature__Seed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupFeature$$Seed
   int32_t Dino_BusSand_App_Meta_WeeklyCupFeature__Seed (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_WeeklyCupFeature__Seed_2230210(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9be6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9be6e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9c30;
  plVar5 = (long *)PTR_DAT_04ca9c30;
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_02330368;
    plVar5 = (long *)(lVar4 + 0xa8);
  }
  lVar4 = *(long *)puVar1;
  if (*plVar5 != 0) {
    lVar4 = *plVar5;
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) < 1) {
      uVar7 = 0x11;
    }
    else {
      iVar6 = 0;
      uVar7 = 0x11;
      do {
        uVar3 = System_String__get_Chars_46ccb24(lVar4,iVar6,0);
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 * 0x1f + (uVar3 & 0xffff);
      } while (iVar6 < *(int *)(lVar4 + 0x10));
    }
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    return uVar7;
  }
LAB_02330368:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

