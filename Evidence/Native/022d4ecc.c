/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Layout
System_Collections_Generic_List_float__o* Dino_BusSand_App_UI_PassportPanel__Layout (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Layout
   System_Collections_Generic_List_float__o* Dino_BusSand_App_UI_PassportPanel__Layout
   (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportPanel__Layout_21d4ecc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  
  puVar4 = PTR_DAT_04caeb10;
  puVar3 = PTR_DAT_04caeb08;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caea20);
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04cad708);
                    /* try { // try from 022d4f34 to 023d50c7 has its CatchHandler @ 022d5130 */
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04caeb08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bb50 = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_float____ctor_3ac202c(lVar8,*(undefined8 *)puVar4);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    return lVar8;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                      (*(long *)(param_1 + 0x40),0);
    iVar6 = Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284(param_1);
    if (iVar6 < 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284(param_1);
      iVar6 = iVar6 + 2;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar7 = Dino_BusSand_App_Meta_PassportFeature__IsReachBonusBank_2246e10
                        (*(long *)(param_1 + 0x40),0);
      puVar3 = PTR_DAT_04caea20;
      if (iVar5 + 3 < 1) {
        fVar18 = 0.0;
      }
      else {
        if (lVar8 == 0) goto LAB_022d5278;
        fVar18 = 0.0;
        iVar15 = 0;
        iVar5 = -iVar5;
        do {
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_022d5278;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(float *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = fVar18;
            if (iVar15 != 0) goto LAB_022d5058;
LAB_022d5130:
                    /* catch() { ... } // from try @ 022d4f34 with catch @ 022d5130 */
            uVar13 = *(undefined8 *)(param_1 + 0x60);
                    /* catch() { ... } // from try @ 022d4cd0 with catch @ 022d5134 */
            uVar17 = 0x436e0000;
                    /* catch() { ... } // from try @ 022d4c30 with catch @ 022d5138
                       catch() { ... } // from try @ 022d4d6c with catch @ 022d5138 */
LAB_022d519c:
            fVar16 = (float)Dino_BusSand_App_UI_PassportPanel__Place_21d52cc(fVar18,uVar17,uVar13);
            fVar18 = fVar18 + fVar16;
          }
          else {
            System_Collections_Generic_List_float___AddWithResize_3ac28c0
                      (fVar18,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    /* catch() { ... } // from try @ 022d4bc0 with catch @ 022d512c */
            if (iVar15 == 0) goto LAB_022d5130;
LAB_022d5058:
            if (iVar5 + iVar15 == 2) {
              uVar13 = *(undefined8 *)(param_1 + 0x68);
              uVar17 = 0x44520000;
              goto LAB_022d519c;
            }
            if (iVar6 == iVar15) {
              uVar13 = *(undefined8 *)(param_1 + 0x70);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
              if ((uVar9 & 1) != 0) {
                if ((*(long *)(param_1 + 0x70) == 0) ||
                   (lVar11 = UnityEngine_Component__get_gameObject_43bcde8
                                       (*(long *)(param_1 + 0x70),0), lVar11 == 0))
                goto LAB_022d5278;
                UnityEngine_GameObject__SetActive_43c1408(lVar11,(uVar7 ^ 1) & 1,0);
                plVar14 = *(long **)(param_1 + 0x70);
                if (plVar14 == (long *)0x0) goto LAB_022d5278;
                    /* try { // try from 022d50c8 to 023d5173 has its CatchHandler @ 022d4b34 */
                if (*plVar14 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021335a4(plVar14);
                }
                UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar14,0);
                UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar14,0);
                UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,-fVar18,plVar14,0);
              }
            }
            else {
              iVar10 = -2;
              if (iVar15 < iVar6) {
                iVar10 = -1;
              }
              iVar10 = iVar10 + iVar15;
              if (-1 < iVar10) {
                lVar11 = *(long *)(param_1 + 0x78);
                if (lVar11 == 0) goto LAB_022d5278;
                if (iVar10 < *(int *)(lVar11 + 0x18)) {
                    /* try { // try from 022d517c to 023d5207 has its CatchHandler @ 022d517c
                       catch() { ... } // from try @ 022d517c with catch @ 022d517c
                       catch() { ... } // from try @ 022d5710 with catch @ 022d517c */
                  uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (lVar11,iVar10,*(undefined8 *)PTR_DAT_04cad7c8);
                  uVar17 = 0x43f10000;
                  if (iVar10 + iVar5 != -1) {
                    uVar17 = 0x43ba0000;
                  }
                  goto LAB_022d519c;
                }
              }
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar5 + iVar15 != 3);
      }
      lVar11 = *(long *)(param_1 + 0x50);
      if (lVar11 != 0) {
        uVar13 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar11,0);
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(uVar13,fVar18,lVar11,0);
        uVar13 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
                    /* try { // try from 022d5208 to 023d521b has its CatchHandler @ 022d5774 */
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_022d5278;
          UnityEngine_Transform__SetAsLastSibling_43d4684(*(long *)(param_1 + 0x68),0);
        }
        uVar13 = *(undefined8 *)(param_1 + 0x70);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_022d5278;
          UnityEngine_Transform__SetAsLastSibling_43d4684(*(long *)(param_1 + 0x70),0);
        }
        return lVar8;
      }
    }
  }
LAB_022d5278:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022d5278 to 023d52bf has its CatchHandler @ 022d5780 */
  FUN_02133224();
}

