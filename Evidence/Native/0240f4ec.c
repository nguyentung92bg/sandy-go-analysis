/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$.cctor
void Dino_BusSand_App_UI_HudPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$.cctor
   void Dino_BusSand_App_UI_HudPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel___cctor_230f4ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04cb6a88;
  puVar1 = PTR_DAT_04cabdb8;
  if ((bRam0000000004f9c53d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c53d = 1;
  }
  uVar3 = FUN_02133068(*(undefined8 *)puVar1,4);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar3);
  uVar3 = _UNK_00e6b040;
  lVar4 = *(long *)puVar2;
  lVar5 = *(long *)(lVar4 + 0xb8);
  *(undefined8 *)(lVar5 + 0x10) = _UNK_00e6b048;
  *(undefined8 *)(lVar5 + 8) = uVar3;
  *(undefined4 *)(lVar5 + 0x18) = 0x3f800000;
  uVar3 = _UNK_00e6bdd0;
  lVar5 = *(long *)(lVar4 + 0xb8);
  *(undefined8 *)(lVar5 + 0x24) = _UNK_00e6bdd8;
  *(undefined8 *)(lVar5 + 0x1c) = uVar3;
  uVar3 = _UNK_00e6ab70;
  lVar4 = *(long *)(lVar4 + 0xb8);
  *(undefined8 *)(lVar4 + 0x34) = _UNK_00e6ab78;
  *(undefined8 *)(lVar4 + 0x2c) = uVar3;
  return;
}

