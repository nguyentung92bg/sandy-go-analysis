/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$PathOf
System_String_o* Dino_BusSand_App_QaPilot_Runner__PathOf (UnityEngine_Transform_o* t, UnityEngine_Transform_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d3dcc) */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$PathOf
   System_String_o* Dino_BusSand_App_QaPilot_Runner__PathOf (UnityEngine_Transform_o* t,
   UnityEngine_Transform_o* panel, const MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner__PathOf_215c53c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  puVar2 = PTR_DAT_04cab748;
  puVar1 = PTR_DAT_04cab740;
  if ((bRam0000000004f9b7fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe00);
    FUN_02132f7c(PTR_DAT_04cab740);
                    /* try { // try from 0225c58c to 0235c607 has its CatchHandler @ 0225c3d8 */
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9b7fb = 1;
  }
  plVar4 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(plVar4,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_04cabe00;
  puVar2 = PTR_DAT_04cabd10;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    do {
      param_1 = UnityEngine_Transform__get_parent_43d0d70(param_1,0);
                    /* try { // try from 0225c608 to 0235c6cb has its CatchHandler @ 0225c608
                       catch() { ... } // from try @ 0225c608 with catch @ 0225c608
                       catch() { ... } // from try @ 0225c6d4 with catch @ 0225c608 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
      if ((uVar5 & 1) == 0) {
LAB_0225c680:
        uVar6 = *(undefined8 *)puVar2;
        if ((bRam0000000004facb08 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9b30,plVar4,0);
          FUN_02132f7c(PTR_DAT_04cbe520);
          FUN_02132f7c(PTR_DAT_04cbe528);
          FUN_02132f7c(PTR_DAT_04ca9c08);
          bRam0000000004facb08 = 1;
        }
        if (plVar4 == (long *)0x0) {
          thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
          uVar6 = thunk_FUN_0216e89c();
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04cc50a8);
          System_ArgumentNullException___ctor_47afb54(uVar6,uVar8,0);
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04d0b458);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar6,uVar8);
        }
        lVar10 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 == 0) goto LAB_047d3a40;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_047d3a28;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_1,param_2,0);
      if ((uVar5 & 1) == 0) goto LAB_0225c680;
      if (plVar4 == (long *)0x0) break;
      if (2 < (int)plVar4[3]) goto LAB_0225c680;
      if (param_1 == 0) break;
      uVar6 = UnityEngine_Object__get_name_43c71a4(param_1,0);
      System_Collections_Generic_List_object___Insert_3a828b4(plVar4,0,uVar6,*(undefined8 *)puVar3);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_047d3a28:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cbe520) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_047d3a5c;
    }
  }
LAB_047d3a40:
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04cbe520,0);
LAB_047d3a5c:
  plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
  puVar1 = PTR_DAT_04ca9c08;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *plVar4;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9c08) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_047d3ad0;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9c08,0);
LAB_047d3ad0:
  uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  puVar2 = PTR_DAT_04cbe528;
  if ((uVar5 & 1) != 0) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cbe528) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_047d3b3c;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04cbe528,0);
LAB_047d3b3c:
    lVar10 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plVar4;
    lVar9 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_047d3ba0;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,lVar9,0);
LAB_047d3ba0:
    uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    if ((uVar5 & 1) != 0) {
      lVar9 = System_Text_StringBuilderCache__Acquire_46df388(0x10,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Text_StringBuilder__Append_46dcdf4(lVar9,lVar10,0);
      do {
        System_Text_StringBuilder__Append_46dcdf4(lVar9,uVar6,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar10 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_047d3c38;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)puVar2,0);
LAB_047d3c38:
        uVar8 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        System_Text_StringBuilder__Append_46dcdf4(lVar9,uVar8,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = *plVar4;
        lVar10 = *(long *)puVar1;
        uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_047d3ca8;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,lVar10,0);
LAB_047d3ca8:
        uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      } while ((uVar5 & 1) != 0);
      lVar10 = System_Text_StringBuilderCache__GetStringAndRelease_46df4e4(lVar9,0);
      goto LAB_047d3cf0;
    }
    if (lVar10 != 0) goto LAB_047d3cf0;
  }
  lVar10 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
LAB_047d3cf0:
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_047d3d50;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_047d3d50:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return lVar10;
}

