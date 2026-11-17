/* IL2CPP: Dino.BusSand.DataPack$$MacKey
System_Byte_array* Dino_BusSand_DataPack__MacKey (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247c208) */
/* IL2CPP: Dino.BusSand.DataPack$$MacKey
   System_Byte_array* Dino_BusSand_DataPack__MacKey (const MethodInfo* method); */

undefined8 Dino_BusSand_DataPack__MacKey_237c0b0(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar2 = PTR_DAT_04cac008;
  if ((bRam0000000004f9c80c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    bRam0000000004f9c80c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_DataPack__Key_237bea0();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (0 < (long)(int)uVar1) {
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(byte *)(lVar3 + 0x20 + uVar7) = *(byte *)(lVar3 + 0x20 + uVar7) ^ 0x5c;
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)uVar1);
  }
  plVar4 = (long *)System_Security_Cryptography_SHA256__Create_470a640(0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = System_Security_Cryptography_HashAlgorithm__ComputeHash_46fd600(plVar4,lVar3,0);
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0247c1d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247c1d8:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return uVar5;
}

