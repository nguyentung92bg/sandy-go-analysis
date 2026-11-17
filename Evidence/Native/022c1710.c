/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ClearTheNotch
void Dino_BusSand_App_UI_StreakEventPanel__ClearTheNotch (Dino_BusSand_App_UI_StreakEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$ClearTheNotch
   void Dino_BusSand_App_UI_StreakEventPanel__ClearTheNotch (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__ClearTheNotch_21c1710
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((bRam0000000004f9badf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cafcb8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    FUN_02132f7c(PTR_DAT_04cafbc0);
                    /* catch() { ... } // from try @ 022c17d8 with catch @ 022c177c */
    FUN_02132f7c(PTR_DAT_04cad460);
    bRam0000000004f9badf = 1;
  }
  iVar4 = UnityEngine_Screen__get_width_436a6a0(0);
  if ((iVar4 < 1) ||
     (iVar4 = UnityEngine_Screen__get_height_436a6c8(0), puVar3 = PTR_DAT_04cafcc0, iVar4 < 1)) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022c17cc to 023c17d7 has its CatchHandler @ 022c17f8 */
  fVar10 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Unit_21ff7a8(0);
                    /* try { // try from 022c17d8 to 023c180b has its CatchHandler @ 022c177c */
  fVar11 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
  fVar18 = param_3;
  fVar19 = param_4;
  iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
                    /* catch() { ... } // from try @ 022c17cc with catch @ 022c17f8 */
  lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04cafcb8,2);
  lVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
  if ((lVar6 != 0) &&
     (plVar7 = (long *)UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cafbc0,0),
     lVar5 != 0)) {
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(long **)(lVar5 + 0x20) = plVar7;
      thunk_FUN_02134474();
      lVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      if (lVar6 == 0) goto LAB_022c1a9c;
      plVar7 = (long *)UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cad460,0);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
        plVar7 = (long *)0x0;
      }
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(long *)(lVar5 + 0x28) = (long)plVar7;
        thunk_FUN_02134474((long *)(lVar5 + 0x28));
        puVar2 = PTR_DAT_04ca9ae8;
        if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
          return;
        }
        fVar16 = (float)iVar4;
        fVar21 = 0.0;
        uVar9 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        fVar12 = fVar16 - (param_4 + param_2);
        do {
          if (uVar8 <= uVar9) goto LAB_022c1a98;
          lVar6 = *(long *)(lVar5 + 0x20 + uVar9 * 8);
          fVar14 = fVar16;
          fVar20 = fVar19;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            fVar14 = fVar16;
            fVar20 = fVar19;
          }
          uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
          fVar16 = fVar14;
          fVar19 = fVar20;
          if ((uVar8 & 1) == 0) {
            if (lVar6 == 0) goto LAB_022c1a9c;
            fVar13 = (float)UnityEngine_RectTransform__get_rect_43cf450(lVar6,0);
            fVar19 = fVar20;
            fVar16 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar17 = fVar18 + fVar13;
            fVar18 = fVar11 + param_3 * 0.5 + fVar10 * fVar16;
            fVar16 = fVar10 * fVar17 + fVar18;
            fVar13 = (float)Dino_BusSand_App_UI_ScreenSafe__TopClearPx_21ff838
                                      (fVar10 * fVar13 + fVar18,0);
            if (0.0 < fVar13 / fVar10) {
              UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
              fVar16 = fVar12 / fVar10 - fVar16;
              fVar18 = fVar13 / fVar10 + 10.0;
              fVar14 = fVar18 + ((fVar20 + fVar14) - fVar16);
              if (fVar21 <= fVar14) {
                fVar21 = fVar14;
              }
            }
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar8 = (ulong)uVar1;
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)uVar1);
        if (fVar21 <= 0.0) {
          return;
        }
        if ((int)uVar1 < 1) {
          return;
        }
        uVar9 = 0;
        while (uVar9 < uVar8) {
          lVar6 = *(long *)(lVar5 + 0x20 + uVar9 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar6 == 0) goto LAB_022c1a9c;
            uVar15 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
            fVar16 = fVar16 - fVar21;
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar15,fVar16,lVar6,0);
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar9 = uVar9 + 1;
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar9) {
            return;
          }
        }
      }
    }
LAB_022c1a98:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_022c1a9c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

