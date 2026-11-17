/* IL2CPP: Dino.BusSand.GameAudio$$OnDestroy
void Dino_BusSand_GameAudio__OnDestroy (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$OnDestroy
   void Dino_BusSand_GameAudio__OnDestroy (Dino_BusSand_GameAudio_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_GameAudio__OnDestroy_23825d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c826 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c826 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,param_1,0);
  puVar1 = PTR_DAT_04cab1f0;
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)PTR_DAT_04cab1f0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *puVar5 = 0;
  thunk_FUN_02134474(puVar5,0);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar5 = 0;
  thunk_FUN_02134474(puVar5,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c883 == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9c883 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  **(undefined8 **)(lVar3 + 0xb8) = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

