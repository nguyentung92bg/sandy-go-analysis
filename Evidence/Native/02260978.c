/* IL2CPP: Dino.BusSand.App.Lang$$.cctor
void Dino_BusSand_App_Lang___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$.cctor
   void Dino_BusSand_App_Lang___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Lang___cctor_2160978(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_DAT_04cac078;
  puVar1 = PTR_DAT_04cab550;
  if ((bRam0000000004f9b820 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cac078);
    bRam0000000004f9b820 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = *(undefined8 *)puVar2;
  uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

