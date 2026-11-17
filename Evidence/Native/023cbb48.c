/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ClampVertical
void Dino_BusSand_App_UI_GuidePanel__ClampVertical (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_RectTransform_o* rt, UnityEngine_RectTransform_o* box, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$ClampVertical
   void Dino_BusSand_App_UI_GuidePanel__ClampVertical (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_RectTransform_o* rt, UnityEngine_RectTransform_o* box, const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__ClampVertical_22cbb48
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c383 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9c383 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
  plVar3 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar3);
  }
  lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,4);
  if ((param_3 != 0) &&
     (UnityEngine_RectTransform__GetWorldCorners_43d0720(param_3,lVar4,0), lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_023cbd44:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (plVar3 != (long *)0x0) {
      fVar5 = *(float *)(lVar4 + 0x24);
      UnityEngine_Transform__InverseTransformPoint_43d3ffc
                (*(undefined4 *)(lVar4 + 0x20),fVar5,*(undefined4 *)(lVar4 + 0x28),plVar3,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_023cbd44;
      fVar6 = *(float *)(lVar4 + 0x30);
      UnityEngine_Transform__InverseTransformPoint_43d3ffc(*(undefined4 *)(lVar4 + 0x2c),plVar3,0);
      UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
      fVar7 = 40.0 - in_s3 * 0.5;
      if (fVar7 <= fVar5) {
        fVar7 = in_s3 * 0.5 + -40.0;
        if (fVar6 <= fVar7) {
          return;
        }
        fVar7 = fVar7 - fVar6;
      }
      else {
        fVar7 = fVar7 - fVar5;
      }
      if (fVar7 == 0.0) {
        return;
      }
      if (param_2 != 0) {
        UnityEngine_Transform__get_position_43d0e48(param_2,0);
        UnityEngine_Transform__TransformVector_43d34d4(0,plVar3,0);
        if ((bRam0000000004fa8b31 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b31 = 1;
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *(long *)(param_2 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8b88 == (code *)0x0) {
          pcRam0000000004fa8b88 = (code *)FUN_02132f40(&UNK_00e68510);
        }
        (*pcRam0000000004fa8b88)(lVar4,&stack0xffffffffffffffd4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

