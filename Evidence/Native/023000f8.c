/* IL2CPP: Dino.BusSand.App.UI.SafeAreaFitter$$Update
void Dino_BusSand_App_UI_SafeAreaFitter__Update (Dino_BusSand_App_UI_SafeAreaFitter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SafeAreaFitter$$Update
   void Dino_BusSand_App_UI_SafeAreaFitter__Update (Dino_BusSand_App_UI_SafeAreaFitter_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_SafeAreaFitter__Update_22000f8
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_04cafcc0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023000e0 with catch @ 0230010c
                        */
  if ((bRam0000000004f9bc91 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023000b8 with catch @ 02300124
                        */
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9bc91 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar8 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4();
  if ((((fVar8 == *(float *)(param_5 + 0x20)) && (param_2 == *(float *)(param_5 + 0x24))) &&
      (param_3 == *(float *)(param_5 + 0x28))) && (param_4 == *(float *)(param_5 + 0x2c))) {
    return;
  }
  *(float *)(param_5 + 0x20) = fVar8;
  *(float *)(param_5 + 0x24) = param_2;
  *(float *)(param_5 + 0x28) = param_3;
  *(float *)(param_5 + 0x2c) = param_4;
  plVar6 = (long *)UnityEngine_Component__get_transform_43bcd18(param_5,0);
  iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
  iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
  iVar4 = UnityEngine_Screen__get_width_436a6a0(0);
  iVar5 = UnityEngine_Screen__get_height_436a6c8(0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*plVar6 == *(long *)PTR_DAT_04cabdb0) {
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (fVar8 / (float)iVar2,param_2 / (float)iVar3,plVar6,0);
    UnityEngine_RectTransform__set_anchorMax_43cf768
              ((fVar8 + param_3) / (float)iVar4,(param_2 + param_4) / (float)iVar5,plVar6,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    fVar12 = **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (fVar12,(*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar6,0);
    fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar6,0);
    fVar9 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar6);
    fVar10 = (float)UnityEngine_RectTransform__get_pivot_43cfb30(plVar6);
    fVar11 = (float)UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar6);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70
              (fVar11 - (fVar12 - (fVar8 - fVar9 * fVar10)),plVar6);
    UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar6);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__get_pivot_43cfb30(plVar6);
    if ((bRam0000000004fa8a88 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7bc8);
      bRam0000000004fa8a88 = 1;
    }
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[2];
      if (lVar7 != 0) {
        if (pcRam0000000004fa8ad0 == (code *)0x0) {
          pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
        }
        (*pcRam0000000004fa8ad0)(lVar7,&stack0xffffffffffffffe8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021335a4(plVar6);
}

