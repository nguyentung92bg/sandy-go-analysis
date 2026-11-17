/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Apply
void Dino_BusSand_App_UI_KitAdopt__Apply (Dino_BusSand_App_UI_KitAdopt_Scope_o* s, UnityEngine_RectTransform_o* rt, Dino_BusSand_App_UI_KitValues_o* B, Dino_BusSand_App_UI_KitValues_o* P, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Apply
   void Dino_BusSand_App_UI_KitAdopt__Apply (Dino_BusSand_App_UI_KitAdopt_Scope_o* s,
   UnityEngine_RectTransform_o* rt, Dino_BusSand_App_UI_KitValues_o* B,
   Dino_BusSand_App_UI_KitValues_o* P, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitAdopt__Apply_227f07c
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,long param_5,
               long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  long lStack_48;
  
  if ((bRam0000000004f9c13a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cb4c28);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb4c00);
    FUN_02132f7c(PTR_DAT_04cb4cb0);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4cb8);
    FUN_02132f7c(PTR_DAT_04cb4cc0);
    bRam0000000004f9c13a = 1;
  }
  lStack_48 = 0;
  if (param_3 == 0) goto LAB_0238007c;
  if (((*(long *)(param_3 + 0x48) == 0) ||
      (System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                 (*(long *)(param_3 + 0x48),param_4,&lStack_48,*(undefined8 *)PTR_DAT_04cb4c00),
      lStack_48 == 0)) || (lVar9 = *(long *)(lStack_48 + 0x20), lVar9 == 0)) {
    if (param_4 == 0) goto LAB_0238007c;
    uVar12 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(param_4,0);
  }
  else {
    uVar12 = (**(code **)(lVar9 + 0x18))
                       (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
  puVar3 = PTR_DAT_04cad7b8;
  fVar22 = _UNK_00e1fea0;
  if ((param_6 == 0) || (param_5 == 0)) goto LAB_0238007c;
  uVar21 = *(undefined8 *)(param_5 + 0x10);
  fVar13 = (float)*(undefined8 *)(param_6 + 0x10) - (float)uVar21;
  fVar18 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20) - (float)((ulong)uVar21 >> 0x20);
  if ((_UNK_00e1fea0 <= fVar13 * fVar13 + fVar18 * fVar18) ||
     ((uVar21 = *(undefined8 *)(param_5 + 0x18),
      fVar13 = (float)*(undefined8 *)(param_6 + 0x18) - (float)uVar21,
      fVar18 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20) -
               (float)((ulong)uVar21 >> 0x20), _UNK_00e1fea0 <= fVar13 * fVar13 + fVar18 * fVar18 ||
      (uVar21 = *(undefined8 *)(param_5 + 0x20),
      fVar13 = (float)*(undefined8 *)(param_6 + 0x20) - (float)uVar21,
      fVar18 = (float)((ulong)*(undefined8 *)(param_6 + 0x20) >> 0x20) -
               (float)((ulong)uVar21 >> 0x20), _UNK_00e1fea0 <= fVar13 * fVar13 + fVar18 * fVar18)))
     ) {
    fVar13 = (float)uVar21;
    if (param_4 == 0) goto LAB_0238007c;
    fVar18 = (float)UnityEngine_RectTransform__get_anchorMin_43cf520(param_4,0);
    fVar18 = fVar18 - *(float *)(param_5 + 0x10);
    fVar13 = fVar13 - *(float *)(param_5 + 0x14);
    fVar13 = fVar13 * fVar13;
    if (fVar22 <= fVar18 * fVar18 + fVar13) {
LAB_0237f354:
      if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Application__get_isEditor_43543ec(0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar21 = Dino_BusSand_App_UI_KitAdopt__PathOf_2280404(param_4);
        uVar21 = System_String__Concat_46d2b84
                           (*(undefined8 *)PTR_DAT_04cb4cb8,uVar21,*(undefined8 *)PTR_DAT_04cb4cc0,0
                           );
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__LogWarning_4357a30(uVar21,0);
      }
      bVar10 = true;
      goto LAB_0237f3e8;
    }
    fVar18 = (float)UnityEngine_RectTransform__get_anchorMax_43cf6a4(param_4,0);
    fVar18 = fVar18 - *(float *)(param_5 + 0x18);
    fVar13 = fVar13 - *(float *)(param_5 + 0x1c);
    fVar13 = fVar13 * fVar13;
    if ((fVar22 <= fVar18 * fVar18 + fVar13) ||
       (fVar18 = (float)UnityEngine_RectTransform__get_pivot_43cfb30(param_4,0),
       fVar18 = fVar18 - *(float *)(param_5 + 0x20), fVar13 = fVar13 - *(float *)(param_5 + 0x24),
       fVar22 <= fVar18 * fVar18 + fVar13 * fVar13)) goto LAB_0237f354;
    uVar24 = *(undefined4 *)(param_5 + 0x28);
    uVar25 = *(undefined4 *)(param_5 + 0x2c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar27 = param_2;
    uVar7 = Dino_BusSand_App_UI_KitAdopt__Near_227cfe4(uVar12,param_2,uVar24,uVar25);
    if ((uVar7 & 1) == 0) goto LAB_0237f354;
    uVar24 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_4,0);
    uVar25 = *(undefined4 *)(param_5 + 0x30);
    uVar26 = *(undefined4 *)(param_5 + 0x34);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_UI_KitAdopt__Near_227cfe4(uVar24,uVar27,uVar25,uVar26);
    if ((uVar7 & 1) == 0) goto LAB_0237f354;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (*(undefined4 *)(param_6 + 0x10),*(undefined4 *)(param_6 + 0x14),param_4,0);
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(param_6 + 0x18),*(undefined4 *)(param_6 + 0x1c),param_4,0);
    UnityEngine_RectTransform__set_pivot_43cfbf4
              (*(undefined4 *)(param_6 + 0x20),*(undefined4 *)(param_6 + 0x24),param_4,0);
    uVar27 = *(undefined4 *)(param_6 + 0x28);
    uVar25 = *(undefined4 *)(param_6 + 0x2c);
    bVar10 = true;
    uVar26 = *(undefined4 *)(param_6 + 0x30);
    uVar24 = *(undefined4 *)(param_6 + 0x34);
  }
  else {
    bVar10 = false;
LAB_0237f3e8:
    uVar24 = *(undefined4 *)(param_5 + 0x28);
    uVar27 = *(undefined4 *)(param_5 + 0x2c);
    uVar26 = *(undefined4 *)(param_6 + 0x28);
    uVar28 = *(undefined4 *)(param_6 + 0x2c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar25 = param_2;
    uVar27 = Dino_BusSand_App_UI_KitAdopt__Rule_2280104(uVar12,param_2,uVar24,uVar27,uVar26,uVar28);
    if (param_4 == 0) goto LAB_0238007c;
    uVar24 = uVar25;
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_4,0);
    uVar26 = Dino_BusSand_App_UI_KitAdopt__Rule_2280104();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar28 = uVar25;
  uVar5 = Dino_BusSand_App_UI_KitAdopt__Near_227cfe4(uVar27,uVar25,uVar12,param_2);
  if (bVar10 || ((uVar5 ^ 0xffffffff) & 1) != 0) {
    if ((lStack_48 == 0) || (lVar9 = *(long *)(lStack_48 + 0x28), lVar9 == 0)) {
      uVar28 = uVar25;
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar27,uVar25,param_4,0);
    }
    else {
      uVar28 = uVar25;
      (**(code **)(lVar9 + 0x18))
                (uVar27,uVar25,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
  }
  fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = uVar24;
  uVar7 = Dino_BusSand_App_UI_KitAdopt__Near_227cfe4(uVar26,uVar24,fVar13,uVar28);
  if ((uVar7 & 1) == 0) {
    uVar12 = uVar24;
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(uVar26,param_4,0);
  }
  if ((lStack_48 == 0) || (lVar9 = *(long *)(lStack_48 + 0x10), lVar9 == 0)) {
    fVar18 = (float)UnityEngine_Transform__get_localScale_43d1b0c(param_4,0);
  }
  else {
    fVar18 = (float)(**(code **)(lVar9 + 0x18))
                              (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar24 = Dino_BusSand_App_UI_KitAdopt__Rule_22801ac();
  fVar14 = fVar13;
  uVar7 = Dino_BusSand_App_UI_KitAdopt__Near_227d088();
  if ((uVar7 & 1) == 0) {
    if ((lStack_48 == 0) || (lVar9 = *(long *)(lStack_48 + 0x18), lVar9 == 0)) {
      fVar14 = fVar13;
      UnityEngine_Transform__set_localScale_43d1be0(uVar24,uVar12,param_4,0);
    }
    else {
      fVar14 = fVar13;
      (**(code **)(lVar9 + 0x18))
                (uVar24,uVar12,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
    lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_4,*(undefined8 *)PTR_DAT_04cb4c28);
    if ((lVar9 == 0) &&
       ((lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0), lVar9 == 0 ||
        (lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                           (lVar9,*(undefined8 *)PTR_DAT_04cb4cb0), lVar9 == 0))))
    goto LAB_0238007c;
    *(undefined4 *)(lVar9 + 0x20) = uVar24;
    *(undefined4 *)(lVar9 + 0x24) = uVar12;
    *(float *)(lVar9 + 0x28) = fVar13;
  }
  uVar12 = *(undefined4 *)(param_6 + 0x44);
  fVar13 = *(float *)(param_5 + 0x44);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_KitAdopt__NearAngle_227d158(uVar12);
  if ((uVar7 & 1) == 0) {
    UnityEngine_Transform__get_localEulerAngles_43d1480(param_4,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar14 = (float)fmodf(fVar14,0x43b40000);
    if (fVar14 <= 180.0) {
      if (fVar14 < -180.0) {
        fVar13 = 360.0;
        goto LAB_0237f6bc;
      }
    }
    else {
      fVar13 = -360.0;
LAB_0237f6bc:
      fVar14 = fVar14 + fVar13;
    }
    fVar13 = (float)fmodf(*(undefined4 *)(param_5 + 0x44),0x43b40000);
    if (fVar13 <= 180.0) {
      if (fVar13 < -180.0) {
        fVar15 = 360.0;
        goto LAB_0237f704;
      }
    }
    else {
      fVar15 = -360.0;
LAB_0237f704:
      fVar13 = fVar13 + fVar15;
    }
    fVar15 = (float)fmodf(*(undefined4 *)(param_6 + 0x44),0x43b40000);
    if (fVar15 <= 180.0) {
      if (fVar15 < -180.0) {
        fVar23 = 360.0;
        goto LAB_0237f74c;
      }
    }
    else {
      fVar23 = -360.0;
LAB_0237f74c:
      fVar15 = fVar15 + fVar23;
    }
    fVar14 = (float)Dino_BusSand_App_UI_KitAdopt__Rule_2280080(fVar14,fVar13,fVar15);
    fVar15 = (float)UnityEngine_Transform__get_localEulerAngles_43d1480(param_4,0);
    UnityEngine_Transform__get_localEulerAngles_43d1480(param_4,0);
    fVar13 = fVar13 * _UNK_00e20a74;
    fVar14 = fVar14 * _UNK_00e20a74;
    UnityEngine_Quaternion__Internal_FromEulerRad_43af004(fVar15 * _UNK_00e20a74,0);
    UnityEngine_Transform__set_localRotation_43d156c(param_4,0);
  }
  if (*(char *)(param_6 + 0x48) != *(char *)(param_5 + 0x48)) {
    lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
    if (lVar9 == 0) goto LAB_0238007c;
    bVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
    if (*(byte *)(param_5 + 0x48) == (bVar4 & 1)) {
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
      if (lVar9 == 0) goto LAB_0238007c;
      UnityEngine_GameObject__SetActive_43c1408(lVar9,*(undefined1 *)(param_6 + 0x48),0);
    }
  }
  puVar2 = PTR_DAT_04ca9ae8;
  plVar8 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                             (param_4,*(undefined8 *)PTR_DAT_04cad788);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
  if ((((uVar7 & 1) != 0) && (*(char *)(param_5 + 0x49) != '\0')) &&
     (*(char *)(param_6 + 0x49) != '\0')) {
    uVar21 = *(undefined8 *)(param_6 + 0x50);
    uVar11 = *(undefined8 *)(param_5 + 0x50);
    fVar15 = fVar14;
    fVar23 = fVar18;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      fVar15 = fVar14;
      fVar23 = fVar18;
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar21,uVar11,0);
    if ((uVar7 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0238007c;
    }
    else {
      if (plVar8 == (long *)0x0) goto LAB_0238007c;
      lVar9 = plVar8[0x1b];
      uVar21 = *(undefined8 *)(param_5 + 0x50);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,uVar21,0);
      if ((uVar7 & 1) != 0) {
        UnityEngine_UI_Image__set_sprite_44a7258(plVar8,*(undefined8 *)(param_6 + 0x50),0);
      }
    }
    uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar7 = uVar7 & 0xffffffff;
    }
    fVar16 = (float)Dino_BusSand_App_UI_KitAdopt__RuleColor_228027c(uVar7);
    fVar14 = fVar15;
    fVar18 = fVar23;
    fVar19 = fVar13;
    fVar17 = (float)(**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    fVar14 = fVar15 - fVar14;
    fVar18 = fVar23 - fVar18;
    fVar20 = fVar22;
    if (fVar22 <= fVar18 * fVar18 +
                  fVar14 * fVar14 +
                  (fVar16 - fVar17) * (fVar16 - fVar17) + (fVar13 - fVar19) * (fVar13 - fVar19)) {
      (**(code **)(*plVar8 + 0x2a8))(fVar16,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
      fVar14 = fVar15;
      fVar18 = fVar23;
      fVar20 = fVar13;
    }
    fVar13 = fVar20;
    if ((*(int *)(param_6 + 0x68) != *(int *)(param_5 + 0x68)) &&
       ((int)plVar8[0x1d] == *(int *)(param_5 + 0x68))) {
      UnityEngine_UI_Image__set_type_44afa58(plVar8,*(int *)(param_6 + 0x68),0);
    }
    fVar15 = *(float *)(param_6 + 0x6c);
    fVar23 = *(float *)(param_5 + 0x6c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar19 = _UNK_00e20448;
    if (_UNK_00e20448 <= ABS(fVar15 - fVar23)) {
      lVar9 = plVar8[0x21];
      fVar13 = *(float *)(param_5 + 0x6c);
      fVar14 = *(float *)(param_6 + 0x6c);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar15 = (float)Dino_BusSand_App_UI_KitAdopt__Rule_2280080((int)lVar9);
      if (fVar19 <= fVar15) {
        fVar19 = fVar15;
      }
      UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_44b0364(fVar19,plVar8,0);
    }
    if ((*(char *)(param_6 + 0x70) != *(char *)(param_5 + 0x70)) &&
       (*(char *)(param_5 + 0x70) == *(char *)((long)plVar8 + 0xec))) {
      UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar8,*(char *)(param_6 + 0x70) != '\0',0);
    }
    if ((*(char *)(param_6 + 0x71) != *(char *)(param_5 + 0x71)) &&
       (bVar4 = (**(code **)(*plVar8 + 0x2b8))(plVar8,*(undefined8 *)(*plVar8 + 0x2c0)),
       *(byte *)(param_5 + 0x71) == (bVar4 & 1))) {
      (**(code **)(*plVar8 + 0x2c8))
                (plVar8,*(undefined1 *)(param_6 + 0x71),*(undefined8 *)(*plVar8 + 0x2d0));
    }
  }
  plVar8 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                             (param_4,*(undefined8 *)PTR_DAT_04cad790);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(char *)(param_5 + 0x72) == '\0') {
    return;
  }
  if (*(char *)(param_6 + 0x72) == '\0') {
    return;
  }
  uVar21 = *(undefined8 *)(param_6 + 0x78);
  uVar11 = *(undefined8 *)(param_5 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar21,uVar11,0);
  if ((uVar7 & 1) != 0) {
    if (plVar8 == (long *)0x0) goto LAB_0238007c;
    lVar9 = plVar8[0x1f];
    uVar21 = *(undefined8 *)(param_5 + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,uVar21,0);
    if ((uVar7 & 1) != 0) {
      uVar21 = *(undefined8 *)(param_6 + 0x78);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar21,0,0);
      if ((uVar7 & 1) != 0) {
        TMPro_TMP_Text__set_font_42cb6ac(plVar8,*(undefined8 *)(param_6 + 0x78),0);
      }
    }
  }
  uVar21 = *(undefined8 *)(param_6 + 0x80);
  uVar11 = *(undefined8 *)(param_5 + 0x80);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar21,uVar11,0);
  if ((uVar7 & 1) != 0) {
    if (plVar8 == (long *)0x0) goto LAB_0238007c;
    uVar21 = (**(code **)(*plVar8 + 0x528))(plVar8,*(undefined8 *)(*plVar8 + 0x530));
    uVar11 = *(undefined8 *)(param_5 + 0x80);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar21,uVar11,0);
    if ((uVar7 & 1) != 0) {
      uVar21 = *(undefined8 *)(param_6 + 0x80);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar21,0,0);
      if ((uVar7 & 1) != 0) {
        (**(code **)(*plVar8 + 0x538))
                  (plVar8,*(undefined8 *)(param_6 + 0x80),*(undefined8 *)(*plVar8 + 0x540));
      }
    }
  }
  if (*(char *)(param_6 + 0x9c) != *(char *)(param_5 + 0x9c)) {
    if (plVar8 == (long *)0x0) goto LAB_0238007c;
    if (*(char *)(param_5 + 0x9c) == (char)plVar8[0x4c]) {
      TMPro_TMP_Text__set_enableAutoSizing_42cc454(plVar8,*(char *)(param_6 + 0x9c) != '\0',0);
    }
  }
  fVar15 = *(float *)(param_6 + 0x90);
  fVar23 = *(float *)(param_5 + 0x90);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar19 = _UNK_00e20448;
  if (_UNK_00e20448 <= ABS(fVar15 - fVar23)) {
    if (plVar8 == (long *)0x0) goto LAB_0238007c;
    uVar12 = *(undefined4 *)((long)plVar8 + 0x27c);
    uVar24 = *(undefined4 *)(param_5 + 0x90);
    fVar14 = *(float *)(param_6 + 0x90);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar23 = (float)Dino_BusSand_App_UI_KitAdopt__Rule_2280080(uVar12,uVar24);
    fVar13 = 1.0;
    fVar15 = 1.0;
    if (1.0 <= fVar23) {
      fVar15 = fVar23;
    }
    TMPro_TMP_Text__set_fontSizeMax_42cc4f0(fVar15,plVar8,0);
  }
  fVar15 = *(float *)(param_6 + 0x8c);
  fVar23 = *(float *)(param_5 + 0x8c);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (fVar19 <= ABS(fVar15 - fVar23)) {
    if (plVar8 == (long *)0x0) goto LAB_0238007c;
    lVar9 = plVar8[0x4f];
    uVar12 = *(undefined4 *)(param_5 + 0x8c);
    fVar14 = *(float *)(param_6 + 0x8c);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar23 = (float)Dino_BusSand_App_UI_KitAdopt__Rule_2280080((int)lVar9,uVar12);
    fVar13 = 1.0;
    fVar15 = 1.0;
    if (1.0 <= fVar23) {
      fVar15 = fVar23;
    }
    TMPro_TMP_Text__set_fontSizeMin_42cc4a4(fVar15,plVar8,0);
  }
  if ((*(char *)(param_6 + 0x9c) == '\0') && (*(char *)(param_5 + 0x9c) == '\0')) {
    fVar15 = *(float *)(param_6 + 0x88);
    fVar23 = *(float *)(param_5 + 0x88);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (fVar19 <= ABS(fVar15 - fVar23)) {
      if (plVar8 == (long *)0x0) goto LAB_0238007c;
      if ((char)plVar8[0x4c] == '\0') {
        uVar12 = *(undefined4 *)((long)plVar8 + 0x20c);
        uVar24 = *(undefined4 *)(param_5 + 0x88);
        fVar14 = *(float *)(param_6 + 0x88);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar23 = (float)Dino_BusSand_App_UI_KitAdopt__Rule_2280080(uVar12,uVar24);
        fVar13 = 1.0;
        fVar15 = 1.0;
        if (1.0 <= fVar23) {
          fVar15 = fVar23;
        }
        TMPro_TMP_Text__set_fontSize_42cc224(fVar15,plVar8,0);
      }
      goto LAB_0237fda8;
    }
  }
  if (plVar8 == (long *)0x0) {
LAB_0238007c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0237fda8:
  uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar7 = uVar7 & 0xffffffff;
  }
  fVar16 = (float)Dino_BusSand_App_UI_KitAdopt__RuleColor_228027c(uVar7);
  fVar15 = fVar14;
  fVar23 = fVar18;
  fVar20 = fVar13;
  fVar17 = (float)(**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  if (fVar22 <= (fVar18 - fVar23) * (fVar18 - fVar23) +
                (fVar14 - fVar15) * (fVar14 - fVar15) +
                (fVar16 - fVar17) * (fVar16 - fVar17) + (fVar13 - fVar20) * (fVar13 - fVar20)) {
    (**(code **)(*plVar8 + 0x2a8))
              (fVar16,fVar13,fVar14,fVar18,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
  }
  if ((*(int *)(param_6 + 0xb0) != *(int *)(param_5 + 0xb0)) &&
     (iVar6 = TMPro_TMP_Text__get_alignment_42cc600(plVar8,0), iVar6 == *(int *)(param_5 + 0xb0))) {
    TMPro_TMP_Text__set_alignment_42cc610(plVar8,*(undefined4 *)(param_6 + 0xb0),0);
  }
  lVar9 = *(long *)puVar3;
  fVar22 = *(float *)(param_6 + 0x94);
  fVar13 = *(float *)(param_5 + 0x94);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar3;
  }
  if (fVar19 <= ABS(fVar22 - fVar13)) {
    lVar1 = plVar8[0x5a];
    uVar12 = *(undefined4 *)(param_5 + 0x94);
    uVar24 = *(undefined4 *)(param_6 + 0x94);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_KitAdopt__Rule_2280080((int)lVar1,uVar12,uVar24);
    TMPro_TMP_Text__set_characterSpacing_42cc65c(plVar8,0);
    lVar9 = *(long *)puVar3;
  }
  fVar22 = *(float *)(param_6 + 0x98);
  fVar13 = *(float *)(param_5 + 0x98);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (fVar19 <= ABS(fVar22 - fVar13)) {
    lVar9 = plVar8[0x5d];
    uVar12 = *(undefined4 *)(param_5 + 0x98);
    uVar24 = *(undefined4 *)(param_6 + 0x98);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_KitAdopt__Rule_2280080((int)lVar9,uVar12,uVar24);
    TMPro_TMP_Text__set_lineSpacing_42cc758(plVar8,0);
  }
  if ((*(int *)(param_6 + 0xb4) != *(int *)(param_5 + 0xb4)) &&
     ((int)plVar8[0x61] == *(int *)(param_5 + 0xb4))) {
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar8,*(int *)(param_6 + 0xb4),0);
  }
  if ((*(int *)(param_6 + 0xb8) != *(int *)(param_5 + 0xb8)) &&
     (*(int *)((long)plVar8 + 0x314) == *(int *)(param_5 + 0xb8))) {
    TMPro_TMP_Text__set_overflowMode_42cc9b8(plVar8,*(int *)(param_6 + 0xb8),0);
  }
  if ((*(int *)(param_6 + 0xbc) != *(int *)(param_5 + 0xbc)) &&
     ((int)plVar8[0x50] == *(int *)(param_5 + 0xbc))) {
    TMPro_TMP_Text__set_fontStyle_42cc53c(plVar8,*(int *)(param_6 + 0xbc),0);
  }
  return;
}

