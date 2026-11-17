/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$.cctor
void Dino_BusSand_App_UI_RemoveAdsPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$.cctor
   void Dino_BusSand_App_UI_RemoveAdsPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_RemoveAdsPanel___cctor_22b6084(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04cafb48;
  if ((bRam0000000004f9c2e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafb48);
    FUN_02132f7c(PTR_DAT_04cb6138);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb62b8);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cb62c0);
    FUN_02132f7c(PTR_DAT_04cb62c8);
    FUN_02132f7c(PTR_DAT_04cb62d0);
    bRam0000000004f9c2e7 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_UI_ArtPopup_Look___ctor_217f3d8(lVar6,0);
  puVar5 = PTR_DAT_04cb62c8;
  puVar4 = PTR_DAT_04cb62c0;
  puVar3 = PTR_DAT_04cb6138;
  puVar2 = PTR_DAT_04caed88;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_04cb62d0;
    thunk_FUN_02134474();
    uVar8 = *(undefined8 *)puVar5;
    *(undefined4 *)(lVar6 + 0x18) = 0x43e48000;
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    thunk_FUN_02134474();
    uVar8 = _UNK_00e6a620;
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar6 + 0x28) = uVar8;
    thunk_FUN_02134474();
    uVar8 = _UNK_00e6b250;
    lVar9 = *(long *)puVar3;
    *(undefined8 *)(lVar6 + 0x40) = _UNK_00e6b258;
    *(undefined8 *)(lVar6 + 0x38) = uVar8;
    **(long **)(lVar9 + 0xb8) = lVar6;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar6);
    lVar6 = FUN_02133068(*(undefined8 *)puVar2,3);
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 != 0) {
        *(undefined8 *)(lVar6 + 0x20) = _UNK_00e697b0;
        if (uVar1 != 1) {
          *(undefined8 *)(lVar6 + 0x28) = _UNK_00e69eb0;
          if (2 < uVar1) {
            *(undefined8 *)(lVar6 + 0x30) = _UNK_00e6a1e0;
            puVar4 = PTR_DAT_04cb62b8;
            puVar2 = PTR_DAT_04caadd0;
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar6;
            thunk_FUN_02134474();
            uVar8 = FUN_02133068(*(undefined8 *)puVar2,3);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                      (uVar8,*(undefined8 *)puVar4,0);
            puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *puVar7 = uVar8;
            thunk_FUN_02134474(puVar7,uVar8);
            *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = _UNK_00e69aa8;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

