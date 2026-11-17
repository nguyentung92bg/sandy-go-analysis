/* IL2CPP: Dino.BusSand.DataPack$$Pack
System_Byte_array* Dino_BusSand_DataPack__Pack (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o* entries, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247af94) */
/* WARNING: Removing unreachable block (ram,0x0247b180) */
/* WARNING: Removing unreachable block (ram,0x0247a898) */
/* WARNING: Removing unreachable block (ram,0x0247b010) */
/* WARNING: Removing unreachable block (ram,0x0247a8e8) */
/* WARNING: Removing unreachable block (ram,0x0247a9a8) */
/* WARNING: Removing unreachable block (ram,0x0247aafc) */
/* WARNING: Removing unreachable block (ram,0x0247a9ec) */
/* WARNING: Removing unreachable block (ram,0x0247abe0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.DataPack$$Pack
   System_Byte_array* Dino_BusSand_DataPack__Pack
   (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o* entries, const
   MethodInfo* method); */

undefined8 Dino_BusSand_DataPack__Pack_237a450(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *plStack_108;
  long **pplStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long **pplStack_e0;
  long lStack_d8;
  long **pplStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  puVar5 = PTR_DAT_04cbb6e0;
  puVar4 = PTR_DAT_04cbb698;
  if ((bRam0000000004f9c809 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb660);
    FUN_02132f7c(PTR_DAT_04cbb6e0);
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbb6e8);
    FUN_02132f7c(PTR_DAT_04cbb6f0);
    FUN_02132f7c(PTR_DAT_04cbb6f8);
    FUN_02132f7c(PTR_DAT_04cbb700);
    FUN_02132f7c(PTR_DAT_04cbb688);
    FUN_02132f7c(PTR_DAT_04cbb690);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9da8);
    FUN_02132f7c(PTR_DAT_04ca9db0);
    FUN_02132f7c(PTR_DAT_04cbb708);
    FUN_02132f7c(PTR_DAT_04cbb710);
    FUN_02132f7c(PTR_DAT_04cbb718);
    FUN_02132f7c(PTR_DAT_04cbb720);
    FUN_02132f7c(PTR_DAT_04cbb698);
    bRam0000000004f9c809 = 1;
  }
  puVar3 = PTR_DAT_04cac008;
  puVar2 = PTR_DAT_04ca9b30;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  plStack_b0 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  plVar7 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_IO_MemoryStream___ctor_47eef9c(plVar7,0);
  pplStack_d0 = &plStack_68;
  lStack_d8 = 0;
  plStack_68 = plVar7;
  plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_IO_BinaryWriter___ctor_4800970(plVar8,plVar7,0);
  pplStack_e0 = &plStack_70;
  lStack_e8 = 0;
  plStack_70 = plVar8;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb720);
  System_Collections_Generic_List_KeyValuePair_object__object_____ctor_396fbcc
            (lVar9,param_1,*(undefined8 *)PTR_DAT_04cbb710);
  plVar7 = plStack_70;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  (**(code **)(*plVar7 + 0x1e8))
            (plVar7,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
             *(undefined8 *)(*plVar7 + 0x1f0));
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  (**(code **)(*plStack_70 + 600))
            (plStack_70,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(*plStack_70 + 0x260));
  System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator_3970d7c
            (&plStack_108,lVar9,*(undefined8 *)PTR_DAT_04cbb708);
  puVar6 = PTR_DAT_04cbb700;
  puVar5 = PTR_DAT_04cbb6f0;
  uStack_88 = pplStack_100;
  plStack_90 = plStack_108;
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  plStack_108 = (long *)0x0;
  pplStack_100 = &plStack_90;
  while (uVar10 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext_35b6618
                            (&plStack_90,*(undefined8 *)puVar5), uVar13 = uStack_78,
        uVar12 = uStack_80, (uVar10 & 1) != 0) {
    plVar7 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar9 = (**(code **)(*plVar7 + 0x248))(plVar7,uVar12,*(undefined8 *)(*plVar7 + 0x250));
    if ((lVar9 == 0) || (plStack_70 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_70 + 0x248))
              (plStack_70,*(undefined2 *)(lVar9 + 0x18),*(undefined8 *)(*plStack_70 + 0x250));
    if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_70 + 0x1e8))(plStack_70,lVar9,*(undefined8 *)(*plStack_70 + 0x1f0));
    plVar7 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_IO_MemoryStream___ctor_47eef9c(plVar7,0);
    plStack_98 = plVar7;
    plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar6);
    System_IO_Compression_GZipStream___ctor_401fc74(plVar8,plVar7,0,1,0);
    plStack_a0 = plVar8;
    plVar7 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar9 = (**(code **)(*plVar7 + 0x248))(plVar7,uVar13,*(undefined8 *)(*plVar7 + 0x250));
    if ((lVar9 == 0) || (plStack_a0 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_a0 + 0x378))
              (plStack_a0,lVar9,0,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(*plStack_a0 + 0x380)
              );
    plVar7 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      lVar9 = *plStack_a0;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247a7f4;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plStack_a0,*(long *)puVar2,0);
LAB_0247a7f4:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if (plStack_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar9 = (**(code **)(*plStack_98 + 1000))(plStack_98,*(undefined8 *)(*plStack_98 + 0x3f0));
    plVar7 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      lVar14 = *plStack_98;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247a87c;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plStack_98,*(long *)puVar2,0);
