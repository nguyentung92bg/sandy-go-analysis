/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$get_Need
int32_t Dino_BusSand_App_Meta_WinChest__get_Need (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$get_Need
   int32_t Dino_BusSand_App_Meta_WinChest__get_Need (const MethodInfo* method); */

int Dino_BusSand_App_Meta_WinChest__get_Need_220d790(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd18 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd18 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  puVar6 = PTR_DAT_04cb4620;
  puVar5 = PTR_DAT_04cb1eb8;
  puVar4 = PTR_DAT_04cb1dd8;
  puVar3 = PTR_DAT_04caec70;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x17c);
    if ((bRam0000000004f9c087 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caec70,0);
      FUN_02132f7c(PTR_DAT_04caa200);
      FUN_02132f7c(PTR_DAT_04cb4620);
      FUN_02132f7c(PTR_DAT_04cb1dd8);
      FUN_02132f7c(PTR_DAT_04cb1e88);
      FUN_02132f7c(PTR_DAT_04cb1eb8);
      bRam0000000004f9c087 = 1;
    }
    uVar9 = FUN_02133068(*(undefined8 *)puVar3,3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
              (uVar9,*(undefined8 *)puVar6,0);
    lVar8 = Dino_BusSand_App_Meta_Monetization__RowInts_22663dc
                      (*(undefined8 *)puVar5,*(undefined8 *)puVar4,uVar9);
    if (lVar8 != 0) {
      if ((int)uVar1 < (int)*(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar7 = *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
        lVar8 = *(long *)PTR_DAT_04caa200;
        iVar2 = *(int *)(lVar8 + 0xe4);
      }
      else {
        iVar7 = Dino_BusSand_App_Meta_Monetization__RowInt_2266340
                          (*(undefined8 *)puVar5,*(undefined8 *)PTR_DAT_04cb1e88,10);
        lVar8 = *(long *)PTR_DAT_04caa200;
        iVar2 = *(int *)(lVar8 + 0xe4);
      }
      if (iVar2 == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      iVar2 = 1;
      if (0 < iVar7) {
        iVar2 = iVar7;
      }
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

