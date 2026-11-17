/* IL2CPP: Dino.BusSand.App.CrashContext$$UiTrail
System_String_o* Dino_BusSand_App_CrashContext__UiTrail (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d3dcc) */
/* IL2CPP: Dino.BusSand.App.CrashContext$$UiTrail
   System_String_o* Dino_BusSand_App_CrashContext__UiTrail (const MethodInfo* method); */

long Dino_BusSand_App_CrashContext__UiTrail_2173cf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar1 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8c1 & 1) == 0) {
                    /* catch() { ... } // from try @ 02273ce0 with catch @ 02273d0c */
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacde0);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cacde8);
    bRam0000000004f9b8c1 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 == 0) {
LAB_02273df0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar3 = *(int *)(lVar4 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = System_Math__Max_4830fc8(0,iVar3 + -3,0);
  puVar2 = PTR_DAT_04cacde8;
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if (lVar4 == 0) goto LAB_02273df0;
                    /* catch() { ... } // from try @ 02273ec0 with catch @ 02273dbc */
  plVar5 = (long *)System_Collections_Generic_List_object___GetRange_3a826c8
                             (lVar4,iVar3,*(int *)(lVar4 + 0x18) - iVar3,
                              *(undefined8 *)PTR_DAT_04cacde0);
  uVar9 = *(undefined8 *)puVar2;
  if ((bRam0000000004facb08 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30,plVar5,0);
    FUN_02132f7c(PTR_DAT_04cbe520);
    FUN_02132f7c(PTR_DAT_04cbe528);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    bRam0000000004facb08 = 1;
  }
  if (plVar5 == (long *)0x0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar9 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
    System_ArgumentNullException___ctor_47afb54(uVar9,uVar7,0);
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04d0b458);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,uVar7);
  }
  lVar4 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cbe520) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_047d3a5c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cbe520,0);
LAB_047d3a5c:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar1 = PTR_DAT_04ca9c08;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9c08) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_047d3ad0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9c08,0);
LAB_047d3ad0:
  uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar2 = PTR_DAT_04cbe528;
  if ((uVar11 & 1) != 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cbe528) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_047d3b3c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cbe528,0);
LAB_047d3b3c:
    lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar5;
    lVar8 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_047d3ba0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,lVar8,0);
LAB_047d3ba0:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) != 0) {
      lVar8 = System_Text_StringBuilderCache__Acquire_46df388(0x10,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Text_StringBuilder__Append_46dcdf4(lVar8,lVar4,0);
      do {
        System_Text_StringBuilder__Append_46dcdf4(lVar8,uVar9,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_047d3c38;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)puVar2,0);
LAB_047d3c38:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        System_Text_StringBuilder__Append_46dcdf4(lVar8,uVar7,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *plVar5;
        lVar4 = *(long *)puVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_047d3ca8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,lVar4,0);
LAB_047d3ca8:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      } while ((uVar11 & 1) != 0);
      lVar4 = System_Text_StringBuilderCache__GetStringAndRelease_46df4e4(lVar8,0);
      goto LAB_047d3cf0;
    }
    if (lVar4 != 0) goto LAB_047d3cf0;
  }
  lVar4 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
LAB_047d3cf0:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_047d3d50;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_047d3d50:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return lVar4;
}

