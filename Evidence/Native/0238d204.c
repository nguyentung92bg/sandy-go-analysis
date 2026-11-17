/* IL2CPP: Dino.BusSand.App.UI.KitFullScreen$$LateUpdate
void Dino_BusSand_App_UI_KitFullScreen__LateUpdate (Dino_BusSand_App_UI_KitFullScreen_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitFullScreen$$LateUpdate
   void Dino_BusSand_App_UI_KitFullScreen__LateUpdate (Dino_BusSand_App_UI_KitFullScreen_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_KitFullScreen__LateUpdate_228d204
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ushort uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((bRam0000000004f9c1a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9c1a0 = 1;
  }
  lVar7 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
  puVar5 = PTR_DAT_04cabdb0;
  puVar4 = PTR_DAT_04ca9ae8;
  if (lVar7 != 0) {
    plVar8 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar7,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != *(long *)puVar5) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
    if ((((uVar9 & 1) != 0) || (iVar6 = UnityEngine_Screen__get_width_436a6a0(0), iVar6 < 1)) ||
       (iVar6 = UnityEngine_Screen__get_height_436a6c8(0), iVar6 < 1)) {
      return;
    }
    if (plVar8 != (long *)0x0) {
      UnityEngine_RectTransform__get_rect_43cf450(plVar8,0);
      puVar4 = PTR_DAT_04cafcc0;
      fVar14 = param_3;
      fVar15 = param_4;
      if (*(int *)(*(long *)PTR_DAT_04cafcc0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar16 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
      uVar9 = *(ulong *)(param_5 + 0x20);
      uVar10 = NEON_uminv(CONCAT26(-(ushort)((short)((ushort)(fVar15 ==
                                                             (float)((ulong)*(undefined8 *)
                                                                             (param_5 + 0x28) >>
                                                                    0x20)) * -0x8000) < 0),
                                   CONCAT24(-(ushort)((short)((ushort)(fVar14 ==
                                                                      (float)*(undefined8 *)
                                                                              (param_5 + 0x28)) *
                                                             -0x8000) < 0),
                                            CONCAT22(-(ushort)((short)((ushort)(param_2 ==
                                                                               (float)(uVar9 >> 0x20
                                                                                      )) * -0x8000)
                                                              < 0),
                                                     -(ushort)((short)((ushort)(fVar16 ==
                                                                               (float)uVar9) *
                                                                      -0x8000) < 0)))),2);
      if (((uVar10 & 1) != 0) &&
         (fVar16 = param_3 - *(float *)(param_5 + 0x30),
         fVar11 = param_4 - *(float *)(param_5 + 0x34), uVar9 = (ulong)(uint)_UNK_00e1fea0,
         fVar16 * fVar16 + fVar11 * fVar11 < _UNK_00e1fea0)) {
        return;
      }
      uVar12 = (undefined4)uVar9;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
      *(undefined4 *)(param_5 + 0x20) = uVar1;
      *(undefined4 *)(param_5 + 0x24) = uVar12;
      *(float *)(param_5 + 0x28) = fVar14;
      *(float *)(param_5 + 0x2c) = fVar15;
      *(float *)(param_5 + 0x30) = param_3;
      *(float *)(param_5 + 0x34) = param_4;
      fVar16 = 1.0;
      if (1.0 <= fVar14) {
        fVar16 = fVar14;
      }
      fVar14 = 1.0;
      if (1.0 <= fVar15) {
        fVar14 = fVar15;
      }
      plVar8 = (long *)UnityEngine_Component__get_transform_43bcd18(param_5,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar8);
      }
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar4 = PTR_DAT_04cacfc0;
      if (plVar8 != (long *)0x0) {
        UnityEngine_RectTransform__set_anchorMin_43cf5e4
                  ((short)**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar8,0);
        if (cRam0000000004f9b949 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b949 = '\x01';
        }
        UnityEngine_RectTransform__set_anchorMax_43cf768
                  ((short)*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),
                   *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc),plVar8,0);
        UnityEngine_RectTransform__set_offsetMin_43cfe84
                  (SUB42(-(*(float *)(param_5 + 0x20) * (param_3 / fVar16)),0),
                   -(*(float *)(param_5 + 0x24) * (param_4 / fVar14)),plVar8,0);
        iVar6 = UnityEngine_Screen__get_width_436a6a0(0);
        fVar11 = *(float *)(param_5 + 0x28);
        fVar13 = *(float *)(param_5 + 0x20);
        UnityEngine_Screen__get_height_436a6c8(0);
        fVar14 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar8,0);
        fVar15 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar8);
        if (cRam0000000004f9b949 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b949 = '\x01';
        }
        fVar17 = *(float *)(*(long *)(*(long *)PTR_DAT_04cacfc0 + 0xb8) + 8);
        fVar2 = (float)UnityEngine_RectTransform__get_pivot_43cfb30(plVar8);
        fVar3 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar8);
        UnityEngine_RectTransform__set_sizeDelta_43cfa70
                  (SUB42(fVar3 + ((param_3 / fVar16) * ((float)iVar6 - (fVar11 + fVar13)) -
                                 (fVar14 + fVar15 * (fVar17 - fVar2))),0),plVar8);
        UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar8);
        UnityEngine_RectTransform__get_pivot_43cfb30(plVar8);
        if ((bRam0000000004fa8a88 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7bc8);
          bRam0000000004fa8a88 = 1;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar7 = plVar8[2];
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8ad0 == (code *)0x0) {
          pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
        }
        (*pcRam0000000004fa8ad0)(lVar7,&stack0xffffffffffffffe8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

