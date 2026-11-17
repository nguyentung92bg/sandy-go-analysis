/* IL2CPP: Dino.BusSand.View.MechFx$$set_I
void Dino_BusSand_View_MechFx__set_I (Dino_BusSand_View_MechFx_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$set_I
   void Dino_BusSand_View_MechFx__set_I (Dino_BusSand_View_MechFx_o* value, const MethodInfo*
   method); */

void Dino_BusSand_View_MechFx__set_I_23bdd38(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_04cbcf88;
  if ((bRam0000000004f9c9b2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbcf88);
    bRam0000000004f9c9b2 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = param_1;
  uVar2 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar2 >> 0xc & 0x3f),(uVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

