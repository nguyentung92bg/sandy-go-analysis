/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Write
void Dino_BusSand_App_UI_UiTweakApplier__Write (Dino_BusSand_App_UI_UiTweakApplier_Binding_o* b, Dino_BusSand_App_UI_UiTweaks_Entry_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Write
   void Dino_BusSand_App_UI_UiTweakApplier__Write (Dino_BusSand_App_UI_UiTweakApplier_Binding_o* b,
   Dino_BusSand_App_UI_UiTweaks_Entry_o* e, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiTweakApplier__Write_22a4598
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lStack_80;
  long lStack_78;
  
  if ((bRam0000000004f9c27e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5be8);
    FUN_02132f7c(PTR_DAT_04cb5bf0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c27e = 1;
  }
  lStack_80 = 0;
  lStack_78 = 0;
  if (param_4 != 0) {
    lVar6 = *(long *)(param_4 + 0x18);
    if (param_5 == 0) {
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar2 = PTR_DAT_04cacfc0;
      pfVar5 = *(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
      fVar15 = *pfVar5;
      fVar24 = pfVar5[1];
      if (cRam0000000004f9b949 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b949 = '\x01';
        pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
      }
      fVar10 = pfVar5[2];
      fVar19 = fVar15;
      fVar9 = fVar24;
      fVar16 = fVar10;
      fVar1 = pfVar5[3];
    }
    else {
      fVar15 = *(float *)(param_5 + 0x20);
      fVar24 = *(float *)(param_5 + 0x24);
      fVar19 = *(float *)(param_5 + 0x28);
      fVar9 = *(float *)(param_5 + 0x2c);
      fVar16 = *(float *)(param_5 + 0x34);
      param_3 = fVar19;
      fVar10 = (float)Dino_BusSand_App_UI_UiTweakApplier__Safe_22a4c04
                                (*(undefined4 *)(param_5 + 0x30));
      fVar1 = fVar16;
    }
    if (lVar6 != 0) {
      fVar11 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar6,0);
      fVar17 = fVar16;
      fVar26 = fVar16;
      fVar25 = fVar11;
      if ((*(char *)(param_4 + 0x20) != '\0') &&
         (fVar20 = fVar11 - *(float *)(param_4 + 0x24), fVar17 = fVar16 - *(float *)(param_4 + 0x28)
         , param_3 = fVar20 * fVar20 + fVar17 * fVar17, fVar17 = _UNK_00e1fea0,
         param_3 < _UNK_00e1fea0)) {
        param_3 = *(float *)(param_4 + 0x34);
        fVar17 = *(float *)(param_4 + 0x38);
        fVar26 = fVar16 - *(float *)(param_4 + 0x38);
        fVar25 = fVar11 - param_3;
      }
      fVar12 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar6,0);
      fVar20 = fVar17;
      fVar27 = fVar12;
      if ((*(char *)(param_4 + 0x20) != '\0') &&
         (fVar21 = fVar12 - *(float *)(param_4 + 0x2c), fVar22 = fVar17 - *(float *)(param_4 + 0x30)
         , param_3 = fVar21 * fVar21 + fVar22 * fVar22, param_3 < _UNK_00e1fea0)) {
        param_3 = *(float *)(param_4 + 0x3c);
        fVar20 = fVar17 - *(float *)(param_4 + 0x40);
        fVar27 = fVar12 - param_3;
      }
      fVar22 = fVar17;
      fVar13 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar6,0);
      fVar21 = _UNK_00e1fea0;
      fVar29 = fVar22;
      fVar28 = fVar13;
      if ((*(char *)(param_4 + 0x20) != '\0') &&
         (fVar14 = fVar13 - *(float *)(param_4 + 0x44), fVar18 = fVar22 - *(float *)(param_4 + 0x48)
         , fVar23 = param_3 - *(float *)(param_4 + 0x4c),
         fVar23 * fVar23 + fVar14 * fVar14 + fVar18 * fVar18 < _UNK_00e1fea0)) {
        fVar29 = fVar22 / *(float *)(param_4 + 0x54);
        fVar28 = fVar13 / *(float *)(param_4 + 0x50);
      }
      fVar25 = fVar15 + fVar25;
      fVar26 = fVar24 + fVar26;
      fVar27 = fVar19 + fVar27;
      fVar20 = fVar9 + fVar20;
      if (_UNK_00e1fea0 <=
          (fVar26 - fVar16) * (fVar26 - fVar16) + (fVar25 - fVar11) * (fVar25 - fVar11)) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar25,fVar26,lVar6,0);
      }
      fVar28 = fVar10 * fVar28;
      fVar29 = fVar1 * fVar29;
      if (fVar21 <= (fVar20 - fVar17) * (fVar20 - fVar17) + (fVar27 - fVar12) * (fVar27 - fVar12)) {
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar27,fVar20,lVar6,0);
      }
      if (fVar21 <= (param_3 - param_3) * (param_3 - param_3) +
                    (fVar29 - fVar22) * (fVar29 - fVar22) + (fVar28 - fVar13) * (fVar28 - fVar13)) {
        UnityEngine_Transform__set_localScale_43d1be0(fVar28,fVar29,lVar6,0);
      }
      *(float *)(param_4 + 0x24) = fVar25;
      *(float *)(param_4 + 0x28) = fVar26;
      *(float *)(param_4 + 0x34) = fVar15;
      *(float *)(param_4 + 0x38) = fVar24;
      *(float *)(param_4 + 0x2c) = fVar27;
      *(float *)(param_4 + 0x30) = fVar20;
      *(float *)(param_4 + 0x44) = fVar28;
      *(float *)(param_4 + 0x48) = fVar29;
      *(float *)(param_4 + 0x3c) = fVar19;
      *(float *)(param_4 + 0x40) = fVar9;
      *(undefined1 *)(param_4 + 0x20) = 1;
      *(float *)(param_4 + 0x4c) = param_3;
      *(float *)(param_4 + 0x50) = fVar10;
      *(float *)(param_4 + 0x54) = fVar1;
      if ((param_5 == 0) || (*(char *)(param_5 + 0x3c) == '\0')) {
        if (*(char *)(param_4 + 0x21) != '\0') {
          lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
          if (lVar3 == 0) goto LAB_023a4ba8;
          UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
          *(undefined1 *)(param_4 + 0x21) = 0;
        }
        if (param_5 == 0) {
          return;
        }
      }
      else {
        lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
        if (lVar3 == 0) goto LAB_023a4ba8;
        uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
          if (lVar3 == 0) goto LAB_023a4ba8;
          UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
          *(undefined1 *)(param_4 + 0x21) = 1;
        }
      }
      if ((0.0 < *(float *)(param_5 + 0x38)) &&
         (uVar4 = UnityEngine_Component__TryGetComponent_object__26fa6e4
                            (lVar6,&lStack_78,*(undefined8 *)PTR_DAT_04cb5bf0), (uVar4 & 1) != 0)) {
        if (lStack_78 == 0) goto LAB_023a4ba8;
        fVar15 = *(float *)(param_5 + 0x38);
        if (*(char *)(lStack_78 + 0x260) == '\0') {
          fVar24 = *(float *)(lStack_78 + 0x20c);
          if (cRam0000000004f9c305 == '\0') {
            FUN_02132f7c(PTR_DAT_04cb5bf8);
            cRam0000000004f9c305 = '\x01';
          }
          fVar19 = ABS(fVar24);
          if (fVar19 <= ABS(fVar15)) {
            fVar19 = ABS(fVar15);
          }
          fVar10 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
          fVar9 = fVar19 * _UNK_00e20900;
          if (fVar19 * _UNK_00e20900 <= fVar10) {
            fVar9 = fVar10;
          }
          if (fVar9 <= ABS(fVar15 - fVar24)) {
            if (lStack_78 == 0) goto LAB_023a4ba8;
            TMPro_TMP_Text__set_fontSize_42cc224(*(undefined4 *)(param_5 + 0x38),lStack_78,0);
          }
        }
        else {
          fVar24 = *(float *)(lStack_78 + 0x27c);
          if (cRam0000000004f9c305 == '\0') {
            FUN_02132f7c(PTR_DAT_04cb5bf8);
            cRam0000000004f9c305 = '\x01';
          }
          fVar19 = ABS(fVar24);
          if (fVar19 <= ABS(fVar15)) {
            fVar19 = ABS(fVar15);
          }
          fVar10 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
          fVar9 = fVar19 * _UNK_00e20900;
          if (fVar19 * _UNK_00e20900 <= fVar10) {
            fVar9 = fVar10;
          }
          if (fVar9 <= ABS(fVar15 - fVar24)) {
            if ((lStack_78 == 0) ||
               (TMPro_TMP_Text__set_fontSizeMax_42cc4f0(*(undefined4 *)(param_5 + 0x38),lStack_78,0)
               , lStack_78 == 0)) goto LAB_023a4ba8;
            TMPro_TMP_Text__set_fontSizeMin_42cc4a4
                      (*(float *)(param_5 + 0x38) * _UNK_00e2098c,lStack_78,0);
          }
        }
      }
      puVar2 = PTR_DAT_04ca9ae8;
      uVar7 = *(undefined8 *)(param_5 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = UnityEngine_Component__TryGetComponent_object__26fa6e4
                            (lVar6,&lStack_80,*(undefined8 *)PTR_DAT_04cb5be8), (uVar4 & 1) != 0)) {
        if (lStack_80 == 0) goto LAB_023a4ba8;
        uVar7 = *(undefined8 *)(lStack_80 + 0xd8);
        uVar8 = *(undefined8 *)(param_5 + 0x40);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,uVar8,0);
        if ((uVar4 & 1) != 0) {
          if (lStack_80 == 0) goto LAB_023a4ba8;
          UnityEngine_UI_Image__set_sprite_44a7258(lStack_80,*(undefined8 *)(param_5 + 0x40),0);
        }
      }
      return;
    }
  }
LAB_023a4ba8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

