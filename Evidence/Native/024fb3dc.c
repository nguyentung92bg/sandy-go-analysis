/* IL2CPP: Dino.BusSand.View.VehicleView$$SetColor
void Dino_BusSand_View_VehicleView__SetColor (Dino_BusSand_View_VehicleView_o* __this, uint8_t color, bool hidden, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$SetColor
   void Dino_BusSand_View_VehicleView__SetColor (Dino_BusSand_View_VehicleView_o* __this, uint8_t
   color, bool hidden, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetColor_23fb3dc(long param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  
  if (*(char *)(param_1 + 0xe1) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = param_2;
    *(byte *)(param_1 + 0x30) = param_3 & 1;
  }
  else {
    cVar3 = *(char *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x28) = param_2;
    *(byte *)(param_1 + 0x30) = param_3 & 1;
    if (cVar3 == '\0') {
      if ((param_3 & 1) != 0) goto LAB_024fb420;
      if (*(float *)(param_1 + 300) < 0.0) {
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
    }
    else if ((param_3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x128);
    }
    else {
LAB_024fb420:
      *(undefined8 *)(param_1 + 0x128) = _UNK_00e6a3b8;
    }
  }
  if ((bRam0000000004f9cadc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbdf18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cadc = 1;
  }
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      plVar16 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cbdf18,2);
      if (plVar16 == (long *)0x0) {
LAB_024f7228:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *(long *)(param_1 + 0x48);
      if ((lVar13 != 0) &&
         (lVar17 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0)) {
LAB_024f7230:
        uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar15,0);
      }
      if ((int)plVar16[3] == 0) {
LAB_024f722c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar16[4] = lVar13;
      thunk_FUN_02134474(plVar16 + 4,lVar13);
      lVar13 = *(long *)(param_1 + 0x50);
      if ((lVar13 != 0) &&
         (lVar17 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0))
      goto LAB_024f7230;
      if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_024f722c;
      plVar16[5] = lVar13;
      thunk_FUN_02134474(plVar16 + 5,lVar13);
      puVar7 = PTR_DAT_04cbc460;
      puVar6 = PTR_DAT_04cb6dd0;
      puVar5 = PTR_DAT_04ca9ae8;
      uVar9 = *(uint *)(plVar16 + 3);
      if (0 < (int)uVar9) {
        lVar13 = 0;
        do {
          if (uVar9 <= (uint)lVar13) goto LAB_024f722c;
          lVar17 = plVar16[lVar13 + 4];
          if (lVar17 == 0) goto LAB_024f7228;
          plVar14 = (long *)UnityEngine_Renderer__get_sharedMaterials_43743d0(lVar17,0);
          iVar1 = *(int *)(param_1 + 0x24);
          uVar15 = *(undefined8 *)(param_1 + 0x50);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar5);
          }
          uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar17,uVar15,0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar7);
          }
          uVar9 = iVar1 == 2 & uVar9;
          if (iVar1 == 1) {
            uVar9 = 1;
          }
          if (plVar14 == (long *)0x0) goto LAB_024f7228;
          if ((int)uVar9 < (int)plVar14[3]) {
            if (*(char *)(param_1 + 0x30) == '\0') {
              uVar2 = *(undefined1 *)(param_1 + 0x28);
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar10 = Dino_BusSand_View_MaterialLibrary__Body_23b975c(uVar2,0);
            }
            else {
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar10 = Dino_BusSand_View_MaterialLibrary__get_Hidden_23ba2d4(0);
            }
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0))
            goto LAB_024f7230;
            if (*(uint *)(plVar14 + 3) <= uVar9) goto LAB_024f722c;
            plVar14[(ulong)uVar9 + 4] = lVar10;
            thunk_FUN_02134474(plVar14 + (ulong)uVar9 + 4,lVar10);
          }
          UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar17,plVar14,0);
          uVar9 = *(uint *)(plVar16 + 3);
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar9);
      }
      lVar13 = *(long *)(param_1 + 0x58);
      uVar2 = *(undefined1 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = Dino_BusSand_View_MaterialLibrary__Pile_23ba3ec(uVar2,0);
      if (lVar13 == 0) goto LAB_024f7228;
      UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar13,uVar15,0);
    }
    else {
      Dino_BusSand_View_VehicleView__ApplyAuthoredMaterials_23f9e48(param_1);
    }
  }
  else {
    Dino_BusSand_View_VehicleView__ApplyPackColors_23f770c(param_1);
  }
  if ((bRam0000000004f9cadd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbaf58);
    FUN_02132f7c(PTR_DAT_04cacda8);
    bRam0000000004f9cadd = 1;
  }
  puVar5 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0x30) != '\0') {
      plVar16 = (long *)(param_1 + 0x80);
      lVar13 = *plVar16;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
      if ((uVar12 & 1) != 0) {
        lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
        UnityEngine_GameObject___ctor_43c20cc(lVar13,*(undefined8 *)PTR_DAT_04cbaf58,0);
        if ((lVar13 == 0) ||
           (lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0), lVar17 == 0))
        goto LAB_024fb3d8;
        UnityEngine_Transform__SetParent_43d1e34(lVar17,*(undefined8 *)(param_1 + 0x40),0,0);
        uVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                           (lVar13,*(undefined8 *)PTR_DAT_04cbc240);
        *(undefined8 *)(param_1 + 0x80) = uVar15;
        thunk_FUN_02134474(plVar16,uVar15);
        puVar6 = PTR_DAT_04cab208;
        if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar13 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        if (lVar13 == 0) goto LAB_024fb3d8;
        uVar15 = Dino_BusSand_GameAssets__get_font_237c424(lVar13,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar5);
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
        if ((uVar12 & 1) != 0) {
          lVar13 = *plVar16;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar17 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
          if ((lVar17 == 0) ||
             (uVar15 = Dino_BusSand_GameAssets__get_font_237c424(lVar17,0), lVar13 == 0))
          goto LAB_024fb3d8;
          TMPro_TMP_Text__set_font_42cb6ac(lVar13,uVar15,0);
        }
        plVar14 = (long *)*plVar16;
        if (plVar14 == (long *)0x0) goto LAB_024fb3d8;
        (**(code **)(*plVar14 + 0x518))
                  (plVar14,*(undefined8 *)PTR_DAT_04cacda8,*(undefined8 *)(*plVar14 + 0x520));
        if (*plVar16 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_fontSize_42cc224(0x41900000,*plVar16,0);
        if (*plVar16 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_alignment_42cc610(*plVar16,0x202,0);
        plVar14 = (long *)*plVar16;
        if (plVar14 == (long *)0x0) goto LAB_024fb3d8;
        (**(code **)(*plVar14 + 0x2a8))
                  (0x3f800000,_UNK_00e20180,0x3e800000,0x3f800000,plVar14,
                   *(undefined8 *)(*plVar14 + 0x2b0));
        fVar4 = _UNK_00e207cc;
        if (*plVar16 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_outlineWidth_42cc1c4(_UNK_00e207cc,*plVar16,0);
        if (*plVar16 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_outlineColor_42cc098(*plVar16,0xff501e28,0);
        if ((*plVar16 == 0) ||
           (lVar13 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar16,0), lVar13 == 0))
        goto LAB_024fb3d8;
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40800000,lVar13,0);
        if ((*plVar16 == 0) ||
           (lVar13 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar16,0), lVar13 == 0))
        goto LAB_024fb3d8;
        UnityEngine_Transform__set_localPosition_43cfda8
                  (0,*(float *)(param_1 + 0xb4) +
                     *(float *)(&UNK_00e6a400 + (ulong)(*(char *)(param_1 + 0xb8) == '\0') * 4),0,
                   lVar13,0);
        if (*(char *)(param_1 + 0xb8) != '\0') {
          if (*plVar16 == 0) goto LAB_024fb3d8;
          lVar13 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar16,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar13 == 0) goto LAB_024fb3d8;
          uVar15 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
          fVar18 = (float)((ulong)uVar15 >> 0x20) * 0.3;
          UnityEngine_Transform__set_localScale_43d1be0
                    (CONCAT44(fVar18,(float)uVar15 * 0.3),fVar18,
                     *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * fVar4,lVar13,0
                    );
        }
        if (*plVar16 == 0) goto LAB_024fb3d8;
        lVar13 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar16,0);
        UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20418,0,0,0);
        if (lVar13 == 0) goto LAB_024fb3d8;
        UnityEngine_Transform__set_localRotation_43d156c(lVar13,0);
        Dino_BusSand_Util__Outline_238dbd8(fVar4,0,*plVar16,0);
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar12 & 1) != 0) {
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar13 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
         lVar13 == 0)) goto LAB_024fb3d8;
      UnityEngine_GameObject__SetActive_43c1408(lVar13,*(undefined1 *)(param_1 + 0x30),0);
    }
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fb3d8;
    lVar13 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    if (*(char *)(param_1 + 0x30) != '\0') {
      bVar8 = false;
      if (lVar13 == 0) goto LAB_024fb3d8;
      goto LAB_024fafe8;
    }
    bVar8 = *(char *)(param_1 + 0x2dd) == '\0';
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x2c);
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fb3d8;
    lVar13 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    bVar8 = false;
    if ((uVar9 < 2) && (*(char *)(param_1 + 0x30) == '\0')) {
      bVar8 = *(char *)(param_1 + 0x2dd) == '\0';
    }
  }
  if (lVar13 != 0) {
LAB_024fafe8:
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,bVar8,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar17 = *(long *)(lVar13 + 0x10);
    if (lVar17 != 0) {
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar17,bVar8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar13,0);
  }
LAB_024fb3d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

