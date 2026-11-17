/* IL2CPP: Dino.BusSand.DataPack$$Key
System_Byte_array* Dino_BusSand_DataPack__Key (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247c060) */
/* IL2CPP: Dino.BusSand.DataPack$$Key
   System_Byte_array* Dino_BusSand_DataPack__Key (const MethodInfo* method); */

undefined8 Dino_BusSand_DataPack__Key_237bea0(void)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_04caaad0;
  if ((bRam0000000004f9c80b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    bRam0000000004f9c80b = 1;
  }
  puVar4 = PTR_DAT_04cac008;
  puVar2 = PTR_DAT_04ca9b30;
  lVar13 = 0x20;
  lVar5 = FUN_02133068(*(undefined8 *)puVar3,0x20);
  lVar14 = 0x3f;
  do {
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar4;
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar10 == 0) {
LAB_0247c054:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar11 = lVar13 - 0x20;
    if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_0247c058:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar6 == 0) goto LAB_0247c054;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar14 - 0x20U) goto LAB_0247c058;
    if (lVar5 == 0) goto LAB_0247c054;
    if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_0247c058;
    pbVar1 = (byte *)(lVar6 + lVar14);
    lVar14 = lVar14 + -1;
    *(byte *)(lVar5 + lVar13) = *(byte *)(lVar10 + lVar13) ^ (char)uVar11 * 'I' ^ *pbVar1;
    lVar13 = lVar13 + 1;
  } while (lVar14 != 0x1f);
  plVar7 = (long *)System_Security_Cryptography_SHA256__Create_470a640(0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = System_Security_Cryptography_HashAlgorithm__ComputeHash_46fd600(plVar7,lVar5,0);
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0247c028;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247c028:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
  }
  return uVar8;
}

