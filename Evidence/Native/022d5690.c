/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnChanged
void Dino_BusSand_App_UI_PassportPanel__OnChanged (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnChanged
   void Dino_BusSand_App_UI_PassportPanel__OnChanged (Dino_BusSand_App_UI_PassportPanel_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportPanel__OnChanged_21d5690(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  
  if ((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x49) != '\0')) {
    return param_1;
  }
  if ((bRam0000000004f9bb56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad708);
    bRam0000000004f9bb56 = 1;
  }
  Dino_BusSand_App_UI_PassportPanel__RefreshTop_21d56a8(param_1);
  lVar10 = *(long *)(param_1 + 0x78);
  if (lVar10 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar5) {
        Dino_BusSand_App_UI_PassportPanel__RefreshEnd_21d62b4(param_1);
        Dino_BusSand_App_UI_PassportPanel__RefreshLockRow_21d68e0(param_1);
        puVar4 = PTR_DAT_04caeb10;
        puVar3 = PTR_DAT_04caeb08;
        puVar2 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9bb50 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caea20);
          FUN_02132f7c(PTR_DAT_04caeb10);
          FUN_02132f7c(PTR_DAT_04cad708);
          FUN_02132f7c(PTR_DAT_04cad7c8);
          FUN_02132f7c(PTR_DAT_04caeb08);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cabdb0);
          bRam0000000004f9bb50 = 1;
        }
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Collections_Generic_List_float____ctor_3ac202c(lVar10,*(undefined8 *)puVar4);
        uVar13 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
        if ((uVar8 & 1) != 0) {
          return lVar10;
        }
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d5278;
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
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d5278;
        uVar7 = Dino_BusSand_App_Meta_PassportFeature__IsReachBonusBank_2246e10
                          (*(long *)(param_1 + 0x40),0);
        puVar3 = PTR_DAT_04caea20;
        if (iVar5 + 3 < 1) {
          fVar18 = 0.0;
          goto LAB_022d51c0;
        }
        if (lVar10 == 0) goto LAB_022d5278;
        fVar18 = 0.0;
        iVar15 = 0;
        iVar5 = -iVar5;
        goto LAB_022d501c;
      }
      Dino_BusSand_App_UI_PassportPanel__RefreshStage_21d5994(param_1,iVar5);
      lVar10 = *(long *)(param_1 + 0x78);
      iVar5 = iVar5 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_022d501c:
  do {
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_022d5278;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(float *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = fVar18;
      if (iVar15 != 0) goto LAB_022d5058;
LAB_022d5130:
      uVar13 = *(undefined8 *)(param_1 + 0x60);
      uVar17 = 0x436e0000;
LAB_022d519c:
      fVar16 = (float)Dino_BusSand_App_UI_PassportPanel__Place_21d52cc(fVar18,uVar17,uVar13);
      fVar18 = fVar18 + fVar16;
    }
    else {
      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                (fVar18,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
        if ((uVar8 & 1) != 0) {
          if ((*(long *)(param_1 + 0x70) == 0) ||
             (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x70),0),
             lVar11 == 0)) goto LAB_022d5278;
          UnityEngine_GameObject__SetActive_43c1408(lVar11,(uVar7 ^ 1) & 1,0);
          plVar14 = *(long **)(param_1 + 0x70);
          if (plVar14 == (long *)0x0) goto LAB_022d5278;
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
        iVar9 = -2;
        if (iVar15 < iVar6) {
          iVar9 = -1;
        }
        iVar9 = iVar9 + iVar15;
        if (-1 < iVar9) {
          lVar11 = *(long *)(param_1 + 0x78);
          if (lVar11 == 0) goto LAB_022d5278;
          if (iVar9 < *(int *)(lVar11 + 0x18)) {
            uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar11,iVar9,*(undefined8 *)PTR_DAT_04cad7c8);
            uVar17 = 0x43f10000;
            if (iVar9 + iVar5 != -1) {
              uVar17 = 0x43ba0000;
            }
            goto LAB_022d519c;
          }
        }
      }
    }
    iVar15 = iVar15 + 1;
  } while (iVar5 + iVar15 != 3);
LAB_022d51c0:
  lVar11 = *(long *)(param_1 + 0x50);
  if (lVar11 != 0) {
    uVar13 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar11,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(uVar13,fVar18,lVar11,0);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_022d5278;
      UnityEngine_Transform__SetAsLastSibling_43d4684(*(long *)(param_1 + 0x68),0);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_022d5278;
      UnityEngine_Transform__SetAsLastSibling_43d4684(*(long *)(param_1 + 0x70),0);
    }
    return lVar10;
  }
LAB_022d5278:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

