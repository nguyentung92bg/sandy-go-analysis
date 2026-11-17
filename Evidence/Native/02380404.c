/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$PathOf
System_String_o* Dino_BusSand_App_UI_KitAdopt__PathOf (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d3dcc) */
/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$PathOf
   System_String_o* Dino_BusSand_App_UI_KitAdopt__PathOf (UnityEngine_Transform_o* t, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_KitAdopt__PathOf_2280404(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  
  puVar5 = PTR_DAT_04cab748;
  puVar3 = PTR_DAT_04cab740;
  if ((bRam0000000004f9c13b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cb4cc8);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9c13b = 1;
  }
  puVar7 = PTR_DAT_04cb4cc8;
  puVar6 = PTR_DAT_04cabd10;
  puVar4 = PTR_DAT_04cab718;
  puVar2 = PTR_DAT_04ca9ae8;
  plVar8 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(plVar8,*(undefined8 *)puVar3);
  while( true ) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
    if ((uVar9 & 1) == 0) break;
    if ((param_1 == 0) ||
       (uVar10 = UnityEngine_Object__get_name_43c71a4(param_1,0), plVar8 == (long *)0x0))
    goto LAB_0238058c;
    lVar13 = plVar8[2];
    lVar15 = *(long *)puVar4;
    *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_0238058c;
    uVar1 = *(uint *)(plVar8 + 3);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(plVar8 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (plVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = UnityEngine_Transform__get_parent_43d0d70(param_1,0);
  }
  if (plVar8 != (long *)0x0) {
    System_Collections_Generic_List_object___Reverse_3a834f8(plVar8,*(undefined8 *)puVar7);
    uVar10 = *(undefined8 *)puVar6;
    if ((bRam0000000004facb08 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9b30,plVar8,0);
      FUN_02132f7c(PTR_DAT_04cbe520);
      FUN_02132f7c(PTR_DAT_04cbe528);
      FUN_02132f7c(PTR_DAT_04ca9c08);
      bRam0000000004facb08 = 1;
    }
    if (plVar8 == (long *)0x0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
      uVar10 = thunk_FUN_0216e89c();
      uVar12 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
      System_ArgumentNullException___ctor_47afb54(uVar10,uVar12,0);
      uVar12 = thunk_FUN_021985a8(PTR_DAT_04d0b458);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar10,uVar12);
    }
    lVar13 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 == 0) goto LAB_047d3a40;
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_047d3a28;
  }
LAB_0238058c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_047d3a28:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04cbe520) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_047d3a5c;
    }
  }
LAB_047d3a40:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cbe520,0);
LAB_047d3a5c:
  plVar8 = (long *)(*(code *)*puVar11)(plVar8,puVar11[1]);
  puVar3 = PTR_DAT_04ca9c08;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = *plVar8;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04ca9c08) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_047d3ad0;
      }
      uVar9 = uVar9 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ca9c08,0);
LAB_047d3ad0:
  uVar9 = (*(code *)*puVar11)(plVar8,puVar11[1]);
  puVar5 = PTR_DAT_04cbe528;
  if ((uVar9 & 1) != 0) {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04cbe528) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_047d3b3c;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cbe528,0);
LAB_047d3b3c:
    lVar13 = (*(code *)*puVar11)(plVar8,puVar11[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar14 = *plVar8;
    lVar15 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar15) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_047d3ba0;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,lVar15,0);
LAB_047d3ba0:
    uVar9 = (*(code *)*puVar11)(plVar8,puVar11[1]);
    if ((uVar9 & 1) != 0) {
      lVar15 = System_Text_StringBuilderCache__Acquire_46df388(0x10,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Text_StringBuilder__Append_46dcdf4(lVar15,lVar13,0);
      do {
        System_Text_StringBuilder__Append_46dcdf4(lVar15,uVar10,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_047d3c38;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar5,0);
LAB_047d3c38:
        uVar12 = (*(code *)*puVar11)(plVar8,puVar11[1]);
        System_Text_StringBuilder__Append_46dcdf4(lVar15,uVar12,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *plVar8;
        lVar13 = *(long *)puVar3;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar13) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_047d3ca8;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,lVar13,0);
LAB_047d3ca8:
        uVar9 = (*(code *)*puVar11)(plVar8,puVar11[1]);
      } while ((uVar9 & 1) != 0);
      lVar13 = System_Text_StringBuilderCache__GetStringAndRelease_46df4e4(lVar15,0);
      goto LAB_047d3cf0;
    }
    if (lVar13 != 0) goto LAB_047d3cf0;
  }
  lVar13 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
LAB_047d3cf0:
  if (plVar8 != (long *)0x0) {
    lVar15 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_047d3d50;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ca9b30,0);
LAB_047d3d50:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  return lVar13;
}

