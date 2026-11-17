/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyHiddenMark
void Dino_BusSand_View_VehicleView__ApplyHiddenMark (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyHiddenMark
   void Dino_BusSand_View_VehicleView__ApplyHiddenMark (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__ApplyHiddenMark_23faf08(long param_1)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  
  if ((bRam0000000004f9cadd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbaf58);
    FUN_02132f7c(PTR_DAT_04cacda8);
    bRam0000000004f9cadd = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0x30) != '\0') {
      plVar10 = (long *)(param_1 + 0x80);
      lVar7 = *plVar10;
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
        UnityEngine_GameObject___ctor_43c20cc(lVar7,*(undefined8 *)PTR_DAT_04cbaf58,0);
        if ((lVar7 == 0) ||
           (lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar7,0), lVar11 == 0))
        goto LAB_024fb3d8;
        UnityEngine_Transform__SetParent_43d1e34(lVar11,*(undefined8 *)(param_1 + 0x40),0,0);
        uVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar7,*(undefined8 *)PTR_DAT_04cbc240);
        *(undefined8 *)(param_1 + 0x80) = uVar9;
        thunk_FUN_02134474(plVar10,uVar9);
        puVar4 = PTR_DAT_04cab208;
        if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        if (lVar7 == 0) goto LAB_024fb3d8;
        uVar9 = Dino_BusSand_GameAssets__get_font_237c424(lVar7,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        if ((uVar6 & 1) != 0) {
          lVar7 = *plVar10;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar11 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
          if ((lVar11 == 0) ||
             (uVar9 = Dino_BusSand_GameAssets__get_font_237c424(lVar11,0), lVar7 == 0))
          goto LAB_024fb3d8;
          TMPro_TMP_Text__set_font_42cb6ac(lVar7,uVar9,0);
        }
        plVar8 = (long *)*plVar10;
        if (plVar8 == (long *)0x0) goto LAB_024fb3d8;
        (**(code **)(*plVar8 + 0x518))
                  (plVar8,*(undefined8 *)PTR_DAT_04cacda8,*(undefined8 *)(*plVar8 + 0x520));
        if (*plVar10 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_fontSize_42cc224(0x41900000,*plVar10,0);
        if (*plVar10 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_alignment_42cc610(*plVar10,0x202,0);
        plVar8 = (long *)*plVar10;
        if (plVar8 == (long *)0x0) goto LAB_024fb3d8;
        (**(code **)(*plVar8 + 0x2a8))
                  (0x3f800000,_UNK_00e20180,0x3e800000,0x3f800000,plVar8,
                   *(undefined8 *)(*plVar8 + 0x2b0));
        fVar2 = _UNK_00e207cc;
        if (*plVar10 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_outlineWidth_42cc1c4(_UNK_00e207cc,*plVar10,0);
        if (*plVar10 == 0) goto LAB_024fb3d8;
        TMPro_TMP_Text__set_outlineColor_42cc098(*plVar10,0xff501e28,0);
        if ((*plVar10 == 0) ||
           (lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar10,0), lVar7 == 0))
        goto LAB_024fb3d8;
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40800000,lVar7,0);
        if ((*plVar10 == 0) ||
           (lVar7 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar10,0), lVar7 == 0))
        goto LAB_024fb3d8;
        UnityEngine_Transform__set_localPosition_43cfda8
                  (0,*(float *)(param_1 + 0xb4) +
                     *(float *)(&UNK_00e6a400 + (ulong)(*(char *)(param_1 + 0xb8) == '\0') * 4),0,
                   lVar7,0);
        if (*(char *)(param_1 + 0xb8) != '\0') {
          if (*plVar10 == 0) goto LAB_024fb3d8;
          lVar7 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar10,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar7 == 0) goto LAB_024fb3d8;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
          fVar12 = (float)((ulong)uVar9 >> 0x20) * 0.3;
          UnityEngine_Transform__set_localScale_43d1be0
                    (CONCAT44(fVar12,(float)uVar9 * 0.3),fVar12,
                     *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * fVar2,lVar7,0)
          ;
        }
        if (*plVar10 == 0) goto LAB_024fb3d8;
        lVar7 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar10,0);
        UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20418,0,0,0);
        if (lVar7 == 0) goto LAB_024fb3d8;
        UnityEngine_Transform__set_localRotation_43d156c(lVar7,0);
        Dino_BusSand_Util__Outline_238dbd8(fVar2,0,*plVar10,0);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
         lVar7 == 0)) goto LAB_024fb3d8;
      UnityEngine_GameObject__SetActive_43c1408(lVar7,*(undefined1 *)(param_1 + 0x30),0);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fb3d8;
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    if (*(char *)(param_1 + 0x30) != '\0') {
      bVar5 = false;
      if (lVar7 == 0) goto LAB_024fb3d8;
      goto LAB_024fafe8;
    }
    bVar5 = *(char *)(param_1 + 0x2dd) == '\0';
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2c);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fb3d8;
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    bVar5 = false;
    if ((uVar1 < 2) && (*(char *)(param_1 + 0x30) == '\0')) {
      bVar5 = *(char *)(param_1 + 0x2dd) == '\0';
    }
  }
  if (lVar7 != 0) {
LAB_024fafe8:
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,bVar5,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
      }
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar11,bVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_024fb3d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

