/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<>c__DisplayClass30_0$$<InitGolden>b__0
void Dino_BusSand_App_UI_ContinueBottomPanel___c__DisplayClass30_0___InitGolden_b__0 (Dino_BusSand_App_UI_ContinueBottomPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<>c__DisplayClass30_0$$<InitGolden>b__0
   void Dino_BusSand_App_UI_ContinueBottomPanel___c__DisplayClass30_0___InitGolden_b__0
   (Dino_BusSand_App_UI_ContinueBottomPanel___c__DisplayClass30_0_o* __this, const MethodInfo*
   method); */

ulong Dino_BusSand_App_UI_ContinueBottomPanel___c__DisplayClass30_0___InitGolden_b__0_22c20e0
                (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar8 = uVar10;
  if ((bRam0000000004f9c332 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65b8);
    FUN_02132f7c(PTR_DAT_04caec68);
    uVar8 = FUN_02132f7c(PTR_DAT_04caf008);
    bRam0000000004f9c332 = 1;
  }
  if (((*(char *)(uVar10 + 0x4e) != '\0') || (iVar2 < 1)) || (*(char *)(uVar10 + 0x2c) != '\0')) {
    return uVar8;
  }
  iVar1 = *(int *)(*(long *)PTR_DAT_04caec68 + 0xe4);
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cb65b8 + 0xb8) + 8) = 1;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = *(undefined8 *)PTR_DAT_04caf008;
  if ((bRam0000000004f9ba63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caee20);
    FUN_02132f7c(PTR_DAT_04caee28);
    FUN_02132f7c(PTR_DAT_04caee30);
    FUN_02132f7c(PTR_DAT_04caee38);
    bRam0000000004f9ba63 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  if (lVar11 != 0) {
    uVar10 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                       (lVar11,*(undefined8 *)PTR_DAT_04caee28);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caee20);
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_Param___ctor_21b233c(lVar7,0);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0x10) = iVar2;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),0);
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20),uVar9);
      puVar5 = PTR_DAT_04caee38;
      puVar4 = PTR_DAT_04caee30;
      *(undefined1 *)(lVar7 + 0x28) = 0;
      uVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar11,*(undefined8 *)puVar5,2,lVar7,*(undefined8 *)puVar4);
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar11);
      }
      puVar3 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar9,0);
      return (ulong)((uVar6 ^ 0xffffffff) & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

