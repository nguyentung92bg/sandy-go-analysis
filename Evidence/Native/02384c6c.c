/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Place
void Dino_BusSand_App_UI_KitTopBar__Place (Dino_BusSand_App_UI_KitTopBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023851dc) */
/* WARNING: Removing unreachable block (ram,0x02385334) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$Place
   void Dino_BusSand_App_UI_KitTopBar__Place (Dino_BusSand_App_UI_KitTopBar_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitTopBar__Place_2284c6c
               (undefined1 param_1 [16],float param_2,undefined4 param_3,float param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fStack_cc;
  
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
  plVar7 = (long *)UnityEngine_Component__get_transform_43bcd18(param_5,0);
  puVar4 = PTR_DAT_04cabdb0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (plVar7 != (long *)0x0) {
    if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar7);
    }
                    /* try { // try from 02384d54 to 02484d5b has its CatchHandler @ 02385464 */
    lVar8 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                      (plVar7,*(undefined8 *)PTR_DAT_04cabd80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                    /* try { // try from 02384d90 to 02484d97 has its CatchHandler @ 023853f8 */
    if ((uVar9 & 1) != 0) {
      return;
    }
                    /* try { // try from 02384d98 to 02484da7 has its CatchHandler @ 0238542c */
    iVar6 = UnityEngine_Screen__get_width_436a6a0(0);
    if (iVar6 < 1) {
      return;
    }
    iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
    if (iVar6 < 1) {
      return;
    }
                    /* try { // try from 02384dc4 to 02484dcf has its CatchHandler @ 02385424 */
    if ((lVar8 != 0) && (lVar8 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar8,0), lVar8 != 0)) {
      iVar6 = UnityEngine_Canvas__get_renderMode_467f200(lVar8,0);
      if (iVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = UnityEngine_Canvas__get_worldCamera_4680f2c(lVar8,0);
      }
                    /* try { // try from 02384df0 to 02484df3 has its CatchHandler @ 023853f0 */
                    /* try { // try from 02384df4 to 02484e03 has its CatchHandler @ 02385420 */
      if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar20 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Unit_21ff7a8(0);
      uVar21 = Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
      fVar25 = param_2;
      fVar26 = param_4;
                    /* try { // try from 02384e20 to 02484e33 has its CatchHandler @ 02385408 */
      Dino_BusSand_App_UI_ScreenSafe__get_Raw_21ff5ac(0);
      fVar22 = fVar26;
                    /* try { // try from 02384e38 to 02484ea3 has its CatchHandler @ 0238548c */
      iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
      lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,4);
      fStack_cc = -*(float *)(param_5 + 0x68);
      plVar11 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(plVar7,0);
      puVar5 = PTR_DAT_04cb4ee0;
      puVar3 = PTR_DAT_04cabda8;
      puVar1 = PTR_DAT_04ca9c08;
      if (plVar11 != (long *)0x0) {
        do {
          lVar17 = *plVar11;
          lVar14 = *(long *)puVar1;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
                    /* try { // try from 02384ed8 to 02484edb has its CatchHandler @ 02385414 */
              if (*(long *)(piVar18 + -2) == lVar14) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
                fVar24 = fVar22;
                goto LAB_02384f04;
              }
                    /* try { // try from 02384edc to 02484eeb has its CatchHandler @ 0238545c */
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar14,0);
          fVar24 = fVar22;
LAB_02384f04:
          uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          puVar2 = PTR_DAT_04ca9b30;
          if ((uVar9 & 1) == 0) {
                    /* try { // try from 02385148 to 0248514b has its CatchHandler @ 023853fc */
                    /* try { // try from 0238514c to 0248515b has its CatchHandler @ 02385430 */
            plVar11 = (long *)thunk_FUN_0216e7a0(plVar11,*(undefined8 *)PTR_DAT_04ca9b30);
            if (plVar11 == (long *)0x0) goto LAB_023851c4;
                    /* try { // try from 02385168 to 024851df has its CatchHandler @ 0238548c */
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_0238519c;
            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_02385184;
          }
                    /* try { // try from 02384f14 to 02484f1b has its CatchHandler @ 02385468 */
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02385314 to 02485337 has its CatchHandler @ 0238546c */
            FUN_02133224();
          }
          lVar17 = *plVar11;
          lVar14 = *(long *)puVar1;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
                    /* try { // try from 02384f3c to 02484f3f has its CatchHandler @ 0238548c */
              if (*(long *)(piVar18 + -2) == lVar14) {
                    /* try { // try from 02384f68 to 02484f8b has its CatchHandler @ 0238548c */
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_02384f6c;
              }
                    /* try { // try from 02384f40 to 02484f47 has its CatchHandler @ 02385488 */
              uVar9 = uVar9 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,lVar14,1);
