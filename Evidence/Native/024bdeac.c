/* IL2CPP: Dino.BusSand.View.MechFx$$OnDestroy
void Dino_BusSand_View_MechFx__OnDestroy (Dino_BusSand_View_MechFx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechFx$$OnDestroy
   void Dino_BusSand_View_MechFx__OnDestroy (Dino_BusSand_View_MechFx_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_View_MechFx__OnDestroy_23bdeac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c9b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9b4 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9ca05 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbcf88);
    cRam0000000004f9ca05 = '\x01';
  }
  puVar2 = PTR_DAT_04cbcf88;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_04cbcf88 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,param_1,0);
  if ((uVar3 & 1) != 0) {
    if (cRam0000000004f9ca04 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbcf88);
      cRam0000000004f9ca04 = '\x01';
    }
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    uVar3 = *(ulong *)(*(long *)puVar2 + 0xb8);
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

