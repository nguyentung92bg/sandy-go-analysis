/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$AdjustPosition
void Dino_BusSand_App_UI_YachtRacingRewardTips__AdjustPosition (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, UnityEngine_RectTransform_o* parent, UnityEngine_RectTransform_o* clickTarget, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$AdjustPosition
   void Dino_BusSand_App_UI_YachtRacingRewardTips__AdjustPosition
   (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, UnityEngine_RectTransform_o* parent,
   UnityEngine_RectTransform_o* clickTarget, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardTips__AdjustPosition_21f23d0
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,long param_5,
               long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* try { // try from 022f2400 to 023f240b has its CatchHandler @ 022f2440 */
  if ((bRam0000000004f9bc2a & 1) == 0) {
                    /* try { // try from 022f240c to 023f2457 has its CatchHandler @ 022f237c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc2a = 1;
  }
  if ((param_6 != 0) &&
     (uVar5 = UnityEngine_Transform__get_position_43d0e48(param_6,0), puVar1 = PTR_DAT_04ca9ae8,
     param_5 != 0)) {
    fVar8 = param_2;
                    /* catch() { ... } // from try @ 022f2400 with catch @ 022f2440 */
    fVar6 = (float)UnityEngine_Transform__InverseTransformPoint_43d3ffc(param_5,0);
    fVar9 = fVar8;
                    /* catch() { ... } // from try @ 022f24cc with catch @ 022f2458 */
    fVar7 = (float)Dino_BusSand_App_UI_YachtRacingUi__RootCanvasSize_21f8db4(0);
    uVar3 = *(undefined8 *)(param_4 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    fVar10 = 0.0;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_022f25d8;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_4 + 0x38),0);
      fVar10 = fVar10 * 0.5;
    }
                    /* try { // try from 022f24b8 to 023f24cb has its CatchHandler @ 022f24e4 */
    fVar7 = (fVar7 * *(float *)(param_4 + 0x10) * 0.5) / 1080.0;
                    /* try { // try from 022f24cc to 023f24fb has its CatchHandler @ 022f2458 */
    fVar6 = fVar6 + *(float *)(param_4 + 0x14);
                    /* catch() { ... } // from try @ 022f24b8 with catch @ 022f24e4 */
    if (fVar10 + fVar6 <= fVar7) {
                    /* catch() { ... } // from try @ 022f258c with catch @ 022f24fc */
      if (fVar6 - fVar10 < -fVar7) {
        fVar6 = fVar10 - fVar7;
      }
    }
    else {
      fVar6 = fVar7 - fVar10;
    }
    lVar4 = *(long *)(param_4 + 0x20);
    UnityEngine_Transform__TransformPoint_43d3c44
              (fVar6,fVar8 + (fVar9 * *(float *)(param_4 + 0x18)) / 1920.0,0,param_5,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__set_position_43d0f1c(lVar4,0);
      uVar3 = *(undefined8 *)(param_4 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 022f2580 with catch @ 022f25c0 */
        return;
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        UnityEngine_Transform__InverseTransformPoint_43d3ffc
                  (uVar5,param_2,param_3,*(long *)(param_4 + 0x20),0);
        lVar4 = *(long *)(param_4 + 0x28);
        if (lVar4 != 0) {
                    /* try { // try from 022f2580 to 023f258b has its CatchHandler @ 022f25c0 */
          UnityEngine_Transform__get_localPosition_43cfce8(lVar4,0);
                    /* try { // try from 022f258c to 023f25d7 has its CatchHandler @ 022f24fc */
          if ((bRam0000000004fa8b33 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b33 = 1;
          }
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              if (pcRam0000000004fa8b98 == (code *)0x0) {
                pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
              }
              (*pcRam0000000004fa8b98)(lVar4,&stack0xffffffffffffffd4);
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
LAB_022f25d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

