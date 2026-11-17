/* IL2CPP: Dino.BusSand.App.UI.UIManager$$FullScreenBackdrops
void Dino_BusSand_App_UI_UIManager__FullScreenBackdrops (UnityEngine_Transform_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022fe6d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UIManager$$FullScreenBackdrops
   void Dino_BusSand_App_UI_UIManager__FullScreenBackdrops (UnityEngine_Transform_o* panel, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258
               (undefined1 param_1 [16],float param_2,long param_3)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  float fVar19;
  
  if ((bRam0000000004f9bc78 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb19b0);
    FUN_02132f7c(PTR_DAT_04cb19f0);
    FUN_02132f7c(PTR_DAT_04cb1b08);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad740);
    bRam0000000004f9bc78 = 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar11 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(param_3,0);
  puVar10 = PTR_DAT_04cb19f0;
  puVar9 = PTR_DAT_04cb19b0;
  puVar8 = PTR_DAT_04cad740;
  puVar7 = PTR_DAT_04cacfc0;
  puVar6 = PTR_DAT_04cabdb0;
  puVar5 = PTR_DAT_04ca9c08;
  puVar3 = PTR_DAT_04ca9ae8;
  fVar2 = _UNK_00e1fea0;
  do {
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *plVar11;
    lVar15 = *(long *)puVar5;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_022fe3bc;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar15,0);
LAB_022fe3bc:
    uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    puVar4 = PTR_DAT_04ca9b30;
    if ((uVar17 & 1) == 0) {
                    /* try { // try from 022fe630 to 023fe637 has its CatchHandler @ 022fe8dc */
      plVar11 = (long *)thunk_FUN_0216e7a0(plVar11,*(undefined8 *)PTR_DAT_04ca9b30);
      if (plVar11 == (long *)0x0) {
        return;
      }
                    /* try { // try from 022fe640 to 023fe643 has its CatchHandler @ 022fe89c */
      lVar15 = *plVar11;
                    /* try { // try from 022fe64c to 023fe653 has its CatchHandler @ 022fe894 */
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 == 0) goto LAB_022fe674;
                    /* try { // try from 022fe658 to 023fe6db has its CatchHandler @ 022fe8dc */
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar16 = *plVar11;
    lVar15 = *(long *)puVar5;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
                    /* try { // try from 022fe3e8 to 023fe437 has its CatchHandler @ 022fe3e8
                       catch() { ... } // from try @ 022fe3e8 with catch @ 022fe3e8
                       catch() { ... } // from try @ 022fe468 with catch @ 022fe3e8 */
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_022fe424;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar15,1);
LAB_022fe424:
    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
                    /* try { // try from 022fe438 to 023fe44f has its CatchHandler @ 022fe498 */
      lVar15 = *plVar13;
      bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4();
      }
                    /* try { // try from 022fe464 to 023fe467 has its CatchHandler @ 022fe468 */
                    /* catch() { ... } // from try @ 022fe464 with catch @ 022fe468
                       try { // try from 022fe468 to 023fe4b3 has its CatchHandler @ 022fe3e8 */
      if (lVar15 != *(long *)puVar6) {
        plVar13 = (long *)0x0;
      }
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar17 = UnityEngine_Object__op_Equality_43c6f30(plVar13,0,0);
    if ((uVar17 & 1) == 0) {
                    /* catch() { ... } // from try @ 022fe438 with catch @ 022fe498 */
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar14 = UnityEngine_Component__GetComponent_object__26f97e8(plVar13,*(undefined8 *)puVar10);
                    /* try { // try from 022fe4b4 to 023fe533 has its CatchHandler @ 022fe4b4
                       catch() { ... } // from try @ 022fe4b4 with catch @ 022fe4b4
                       catch() { ... } // from try @ 022fe538 with catch @ 022fe4b4 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar17 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
      if ((uVar17 & 1) == 0) {
        uVar14 = UnityEngine_Component__GetComponent_object__26f97e8(plVar13,*(undefined8 *)puVar9);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar17 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
        if ((uVar17 & 1) == 0) {
          fVar19 = (float)UnityEngine_RectTransform__get_anchorMin_43cf520(plVar13,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(puVar7);
            cRam0000000004f9b948 = '\x01';
          }
                    /* try { // try from 022fe534 to 023fe537 has its CatchHandler @ 022fe538 */
                    /* catch() { ... } // from try @ 022fe534 with catch @ 022fe538
                       try { // try from 022fe538 to 023fe553 has its CatchHandler @ 022fe4b4 */
          fVar19 = fVar19 - **(float **)(*(long *)puVar7 + 0xb8);
          param_2 = param_2 - (*(float **)(*(long *)puVar7 + 0xb8))[1];
          param_2 = param_2 * param_2;
          if (fVar19 * fVar19 + param_2 < fVar2) {
            fVar19 = (float)UnityEngine_RectTransform__get_anchorMax_43cf6a4(plVar13,0);
            if (cRam0000000004f9b949 == '\0') {
              FUN_02132f7c(puVar7);
              cRam0000000004f9b949 = '\x01';
            }
                    /* try { // try from 022fe590 to 023fe593 has its CatchHandler @ 022fe5f8 */
            fVar19 = fVar19 - *(float *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
            param_2 = param_2 - *(float *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xc);
            param_2 = param_2 * param_2;
            if (fVar19 * fVar19 + param_2 < fVar2) {
                    /* try { // try from 022fe5b4 to 023fe5c7 has its CatchHandler @ 022fe5e0 */
              fVar19 = (float)UnityEngine_RectTransform__get_offsetMin_43cfe30(plVar13,0);
              param_2 = param_2 * param_2;
              if (fVar19 * fVar19 + param_2 <= 1.0) {
                fVar19 = (float)UnityEngine_RectTransform__get_offsetMax_43cff78(plVar13,0);
                param_2 = param_2 * param_2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe5b4 with catch @ 022fe5e0
                        */
                if (fVar19 * fVar19 + param_2 <= 1.0) {
                  lVar15 = UnityEngine_Component__get_gameObject_43bcde8(plVar13,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fe590 with catch @ 022fe5f8
                        */
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                    /* try { // try from 022fe5fc to 023fe62f has its CatchHandler @ 022fe5fc
                       catch(type#1 @ 00000000) { ... } // from try @ 022fe5fc with catch @ 022fe5fc
                       catch(type#1 @ 00000000) { ... } // from try @ 022fe840 with catch @ 022fe5fc
                        */
                  UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar15,*(undefined8 *)PTR_DAT_04cb1b08);
                }
              }
            }
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_022fe690;
    }
  }
LAB_022fe674:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar4,0);
LAB_022fe690:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}

