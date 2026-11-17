/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$Build
Dino_BusSand_App_UI_HomeBeach_o* Dino_BusSand_App_UI_HomeBeach__Build (UnityEngine_RectTransform_o* picture, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$Build
   Dino_BusSand_App_UI_HomeBeach_o* Dino_BusSand_App_UI_HomeBeach__Build
   (UnityEngine_RectTransform_o* picture, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeBeach__Build_22dea44(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_b4;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_74;
  
  puVar6 = PTR_DAT_04cb7138;
  if ((bRam0000000004f9c3ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7140);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb7138);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf2c0);
    FUN_02132f7c(PTR_DAT_04cb7148);
    FUN_02132f7c(PTR_DAT_04cb7150);
    FUN_02132f7c(PTR_DAT_04cb7058);
    bRam0000000004f9c3ff = 1;
  }
  lVar10 = *(long *)puVar6;
  uStack_74 = 0;
  uStack_b4 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar6;
  }
  if (**(char **)(lVar10 + 0xb8) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    puVar6 = PTR_DAT_04cad330;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar10 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                         (0,0,0,0,param_1,*(undefined8 *)PTR_DAT_04cb7150,0);
      if (lVar10 != 0) {
        UnityEngine_Transform__SetSiblingIndex_43d4730(lVar10,0,0);
        lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
        if ((lVar12 != 0) &&
           (lVar12 = UnityEngine_GameObject__AddComponent_object__275a54c
                               (lVar12,*(undefined8 *)PTR_DAT_04cb7140), lVar12 != 0)) {
          *(long *)(lVar12 + 0x20) = lVar10;
          thunk_FUN_02134474((long *)(lVar12 + 0x20),lVar10);
          puVar8 = PTR_DAT_04cb7148;
          puVar7 = PTR_DAT_04caf2c0;
          uVar5 = _UNK_00e698b8;
          lVar16 = *(long *)(lVar12 + 0x28);
          uStack_74 = 0;
          uVar1 = _UNK_00e20180;
          uVar2 = _UNK_00e2038c;
          puVar3 = (undefined8 *)PTR_DAT_04cacf98;
          puVar4 = (undefined8 *)PTR_DAT_04cb7058;
          while (_UNK_00e20180 = uVar1, _UNK_00e2038c = uVar2,
                PTR_DAT_04cacf98 = (undefined *)puVar3, PTR_DAT_04cb7058 = (undefined *)puVar4,
                lVar16 != 0) {
            if (*(int *)(lVar16 + 0x18) <= (int)uStack_74) {
              lVar16 = *(long *)(lVar12 + 0x30);
              uStack_b4 = 0;
              goto joined_r0x023ded7c;
            }
            uVar13 = System_Int32__ToString_482d750(&uStack_74,0);
            uVar13 = System_String__Concat_46c82e0(*(undefined8 *)puVar8,uVar13,0);
            lVar16 = *(long *)puVar6;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar16);
            }
            plVar14 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                        (0x42c80000,0x42c80000,0,0,0x3f800000,lVar10,uVar13,
                                         *(undefined8 *)puVar7,0,0);
            if (plVar14 == (long *)0x0) break;
            (**(code **)(*plVar14 + 0x2c8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
            UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar14,0,0);
            lVar16 = UnityEngine_Component__get_gameObject_43bcde8(plVar14,0);
            if (lVar16 == 0) break;
            UnityEngine_GameObject__SetActive_43c1408(lVar16,0,0);
            uVar9 = uStack_74;
            lVar16 = *(long *)(lVar12 + 0x28);
            uStack_a8 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            plStack_b0 = plVar14;
            thunk_FUN_02134474(&plStack_b0,plVar14);
            uStack_98 = uVar5;
            if (lVar16 == 0) break;
            if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_023def08;
            lVar16 = lVar16 + (long)(int)uVar9 * 0x30;
            *(undefined8 *)(lVar16 + 0x38) = uVar5;
            *(undefined8 *)(lVar16 + 0x30) = uStack_a0;
            *(undefined8 *)(lVar16 + 0x48) = uStack_88;
            *(undefined8 *)(lVar16 + 0x40) = uStack_90;
            *(undefined8 *)(lVar16 + 0x28) = uStack_a8;
            *(long **)(lVar16 + 0x20) = plStack_b0;
            thunk_FUN_02134474(lVar16 + 0x20,0);
            uStack_74 = uStack_74 + 1;
            uVar1 = _UNK_00e20180;
            uVar2 = _UNK_00e2038c;
            puVar3 = (undefined8 *)PTR_DAT_04cacf98;
            puVar4 = (undefined8 *)PTR_DAT_04cb7058;
            lVar16 = *(long *)(lVar12 + 0x28);
          }
        }
      }
LAB_023def04:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
joined_r0x023ded7c:
  if (lVar16 == 0) goto LAB_023def04;
  if (*(int *)(lVar16 + 0x18) <= (int)uStack_b4) {
    return lVar12;
  }
  uVar13 = System_Int32__ToString_482d750(&uStack_b4,0);
  uVar13 = System_String__Concat_46c82e0(*puVar4,uVar13,0);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar16);
  }
  lVar16 = Dino_BusSand_App_UI_UiKit__Node_22818c4(0x42200000,0x42200000,0,0,lVar10,uVar13,0,0,0);
  if ((lVar16 == 0) ||
     (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0), lVar15 == 0))
  goto LAB_023def04;
  plVar14 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c(lVar15,*puVar3);
  uVar13 = Dino_BusSand_App_UI_AtelierArt__get_Twinkle_22da158();
  if (plVar14 == (long *)0x0) goto LAB_023def04;
  UnityEngine_UI_Image__set_sprite_44a7258(plVar14,uVar13,0);
  (**(code **)(*plVar14 + 0x2c8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
  (**(code **)(*plVar14 + 0x2a8))
            (0x3f800000,0x3f800000,uVar2,uVar1,plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
  lVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar16,0);
  if (lVar16 == 0) goto LAB_023def04;
  UnityEngine_GameObject__SetActive_43c1408(lVar16,0,0);
  uVar9 = uStack_b4;
  lVar16 = *(long *)(lVar12 + 0x30);
  lVar15 = (long)(int)uStack_b4;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  plStack_e0 = plVar14;
  thunk_FUN_02134474(&plStack_e0,plVar14);
  uStack_d0 = uVar5;
  if (lVar16 == 0) goto LAB_023def04;
  if (*(uint *)(lVar16 + 0x18) <= uVar9) {
LAB_023def08:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  lVar16 = lVar16 + lVar15 * 0x20;
  *(undefined8 *)(lVar16 + 0x28) = uStack_d8;
  *(long **)(lVar16 + 0x20) = plStack_e0;
  *(undefined8 *)(lVar16 + 0x38) = uStack_c8;
  *(undefined8 *)(lVar16 + 0x30) = uVar5;
  thunk_FUN_02134474(lVar16 + 0x20,0);
  lVar16 = *(long *)(lVar12 + 0x30);
  uStack_b4 = uStack_b4 + 1;
  goto joined_r0x023ded7c;
}

