/* IL2CPP: Dino.BusSand.View.GarageView$$Build
void Dino_BusSand_View_GarageView__Build (Dino_BusSand_View_GarageView_o* __this, Dino_BusSand_Core_Garage_o* g, Dino_BusSand_View_StageLayout_o* L, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$Build
   void Dino_BusSand_View_GarageView__Build (Dino_BusSand_View_GarageView_o* __this,
   Dino_BusSand_Core_Garage_o* g, Dino_BusSand_View_StageLayout_o* L, const MethodInfo* method); */

void Dino_BusSand_View_GarageView__Build_23afe4c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9c96c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbc7f8);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc800);
    FUN_02132f7c(PTR_DAT_04cb6238);
    FUN_02132f7c(PTR_DAT_04cbc808);
    FUN_02132f7c(PTR_DAT_04cbc810);
    FUN_02132f7c(PTR_DAT_04cb4db8);
    FUN_02132f7c(PTR_DAT_04cbc818);
    FUN_02132f7c(PTR_DAT_04cbc820);
    FUN_02132f7c(PTR_DAT_04cbc828);
    FUN_02132f7c(PTR_DAT_04cbc830);
    FUN_02132f7c(PTR_DAT_04cbc838);
    FUN_02132f7c(PTR_DAT_04cbc840);
    bRam0000000004f9c96c = 1;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
    if (param_3 != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0xfc);
      lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                (*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),param_3,0);
      puVar2 = PTR_DAT_04cbc250;
      if (lVar5 != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8(lVar5,0);
        lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        uVar4 = *(undefined4 *)(param_2 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        Dino_BusSand_View_StageLayout__YardRotation_23e8950(uVar4,0);
        puVar3 = PTR_DAT_04cb4db8;
        puVar2 = PTR_DAT_04caa070;
        if (lVar5 != 0) {
          UnityEngine_Transform__set_localRotation_43d156c(lVar5,0);
          lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
          if (lVar5 != 0) {
            lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
            plVar11 = (long *)(param_1 + 0x28);
            *plVar11 = lVar5;
            thunk_FUN_02134474(plVar11,lVar5);
            lVar5 = *plVar11;
            uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
            if (lVar5 != 0) {
              UnityEngine_Transform__SetParent_43d1e34(lVar5,uVar6,0,0);
              lVar5 = *plVar11;
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65e = '\x01';
              }
              puVar3 = PTR_DAT_04caa208;
              if (lVar5 != 0) {
                fVar13 = *(float *)(param_1 + 0x40);
                lVar10 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
                UnityEngine_Transform__set_localScale_43d1be0
                          (fVar13 * *(float *)(lVar10 + 0xc),fVar13 * *(float *)(lVar10 + 0x10),
                           *(float *)(lVar10 + 0x14) * fVar13,lVar5,0);
                uVar7 = Dino_BusSand_View_GarageView__BuildArt_23b0638(param_1);
                if ((uVar7 & 1) == 0) {
                  Dino_BusSand_View_GarageView__EnsureMeshes_23b0cb4();
                  puVar1 = PTR_DAT_04cbc7f8;
                  uVar6 = **(undefined8 **)(*(long *)PTR_DAT_04cbc7f8 + 0xb8);
                  if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = _UNK_00e20a20;
                  uVar8 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                    (_UNK_00e20a20,_UNK_00e20808,_UNK_00e1fde8,0x3f800000,
                                     _UNK_00e20328,0,*(undefined8 *)PTR_DAT_04cbc818);
                  Dino_BusSand_View_GarageView__Part_23b0fd8
                            (param_1,*(undefined8 *)PTR_DAT_04cbc800,uVar6,uVar8,1);
                  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  uVar6 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                    (_UNK_00e207dc,_UNK_00e1ff28,uVar4,0x3f800000,_UNK_00e2094c,0,
                                     *(undefined8 *)PTR_DAT_04cbc820);
                  Dino_BusSand_View_GarageView__Part_23b0fd8
                            (param_1,*(undefined8 *)PTR_DAT_04cbc808,uVar8,uVar6,0);
                  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                  uVar6 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                    (_UNK_00e2043c,_UNK_00e20174,_UNK_00e20658,0x3f800000,
                                     *(undefined8 *)PTR_DAT_04cbc828,0,0,0);
                  lVar5 = Dino_BusSand_View_GarageView__Part_23b0fd8
                                    (param_1,*(undefined8 *)PTR_DAT_04cbc838,uVar8,uVar6,0);
                  if (lVar5 == 0) goto LAB_024b0634;
                  UnityEngine_Transform__set_localPosition_43cfda8(0,0,_UNK_00e20a44,lVar5,0);
                  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                  uVar6 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                    (_UNK_00e201f4,_UNK_00e205f0,_UNK_00e20004,0x3f800000,
                                     *(undefined8 *)PTR_DAT_04cbc810,0,0,0);
                  Dino_BusSand_View_GarageView__Part_23b0fd8
                            (param_1,*(undefined8 *)PTR_DAT_04cbc840,uVar8,uVar6,0);
                  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
                  uVar6 = Dino_BusSand_View_GarageView__StripeMaterial_23b1378();
                  lVar5 = Dino_BusSand_View_GarageView__Part_23b0fd8
                                    (param_1,*(undefined8 *)PTR_DAT_04cbc830,uVar8,uVar6,0);
                  if (lVar5 == 0) goto LAB_024b0634;
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (0,_UNK_00e20a48,_UNK_00e1ffa8,lVar5,0);
                  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)PTR_DAT_04cb6238,0);
                  if (lVar5 == 0) goto LAB_024b0634;
                  lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar5,*(undefined8 *)PTR_DAT_04cbc240);
                  plVar11 = (long *)(param_1 + 0x30);
                  *plVar11 = lVar5;
                  thunk_FUN_02134474(plVar11,lVar5);
                  if (*plVar11 == 0) goto LAB_024b0634;
                  lVar5 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar11,0);
                  plVar12 = (long *)(param_1 + 0x38);
                  *plVar12 = lVar5;
                  thunk_FUN_02134474(plVar12,lVar5);
                  lVar5 = *plVar12;
                  uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                  if (lVar5 == 0) goto LAB_024b0634;
                  UnityEngine_Transform__SetParent_43d1e34(lVar5,uVar6,0,0);
                  puVar2 = PTR_DAT_04cab208;
                  if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
                  puVar1 = PTR_DAT_04ca9ae8;
                  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                  }
                  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    lVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
                    if (lVar5 == 0) goto LAB_024b0634;
                    uVar6 = Dino_BusSand_GameAssets__get_font_237c424(lVar5,0);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar1);
                    }
                    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
                    if ((uVar7 & 1) != 0) {
                      lVar5 = *plVar11;
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar10 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
                      if ((lVar10 == 0) ||
                         (uVar6 = Dino_BusSand_GameAssets__get_font_237c424(lVar10,0), lVar5 == 0))
                      goto LAB_024b0634;
                      TMPro_TMP_Text__set_font_42cb6ac(lVar5,uVar6,0);
                    }
                  }
                  if (*plVar11 == 0) goto LAB_024b0634;
                  TMPro_TMP_Text__set_fontSize_42cc224(0x41800000,*plVar11,0);
                  if (*plVar11 == 0) goto LAB_024b0634;
                  TMPro_TMP_Text__set_alignment_42cc610(*plVar11,0x202,0);
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) goto LAB_024b0634;
                  (**(code **)(*plVar9 + 0x2a8))
                            (0x3f800000,_UNK_00e20180,0x3e800000,0x3f800000,plVar9,
                             *(undefined8 *)(*plVar9 + 0x2b0));
                  uVar4 = _UNK_00e207cc;
                  if (*plVar11 == 0) goto LAB_024b0634;
                  TMPro_TMP_Text__set_outlineWidth_42cc1c4(_UNK_00e207cc,*plVar11,0);
                  if (*plVar11 == 0) goto LAB_024b0634;
                  TMPro_TMP_Text__set_outlineColor_42cc098(*plVar11,0xff3d211a,0);
                  if ((*plVar11 == 0) ||
                     (lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar11,0), lVar5 == 0))
                  goto LAB_024b0634;
                  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40000000,lVar5,0);
                  Dino_BusSand_Util__Outline_238dbd8(uVar4,_UNK_00e2098c,*plVar11,0);
                  lVar5 = *plVar12;
                  if (cRam0000000004f9b65e == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9b65e = '\x01';
                  }
                  if (lVar5 == 0) goto LAB_024b0634;
                  fVar13 = *(float *)(param_1 + 0x40);
                  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
                  fVar14 = (float)((ulong)uVar6 >> 0x20) * fVar13 * 0.55;
                  UnityEngine_Transform__set_localScale_43d1be0
                            (CONCAT44(fVar14,(float)uVar6 * fVar13 * 0.55),fVar14,
                             *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) * fVar13 *
                             _UNK_00e208e8,lVar5,0);
                  if (*(long *)(param_1 + 0x38) == 0) goto LAB_024b0634;
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (0,*(float *)(param_1 + 0x40) * _UNK_00e205c8,0,
                             *(long *)(param_1 + 0x38),0);
                }
                uVar4 = Dino_BusSand_Core_Garage__get_Remaining_2423ac0(param_2,0);
                Dino_BusSand_View_GarageView__SetCount_23b0b90(param_1,uVar4);
                lVar5 = *(long *)(param_1 + 0x28);
                *(undefined4 *)(param_1 + 0x4c) = 0;
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65d = '\x01';
                }
                if (lVar5 != 0) {
                  if ((bRam0000000004fa8b3e & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7a00,0);
                    bRam0000000004fa8b3e = 1;
                  }
                  if (lVar5 != 0) {
                    lVar5 = *(long *)(lVar5 + 0x10);
                    if (lVar5 != 0) {
                      if (pcRam0000000004fa8bf0 == (code *)0x0) {
                        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                      }
                      (*pcRam0000000004fa8bf0)(lVar5,&stack0xffffffffffffffd4);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_024b0634:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

