/* IL2CPP: Dino.BusSand.App.UI.UiKit$$.cctor
void Dino_BusSand_App_UI_UiKit___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$.cctor
   void Dino_BusSand_App_UI_UiKit___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_UiKit___cctor_228d11c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  puVar4 = PTR_DAT_04cb5258;
  puVar3 = PTR_DAT_04cb5250;
  puVar2 = PTR_DAT_04caf5c0;
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c19f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf5c0);
    FUN_02132f7c(PTR_DAT_04cb5250);
    FUN_02132f7c(PTR_DAT_04cb5258);
    bRam0000000004f9c19f = 1;
  }
  uVar9 = Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar3);
  puVar6 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  *puVar6 = uVar9;
  puVar6[1] = param_2;
  uVar5 = *(undefined8 *)puVar2;
  puVar6[2] = param_3;
  puVar6[3] = param_4;
  uVar9 = Dino_BusSand_App_UI_UiKit__Hex_2285a84(uVar5);
  uVar5 = *(undefined8 *)puVar4;
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(lVar7 + 0x10) = uVar9;
  *(undefined4 *)(lVar7 + 0x14) = param_2;
  *(undefined4 *)(lVar7 + 0x18) = param_3;
  *(undefined4 *)(lVar7 + 0x1c) = param_4;
  uVar9 = Dino_BusSand_App_UI_UiKit__Hex_2285a84(uVar5);
  lVar7 = *(long *)puVar1;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined4 *)(lVar8 + 0x20) = uVar9;
  *(undefined4 *)(lVar8 + 0x24) = param_2;
  uVar5 = _UNK_00e6a268;
  *(undefined4 *)(lVar8 + 0x28) = param_3;
  *(undefined4 *)(lVar8 + 0x2c) = param_4;
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar8 + 0x30) = uVar5;
  *(undefined4 *)(lVar8 + 0x38) = 0x41b00000;
  *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x3c) = 0;
  return;
}

