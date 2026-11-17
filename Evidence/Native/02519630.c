/* IL2CPP: Dino.BusSand.Core.SandPalette$$Name
System_String_o* Dino_BusSand_Core_SandPalette__Name (uint8_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandPalette$$Name
   System_String_o* Dino_BusSand_Core_SandPalette__Name (uint8_t id, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_SandPalette__Name_2419630(byte param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000004f9cb82 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbe740);
    bRam0000000004f9cb82 = 1;
  }
  puVar2 = PTR_DAT_04cbbfb8;
  puVar5 = (undefined8 *)PTR_DAT_04cbe740;
  if (param_1 != 0) {
    lVar3 = *(long *)PTR_DAT_04cbbfb8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar4 == 0) {
LAB_025196f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    puVar5 = (undefined8 *)PTR_DAT_04cbe740;
    if ((int)(uint)param_1 <= *(int *)(lVar4 + 0x18)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_025196f4;
      }
      uVar1 = param_1 - 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      puVar5 = (undefined8 *)(lVar4 + (ulong)uVar1 * 8 + 0x20);
    }
  }
  return *puVar5;
}

