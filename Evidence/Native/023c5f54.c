/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$AddTargets
void Dino_BusSand_App_UI_GuideDimHoles__AddTargets (Dino_BusSand_App_UI_GuideDimHoles_o* __this, System_Collections_Generic_IEnumerable_Transform__o* targets, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023c6474) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$AddTargets
   void Dino_BusSand_App_UI_GuideDimHoles__AddTargets (Dino_BusSand_App_UI_GuideDimHoles_o* __this,
   System_Collections_Generic_IEnumerable_Transform__o* targets, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuideDimHoles__AddTargets_22c5f54(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  
  if ((bRam0000000004f9c359 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68e8);
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cabad0);
    FUN_02132f7c(PTR_DAT_04cabad8);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb68f8);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cb6900);
    FUN_02132f7c(PTR_DAT_04cb6908);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c359 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar13 = *param_2;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cabad0) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_023c606c;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cabad0,0);
LAB_023c606c:
  plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
  puVar8 = PTR_DAT_04cb6908;
  puVar7 = PTR_DAT_04cb6900;
  puVar6 = PTR_DAT_04cb68f8;
  puVar5 = PTR_DAT_04cb68e8;
  puVar4 = PTR_DAT_04cabad8;
  puVar3 = PTR_DAT_04ca9c08;
  puVar2 = PTR_DAT_04ca9ae8;
joined_r0x023c6084:
  do {
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_023c6110;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar3,0);
LAB_023c6110:
      uVar16 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar13 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 == 0) goto LAB_023c6424;
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_023c640c;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_023c6174;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar4,0);
LAB_023c6174:
      lVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar16 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
    } while ((uVar16 & 1) != 0);
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar16 = System_Collections_Generic_List_object___Contains_3a81f90
                       (*(long *)(param_1 + 0x20),lVar13,*(undefined8 *)puVar8);
  } while ((uVar16 & 1) != 0);
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 != 0) {
    lVar14 = *(long *)(lVar11 + 0x10);
    lVar17 = *(long *)PTR_DAT_04cad6c0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar14 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
        *plVar15 = lVar13;
        thunk_FUN_02134474(plVar15,lVar13);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar11,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
        ;
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar12 = UnityEngine_Component__GetComponent_object__26f97e8(lVar13,*(undefined8 *)puVar5);
      lVar11 = *(long *)(param_1 + 0x68);
      if (lVar11 != 0) {
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar17 = *(long *)puVar6;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar12;
            thunk_FUN_02134474(puVar9,uVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar11,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = *(long *)(param_1 + 0x70);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar16 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
          if ((uVar16 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar12 = Dino_BusSand_App_UI_GuideDimHoles__VisibleRenderers_22c6490(lVar13);
          }
          else {
            uVar12 = 0;
          }
          if (lVar11 != 0) {
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)puVar7;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar11,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              goto joined_r0x023c6084;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_023c640c:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_023c6440;
    }
  }
LAB_023c6424:
  puVar9 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c6440:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  return;
}

