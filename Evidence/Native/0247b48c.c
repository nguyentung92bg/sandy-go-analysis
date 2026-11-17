/* IL2CPP: Dino.BusSand.DataPack$$Unseal
System_String_o* Dino_BusSand_DataPack__Unseal (System_Byte_array* file, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247b814) */
/* WARNING: Removing unreachable block (ram,0x0247b804) */
/* WARNING: Removing unreachable block (ram,0x0247b80c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.DataPack$$Unseal
   System_String_o* Dino_BusSand_DataPack__Unseal (System_Byte_array* file, const MethodInfo*
   method); */

undefined8 Dino_BusSand_DataPack__Unseal_237b48c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cac008;
  if ((bRam0000000004f9c803 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbb6d0);
    bRam0000000004f9c803 = 1;
  }
  puVar2 = PTR_DAT_04cbb6d0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_DataPack__Unpack_23799d0(param_1);
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  thunk_FUN_02134474((undefined8 *)(lVar4 + 0x10),uVar3);
  uVar3 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9c806 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb728);
    FUN_02132f7c(PTR_DAT_04cbb700);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbb698);
    bRam0000000004f9c806 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(lVar4 + 0x10),uVar3,&uStack_28,*(undefined8 *)PTR_DAT_04cbb728);
  uVar3 = uStack_28;
  puVar1 = PTR_DAT_04cbb698;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar6 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb698);
    System_IO_MemoryStream___ctor_47ef12c(plVar6,uVar3,0);
    plVar7 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb700);
    System_IO_Compression_GZipStream___ctor_401fbac(plVar7,plVar6,0,0);
    plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_IO_MemoryStream___ctor_47eef9c(plVar8,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_IO_Stream__CopyTo_47fac6c(plVar7,plVar8,0);
    plVar9 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = (**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar3,uVar3);
    }
    uVar3 = (**(code **)(*plVar9 + 0x358))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x360));
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0247b6f4;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b6f4:
      (*(code *)*puVar10)(plVar8,puVar10[1]);
    }
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0247b764;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b764:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0247b7d8;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b7d8:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
    }
  }
  return uVar3;
}

