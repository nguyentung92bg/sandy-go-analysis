/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$get_Available
System_String_array* Dino_BusSand_App_UI_LanguagePanel__get_Available (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023f6fd4) */
/* WARNING: Removing unreachable block (ram,0x023f715c) */
/* WARNING: Removing unreachable block (ram,0x023f7150) */
/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$get_Available
   System_String_array* Dino_BusSand_App_UI_LanguagePanel__get_Available (const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_LanguagePanel__get_Available_22f6b04(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plVar11 = (long *)PTR_DAT_04cb7868;
  if ((bRam0000000004f9c48e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb7868);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb35d0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab020);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb7870);
    FUN_02132f7c(PTR_DAT_04cac058);
    FUN_02132f7c(PTR_DAT_04cb7878);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c48e = 1;
  }
  lVar10 = *plVar11;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *plVar11;
  }
  if (**(long **)(lVar10 + 0xb8) == 0) {
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab748);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar10,*(undefined8 *)PTR_DAT_04cab740);
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar11 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)PTR_DAT_04cb7878,0);
    if (plVar11 != (long *)0x0) {
      lVar15 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cad288) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_023f6d24;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cad288,0);
LAB_023f6d24:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar9 = PTR_DAT_04cb20b0;
      puVar8 = PTR_DAT_04cad298;
      puVar7 = PTR_DAT_04cac058;
      puVar6 = PTR_DAT_04cab718;
      puVar5 = PTR_DAT_04cab020;
      puVar4 = PTR_DAT_04ca9c30;
      puVar3 = PTR_DAT_04ca9c08;
      puVar2 = PTR_DAT_04ca9ae8;
      pplStack_88 = &plStack_68;
      lStack_90 = 0;
      do {
        plStack_68 = plVar11;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar15 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_023f6dd0;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_023f6dd0:
        uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        plVar19 = plStack_68;
        plVar11 = (long *)PTR_DAT_04cb7868;
        if ((uVar16 & 1) == 0) {
          plVar19 = *pplStack_88;
          if (plVar19 == (long *)0x0) goto LAB_023f70b4;
          lVar15 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 == 0) goto LAB_023f708c;
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_023f7074;
        }
        if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar15 = *plStack_68;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cad290) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_023f6e3c;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)PTR_DAT_04cad290,0);
LAB_023f6e3c:
        uVar13 = (*(code *)*puVar12)(plVar19,puVar12[1]);
        uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar13,*(undefined8 *)PTR_DAT_04cb7870,0);
        lVar15 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar13,0);
        if (lVar15 == 0) {
          lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (lVar15,*(undefined8 *)PTR_DAT_04ca9b98);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_a8,lVar15,*(undefined8 *)PTR_DAT_04cb20c0);
        uStack_70 = uStack_98;
        puStack_78 = puStack_a0;
        uStack_80 = uStack_a8;
        uStack_a8 = 0;
        puStack_a0 = &uStack_80;
        while (uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar9), (uVar16 & 1) != 0) {
          uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uStack_70,*(undefined8 *)puVar4,0);
          uVar16 = System_String__IsNullOrEmpty_46d2084(uVar13,0);
          if ((uVar16 & 1) == 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar16 = System_Collections_Generic_List_object___Contains_3a81f90
                               (lVar10,uVar13,*(undefined8 *)puVar8);
            if ((uVar16 & 1) == 0) {
              uVar14 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar13,0);
              uVar14 = UnityEngine_Resources__Load_object__2891e2c(uVar14,*(undefined8 *)puVar5);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar16 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
              if ((uVar16 & 1) != 0) {
                lVar15 = *(long *)(lVar10 + 0x10);
                lVar17 = *(long *)puVar6;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  puVar12 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar12 = uVar13;
                  thunk_FUN_02134474(puVar12,uVar13);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar10,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb20a8);
        plVar11 = plStack_68;
      } while( true );
    }
    goto LAB_023f7168;
  }
  goto LAB_023f7118;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_023f7074:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_023f70a8;
    }
  }
LAB_023f708c:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar19,*(long *)PTR_DAT_04ca9b30,0);
LAB_023f70a8:
  (*(code *)*puVar12)(plVar19,puVar12[1]);
LAB_023f70b4:
  if (lStack_90 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213321c();
  }
  if (lVar10 == 0) {
LAB_023f7168:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar13 = System_Collections_Generic_List_object___ToArray_3a83728
                     (lVar10,*(undefined8 *)PTR_DAT_04cb35d0);
  lVar10 = *plVar11;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
    lVar10 = *plVar11;
  }
  **(undefined8 **)(lVar10 + 0xb8) = uVar13;
  thunk_FUN_02134474(*(undefined8 *)(*plVar11 + 0xb8),uVar13);
  lVar10 = *plVar11;
LAB_023f7118:
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *plVar11;
  }
  return **(undefined8 **)(lVar10 + 0xb8);
}

