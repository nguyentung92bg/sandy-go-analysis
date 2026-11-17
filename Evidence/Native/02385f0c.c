/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$.cctor
void Dino_BusSand_App_UI_KitTopBar___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$.cctor
   void Dino_BusSand_App_UI_KitTopBar___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitTopBar___cctor_2285f0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_04caf420;
  if ((bRam0000000004f9c15c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
    bRam0000000004f9c15c = 1;
  }
  uVar2 = _UNK_00e6bd30;
  uVar1 = _UNK_00e69ea8;
  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 02385f5c to 02485f87 has its CatchHandler @ 02385fa4 */
  *(undefined8 *)(lVar5 + 0xc) = _UNK_00e6bd38;
  *(undefined8 *)(lVar5 + 4) = uVar2;
  uVar2 = _UNK_00e6b900;
  lVar5 = *(long *)puVar4;
  lVar6 = *(long *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar6 + 0x28) = _UNK_00e6b908;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  uVar3 = _UNK_00e6b698;
  uVar2 = _UNK_00e6b690;
  *(undefined8 *)(lVar6 + 0x30) = uVar1;
  uVar1 = _UNK_00e6a3c8;
  lVar6 = *(long *)(lVar5 + 0xb8);
                    /* try { // try from 02385f88 to 02485fbb has its CatchHandler @ 02385b54 */
  *(undefined8 *)(lVar6 + 0x40) = uVar3;
  *(undefined8 *)(lVar6 + 0x38) = uVar2;
  *(undefined8 *)(lVar6 + 0x48) = uVar1;
  *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x50) = 1;
  return;
}

