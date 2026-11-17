/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$.cctor
void Dino_BusSand_App_UI_HomeAtelier___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$.cctor
   void Dino_BusSand_App_UI_HomeAtelier___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier___cctor_22db150(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_DAT_04cac6c0;
  puVar1 = PTR_DAT_04cabdb8;
  if ((bRam0000000004f9c3e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c3e9 = 1;
  }
  uVar3 = _UNK_00e6bdb0;
  puVar4 = *(undefined1 **)(*(long *)puVar2 + 0xb8);
  *(undefined8 *)(puVar4 + 0xc) = _UNK_00e6bdb8;
  *(undefined8 *)(puVar4 + 4) = uVar3;
  uVar3 = *(undefined8 *)puVar1;
  *puVar4 = 1;
  uVar3 = FUN_02133068(uVar3,4);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar5 = uVar3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

