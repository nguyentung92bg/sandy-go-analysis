/* IL2CPP: Dino.BusSand.DataPack$$Unpack
System_Collections_Generic_Dictionary_string__byte____o* Dino_BusSand_DataPack__Unpack (System_Byte_array* file, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247a180) */
/* WARNING: Removing unreachable block (ram,0x02479e94) */
/* WARNING: Removing unreachable block (ram,0x0247a18c) */
/* WARNING: Removing unreachable block (ram,0x0247a114) */
/* WARNING: Removing unreachable block (ram,0x0247a118) */
/* WARNING: Removing unreachable block (ram,0x02479c14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.DataPack$$Unpack
   System_Collections_Generic_Dictionary_string__byte____o* Dino_BusSand_DataPack__Unpack
   (System_Byte_array* file, const MethodInfo* method); */

long Dino_BusSand_DataPack__Unpack_23799d0(long param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  byte bVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  
  if ((bRam0000000004f9c80a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb660);
    FUN_02132f7c(PTR_DAT_04cbb668);
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbb670);
    FUN_02132f7c(PTR_DAT_04cbb678);
    FUN_02132f7c(PTR_DAT_04cbb680);
    FUN_02132f7c(PTR_DAT_04cbb688);
    FUN_02132f7c(PTR_DAT_04cbb690);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbb698);
    bRam0000000004f9c80a = 1;
  }
  puVar4 = PTR_DAT_04cac008;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0x37 < *(int *)(param_1 + 0x18)) {
    lVar9 = *(long *)PTR_DAT_04cac008;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    uVar10 = Dino_BusSand_DataPack__StartsWith_237b418(param_1,**(undefined8 **)(lVar9 + 0xb8));
    puVar3 = PTR_DAT_04cbb688;
    if ((uVar10 & 1) != 0) {
      iVar8 = *(int *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_DataPack__MacKey_237c0b0();
      plVar12 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Security_Cryptography_HMACSHA256___ctor_47016e4(plVar12,uVar11,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar10 = (ulong)(iVar8 - 0x20);
      lVar9 = System_Security_Cryptography_HashAlgorithm__ComputeHash_46fd760
                        (plVar12,param_1,0,uVar10,0);
      puVar3 = PTR_DAT_04ca9b30;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar19 = uVar10 << 0x20;
      uVar17 = 0;
      bVar16 = 0;
      do {
        if (*(uint *)(lVar9 + 0x18) == uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if ((ulong)*(uint *)(param_1 + 0x18) <= uVar10 + uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar1 = lVar19 >> 0x20;
        pbVar2 = (byte *)(lVar9 + 0x20 + uVar17);
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 0x100000000;
        bVar16 = bVar16 | *(byte *)(param_1 + lVar1 + 0x20) ^ *pbVar2;
      } while (uVar17 != 0x20);
      if (bVar16 != 0) {
        thunk_FUN_021985a8(PTR_DAT_04cbb6a0);
        uVar11 = thunk_FUN_0216e89c();
        uVar14 = thunk_FUN_021985a8(PTR_DAT_04cbb6b8);
        System_IO_InvalidDataException___ctor_401fb80(uVar11,uVar14,0);
        uVar14 = thunk_FUN_021985a8(PTR_DAT_04cbb6b0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,uVar14);
      }
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04ca9b30) {
              puVar13 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02479bfc;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04ca9b30,0);
LAB_02479bfc:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      puVar5 = PTR_DAT_04cbb660;
      uVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04caaad0,0x10);
      System_Buffer__BlockCopy_485a108(param_1,4,uVar11,0,0x10,0);
      uVar7 = System_BitConverter__ToInt32_47b8dd0(param_1,0x14,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar5);
      }
      plVar12 = (long *)System_Security_Cryptography_Aes__Create_46fe140(0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = Dino_BusSand_DataPack__Key_237bea0();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(uVar14,uVar14);
      }
      (**(code **)(*plVar12 + 0x1f8))(plVar12,uVar14,*(undefined8 *)(*plVar12 + 0x200));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      (**(code **)(*plVar12 + 0x1d8))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x1e0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      (**(code **)(*plVar12 + 0x248))(plVar12,1,*(undefined8 *)(*plVar12 + 0x250));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      (**(code **)(*plVar12 + 0x268))(plVar12,2,*(undefined8 *)(*plVar12 + 0x270));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar15 = (long *)(**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cbb690) {
            puVar13 = (undefined8 *)(lVar9 + (long)(*piVar18 + 4) * 0x10 + 0x138);
            goto LAB_02479d94;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)PTR_DAT_04cbb690,4);
LAB_02479d94:
      uVar11 = (*(code *)*puVar13)(plVar15,param_1,0x18,uVar7,puVar13[1]);
      if (plVar15 != (long *)0x0) {
        lVar9 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02479e10;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)puVar3,0);
LAB_02479e10:
        (*(code *)*puVar13)(plVar15,puVar13[1]);
      }
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02479e78;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar3,0);
LAB_02479e78:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb680);
      System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                (lVar9,*(undefined8 *)PTR_DAT_04cbb670);
      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb698);
      System_IO_MemoryStream___ctor_47ef12c(uVar14,uVar11,0);
      plVar12 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb668);
      System_IO_BinaryReader___ctor_47ff1a8(plVar12,uVar14,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar11 = (**(code **)(*plVar12 + 0x288))(plVar12,4,*(undefined8 *)(*plVar12 + 0x290));
      lVar19 = *(long *)puVar4;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar19 = *(long *)puVar4;
      }
      uVar10 = Dino_BusSand_DataPack__StartsWith_237b418
                         (uVar11,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
      if ((uVar10 & 1) == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cbb6a0);
        uVar11 = thunk_FUN_0216e89c();
        uVar14 = thunk_FUN_021985a8(PTR_DAT_04cbb6c0);
        System_IO_InvalidDataException___ctor_401fb80(uVar11,uVar14,0);
        uVar14 = thunk_FUN_021985a8(PTR_DAT_04cbb6b0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,uVar14);
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar8 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
      puVar4 = PTR_DAT_04cbb678;
      if (0 < iVar8) {
        do {
          plVar15 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar6 = (**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
          uVar11 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x290));
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224(uVar11,uVar11);
          }
          uVar11 = (**(code **)(*plVar15 + 0x358))(plVar15,uVar11,*(undefined8 *)(*plVar15 + 0x360))
          ;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar7 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
          uVar14 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x290));
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar9,uVar11,uVar14,*(undefined8 *)puVar4);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (plVar12 != (long *)0x0) {
        lVar19 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0247a080;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar3,0);
LAB_0247a080:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      return lVar9;
    }
  }
  thunk_FUN_021985a8(PTR_DAT_04cbb6a0);
  uVar11 = thunk_FUN_0216e89c();
  uVar14 = thunk_FUN_021985a8(PTR_DAT_04cbb6a8);
  System_IO_InvalidDataException___ctor_401fb80(uVar11,uVar14,0);
  uVar14 = thunk_FUN_021985a8(PTR_DAT_04cbb6b0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar11,uVar14);
}

