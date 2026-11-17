/* IL2CPP: Dino.BusSand.View.GarageView$$BuildSignCount
void Dino_BusSand_View_GarageView__BuildSignCount (Dino_BusSand_View_GarageView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$BuildSignCount
   void Dino_BusSand_View_GarageView__BuildSignCount (Dino_BusSand_View_GarageView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GarageView__BuildSignCount_23b15b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04cb6238;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c970 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6238);
    bRam0000000004f9c970 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if (lVar3 != 0) {
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar3,*(undefined8 *)PTR_DAT_04cbc240);
    plVar9 = (long *)(param_1 + 0x30);
    *plVar9 = lVar3;
    thunk_FUN_02134474(plVar9,lVar3);
    if ((*plVar9 != 0) &&
       (lVar3 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar9,0), puVar2 = PTR_DAT_04cab208,
       puVar1 = PTR_DAT_04ca9ae8, lVar3 != 0)) {
      UnityEngine_Transform__SetParent_43d1e34(lVar3,*(undefined8 *)(param_1 + 0x50),0,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        if (lVar8 == 0) goto LAB_024b18d8;
        uVar4 = Dino_BusSand_GameAssets__get_font_237c424(lVar8,0);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = *plVar9;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
          if ((lVar6 == 0) ||
             (uVar4 = Dino_BusSand_GameAssets__get_font_237c424(lVar6,0), lVar8 == 0))
          goto LAB_024b18d8;
          TMPro_TMP_Text__set_font_42cb6ac(lVar8,uVar4,0);
        }
      }
      if (*plVar9 != 0) {
        TMPro_TMP_Text__set_fontSize_42cc224(0x41800000,*plVar9,0);
        if (*plVar9 != 0) {
          TMPro_TMP_Text__set_alignment_42cc610(*plVar9,0x202,0);
          plVar7 = (long *)*plVar9;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar7,
                       *(undefined8 *)(*plVar7 + 0x2b0));
            if (*plVar9 != 0) {
              TMPro_TMP_Text__set_outlineWidth_42cc1c4(0x3e800000,*plVar9,0);
              if (*plVar9 != 0) {
                TMPro_TMP_Text__set_outlineColor_42cc098(*plVar9,0xff3d211a,0);
                if ((*plVar9 != 0) &&
                   (lVar8 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar9,0), lVar8 != 0)) {
                  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40000000,lVar8,0);
                  Dino_BusSand_Util__Outline_238dbd8(0x3e800000,_UNK_00e207cc,*plVar9,0);
                  UnityEngine_Transform__set_localPosition_43cfda8
                            (0,_UNK_00e20324,_UNK_00e20844,lVar3,0);
                  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e2082c,0,0);
                  UnityEngine_Transform__set_localRotation_43d156c(lVar3,0);
                  if (cRam0000000004f9b65e == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9b65e = '\x01';
                  }
                  if ((bRam0000000004fa8b3e & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7a00,0);
                    bRam0000000004fa8b3e = 1;
                  }
                  if (lVar3 != 0) {
                    lVar3 = *(long *)(lVar3 + 0x10);
                    if (lVar3 != 0) {
                      if (pcRam0000000004fa8bf0 == (code *)0x0) {
                        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
                      }
                      (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
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
LAB_024b18d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

