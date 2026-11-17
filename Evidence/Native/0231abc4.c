/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$CurrentEvents
System_String_o* Dino_BusSand_App_Meta_GameTracking__CurrentEvents (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d3dcc) */
/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$CurrentEvents
   System_String_o* Dino_BusSand_App_Meta_GameTracking__CurrentEvents (const MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__CurrentEvents_221abc4(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04cab740;
  if ((bRam0000000004f9bd81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04cb27e0);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04cb27b0);
    bRam0000000004f9bd81 = 1;
  }
  plVar5 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(plVar5,*(undefined8 *)puVar2);
  iVar4 = Dino_BusSand_App_Meta_WinStreak__get_Current_2293690(0);
  if (iVar4 == 3) {
    if (plVar5 == (long *)0x0) {
LAB_0231ada0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = plVar5[2];
    uVar9 = *(undefined8 *)PTR_DAT_04cb27b0;
    lVar12 = *(long *)PTR_DAT_04cab718;
    *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0231ada0;
    uVar1 = *(uint *)(plVar5 + 3);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(plVar5 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (plVar5,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Meta_GameTracking__get_Streak_221a54c();
  if (((lVar10 == 0) ||
      (uVar6 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(lVar10,0),
      (uVar6 & 1) == 0)) ||
     (uVar6 = Dino_BusSand_App_Meta_StreakRateFeature__IsInStreakRate_224cfa4(lVar10,0),
     (uVar6 & 1) == 0)) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    if (plVar5 == (long *)0x0) {
LAB_0231ada4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = plVar5[2];
    uVar9 = *(undefined8 *)PTR_DAT_04cb27e0;
    lVar12 = *(long *)PTR_DAT_04cab718;
    *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0231ada4;
    uVar1 = *(uint *)(plVar5 + 3);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(plVar5 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (plVar5,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((int)plVar5[3] < 1) {
    return *(long *)PTR_DAT_04ca9b60;
  }
  uVar9 = *(undefined8 *)PTR_DAT_04cae4f8;
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
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
    System_ArgumentNullException___ctor_47afb54(uVar9,uVar8,0);
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04d0b458);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,uVar8);
  }
  lVar10 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cbe520) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_047d3a5c;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cbe520,0);
LAB_047d3a5c:
  plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
  puVar2 = PTR_DAT_04ca9c08;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9c08) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_047d3ad0;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9c08,0);
LAB_047d3ad0:
  uVar6 = (*(code *)*puVar7)(plVar5,puVar7[1]);
  puVar3 = PTR_DAT_04cbe528;
  if ((uVar6 & 1) != 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cbe528) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_047d3b3c;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04cbe528,0);
LAB_047d3b3c:
    lVar10 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plVar5;
    lVar12 = *(long *)puVar2;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_047d3ba0;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,lVar12,0);
LAB_047d3ba0:
    uVar6 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    if ((uVar6 & 1) != 0) {
      lVar12 = System_Text_StringBuilderCache__Acquire_46df388(0x10,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Text_StringBuilder__Append_46dcdf4(lVar12,lVar10,0);
      do {
        System_Text_StringBuilder__Append_46dcdf4(lVar12,uVar9,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_047d3c38;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)puVar3,0);
LAB_047d3c38:
        uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        System_Text_StringBuilder__Append_46dcdf4(lVar12,uVar8,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = *plVar5;
        lVar10 = *(long *)puVar2;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_047d3ca8;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,lVar10,0);
LAB_047d3ca8:
        uVar6 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      } while ((uVar6 & 1) != 0);
      lVar10 = System_Text_StringBuilderCache__GetStringAndRelease_46df4e4(lVar12,0);
      goto LAB_047d3cf0;
    }
    if (lVar10 != 0) goto LAB_047d3cf0;
  }
  lVar10 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
LAB_047d3cf0:
  if (plVar5 != (long *)0x0) {
    lVar12 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_047d3d50;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)PTR_DAT_04ca9b30,0);
LAB_047d3d50:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  return lVar10;
}

