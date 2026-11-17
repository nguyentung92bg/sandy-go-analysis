/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyBodyColor
void Dino_BusSand_View_VehicleView__ApplyBodyColor (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyBodyColor
   void Dino_BusSand_View_VehicleView__ApplyBodyColor (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  
                    /* try { // try from 024f6f84 to 025f6fa7 has its CatchHandler @ 024f6ff4 */
  if ((bRam0000000004f9cadc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbdf18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cadc = 1;
  }
                    /* try { // try from 024f6fc4 to 025f6fc7 has its CatchHandler @ 024f7190 */
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xb8) == '\0') {
                    /* try { // try from 024f6fec to 025f6fef has its CatchHandler @ 024f6ff8 */
                    /* try { // try from 024f6ff0 to 025f702b has its CatchHandler @ 024f6b04 */
                    /* catch() { ... } // from try @ 024f6f84 with catch @ 024f6ff4 */
                    /* catch() { ... } // from try @ 024f6fec with catch @ 024f6ff8 */
                    /* catch() { ... } // from try @ 024f6f10 with catch @ 024f6ffc */
      plVar15 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cbdf18,2);
                    /* catch() { ... } // from try @ 024f6f38 with catch @ 024f7000 */
      if (plVar15 == (long *)0x0) {
LAB_024f7228:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* catch() { ... } // from try @ 024f6f20 with catch @ 024f7004 */
      lVar12 = *(long *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 024f6fe4 with catch @ 024f7008 */
                    /* catch() { ... } // from try @ 024f6efc with catch @ 024f700c */
                    /* catch() { ... } // from try @ 024f6edc with catch @ 024f7010 */
                    /* catch() { ... } // from try @ 024f6ee4 with catch @ 024f7014 */
                    /* catch() { ... } // from try @ 024f6ec8 with catch @ 024f7018 */
      if ((lVar12 != 0) &&
         (lVar16 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar16 == 0)) {
LAB_024f7230:
        uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar14,0);
      }
      if ((int)plVar15[3] == 0) {
LAB_024f722c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* try { // try from 024f702c to 025f702f has its CatchHandler @ 024f7170 */
                    /* try { // try from 024f7030 to 025f7153 has its CatchHandler @ 024f6b04 */
      plVar15[4] = lVar12;
      thunk_FUN_02134474(plVar15 + 4,lVar12);
      lVar12 = *(long *)(param_1 + 0x50);
      if ((lVar12 != 0) &&
         (lVar16 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar16 == 0))
      goto LAB_024f7230;
      if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_024f722c;
      plVar15[5] = lVar12;
      thunk_FUN_02134474(plVar15 + 5,lVar12);
      puVar6 = PTR_DAT_04cbc460;
      puVar5 = PTR_DAT_04cb6dd0;
      puVar4 = PTR_DAT_04ca9ae8;
      uVar8 = *(uint *)(plVar15 + 3);
      if (0 < (int)uVar8) {
        lVar12 = 0;
        do {
          if (uVar8 <= (uint)lVar12) goto LAB_024f722c;
          lVar16 = plVar15[lVar12 + 4];
          if (lVar16 == 0) goto LAB_024f7228;
          plVar13 = (long *)UnityEngine_Renderer__get_sharedMaterials_43743d0(lVar16,0);
          iVar1 = *(int *)(param_1 + 0x24);
          uVar14 = *(undefined8 *)(param_1 + 0x50);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar16,uVar14,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar6);
          }
          uVar8 = iVar1 == 2 & uVar8;
          if (iVar1 == 1) {
            uVar8 = 1;
          }
          if (plVar13 == (long *)0x0) goto LAB_024f7228;
          if ((int)uVar8 < (int)plVar13[3]) {
            if (*(char *)(param_1 + 0x30) == '\0') {
                    /* try { // try from 024f7154 to 025f7157 has its CatchHandler @ 024f71e8 */
              uVar2 = *(undefined1 *)(param_1 + 0x28);
                    /* try { // try from 024f7158 to 025f715b has its CatchHandler @ 024f71e4 */
                    /* try { // try from 024f715c to 025f7163 has its CatchHandler @ 024f7198 */
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
                    /* try { // try from 024f7164 to 025f7167 has its CatchHandler @ 024f7184 */
                    /* try { // try from 024f7168 to 025f7177 has its CatchHandler @ 024f6b04 */
              lVar9 = Dino_BusSand_View_MaterialLibrary__Body_23b975c(uVar2,0);
            }
            else {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar9 = Dino_BusSand_View_MaterialLibrary__get_Hidden_23ba2d4(0);
            }
                    /* catch() { ... } // from try @ 024f702c with catch @ 024f7170 */
                    /* try { // try from 024f7178 to 025f717f has its CatchHandler @ 024f71dc */
                    /* try { // try from 024f7180 to 025f71bb has its CatchHandler @ 024f6b04 */
                    /* catch() { ... } // from try @ 024f7164 with catch @ 024f7184 */
                    /* catch() { ... } // from try @ 024f6e78 with catch @ 024f7188 */
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
            goto LAB_024f7230;
                    /* catch() { ... } // from try @ 024f6e5c with catch @ 024f718c */
                    /* catch() { ... } // from try @ 024f6fc4 with catch @ 024f7190 */
                    /* catch() { ... } // from try @ 024f6ea0 with catch @ 024f7194 */
            if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_024f722c;
                    /* catch() { ... } // from try @ 024f715c with catch @ 024f7198 */
            plVar13[(ulong)uVar8 + 4] = lVar9;
            thunk_FUN_02134474(plVar13 + (ulong)uVar8 + 4,lVar9);
          }
          UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar16,plVar13,0);
          uVar8 = *(uint *)(plVar15 + 3);
                    /* try { // try from 024f71bc to 025f71bf has its CatchHandler @ 024f71c8 */
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < (int)uVar8);
      }
                    /* catch() { ... } // from try @ 024f71bc with catch @ 024f71c8 */
                    /* try { // try from 024f71cc to 025f71d3 has its CatchHandler @ 024f71dc */
      lVar12 = *(long *)(param_1 + 0x58);
                    /* try { // try from 024f71d4 to 025f71f3 has its CatchHandler @ 024f6b04 */
      uVar2 = *(undefined1 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 024f7178 with catch @ 024f71dc
                       catch() { ... } // from try @ 024f71cc with catch @ 024f71dc */
                    /* catch() { ... } // from try @ 024f6e54 with catch @ 024f71e0 */
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024f7158 with catch @ 024f71e4 */
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 024f7154 with catch @ 024f71e8 */
                    /* catch() { ... } // from try @ 024f6e20 with catch @ 024f71ec */
                    /* catch() { ... } // from try @ 024f6db4 with catch @ 024f71f0 */
      uVar14 = Dino_BusSand_View_MaterialLibrary__Pile_23ba3ec(uVar2,0);
      if (lVar12 == 0) goto LAB_024f7228;
      UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar12,uVar14,0);
    }
    else {
                    /* try { // try from 024f6fe4 to 025f6fe7 has its CatchHandler @ 024f7008 */
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
  puVar4 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0x30) != '\0') {
      plVar15 = (long *)(param_1 + 0x80);
      lVar12 = *plVar15;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
      if ((uVar11 & 1) != 0) {
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
        UnityEngine_GameObject___ctor_43c20cc(lVar12,*(undefined8 *)PTR_DAT_04cbaf58,0);
        if ((lVar12 == 0) ||
           (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0), lVar16 == 0))
        goto LAB_024fb3d8;
        UnityEngine_Transform__SetParent_43d1e34(lVar16,*(undefined8 *)(param_1 + 0x40),0,0);
        uVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                           (lVar12,*(undefined8 *)PTR_DAT_04cbc240);
        *(undefined8 *)(param_1 + 0x80) = uVar14;
        thunk_FUN_02134474(plVar15,uVar14);
        puVar5 = PTR_DAT_04cab208;
        if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar12 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        if (lVar12 == 0) goto LAB_024fb3d8;
        uVar14 = Dino_BusSand_GameAssets__get_font_237c424(lVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
        if ((uVar11 & 1) != 0) {
          lVar12 = *plVar15;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar16 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
          if ((lVar16 == 0) ||
             (uVar14 = Dino_BusSand_GameAssets__get_font_237c424(lVar16,0), lVar12 == 0))
          goto LAB_024fb3d8;
          TMPro_TMP_Text__set_font_42cb6ac(lVar12,uVar14,0);
        }
        plVar13 = (long *)*plVar15;
        if (plVar13 == (long *)0x0) goto LAB_024fb3d8;
        (**(code **)(*plVar13 + 0x518))
                  (plVar13,*(undefined8 *)PTR_DAT_04cacda8,*(undefined8 *)(*plVar13 + 0x520));
        if (*plVar15 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_fontSize_42cc224(0x41900000,*plVar15,0);
        if (*plVar15 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_alignment_42cc610(*plVar15,0x202,0);
        plVar13 = (long *)*plVar15;
        if (plVar13 == (long *)0x0) goto LAB_024fb3d8;
        (**(code **)(*plVar13 + 0x2a8))
                  (0x3f800000,_UNK_00e20180,0x3e800000,0x3f800000,plVar13,
                   *(undefined8 *)(*plVar13 + 0x2b0));
        fVar3 = _UNK_00e207cc;
        if (*plVar15 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_outlineWidth_42cc1c4(_UNK_00e207cc,*plVar15,0);
        if (*plVar15 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_outlineColor_42cc098(*plVar15,0xff501e28,0);
        if ((*plVar15 == 0) ||
           (lVar12 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar15,0), lVar12 == 0))
        goto LAB_024fb3d8;
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40800000,lVar12,0);
        if ((*plVar15 == 0) ||
           (lVar12 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar15,0), lVar12 == 0))
        goto LAB_024fb3d8;
        UnityEngine_Transform__set_localPosition_43cfda8
                  (0,*(float *)(param_1 + 0xb4) +
                     *(float *)(&UNK_00e6a400 + (ulong)(*(char *)(param_1 + 0xb8) == '\0') * 4),0,
                   lVar12,0);
        if (*(char *)(param_1 + 0xb8) != '\0') {
          if (*plVar15 == 0) goto LAB_024fb3d8;
          lVar12 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar15,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar12 == 0) goto LAB_024fb3d8;
          uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
          fVar17 = (float)((ulong)uVar14 >> 0x20) * 0.3;
          UnityEngine_Transform__set_localScale_43d1be0
                    (CONCAT44(fVar17,(float)uVar14 * 0.3),fVar17,
                     *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * fVar3,lVar12,0
                    );
        }
        if (*plVar15 == 0) goto LAB_024fb3d8;
        lVar12 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar15,0);
        UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20418,0,0,0);
        if (lVar12 == 0) goto LAB_024fb3d8;
        UnityEngine_Transform__set_localRotation_43d156c(lVar12,0);
        Dino_BusSand_Util__Outline_238dbd8(fVar3,0,*plVar15,0);
      }
    }
    uVar14 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
         lVar12 == 0)) goto LAB_024fb3d8;
      UnityEngine_GameObject__SetActive_43c1408(lVar12,*(undefined1 *)(param_1 + 0x30),0);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fb3d8;
    lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    if (*(char *)(param_1 + 0x30) != '\0') {
      bVar7 = false;
      if (lVar12 == 0) goto LAB_024fb3d8;
      goto LAB_024fafe8;
    }
    bVar7 = *(char *)(param_1 + 0x2dd) == '\0';
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x2c);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fb3d8;
    lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    bVar7 = false;
    if ((uVar8 < 2) && (*(char *)(param_1 + 0x30) == '\0')) {
      bVar7 = *(char *)(param_1 + 0x2dd) == '\0';
    }
  }
  if (lVar12 != 0) {
LAB_024fafe8:
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,bVar7,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar12 != 0) {
      lVar16 = *(long *)(lVar12 + 0x10);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar12,0);
      }
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar16,bVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_024fb3d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

