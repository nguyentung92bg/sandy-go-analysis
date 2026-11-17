/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$LateUpdate
void Dino_BusSand_App_UI_HomeBeach__LateUpdate (Dino_BusSand_App_UI_HomeBeach_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$LateUpdate
   void Dino_BusSand_App_UI_HomeBeach__LateUpdate (Dino_BusSand_App_UI_HomeBeach_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBeach__LateUpdate_22def28
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar31;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  puVar7 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c400 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7138);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c400 = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar17 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
  if (fVar17 <= 0.0) {
    return;
  }
  uVar13 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  *(float *)(param_5 + 0x38) = fVar17 + *(float *)(param_5 + 0x38);
  if (*(long *)(param_5 + 0x20) != 0) {
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
    if (param_4 < 10.0) {
      return;
    }
    fVar18 = param_4 / _UNK_00e2078c;
    fVar32 = *(float *)(param_5 + 0x38);
    if (*(float *)(param_5 + 0x3c) <= fVar32) {
      plVar10 = *(long **)(param_5 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_023df9a8;
      dVar23 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      lVar12 = *(long *)(param_5 + 0x28);
      *(float *)(param_5 + 0x3c) = fVar32 + (float)dVar23 * _UNK_00e1fe6c + _UNK_00e20390;
      puVar7 = PTR_DAT_04cb7138;
      if (lVar12 == 0) goto LAB_023df9a8;
      uVar8 = (uint)*(ulong *)(lVar12 + 0x18);
      if (0 < (int)uVar8) {
        uVar15 = 0;
        lVar14 = 0;
        do {
          if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) * 0x30 - lVar14 == 0) goto LAB_023df9ac;
          pfVar1 = (float *)(lVar12 + 0x38 + lVar14);
          if (pfVar1[1] <= *pfVar1) {
            plVar10 = *(long **)(param_5 + 0x48);
            lVar12 = *(long *)PTR_DAT_04cb7138;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar7;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if ((lVar12 == 0) || (plVar10 == (long *)0x0)) goto LAB_023df9a8;
            uVar8 = (**(code **)(*plVar10 + 0x1a8))
                              (plVar10,*(undefined4 *)(lVar12 + 0x18),
                               *(undefined8 *)(*plVar10 + 0x1b0));
            lVar12 = *(long *)(param_5 + 0x28);
            if (lVar12 == 0) goto LAB_023df9a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_023df9ac;
            lVar11 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_023df9a8;
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_023df9ac;
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            lVar16 = *(long *)(lVar12 + lVar14 + 0x20);
            uVar3 = *(undefined4 *)(lVar12 + lVar14 + 0x4c);
            uVar13 = *(undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
            dVar23 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            dVar27 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
            if (lVar12 == 0) goto LAB_023df9a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_023df9ac;
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            uVar37 = *(undefined8 *)(lVar12 + (long)(int)uVar8 * 8 + 0x20);
            dVar28 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            dVar29 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            dVar30 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            dVar24 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar10 = *(long **)(param_5 + 0x48);
            if (plVar10 == (long *)0x0) goto LAB_023df9a8;
            dVar25 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            plVar10 = *(long **)(param_5 + 0x48);
            if (((plVar10 == (long *)0x0) ||
                (dVar26 = (double)(**(code **)(*plVar10 + 0x1b8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x1c0)), lVar16 == 0
                )) || (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0), lVar12 == 0
                      )) goto LAB_023df9a8;
            UnityEngine_GameObject__SetActive_43c1408(lVar12,1,0);
            uVar5 = _UNK_00e6a1e8;
            lVar12 = *(long *)(param_5 + 0x28);
            if (lVar12 == 0) goto LAB_023df9a8;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_023df9ac;
            lVar12 = lVar12 + lVar14;
            *(long *)(lVar12 + 0x20) = lVar16;
            *(undefined4 *)(lVar12 + 0x38) = 0;
            uVar6 = _UNK_00e6a3d8;
            uVar4 = _UNK_00e69cd0;
            *(undefined4 *)(lVar12 + 0x4c) = uVar3;
            fVar41 = (float)_UNK_00e69cd8;
            uVar9 = (ulong)_UNK_00e69cd8 >> 0x20;
            fVar32 = (float)dVar26 * _UNK_00e2065c + _UNK_00e204e8;
            *(float *)(lVar12 + 0x3c) = (float)dVar30 * 0.5 + _UNK_00e20170;
            *(float *)(lVar12 + 0x40) = fVar18 * ((float)dVar24 * 24.0 + 46.0);
            *(float *)(lVar12 + 0x44) = fVar18 * ((float)dVar25 * 60.0 + 150.0);
            *(float *)(lVar12 + 0x48) = fVar32;
            *(ulong *)(lVar12 + 0x28) =
                 CONCAT44(param_4 * (0.5 - (float)((ulong)uVar13 >> 0x20)) +
                          ((float)dVar27 * (float)((ulong)uVar5 >> 0x20) +
                          (float)((ulong)uVar4 >> 0x20)) * fVar18,
                          param_3 * ((float)uVar13 + -0.5) +
                          ((float)dVar23 * (float)uVar5 + (float)uVar4) * fVar18);
            *(ulong *)(lVar12 + 0x30) =
                 CONCAT44(((float)((ulong)uVar37 >> 0x20) +
                          (float)dVar29 * (float)((ulong)uVar6 >> 0x20) + (float)uVar9) * fVar18,
                          ((float)uVar37 + (float)dVar28 * (float)uVar6 + fVar41) * fVar18);
            thunk_FUN_02134474((long *)(lVar12 + 0x20),0);
            break;
          }
          lVar14 = lVar14 + 0x30;
          uVar15 = uVar15 + 1;
        } while ((ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) * 0x30 - lVar14 != 0);
      }
    }
    lVar12 = *(long *)(param_5 + 0x28);
    if (lVar12 != 0) {
      fVar19 = (float)expf(fVar17 * _UNK_00e20100);
      puVar7 = PTR_DAT_04cb7138;
      fVar41 = _UNK_00e2068c;
      fVar32 = _UNK_00e20328;
      uVar9 = 0;
      lVar14 = 0x4c;
      do {
        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar9) {
          fVar32 = *(float *)(param_5 + 0x38);
          if (fVar32 < *(float *)(param_5 + 0x40)) goto LAB_023df828;
          plVar10 = *(long **)(param_5 + 0x48);
          if (plVar10 != (long *)0x0) {
            dVar23 = (double)(**(code **)(*plVar10 + 0x1b8))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            lVar12 = *(long *)(param_5 + 0x30);
            *(float *)(param_5 + 0x40) = fVar32 + (float)dVar23 * 0.5 + _UNK_00e20590;
            if (lVar12 != 0) {
              uVar8 = (uint)*(ulong *)(lVar12 + 0x18);
              if ((int)uVar8 < 1) goto LAB_023df828;
              uVar15 = 0;
              lVar14 = 0;
              goto LAB_023df628;
            }
          }
          break;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_023df9ac;
        puVar2 = (undefined4 *)(lVar12 + lVar14);
        fVar39 = (float)puVar2[-4];
        if ((float)puVar2[-5] < fVar39) {
          plVar10 = *(long **)(puVar2 + -0xb);
          fVar40 = fVar17 + (float)puVar2[-5];
          fVar20 = fVar40 / fVar39;
          fVar33 = 1.0;
          if (fVar20 <= 1.0) {
            fVar33 = fVar20;
          }
          fVar36 = 0.0;
          if (0.0 <= fVar20) {
            fVar36 = fVar33;
          }
          if (plVar10 == (long *)0x0) break;
          fVar20 = (float)puVar2[-3];
          fVar42 = (float)puVar2[-2];
          fVar33 = (float)puVar2[-1];
          uVar3 = *puVar2;
          uVar37 = *(undefined8 *)(puVar2 + -7);
          uVar13 = *(undefined8 *)(puVar2 + -9);
          lVar12 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar10,0);
          if (lVar12 == 0) break;
          fVar35 = (float)uVar37;
          fVar38 = (float)((ulong)uVar37 >> 0x20);
          fVar31 = fVar38 * fVar17 + (float)((ulong)uVar13 >> 0x20);
          uVar13 = CONCAT44(fVar31,fVar35 * fVar17 + (float)uVar13);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar13,fVar31,lVar12,0);
          fVar34 = 1.0 - fVar36;
          fVar21 = 1.0 - fVar34 * fVar34;
          fVar31 = 1.0;
          if (fVar21 <= 1.0) {
            fVar31 = fVar21;
          }
          fVar22 = 0.0;
          if (0.0 <= fVar21) {
            fVar22 = fVar31;
          }
          UnityEngine_RectTransform__set_sizeDelta_43cfa70
                    ((fVar20 + (fVar42 - fVar20) * fVar22) * fVar41,lVar12,0);
          lVar12 = *(long *)puVar7;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar12 = *(long *)puVar7;
          }
          lVar12 = *(long *)(lVar12 + 0xb8);
          fVar31 = 1.0;
          if (fVar36 / fVar32 <= 1.0) {
            fVar31 = fVar36 / fVar32;
          }
          (**(code **)(*plVar10 + 0x2a8))
                    (*(undefined4 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x24),
                     *(undefined4 *)(lVar12 + 0x28),fVar34 * fVar34 * fVar33 * fVar31,plVar10,
                     *(undefined8 *)(*plVar10 + 0x2b0));
          if (fVar39 <= fVar40) {
            lVar12 = UnityEngine_Component__get_gameObject_43bcde8(plVar10,0);
            if (lVar12 == 0) break;
            UnityEngine_GameObject__SetActive_43c1408(lVar12,0,0);
          }
          lVar12 = *(long *)(param_5 + 0x28);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_023df9ac;
          puVar2 = (undefined4 *)(lVar12 + lVar14);
          puVar2[-5] = fVar40;
          puVar2[-4] = fVar39;
          *(undefined8 *)(puVar2 + -9) = uVar13;
          puVar2[-3] = fVar20;
          puVar2[-2] = fVar42;
          puVar2[-1] = fVar33;
          *puVar2 = uVar3;
          *(ulong *)(puVar2 + -7) = CONCAT44(fVar38 * fVar19,fVar35 * fVar19);
          *(long **)(puVar2 + -0xb) = plVar10;
          thunk_FUN_02134474(puVar2 + -0xb,0);
          lVar12 = *(long *)(param_5 + 0x28);
        }
        uVar9 = uVar9 + 1;
        lVar14 = lVar14 + 0x30;
      } while (lVar12 != 0);
    }
  }
  goto LAB_023df9a8;
  while( true ) {
    lVar14 = lVar14 + 0x20;
    uVar15 = uVar15 + 1;
    if ((ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) * 0x20 - lVar14 == 0) break;
LAB_023df628:
    if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) * 0x20 - lVar14 == 0) goto LAB_023df9ac;
    pfVar1 = (float *)(lVar12 + 0x30 + lVar14);
    if (pfVar1[1] <= *pfVar1) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar10 = *(long **)(param_5 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_023df9a8;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
      dVar23 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (lVar12 == 0) goto LAB_023df9a8;
      if (*(uint *)(lVar12 + 0x18) <= (uint)(_UNK_00e6a630 <= dVar23)) goto LAB_023df9ac;
      lVar11 = *(long *)(param_5 + 0x30);
      if (lVar11 == 0) goto LAB_023df9a8;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_023df9ac;
      plVar10 = *(long **)(param_5 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_023df9a8;
      lVar12 = lVar12 + (ulong)(_UNK_00e6a630 <= dVar23) * 0x10;
      lVar11 = *(long *)(lVar11 + lVar14 + 0x20);
      uVar13 = *(undefined8 *)(lVar12 + 0x20);
      uVar37 = *(undefined8 *)(lVar12 + 0x28);
      dVar23 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      plVar10 = *(long **)(param_5 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_023df9a8;
      dVar27 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      plVar10 = *(long **)(param_5 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_023df9a8;
      dVar28 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      plVar10 = *(long **)(param_5 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_023df9a8;
      dVar29 = (double)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      plVar10 = *(long **)(param_5 + 0x48);
      if (((plVar10 == (long *)0x0) ||
          (dVar30 = (double)(**(code **)(*plVar10 + 0x1b8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1c0)), lVar11 == 0)) ||
         (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0), lVar12 == 0))
      goto LAB_023df9a8;
      UnityEngine_GameObject__SetActive_43c1408(lVar12,1,0);
      lVar12 = *(long *)(param_5 + 0x30);
      if (lVar12 == 0) goto LAB_023df9a8;
      if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_023df9ac;
      fVar41 = (float)uVar13;
      fVar19 = (float)((ulong)uVar13 >> 0x20);
      lVar12 = lVar12 + lVar14;
      *(long *)(lVar12 + 0x20) = lVar11;
      *(undefined4 *)(lVar12 + 0x30) = 0;
      fVar32 = (float)dVar28 * _UNK_00e207cc + _UNK_00e2094c;
      *(ulong *)(lVar12 + 0x28) =
           CONCAT44(param_4 * (0.5 - (fVar19 + ((float)((ulong)uVar37 >> 0x20) - fVar19) *
                                               (float)dVar27)),
                    param_3 * (fVar41 + ((float)uVar37 - fVar41) * (float)dVar23 + -0.5));
      *(float *)(lVar12 + 0x34) = fVar32;
      *(float *)(lVar12 + 0x38) = fVar18 * ((float)dVar29 * 20.0 + 26.0);
      *(float *)(lVar12 + 0x3c) = (float)dVar30 * 60.0 + -30.0;
      thunk_FUN_02134474((long *)(lVar12 + 0x20),0);
      break;
    }
  }
LAB_023df828:
  puVar7 = PTR_DAT_04cacfc0;
  fVar32 = _UNK_00e20a74;
  fVar18 = _UNK_00e2082c;
  lVar12 = *(long *)(param_5 + 0x30);
  if (lVar12 != 0) {
    uVar9 = 0;
    lVar14 = 0x3c;
    do {
      if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar9) {
        return;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_023df9ac;
      pfVar1 = (float *)(lVar12 + lVar14);
      fVar41 = pfVar1[-2];
      if (pfVar1[-3] < fVar41) {
        lVar12 = *(long *)(pfVar1 + -7);
        fVar33 = fVar17 + pfVar1[-3];
        fVar39 = fVar33 / fVar41;
        fVar19 = 1.0;
        if (fVar39 <= 1.0) {
          fVar19 = fVar39;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar39) {
          fVar20 = fVar19;
        }
        if (lVar12 == 0) break;
        fVar19 = pfVar1[-1];
        fVar36 = *pfVar1;
        fVar39 = pfVar1[-5];
        fVar40 = pfVar1[-4];
        lVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar12,0);
        if (lVar11 == 0) break;
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar39,fVar40,lVar11,0);
        if (cRam0000000004f9b949 == '\0') {
          FUN_02132f7c(puVar7);
          cRam0000000004f9b949 = '\x01';
        }
        lVar16 = *(long *)(*(long *)puVar7 + 0xb8);
        fVar42 = (float)func_0x049b5320(fVar20 * fVar18);
        uVar13 = *(undefined8 *)(lVar16 + 8);
        fVar31 = (float)((ulong)uVar13 >> 0x20) * fVar19 * fVar42;
        UnityEngine_RectTransform__set_sizeDelta_43cfa70
                  (CONCAT44(fVar31,(float)uVar13 * fVar19 * fVar42),fVar31,lVar11,0);
        UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0,fVar36 * fVar20 * fVar32,0);
        UnityEngine_Transform__set_localRotation_43d156c(lVar11,0);
        if (fVar41 <= fVar33) {
          lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar12,0);
          if (lVar11 == 0) break;
          UnityEngine_GameObject__SetActive_43c1408(lVar11,0,0);
        }
        lVar11 = *(long *)(param_5 + 0x30);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) {
LAB_023df9ac:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        pfVar1 = (float *)(lVar11 + lVar14);
        pfVar1[-5] = fVar39;
        pfVar1[-4] = fVar40;
        pfVar1[-3] = fVar33;
        pfVar1[-2] = fVar41;
        pfVar1[-1] = fVar19;
        *pfVar1 = fVar36;
        *(long *)(pfVar1 + -7) = lVar12;
        thunk_FUN_02134474(pfVar1 + -7,0);
        lVar12 = *(long *)(param_5 + 0x30);
      }
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar12 != 0);
  }
LAB_023df9a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

