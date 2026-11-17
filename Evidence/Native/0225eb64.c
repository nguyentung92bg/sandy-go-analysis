/* IL2CPP: Dino.BusSand.App.Tables$$Json
System_String_o* Dino_BusSand_App_Tables__Json (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0247b814) */
/* WARNING: Removing unreachable block (ram,0x0247b804) */
/* WARNING: Removing unreachable block (ram,0x0247b80c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.Tables$$Json
   System_String_o* Dino_BusSand_App_Tables__Json (System_String_o* name, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Tables__Json_215eb64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cac008;
                    /* try { // try from 0225eb78 to 0235eb7b has its CatchHandler @ 0225ec78 */
  if ((bRam0000000004f9b80f & 1) == 0) {
                    /* try { // try from 0225eb8c to 0235eb9b has its CatchHandler @ 0225ec74 */
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cac010);
    bRam0000000004f9b80f = 1;
  }
  puVar2 = PTR_DAT_04cac010;
                    /* try { // try from 0225ebac to 0235ebaf has its CatchHandler @ 0225ec70 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_DataPack__Open_2379630(*(undefined8 *)puVar2,0);
  if (lVar3 == 0) {
    return 0;
  }
  if ((bRam0000000004f9c806 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb728,param_1,0);
    FUN_02132f7c(PTR_DAT_04cbb700);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbb698);
    bRam0000000004f9c806 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(lVar3 + 0x10),param_1,&uStack_28,*(undefined8 *)PTR_DAT_04cbb728);
  uVar9 = uStack_28;
  puVar1 = PTR_DAT_04cbb698;
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    plVar5 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb698);
    System_IO_MemoryStream___ctor_47ef12c(plVar5,uVar9,0);
    plVar6 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb700);
    System_IO_Compression_GZipStream___ctor_401fbac(plVar6,plVar5,0,0);
    plVar7 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_IO_MemoryStream___ctor_47eef9c(plVar7,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_IO_Stream__CopyTo_47fac6c(plVar6,plVar7,0);
    plVar8 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar9,uVar9);
    }
    uVar9 = (**(code **)(*plVar8 + 0x358))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x360));
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0247b6f4;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b6f4:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0247b764;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b764:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
    }
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0247b7d8;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_0247b7d8:
      (*(code *)*puVar10)(plVar5,puVar10[1]);
    }
  }
  return uVar9;
}

