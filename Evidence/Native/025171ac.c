/* IL2CPP: Dino.BusSand.Core.SandTuning$$.cctor
void Dino_BusSand_Core_SandTuning___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.SandTuning$$.cctor
   void Dino_BusSand_Core_SandTuning___cctor (const MethodInfo* method); */

void Dino_BusSand_Core_SandTuning___cctor_24171ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04cbc670;
  if ((bRam0000000004f9cb76 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc670);
    bRam0000000004f9cb76 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  uVar1 = _UNK_00e69b88;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  *(undefined4 *)(lVar3 + 0x1c) = 1;
  *(undefined8 *)(lVar3 + 0x24) = uVar1;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined4 *)(lVar3 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar3 + 0x14) = 0x3dcccccd3dcccccd;
  *(undefined8 *)(lVar3 + 0x30) = _UNK_00e6a928;
  *(undefined8 *)(lVar3 + 0x38) = 0x3e80000000000002;
  System_Object___ctor_4870e5c(lVar3,0);
  **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

