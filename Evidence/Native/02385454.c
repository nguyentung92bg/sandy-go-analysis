/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$LateUpdate
void Dino_BusSand_App_UI_KitTopBar__LateUpdate (Dino_BusSand_App_UI_KitTopBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023851dc) */
/* WARNING: Removing unreachable block (ram,0x02385334) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$LateUpdate
   void Dino_BusSand_App_UI_KitTopBar__LateUpdate (Dino_BusSand_App_UI_KitTopBar_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitTopBar__LateUpdate_2285454
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fStack_cc;
  
                    /* catch() { ... } // from try @ 02385088 with catch @ 02385454 */
                    /* catch() { ... } // from try @ 02384ff4 with catch @ 02385458 */
                    /* catch() { ... } // from try @ 02384edc with catch @ 0238545c */
                    /* catch() { ... } // from try @ 02384fc0 with catch @ 02385460 */
                    /* catch() { ... } // from try @ 02384d54 with catch @ 02385464 */
                    /* catch() { ... } // from try @ 02384f14 with catch @ 02385468 */
                    /* catch() { ... } // from try @ 02385314 with catch @ 0238546c */
                    /* catch() { ... } // from try @ 023852b8 with catch @ 02385470
                       catch() { ... } // from try @ 023853e0 with catch @ 02385470 */
  if ((bRam0000000004f9c156 & 1) == 0) {
                    /* catch() { ... } // from try @ 02385378 with catch @ 02385474 */
                    /* catch() { ... } // from try @ 02385288 with catch @ 02385478
                       catch() { ... } // from try @ 023853d8 with catch @ 02385478 */
                    /* catch() { ... } // from try @ 0238525c with catch @ 0238547c */
    FUN_02132f7c(PTR_DAT_04cafcc0);
                    /* catch() { ... } // from try @ 023850c8 with catch @ 02385480 */
                    /* catch() { ... } // from try @ 023853d0 with catch @ 02385484 */
                    /* catch() { ... } // from try @ 02384f40 with catch @ 02385488 */
    FUN_02132f7c(PTR_DAT_04cac1e8);
                    /* catch() { ... } // from try @ 02384e38 with catch @ 0238548c
                       catch() { ... } // from try @ 02384f3c with catch @ 0238548c
                       catch() { ... } // from try @ 02384f68 with catch @ 0238548c
                       catch() { ... } // from try @ 0238506c with catch @ 0238548c
                       catch() { ... } // from try @ 023850c4 with catch @ 0238548c
                       catch() { ... } // from try @ 0238510c with catch @ 0238548c
                       catch() { ... } // from try @ 02385168 with catch @ 0238548c
                       catch() { ... } // from try @ 02385344 with catch @ 0238548c
                       catch() { ... } // from try @ 023853e8 with catch @ 0238548c */
    bRam0000000004f9c156 = 1;
  }
  iVar6 = *(int *)(param_5 + 0x88);
  iVar7 = UnityEngine_Screen__get_width_436a6a0(0);
                    /* try { // try from 023854a8 to 024854ab has its CatchHandler @ 023854c8 */
                    /* try { // try from 023854ac to 024854cb has its CatchHandler @ 02384c58 */
  if ((iVar6 == iVar7) &&
     (iVar6 = *(int *)(param_5 + 0x8c), iVar7 = UnityEngine_Screen__get_height_436a6c8(0),
     iVar6 == iVar7)) {
    fVar29 = *(float *)(param_5 + 0x78);
    fVar28 = *(float *)(param_5 + 0x7c);
                    /* catch() { ... } // from try @ 023854a8 with catch @ 023854c8 */
    fVar26 = *(float *)(param_5 + 0x80);
    fVar25 = *(float *)(param_5 + 0x84);
                    /* try { // try from 023854cc to 024854d3 has its CatchHandler @ 023854dc */
                    /* try { // try from 023854d4 to 024854df has its CatchHandler @ 02384c58 */
    if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 023854cc with catch @ 023854dc */
    fVar23 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
    if ((((fVar29 == fVar23) && (fVar28 == param_2)) && (fVar26 == param_3)) && (fVar25 == param_4))
    {
      return;
    }
  }
  puVar1 = PTR_DAT_04cac1e8;
  uVar13 = UnityEngine_Component__get_gameObject_43bcde8(param_5,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar14 = Dino_BusSand_App_Tween__Running_2161cb0(uVar13,0);
  if ((uVar14 & 1) != 0) {
    return;
  }
  if ((bRam0000000004f9c154 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04cb4ee0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c154 = 1;
  }
  plVar8 = (long *)UnityEngine_Component__get_transform_43bcd18(param_5,0);
  puVar4 = PTR_DAT_04cabdb0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (plVar8 != (long *)0x0) {
    if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar8);
    }
    lVar9 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                      (plVar8,*(undefined8 *)PTR_DAT_04cabd80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar14 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar14 & 1) != 0) {
      return;
    }
    iVar6 = UnityEngine_Screen__get_width_436a6a0(0);
    if (iVar6 < 1) {
      return;
    }
    iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
    if (iVar6 < 1) {
      return;
    }
    if ((lVar9 != 0) && (lVar9 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar9,0), lVar9 != 0)) {
      iVar6 = UnityEngine_Canvas__get_renderMode_467f200(lVar9,0);
      if (iVar6 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = UnityEngine_Canvas__get_worldCamera_4680f2c(lVar9,0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar29 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Unit_21ff7a8(0);
      uVar21 = Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
      fVar25 = param_2;
      fVar26 = param_4;
      Dino_BusSand_App_UI_ScreenSafe__get_Raw_21ff5ac(0);
      fVar28 = fVar26;
      iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
      lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,4);
      fStack_cc = -*(float *)(param_5 + 0x68);
      plVar10 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(plVar8,0);
      puVar5 = PTR_DAT_04cb4ee0;
      puVar3 = PTR_DAT_04cabda8;
      puVar1 = PTR_DAT_04ca9c08;
      if (plVar10 != (long *)0x0) {
        do {
          lVar18 = *plVar10;
          lVar15 = *(long *)puVar1;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar11 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                fVar23 = fVar28;
                goto LAB_02384f04;
              }
              uVar14 = uVar14 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar15,0);
          fVar23 = fVar28;
LAB_02384f04:
          uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar2 = PTR_DAT_04ca9b30;
          if ((uVar14 & 1) == 0) {
            plVar10 = (long *)thunk_FUN_0216e7a0(plVar10,*(undefined8 *)PTR_DAT_04ca9b30);
            if (plVar10 == (long *)0x0) goto LAB_023851c4;
            lVar9 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar14 == 0) goto LAB_0238519c;
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_02385184;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar18 = *plVar10;
          lVar15 = *(long *)puVar1;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_02384f6c;
              }
              uVar14 = uVar14 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,lVar15,1);
