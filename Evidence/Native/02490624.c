/* IL2CPP: Dino.BusSand.View.PackPalette$$Shadow
UnityEngine_Color_o Dino_BusSand_View_PackPalette__Shadow (uint8_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$Shadow
   UnityEngine_Color_o Dino_BusSand_View_PackPalette__Shadow (uint8_t id, const MethodInfo* method);
    */

undefined4 Dino_BusSand_View_PackPalette__Shadow_2390624(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9c8c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8c4 = 1;
  }
  puVar2 = PTR_DAT_04cb70d8;
  if (0x40 < ((uint)param_1 & 0xff)) {
    return 0;
  }
  lVar3 = *(long *)PTR_DAT_04cb70d8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 == 0) {
LAB_02490718:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    if (*(char *)(lVar4 + (param_1 & 0xff) + 0x20) == '\0') {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_PackPalette__Resolve_239002c(param_1 & 0xffffffff);
      lVar3 = *(long *)puVar2;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_02490718;
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      return *(undefined4 *)(lVar3 + (param_1 & 0xff) * 0x10 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

