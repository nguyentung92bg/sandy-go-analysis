/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<NeedleLoop>d__26$$MoveNext
bool Dino_BusSand_App_UI_WinPanel__NeedleLoop_d__26__MoveNext (Dino_BusSand_App_UI_WinPanel__NeedleLoop_d__26_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<NeedleLoop>d__26$$MoveNext
   bool Dino_BusSand_App_UI_WinPanel__NeedleLoop_d__26__MoveNext
   (Dino_BusSand_App_UI_WinPanel__NeedleLoop_d__26_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_WinPanel__NeedleLoop_d__26__MoveNext_231558c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  float extraout_s0;
  float extraout_s0_00;
  float fVar18;
  float fVar19;
  float extraout_s0_01;
  float fVar20;
  float extraout_s0_02;
  float fVar21;
  float fVar22;
  float extraout_s0_03;
  float fVar23;
  float fVar24;
  int iStack_84;
  
                    /* try { // try from 024155b4 to 025155c3 has its CatchHandler @ 024155c4 */
  lVar8 = param_1;
  if ((bRam0000000004f9c56a & 1) == 0) {
                    /* catch() { ... } // from try @ 02415558 with catch @ 024155c4
                       catch() { ... } // from try @ 024155b4 with catch @ 024155c4 */
                    /* try { // try from 024155c8 to 025155cb has its CatchHandler @ 024155d4 */
                    /* try { // try from 024155cc to 025155d7 has its CatchHandler @ 024154d4 */
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024155c8 with catch @ 024155d4
                        */
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cad508);
    FUN_02132f7c(PTR_DAT_04caead0);
    FUN_02132f7c(PTR_DAT_04cb83f0);
    FUN_02132f7c(PTR_DAT_04cb1380);
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    lVar8 = FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c56a = 1;
  }
  lVar14 = *(long *)(param_1 + 0x20);
  iStack_84 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar8 = 0;
    if (lVar14 == 0) goto LAB_02415bc8;
    fVar23 = *(float *)(param_1 + 0x28);
    iStack_84 = *(int *)(lVar14 + 0xa4) + 1;
    *(int *)(lVar14 + 0xa4) = iStack_84;
    *(int *)(param_1 + 0x2c) = iStack_84;
    *(float *)(param_1 + 0x30) = fVar23 * 0.5 + -24.0;
    lVar8 = Dino_BusSand_App_Meta_Monetization__get_WinNeedleSeconds_22672e8(0);
    lVar16 = *(long *)(lVar14 + 0x78);
    *(undefined4 *)(param_1 + 0x38) = 0;
    fVar23 = _UNK_00e2098c;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    iStack_84 = 0;
    if (fVar23 <= extraout_s0) {
      fVar23 = extraout_s0;
    }
    *(undefined8 *)(param_1 + 0x3c) = _UNK_00e69fe8;
    *(float *)(param_1 + 0x34) = fVar23;
    puVar4 = PTR_DAT_04caa200;
    if (lVar16 == 0) goto LAB_02415bc8;
    if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
      uVar17 = 0;
      uVar11 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar17) goto LAB_02415c10;
        uVar2 = *(undefined4 *)(lVar16 + 0x20 + uVar17 * 4);
        uVar7 = *(undefined4 *)(param_1 + 0x3c);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = System_Math__Min_4831118(uVar7,uVar2,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar7;
        lVar8 = System_Math__Max_4830fc8(*(undefined4 *)(param_1 + 0x40),uVar2,0);
        uVar12 = *(uint *)(lVar16 + 0x18);
        uVar11 = (ulong)uVar12;
        uVar17 = uVar17 + 1;
        *(int *)(param_1 + 0x40) = (int)lVar8;
        iStack_84 = (int)uVar17;
      } while ((long)uVar17 < (long)(int)uVar12);
    }
  }
  if (lVar14 != 0) {
    if ((*(char *)(lVar14 + 0x90) == '\0') || (*(int *)(param_1 + 0x2c) != *(int *)(lVar14 + 0xa4)))
    {
      return 0;
    }
    fVar23 = *(float *)(param_1 + 0x38);
    lVar8 = UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar23 = fVar23 + extraout_s0_00;
    lVar16 = *(long *)(lVar14 + 0x68);
    fVar18 = fVar23 / *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = fVar23;
    fVar23 = (float)(int)(fVar18 * 0.5);
    fVar18 = fVar18 - (fVar23 + fVar23);
    fVar23 = 2.0;
    if (fVar18 <= 2.0) {
      fVar23 = fVar18;
    }
    fVar19 = -1.0;
    if (0.0 <= fVar18) {
      fVar19 = fVar23 + -1.0;
    }
    fVar18 = 1.0 - ABS(fVar19);
    fVar23 = 1.0;
    if (fVar18 <= 1.0) {
      fVar23 = fVar18;
    }
    fVar19 = 0.0;
    if (0.0 <= fVar18) {
      fVar19 = fVar23;
    }
    if (lVar16 != 0) {
      fVar23 = *(float *)(param_1 + 0x30);
      uVar17 = (ulong)(uint)fVar23;
      fVar23 = (fVar23 + fVar23) * fVar19 - fVar23;
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar16,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar23,lVar16,0);
      puVar4 = PTR_DAT_04caea30;
      lVar8 = *(long *)(lVar14 + 0xb0);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        uVar12 = 0;
        do {
          uVar15 = iVar1 - 1;
          if ((*(int *)(lVar8 + 0x18) <= (int)uVar12) ||
             (lVar8 = System_Collections_Generic_List_float___get_Item_3ac25c4
                                (lVar8,uVar12,*(undefined8 *)puVar4), uVar15 = uVar12,
             fVar23 < extraout_s0_01)) {
            lVar16 = *(long *)(lVar14 + 0x78);
            if (lVar16 == 0) break;
            if (*(uint *)(lVar16 + 0x18) <= uVar15) {
LAB_02415c10:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            uVar12 = *(uint *)(param_1 + 0x44);
            *(undefined4 *)(lVar14 + 0x80) = *(undefined4 *)(lVar16 + (long)(int)uVar15 * 4 + 0x20);
            if (uVar15 != uVar12) {
              if (-1 < (int)uVar12) {
                uVar17 = (ulong)(uint)_UNK_00e205e8;
                if ((_UNK_00e205e8 < *(float *)(param_1 + 0x38)) &&
                   (fVar23 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x34) + _UNK_00e205e8
                   , uVar17 = (ulong)(uint)fVar23, *(float *)(param_1 + 0x38) < fVar23)) {
                  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar8 = FUN_022c78f0(0);
                  if (lVar8 != 0) {
                    iVar1 = *(int *)(param_1 + 0x3c);
                    fVar23 = 0.5;
                    iVar3 = *(int *)(param_1 + 0x40) - iVar1;
                    if (iVar3 != 0 && iVar1 <= *(int *)(param_1 + 0x40)) {
                      fVar23 = (float)iVar3;
                      uVar17 = (ulong)(uint)fVar23;
                      fVar23 = (float)(*(int *)(lVar14 + 0x80) - iVar1) / fVar23;
                    }
                    Dino_BusSand_GameAudio__NeedleTick_23831cc(fVar23,lVar8,0);
                  }
                }
              }
              *(uint *)(param_1 + 0x44) = uVar15;
            }
            uVar13 = *(undefined8 *)(lVar14 + 0x98);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
            puVar4 = PTR_DAT_04caba50;
            if (((uVar11 & 1) != 0) && (*(int *)(lVar14 + 0x80) != *(int *)(lVar14 + 0xa0))) {
              uVar13 = *(undefined8 *)(lVar14 + 0x98);
              *(int *)(lVar14 + 0xa0) = *(int *)(lVar14 + 0x80);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              lVar8 = *(long *)puVar4;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar4;
              }
              if (**(long **)(lVar8 + 0xb8) == 0) break;
              iStack_84 = *(int *)(lVar14 + 0x80) * *(int *)(**(long **)(lVar8 + 0xb8) + 0x40);
              uVar9 = System_Int32__ToString_482d750(&iStack_84,0);
              if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
              }
              Dino_BusSand_App_UI_UiKit__SetLabel_228cb44(uVar13,uVar9,0);
            }
            puVar6 = PTR_DAT_04cb83f0;
            puVar5 = PTR_DAT_04cb1380;
            puVar4 = PTR_DAT_04cad4c0;
            fVar19 = _UNK_00e2094c;
            fVar18 = _UNK_00e20178;
            fVar23 = _UNK_00e20170;
            lVar16 = *(long *)(lVar14 + 0x70);
            lVar8 = 0;
            if (lVar16 != 0) {
              uVar12 = 0;
              goto LAB_02415a5c;
            }
            break;
          }
          lVar8 = *(long *)(lVar14 + 0xb0);
          uVar12 = uVar12 + 1;
        } while (lVar8 != 0);
      }
    }
  }
