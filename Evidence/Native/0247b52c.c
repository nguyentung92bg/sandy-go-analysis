/* IL2CPP: Dino.BusSand.DataPack$$Text
System_String_o* Dino_BusSand_DataPack__Text (Dino_BusSand_DataPack_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247b814) */
/* WARNING: Removing unreachable block (ram,0x0247b804) */
/* WARNING: Removing unreachable block (ram,0x0247b80c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.DataPack$$Text
   System_String_o* Dino_BusSand_DataPack__Text (Dino_BusSand_DataPack_o* __this, System_String_o*
   name, const MethodInfo* method); */

undefined8 Dino_BusSand_DataPack__Text_237b52c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c806 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb728);
    FUN_02132f7c(PTR_DAT_04cbb700);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbb698);
    bRam0000000004f9c806 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(param_1 + 0x10),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cbb728);
  uVar7 = uStack_28;
  puVar1 = PTR_DAT_04cbb698;
  if ((uVar2 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    plVar3 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb698);
    System_IO_MemoryStream___ctor_47ef12c(plVar3,uVar7,0);
    plVar4 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb700);
    System_IO_Compression_GZipStream___ctor_401fbac(plVar4,plVar3,0,0);
    plVar5 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_IO_MemoryStream___ctor_47eef9c(plVar5,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_IO_Stream__CopyTo_47fac6c(plVar4,plVar5,0);
    plVar6 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = (**(code **)(*plVar5 + 1000))(plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar7,uVar7);
    }
    uVar7 = (**(code **)(*plVar6 + 0x358))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x360));
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0247b6f4;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b6f4:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0247b764;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b764:
      (*(code *)*puVar8)(plVar4,puVar8[1]);
    }
    if (plVar3 != (long *)0x0) {
      lVar9 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0247b7d8;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar3,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b7d8:
      (*(code *)*puVar8)(plVar3,puVar8[1]);
    }
  }
  return uVar7;
}

