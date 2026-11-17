/* IL2CPP: Dino.BusSand.Core.SandPalette$$GameColorIds
System_Byte_array* Dino_BusSand_Core_SandPalette__GameColorIds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandPalette$$GameColorIds
   System_Byte_array* Dino_BusSand_Core_SandPalette__GameColorIds (const MethodInfo* method); */

long Dino_BusSand_Core_SandPalette__GameColorIds_2419178(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04cbbfb8;
  if ((bRam0000000004f9cb80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9cb80 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  if ((**(long **)(lVar4 + 0xb8) != 0) &&
     (lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caaad0,
                           *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18)), lVar4 != 0)) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar6 = 0;
      do {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 == 0) goto LAB_02519274;
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_02519270:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar3 = Dino_BusSand_Core_SandPalette__Id_2419278(*(undefined8 *)(lVar5 + uVar6 * 8 + 0x20))
        ;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 <= uVar6) goto LAB_02519270;
        *(undefined1 *)(lVar4 + 0x20 + uVar6) = uVar3;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    return lVar4;
  }
LAB_02519274:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

