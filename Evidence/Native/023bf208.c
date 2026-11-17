/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$BringToFront
void Dino_BusSand_App_UI_ContinueBottomPanel__BringToFront (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023bf5d0) */
/* WARNING: Removing unreachable block (ram,0x023bf618) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$BringToFront
   void Dino_BusSand_App_UI_ContinueBottomPanel__BringToFront
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__BringToFront_22bf208(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  
  if ((bRam0000000004f9c32c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
    bRam0000000004f9c32c = 1;
  }
  lVar9 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  puVar5 = PTR_DAT_04cad3d0;
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar9 != 0) {
    UnityEngine_Transform__SetAsLastSibling_43d4684(lVar9,0);
    lVar9 = UnityEngine_Component__GetComponent_object__26f97e8(param_1,*(undefined8 *)puVar5);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar17 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar17,0,0);
    if ((uVar10 & 1) != 0) {
      return;
    }
    if (((lVar9 != 0) &&
        (iVar7 = UnityEngine_Canvas__get_sortingOrder_4680030(lVar9,0), lVar17 != 0)) &&
       (lVar17 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,2,0), lVar17 != 0)) {
      plVar11 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(lVar17,0);
      puVar6 = PTR_DAT_04cad740;
      puVar4 = PTR_DAT_04ca9c08;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar15 = *plVar11;
        lVar17 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_023bf3d8;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar17,0);
LAB_023bf3d8:
        uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar3 = PTR_DAT_04ca9b30;
        if ((uVar10 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_0216e7a0(plVar11,*(undefined8 *)PTR_DAT_04ca9b30);
          if (plVar11 == (long *)0x0) goto LAB_023bf5c0;
          lVar17 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar10 == 0) goto LAB_023bf598;
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_023bf580;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar15 = *plVar11;
        lVar17 = *(long *)puVar4;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_023bf440;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar17,1);
LAB_023bf440:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar13);
          }
        }
        uVar14 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar13,uVar14,0);
        if ((uVar10 & 1) == 0) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar17 = UnityEngine_Component__GetComponent_object__26f97e8
                             (plVar13,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar10 = UnityEngine_Canvas__get_overrideSorting_467feb8(lVar17,0);
            if (((uVar10 & 1) != 0) &&
               (iVar8 = UnityEngine_Canvas__get_sortingOrder_4680030(lVar17,0), iVar7 <= iVar8)) {
              iVar7 = UnityEngine_Canvas__get_sortingOrder_4680030(lVar17,0);
              iVar7 = iVar7 + 10;
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_023bf580:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_023bf5b4;
    }
  }
LAB_023bf598:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_023bf5b4:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_023bf5c0:
  UnityEngine_Canvas__set_sortingOrder_46800e4(lVar9,iVar7,0);
  return;
}

