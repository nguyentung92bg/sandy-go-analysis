/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$OnGoldenUnlock
void Dino_BusSand_App_UI_ContinueBottomPanel__OnGoldenUnlock (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$OnGoldenUnlock
   void Dino_BusSand_App_UI_ContinueBottomPanel__OnGoldenUnlock
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, int32_t packId, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_ContinueBottomPanel__OnGoldenUnlock_22c1a6c(ulong param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar7 = param_1;
  if ((bRam0000000004f9c332 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65b8);
    FUN_02132f7c(PTR_DAT_04caec68);
    uVar7 = FUN_02132f7c(PTR_DAT_04caf008);
    bRam0000000004f9c332 = 1;
  }
  if (((*(char *)(param_1 + 0x4e) != '\0') || (param_2 < 1)) || (*(char *)(param_1 + 0x2c) != '\0'))
  {
    return uVar7;
  }
  iVar1 = *(int *)(*(long *)PTR_DAT_04caec68 + 0xe4);
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cb65b8 + 0xb8) + 8) = 1;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = *(undefined8 *)PTR_DAT_04caf008;
  if ((bRam0000000004f9ba63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caee20);
    FUN_02132f7c(PTR_DAT_04caee28);
    FUN_02132f7c(PTR_DAT_04caee30);
    FUN_02132f7c(PTR_DAT_04caee38);
    bRam0000000004f9ba63 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar9 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (lVar9 != 0) {
    uVar7 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar9,*(undefined8 *)PTR_DAT_04caee28);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caee20);
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_Param___ctor_21b233c(lVar6,0);
    if (lVar6 != 0) {
      *(int *)(lVar6 + 0x10) = param_2;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),0);
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),uVar8);
      puVar4 = PTR_DAT_04caee38;
      puVar3 = PTR_DAT_04caee30;
      *(undefined1 *)(lVar6 + 0x28) = 0;
      uVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar9,*(undefined8 *)puVar4,2,lVar6,*(undefined8 *)puVar3);
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar9);
      }
      puVar2 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar8,0);
      return (ulong)((uVar5 ^ 0xffffffff) & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

