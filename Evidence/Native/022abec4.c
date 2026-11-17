/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OpenGoldenPanel
bool Dino_BusSand_App_UI_GiftPackUi__OpenGoldenPanel (int32_t packId, System_Action_o* onClosed, System_String_o* source, bool viaRegistry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$OpenGoldenPanel
   bool Dino_BusSand_App_UI_GiftPackUi__OpenGoldenPanel (int32_t packId, System_Action_o* onClosed,
   System_String_o* source, bool viaRegistry, const MethodInfo* method); */

uint Dino_BusSand_App_UI_GiftPackUi__OpenGoldenPanel_21abec4
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000004f9ba63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caee20);
    FUN_02132f7c(PTR_DAT_04caee28);
    FUN_02132f7c(PTR_DAT_04caee30);
    FUN_02132f7c(PTR_DAT_04caee38);
    bRam0000000004f9ba63 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (lVar8 != 0) {
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar8,*(undefined8 *)PTR_DAT_04caee28);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caee20);
    Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_Param___ctor_21b233c(lVar6,0);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x10) = param_1;
      *(undefined8 *)(lVar6 + 0x18) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x18),param_2);
      *(undefined8 *)(lVar6 + 0x20) = param_3;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),param_3);
      puVar3 = PTR_DAT_04caee38;
      puVar2 = PTR_DAT_04caee30;
      *(byte *)(lVar6 + 0x28) = param_4 & 1;
      uVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar8,*(undefined8 *)puVar3,2,lVar6,*(undefined8 *)puVar2);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar7,0);
      return (uVar4 ^ 0xffffffff) & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

