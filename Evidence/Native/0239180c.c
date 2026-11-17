/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass25_0$$<Shake>b__1
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0___Shake_b__1 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass25_0$$<Shake>b__1
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0___Shake_b__1
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiMotion___c__DisplayClass25_0___Shake_b__1_229180c(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1cb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb53a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1cb = 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_023918d8;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(long *)(param_1 + 0x10),0);
  }
  puVar4 = PTR_DAT_04cad4c0;
  lVar7 = *(long *)PTR_DAT_04cad4c0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (lVar7 == 0) {
LAB_023918d8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar9 = *(long **)(param_1 + 0x10);
  lVar11 = *(long *)PTR_DAT_04cb53a8;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_48419e0(5);
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    plVar17 = *(long **)(lVar7 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (plVar9 == (long *)0x0) goto LAB_035c71bc;
      uVar5 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
    }
    else {
      lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0216b470(lVar10);
      }
      lVar12 = *plVar17;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_035c6f80;
          }
          uVar6 = uVar6 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar17,lVar10,1);
LAB_035c6f80:
      uVar5 = (*(code *)*puVar8)(plVar17,plVar9,puVar8[1]);
    }
    lVar10 = *(long *)(lVar7 + 0x10);
    if (lVar10 == 0) {
LAB_035c71bc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar18 = *(uint *)(lVar10 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar3 = 0;
    if (uVar18 != 0) {
      iVar3 = (int)uVar5 / (int)uVar18;
    }
    uVar2 = uVar5 - iVar3 * uVar18;
    if (uVar18 <= uVar2) {
LAB_035c71c0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar18 = *(int *)(lVar10 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar18) {
      uVar6 = 0xffffffff;
      do {
        lVar10 = *(long *)(lVar7 + 0x18);
        if (lVar10 == 0) goto LAB_035c71bc;
        if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_035c71c0;
        lVar10 = lVar10 + 0x20;
        puVar20 = (uint *)(lVar10 + (ulong)uVar18 * 0x18);
        uVar19 = (ulong)uVar18;
        if (*puVar20 == uVar5) {
          plVar17 = *(long **)(lVar7 + 0x30);
          if (plVar17 == (long *)0x0) {
            plVar17 = (long *)FUN_02773e98(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x18));
            if (plVar17 == (long *)0x0) goto LAB_035c71bc;
            uVar14 = (**(code **)(*plVar17 + 0x1b8))
                               (plVar17,*(undefined8 *)(lVar10 + uVar19 * 0x18 + 8),plVar9,
                                *(undefined8 *)(*plVar17 + 0x1c0));
          }
          else {
            lVar12 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 8);
            uVar16 = *(undefined8 *)(lVar10 + uVar19 * 0x18 + 8);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_0216b470(lVar12);
            }
            lVar13 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_035c70cc;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar8 = (undefined8 *)FUN_0216b7a4(plVar17,lVar12,0);
LAB_035c70cc:
            uVar14 = (*(code *)*puVar8)(plVar17,uVar16,plVar9,puVar8[1]);
          }
          if ((uVar14 & 1) != 0) {
            if ((int)(uint)uVar6 < 0) {
              lVar11 = *(long *)(lVar7 + 0x10);
              if (lVar11 == 0) goto LAB_035c71bc;
              if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_035c71c0;
              *(int *)(lVar11 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar10 + uVar19 * 0x18 + 4) + 1;
            }
            else {
              lVar11 = *(long *)(lVar7 + 0x18);
              if (lVar11 == 0) goto LAB_035c71bc;
              if (*(uint *)(lVar11 + 0x18) <= (uint)uVar6) goto LAB_035c71c0;
              *(undefined4 *)(lVar11 + uVar6 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar10 + uVar19 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(lVar7 + 0x24);
            lVar10 = lVar10 + uVar19 * 0x18;
            *puVar20 = 0xffffffff;
            *(undefined4 *)(lVar10 + 4) = uVar1;
            *(undefined8 *)(lVar10 + 8) = 0;
            *(uint *)(lVar7 + 0x24) = uVar18;
            *(ulong *)(lVar7 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar7 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar7 + 0x28) + 1);
            return 1;
          }
        }
        uVar6 = (ulong)uVar18;
        uVar18 = *(uint *)(lVar10 + uVar19 * 0x18 + 4);
      } while (-1 < (int)uVar18);
    }
  }
  return 0;
}

