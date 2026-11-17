/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$GenerateLoopTree
void Dino_BusSand_App_UI_ClimbTowerPanel__GenerateLoopTree (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$GenerateLoopTree
   void Dino_BusSand_App_UI_ClimbTowerPanel__GenerateLoopTree
   (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__GenerateLoopTree_21a50c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  float in_s3;
  float fVar18;
  
  puVar1 = PTR_DAT_04caea90;
  if ((bRam0000000004f9ba32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caea98);
    FUN_02132f7c(PTR_DAT_04caeaa0);
    FUN_02132f7c(PTR_DAT_04caea90);
    FUN_02132f7c(PTR_DAT_04caeaa8);
    bRam0000000004f9ba32 = 1;
  }
  puVar5 = PTR_DAT_04caeaa8;
  puVar2 = PTR_DAT_04cabdb0;
  plVar9 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar1,0);
  puVar4 = PTR_DAT_04caeaa0;
  puVar3 = PTR_DAT_04caea98;
  puVar1 = PTR_DAT_04ca9ae8;
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else if (*plVar9 != *(long *)puVar2) {
    plVar9 = (long *)0x0;
  }
  plVar10 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != *(long *)puVar2) {
    plVar10 = (long *)0x0;
  }
  lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar13 = UnityEngine_Object__op_Equality_43c6f30(plVar9,0,0);
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(plVar10,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
      if ((uVar13 & 1) == 0) {
        if ((plVar9 == (long *)0x0) ||
           (UnityEngine_RectTransform__get_rect_43cf450(plVar9,0), plVar10 == (long *)0x0)) {
LAB_022a5470:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        fVar18 = in_s3;
        UnityEngine_RectTransform__get_rect_43cf450(plVar10,0);
        if ((fVar18 < *(float *)(param_1 + 0xb0)) && (0.0 < in_s3)) {
          uVar6 = FUN_022b22d0((*(float *)(param_1 + 0xb0) - fVar18) / in_s3,0);
          puVar2 = PTR_DAT_04cad390;
          if (uVar6 < 0x7fffffff) {
            iVar17 = 0;
            do {
              uVar14 = UnityEngine_Component__get_gameObject_43bcde8(plVar9,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              lVar15 = UnityEngine_Object__Instantiate_object__2805310
                                 (uVar14,uVar12,0,*(undefined8 *)puVar2);
              if ((lVar15 == 0) ||
                 (lVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0), lVar16 == 0))
              goto LAB_022a5470;
              UnityEngine_Transform__set_localPosition_43cfda8
                        (0,fVar18 + (in_s3 + -5.0) * (float)iVar17 + -5.0,0,lVar16,0);
              UnityEngine_GameObject__SetActive_43c1408(lVar15,1,0);
              iVar7 = UnityEngine_Random__Range_43b64e8(1,3,0);
              uVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
              if (iVar7 == 1) {
                uVar8 = UnityEngine_Random__Range_43b64e8(0,2,0);
              }
              else {
                Dino_BusSand_App_UI_ClimbTowerPanel__SetChildActive_21a57d0(uVar14,0);
                uVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
                uVar8 = UnityEngine_Random__Range_43b64e8(1,3,0);
              }
              Dino_BusSand_App_UI_ClimbTowerPanel__SetChildActive_21a57d0(uVar14,uVar8);
              iVar17 = iVar17 + 1;
            } while (uVar6 + 1 != iVar17);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar13 & 1) != 0) {
            if (lVar11 != 0) {
              UnityEngine_Transform__get_localPosition_43cfce8(lVar11,0);
              if ((bRam0000000004fa8b33 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7a00,0);
                bRam0000000004fa8b33 = 1;
              }
              if (lVar11 != 0) {
                lVar11 = *(long *)(lVar11 + 0x10);
                if (lVar11 != 0) {
                  if (pcRam0000000004fa8b98 == (code *)0x0) {
                    pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
                  }
                  (*pcRam0000000004fa8b98)(lVar11,&stack0xffffffffffffffd4);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            goto LAB_022a5470;
          }
        }
      }
    }
  }
  return;
}