LAB_02384f6c:
          plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*plVar12 != *(long *)puVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar12);
          }
          lVar15 = UnityEngine_Component__get_gameObject_43bcde8(plVar12,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar14 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
          fVar28 = fVar23;
          if ((uVar14 & 1) != 0) {
            lVar15 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                               (plVar12,0,*(undefined8 *)puVar5);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar16 = *(uint *)(lVar15 + 0x18);
            if ((int)uVar16 < 1) {
              fVar17 = -3.4028235e+38;
              fVar22 = 3.4028235e+38;
            }
            else {
              uVar20 = 0;
              fVar22 = 3.4028235e+38;
              fVar17 = -3.4028235e+38;
              do {
                if (uVar16 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar18 = *(long *)(lVar15 + (long)(int)uVar20 * 8 + 0x20);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar18 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar18,0);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                UnityEngine_RectTransform__GetWorldCorners_43d0720(lVar18,lVar9,0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uVar30 = *(undefined4 *)(lVar9 + 0x20);
                uVar24 = *(undefined4 *)(lVar9 + 0x24);
                uVar27 = *(undefined4 *)(lVar9 + 0x28);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar28 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                          (uVar30,uVar24,uVar27,uVar13,0);
                if (fVar28 <= fVar22) {
                  fVar22 = fVar28;
                }
                if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                fVar28 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                          (*(undefined4 *)(lVar9 + 0x38),
                                           *(undefined4 *)(lVar9 + 0x3c),
                                           *(undefined4 *)(lVar9 + 0x40),uVar13,0);
                uVar16 = *(uint *)(lVar15 + 0x18);
                uVar20 = uVar20 + 1;
                if (fVar17 <= fVar28) {
                  fVar17 = fVar28;
                }
              } while ((int)uVar20 < (int)uVar16);
            }
            fVar28 = fVar23;
            if (fVar22 <= fVar17) {
              UnityEngine_RectTransform__get_rect_43cf450(plVar12,0);
              fVar28 = fVar23;
              if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar22 = (float)Dino_BusSand_App_UI_ScreenSafe__TopClearPx_21ff838(fVar22,fVar17,0);
              if (0.0 < fVar22 / fVar29) {
                fVar23 = fVar23 * 0.5 + fVar22 / fVar29 + 10.0;
              }
              else {
                if ((float)iVar6 + -0.5 <= fVar26 + fVar25) goto LAB_023850f4;
                fVar23 = fVar23 * 0.5 + 20.0;
              }
              if (fStack_cc <= fVar23) {
                fStack_cc = fVar23;
              }
            }
          }
LAB_023850f4:
        } while (plVar10 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  goto LAB_02385328;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar19 = piVar19 + 4;
    if (uVar14 == 0) break;
LAB_02385184:
    if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_023851b8;
    }
  }
LAB_0238519c:
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar2,0);
LAB_023851b8:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_023851c4:
  puVar1 = PTR_DAT_04ca9ae8;
  iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
  fVar29 = ((float)iVar6 - (param_4 + param_2)) / fVar29;
  fStack_cc = fVar29 - fStack_cc;
  *(float *)(param_5 + 0xb4) = fStack_cc;
  uVar24 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar8,0);
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            (uVar24,*(float *)(param_5 + 0xb4) + *(float *)(param_5 + 0xb8),plVar8,0);
  uVar13 = *(undefined8 *)(param_5 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar14 & 1) == 0) {
LAB_02385298:
    *(undefined4 *)(param_5 + 0x78) = uVar21;
    *(float *)(param_5 + 0x7c) = param_2;
    *(float *)(param_5 + 0x80) = param_3;
    *(float *)(param_5 + 0x84) = param_4;
    uVar14 = UnityEngine_Screen__get_width_436a6a0(0);
    lVar9 = UnityEngine_Screen__get_height_436a6c8(0);
    *(ulong *)(param_5 + 0x88) = uVar14 & 0xffffffff | lVar9 << 0x20;
    return;
  }
  if (*(long *)(param_5 + 0x70) != 0) {
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (0x42200000,fVar29 + 4.0,*(long *)(param_5 + 0x70),0);
    if (*(long *)(param_5 + 0x70) != 0) {
      UnityEngine_RectTransform__set_offsetMin_43cfe84
                (0xc2200000,fStack_cc + -150.0 + *(float *)(param_5 + 0xb8),
                 *(long *)(param_5 + 0x70),0);
      goto LAB_02385298;
    }
  }
LAB_02385328:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