LAB_0247a87c:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if ((lVar9 == 0) || (plStack_70 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_70 + 600))
              (plStack_70,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(*plStack_70 + 0x260));
    if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_70 + 0x1e8))(plStack_70,lVar9,*(undefined8 *)(*plStack_70 + 0x1f0));
  }
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose_35b6614
            (pplStack_100,*(undefined8 *)PTR_DAT_04cbb6e8);
  if (plStack_108 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213321c();
  }
  if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  (**(code **)(*plStack_70 + 0x1a8))(plStack_70,*(undefined8 *)(*plStack_70 + 0x1b0));
  if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = (**(code **)(*plStack_68 + 1000))(plStack_68,*(undefined8 *)(*plStack_68 + 0x3f0));
  plVar7 = *pplStack_e0;
  if (plVar7 != (long *)0x0) {
    lVar14 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0247ab58;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247ab58:
    (*(code *)*puVar11)(plVar7,puVar11[1]);
  }
  if (lStack_e8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213321c();
  }
  plVar7 = *pplStack_d0;
  if (plVar7 != (long *)0x0) {
    lVar14 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0247abc4;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247abc4:
    (*(code *)*puVar11)(plVar7,puVar11[1]);
  }
  if (lStack_d8 == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cbb660 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar7 = (long *)System_Security_Cryptography_Aes__Create_46fe140(0);
    pplStack_100 = &plStack_a8;
    plStack_108 = (long *)0x0;
    plStack_a8 = plVar7;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = Dino_BusSand_DataPack__Key_237bea0();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar12,uVar12);
    }
    (**(code **)(*plVar7 + 0x1f8))(plVar7,uVar12,*(undefined8 *)(*plVar7 + 0x200));
    if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_a8 + 0x2c8))(plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2d0));
    if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_a8 + 0x248))(plStack_a8,1,*(undefined8 *)(*plStack_a8 + 0x250));
    if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_a8 + 0x268))(plStack_a8,2,*(undefined8 *)(*plStack_a8 + 0x270));
    if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar7 = (long *)(**(code **)(*plStack_a8 + 0x278))
                               (plStack_a8,*(undefined8 *)(*plStack_a8 + 0x280));
    pplStack_d0 = &plStack_b0;
    lStack_d8 = 0;
    plStack_b0 = plVar7;
    if ((lVar9 == 0) || (plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *plVar7;
    uVar1 = *(undefined4 *)(lVar9 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cbb690) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
          goto LAB_0247ad1c;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cbb690,4);
LAB_0247ad1c:
    lVar9 = (*(code *)*puVar11)(plVar7,lVar9,0,uVar1,puVar11[1]);
    plVar7 = *pplStack_d0;
    if (plVar7 != (long *)0x0) {
      lVar14 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247ad90;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247ad90:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if (lStack_d8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213321c();
    }
    plVar7 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_IO_MemoryStream___ctor_47eef9c(plVar7,0);
    pplStack_d0 = &plStack_b8;
    lStack_d8 = 0;
    plStack_b8 = plVar7;
    plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb6e0);
    System_IO_BinaryWriter___ctor_4800970(plVar8,plVar7,0);
    pplStack_e0 = &plStack_c0;
    lStack_e8 = 0;
    plStack_c0 = plVar8;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plVar8 + 0x1e8))
              (plVar8,**(undefined8 **)(*(long *)puVar3 + 0xb8),*(undefined8 *)(*plVar8 + 0x1f0));
    plVar7 = plStack_c0;
    if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = (**(code **)(*plStack_a8 + 0x1c8))(plStack_a8,*(undefined8 *)(*plStack_a8 + 0x1d0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar12,uVar12);
    }
    (**(code **)(*plVar7 + 0x1e8))(plVar7,uVar12,*(undefined8 *)(*plVar7 + 0x1f0));
    if ((lVar9 == 0) || (plStack_c0 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_c0 + 600))
              (plStack_c0,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(*plStack_c0 + 0x260));
    if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_c0 + 0x1e8))(plStack_c0,lVar9,*(undefined8 *)(*plStack_c0 + 0x1f0));
    if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_c0 + 0x1a8))(plStack_c0,*(undefined8 *)(*plStack_c0 + 0x1b0));
    if (plStack_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = (**(code **)(*plStack_b8 + 1000))(plStack_b8,*(undefined8 *)(*plStack_b8 + 0x3f0));
    uVar13 = Dino_BusSand_DataPack__MacKey_237c0b0();
    plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb688);
    System_Security_Cryptography_HMACSHA256___ctor_47016e4(plVar8,uVar13,0);
    plVar7 = plStack_c0;
    plStack_c8 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = System_Security_Cryptography_HashAlgorithm__ComputeHash_46fd600(plVar8,uVar12,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar12,uVar12);
    }
    (**(code **)(*plVar7 + 0x1e8))(plVar7,uVar12,*(undefined8 *)(*plVar7 + 0x1f0));
    plVar7 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      lVar9 = *plStack_c8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247af7c;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plStack_c8,*(long *)puVar2,0);
LAB_0247af7c:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if (plStack_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    (**(code **)(*plStack_c0 + 0x1a8))(plStack_c0,*(undefined8 *)(*plStack_c0 + 0x1b0));
    if (plStack_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = (**(code **)(*plStack_b8 + 1000))(plStack_b8,*(undefined8 *)(*plStack_b8 + 0x3f0));
    plVar7 = *pplStack_e0;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247b1dc;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247b1dc:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if (lStack_e8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213321c();
    }
    plVar7 = *pplStack_d0;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247b248;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247b248:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if (lStack_d8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213321c();
    }
    plVar7 = *pplStack_100;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0247b2b4;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0247b2b4:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
    }
    if (plStack_108 == (long *)0x0) {
      return uVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213321c();
}

