/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$PathOf
System_String_o* Dino_BusSand_App_UI_UiTweaks__PathOf (UnityEngine_Transform_o* root, UnityEngine_Transform_o* node, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d3dcc) */
/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$PathOf
   System_String_o* Dino_BusSand_App_UI_UiTweaks__PathOf (UnityEngine_Transform_o* root,
   UnityEngine_Transform_o* node, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiTweaks__PathOf_22a3a90(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c278 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cb4cc8);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c278 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_2,param_1,0);
  puVar4 = PTR_DAT_04cab740;
  puVar3 = PTR_DAT_04cab718;
  if ((uVar5 & 1) != 0) {
    return *(long *)PTR_DAT_04ca9c30;
  }
  plVar6 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
  System_Collections_Generic_List_object____ctor_3a8138c(plVar6,*(undefined8 *)puVar4);
  while( true ) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
    if ((uVar5 & 1) == 0) break;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_2,param_1,0);
    if ((uVar5 & 1) == 0) break;
    if ((param_2 == 0) ||
       (uVar7 = UnityEngine_Object__get_name_43c71a4(param_2,0), plVar6 == (long *)0x0))
    goto LAB_023a3c84;
    lVar10 = plVar6[2];
    lVar12 = *(long *)puVar3;
    *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_023a3c84;
    uVar1 = *(uint *)(plVar6 + 3);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(plVar6 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (plVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    param_2 = UnityEngine_Transform__get_parent_43d0d70(param_2,0);
  }
  if (plVar6 != (long *)0x0) {
    System_Collections_Generic_List_object___Reverse_3a834f8(plVar6,*(undefined8 *)PTR_DAT_04cb4cc8)
    ;
    uVar7 = *(undefined8 *)PTR_DAT_04cabd10;
    if ((bRam0000000004facb08 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9b30,plVar6,0);
      FUN_02132f7c(PTR_DAT_04cbe520);
      FUN_02132f7c(PTR_DAT_04cbe528);
      FUN_02132f7c(PTR_DAT_04ca9c08);
      bRam0000000004facb08 = 1;
    }
    if (plVar6 == (long *)0x0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
      uVar7 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
      System_ArgumentNullException___ctor_47afb54(uVar7,uVar9,0);
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04d0b458);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar7,uVar9);
    }
    lVar10 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 == 0) goto LAB_047d3a40;
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_047d3a28;
  }
LAB_023a3c84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_047d3a28:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cbe520) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_047d3a5c;
    }
  }
LAB_047d3a40:
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cbe520,0);
LAB_047d3a5c:
  plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
  puVar2 = PTR_DAT_04ca9c08;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9c08) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_047d3ad0;
      }
      uVar5 = uVar5 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9c08,0);
LAB_047d3ad0:
  uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
  puVar3 = PTR_DAT_04cbe528;
  if ((uVar5 & 1) != 0) {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cbe528) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_047d3b3c;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cbe528,0);
LAB_047d3b3c:
    lVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plVar6;
    lVar12 = *(long *)puVar2;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_047d3ba0;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,lVar12,0);
LAB_047d3ba0:
    uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    if ((uVar5 & 1) != 0) {
      lVar12 = System_Text_StringBuilderCache__Acquire_46df388(0x10,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Text_StringBuilder__Append_46dcdf4(lVar12,lVar10,0);
      do {
        System_Text_StringBuilder__Append_46dcdf4(lVar12,uVar7,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_047d3c38;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar3,0);
LAB_047d3c38:
        uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        System_Text_StringBuilder__Append_46dcdf4(lVar12,uVar9,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = *plVar6;
        lVar10 = *(long *)puVar2;
        uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_047d3ca8;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,lVar10,0);
LAB_047d3ca8:
        uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      } while ((uVar5 & 1) != 0);
      lVar10 = System_Text_StringBuilderCache__GetStringAndRelease_46df4e4(lVar12,0);
      goto LAB_047d3cf0;
    }
    if (lVar10 != 0) goto LAB_047d3cf0;
  }
  lVar10 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
LAB_047d3cf0:
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_047d3d50;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_047d3d50:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
  }
  return lVar10;
}