LAB_02415bc8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(lVar8);
LAB_02415a5c:
  fVar21 = (float)uVar17;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar12) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                     (lVar16,uVar12,*(undefined8 *)puVar5);
  lVar8 = 0;
  if (lVar16 == 0) goto LAB_02415bc8;
  UnityEngine_Transform__get_localScale_43d1b0c(lVar16,0);
  fVar22 = fVar23;
  if (uVar15 != uVar12) {
    fVar22 = 1.0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar20 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
  fVar24 = fVar20 * fVar18;
  fVar20 = -(fVar20 * fVar18);
  if (0.0 <= fVar22 - fVar21) {
    fVar20 = fVar24;
  }
  fVar20 = fVar21 + fVar20;
  if (ABS(fVar22 - fVar21) <= fVar24) {
    fVar20 = fVar22;
  }
  lVar8 = 0;
  if (*(long *)(lVar14 + 0x70) == 0) goto LAB_02415bc8;
  lVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                     (*(long *)(lVar14 + 0x70),uVar12,*(undefined8 *)puVar5);
  lVar8 = lVar16;
  if (*(long *)(lVar14 + 0x70) == 0) goto LAB_02415bc8;
  lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                     (*(long *)(lVar14 + 0x70),uVar12,*(undefined8 *)puVar5);
  lVar8 = 0;
  if ((lVar10 == 0) ||
     (lVar8 = UnityEngine_Transform__get_localScale_43d1b0c(lVar10,0), lVar16 == 0))
  goto LAB_02415bc8;
  fVar21 = -fVar20;
  if (0.0 <= extraout_s0_02) {
    fVar21 = fVar20;
  }
  UnityEngine_Transform__set_localScale_43d1be0(fVar21,fVar20,0x3f800000,lVar16,0);
  lVar8 = 0;
  if (*(long *)(lVar14 + 0xa8) == 0) goto LAB_02415bc8;
  lVar16 = System_Collections_Generic_List_object___get_Item_3a81924
                     (*(long *)(lVar14 + 0xa8),uVar12,*(undefined8 *)puVar6);
  lVar8 = lVar16;
  if (*(long *)(lVar14 + 0xa8) == 0) goto LAB_02415bc8;
  lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                     (*(long *)(lVar14 + 0xa8),uVar12,*(undefined8 *)puVar6);
  lVar8 = 0;
  if (lVar10 == 0) goto LAB_02415bc8;
  fVar22 = (float)TMPro_TMP_Text__get_alpha_42cbab8(lVar10,0);
  fVar21 = 1.0;
  if (uVar15 != uVar12) {
    fVar21 = fVar19;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
  if (lVar16 == 0) goto LAB_02415bc8;
  uVar17 = (ulong)(uint)ABS(fVar21 - fVar22);
  fVar20 = -(extraout_s0_03 * 6.0);
  if (0.0 <= fVar21 - fVar22) {
    fVar20 = extraout_s0_03 * 6.0;
  }
  fVar20 = fVar22 + fVar20;
  if (ABS(fVar21 - fVar22) <= extraout_s0_03 * 6.0) {
    fVar20 = fVar21;
  }
  TMPro_TMP_Text__set_alpha_42cbac0(fVar20,lVar16,0);
  lVar16 = *(long *)(lVar14 + 0x70);
  uVar12 = uVar12 + 1;
  lVar8 = 0;
  if (lVar16 == 0) goto LAB_02415bc8;
  goto LAB_02415a5c;
}