LAB_02384f6c:
          plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*plVar13 != *(long *)puVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar13);
          }
          lVar14 = UnityEngine_Component__get_gameObject_43bcde8(plVar13,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02385310 to 02485313 has its CatchHandler @ 02385400 */
            FUN_02133224();
          }
          uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar14,0);
          fVar22 = fVar24;
          if ((uVar9 & 1) != 0) {
            lVar14 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                               (plVar13,0,*(undefined8 *)puVar5);
                    /* try { // try from 02384fbc to 02484fbf has its CatchHandler @ 02385418 */
                    /* try { // try from 02384fc0 to 02484fcf has its CatchHandler @ 02385460 */
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar15 = *(uint *)(lVar14 + 0x18);
            if ((int)uVar15 < 1) {
              fVar16 = -3.4028235e+38;
              fVar23 = 3.4028235e+38;
            }
            else {
              uVar19 = 0;
              fVar23 = 3.4028235e+38;
              fVar16 = -3.4028235e+38;
              do {
                if (uVar15 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                    /* try { // try from 02384ff0 to 02484ff3 has its CatchHandler @ 023853f4 */
                lVar17 = *(long *)(lVar14 + (long)(int)uVar19 * 8 + 0x20);
                    /* try { // try from 02384ff4 to 0248501b has its CatchHandler @ 02385458 */
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar17 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar17,0);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                UnityEngine_RectTransform__GetWorldCorners_43d0720(lVar17,lVar8,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uVar29 = *(undefined4 *)(lVar8 + 0x20);
                uVar27 = *(undefined4 *)(lVar8 + 0x24);
                uVar28 = *(undefined4 *)(lVar8 + 0x28);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                    /* try { // try from 02385048 to 0248505b has its CatchHandler @ 0238543c */
                fVar22 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                          (uVar29,uVar27,uVar28,uVar10,0);
                if (fVar22 <= fVar23) {
                  fVar23 = fVar22;
                }
                if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                    /* try { // try from 0238506c to 0248506f has its CatchHandler @ 0238548c */
                fVar22 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                          (*(undefined4 *)(lVar8 + 0x38),
                                           *(undefined4 *)(lVar8 + 0x3c),
                                           *(undefined4 *)(lVar8 + 0x40),uVar10,0);
                uVar15 = *(uint *)(lVar14 + 0x18);
                uVar19 = uVar19 + 1;
                if (fVar16 <= fVar22) {
                  fVar16 = fVar22;
                }
                    /* try { // try from 02385084 to 02485087 has its CatchHandler @ 02385410 */
                    /* try { // try from 02385088 to 02485097 has its CatchHandler @ 02385454 */
              } while ((int)uVar19 < (int)uVar15);
            }
            fVar22 = fVar24;
            if (fVar23 <= fVar16) {
              UnityEngine_RectTransform__get_rect_43cf450(plVar13,0);
                    /* try { // try from 023850c4 to 024850c7 has its CatchHandler @ 0238548c */
                    /* try { // try from 023850c8 to 024850eb has its CatchHandler @ 02385480 */
              fVar22 = fVar24;
              if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar23 = (float)Dino_BusSand_App_UI_ScreenSafe__TopClearPx_21ff838(fVar23,fVar16,0);
              if (0.0 < fVar23 / fVar20) {
                    /* try { // try from 0238510c to 0248510f has its CatchHandler @ 0238548c */
                fVar24 = fVar24 * 0.5 + fVar23 / fVar20 + 10.0;
              }
              else {
                    /* try { // try from 023850ec to 024850f7 has its CatchHandler @ 02385450 */
                if ((float)iVar6 + -0.5 <= fVar26 + fVar25) goto LAB_023850f4;
                    /* try { // try from 0238511c to 02485123 has its CatchHandler @ 0238541c */
                fVar24 = fVar24 * 0.5 + 20.0;
              }
              if (fStack_cc <= fVar24) {
                fStack_cc = fVar24;
              }
            }
          }
LAB_023850f4:
        } while (plVar11 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  goto LAB_02385328;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_02385184:
    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_023851b8;
    }
  }
LAB_0238519c:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar2,0);
LAB_023851b8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_023851c4:
  puVar1 = PTR_DAT_04ca9ae8;
  iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
                    /* try { // try from 023851f4 to 024851f7 has its CatchHandler @ 0238540c */
                    /* try { // try from 023851f8 to 02485203 has its CatchHandler @ 0238544c */
  fVar20 = ((float)iVar6 - (param_4 + param_2)) / fVar20;
  fStack_cc = fVar20 - fStack_cc;
  *(float *)(param_5 + 0xb4) = fStack_cc;
  uVar27 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar7,0);
                    /* try { // try from 02385214 to 0248521b has its CatchHandler @ 02385444 */
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            (uVar27,*(float *)(param_5 + 0xb4) + *(float *)(param_5 + 0xb8),plVar7,0);
  uVar10 = *(undefined8 *)(param_5 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02385238 to 02485243 has its CatchHandler @ 02385440 */
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar9 & 1) == 0) {
LAB_02385298:
    *(undefined4 *)(param_5 + 0x78) = uVar21;
    *(float *)(param_5 + 0x7c) = param_2;
    *(undefined4 *)(param_5 + 0x80) = param_3;
    *(float *)(param_5 + 0x84) = param_4;
    uVar9 = UnityEngine_Screen__get_width_436a6a0(0);
    lVar8 = UnityEngine_Screen__get_height_436a6c8(0);
                    /* try { // try from 023852b8 to 024852bf has its CatchHandler @ 02385470 */
    *(ulong *)(param_5 + 0x88) = uVar9 & 0xffffffff | lVar8 << 0x20;
                    /* try { // try from 023852e0 to 024852eb has its CatchHandler @ 02385434 */
    return;
  }
  if (*(long *)(param_5 + 0x70) != 0) {
                    /* try { // try from 0238525c to 02485263 has its CatchHandler @ 0238547c */
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (0x42200000,fVar20 + 4.0,*(long *)(param_5 + 0x70),0);
    if (*(long *)(param_5 + 0x70) != 0) {
                    /* try { // try from 02385288 to 02485297 has its CatchHandler @ 02385478 */
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

