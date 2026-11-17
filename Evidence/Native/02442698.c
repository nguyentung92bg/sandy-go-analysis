/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$TopPopup
Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_Cheat_AutoQa__TopPopup (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$TopPopup
   Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_Cheat_AutoQa__TopPopup (const MethodInfo* method); */

long * Dino_BusSand_Cheat_AutoQa__TopPopup_2342698(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  
  puVar4 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb74b0);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04cb96a0);
    FUN_02132f7c(PTR_DAT_04ca9bb0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1bd8);
    bRam0000000004f9c6a0 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar10 & 1) == 0) {
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar4;
    }
    uVar10 = System_Reflection_FieldInfo__op_Equality_47732d8
                       (*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x30),0,0);
    if ((uVar10 & 1) == 0) {
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar4;
      }
      plVar15 = *(long **)(*(long *)(lVar13 + 0xb8) + 0x30);
      uVar9 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
      if (plVar15 == (long *)0x0) {
LAB_024429cc:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar9 = (**(code **)(*plVar15 + 0x2e8))(plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x2f0));
      puVar4 = PTR_DAT_04ca9bb0;
      plVar15 = (long *)thunk_FUN_0216e7a0(uVar9,*(undefined8 *)PTR_DAT_04ca9bb0);
      if (plVar15 != (long *)0x0) {
        lVar13 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cb96a0) {
              puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_02442844;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)PTR_DAT_04cb96a0,1);
LAB_02442844:
        iVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
        puVar7 = PTR_DAT_04cb74b0;
        puVar6 = PTR_DAT_04cb6a88;
        puVar5 = PTR_DAT_04cb1bd8;
        iVar8 = iVar8 + -1;
        if (-1 < iVar8) {
          do {
            lVar13 = *plVar15;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_024428bc;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)puVar4,0);
LAB_024428bc:
            plVar12 = (long *)(*(code *)*puVar11)(plVar15,iVar8,puVar11[1]);
            if (plVar12 == (long *)0x0) {
LAB_024428e8:
              plVar12 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_024428e8;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5) {
                plVar12 = (long *)0x0;
              }
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar12,0,0);
            if ((uVar10 & 1) == 0) {
              if (plVar12 == (long *)0x0) goto LAB_024429cc;
              if (*(char *)((long)plVar12 + 0x2c) == '\0') {
                lVar13 = UnityEngine_Component__get_gameObject_43bcde8(plVar12,0);
                if (lVar13 == 0) goto LAB_024429cc;
                uVar10 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar13,0);
                if ((uVar10 & 1) != 0) {
                  lVar13 = *plVar12;
                  bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                  if ((*(byte *)(lVar13 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)
                     ) {
                    bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                    if (*(byte *)(lVar13 + 0x130) < bVar2) {
                      return plVar12;
                    }
                    if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)puVar6) {
                      return plVar12;
                    }
                  }
                }
              }
            }
            bVar1 = 0 < iVar8;
            iVar8 = iVar8 + -1;
          } while (bVar1);
        }
      }
    }
  }
  return (long *)0x0;
}

