/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$AdjustLockTips
void Dino_BusSand_App_UI_PlayerSettingPanel__AdjustLockTips (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, UnityEngine_RectTransform_o* target, UnityEngine_Vector2_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$AdjustLockTips
   void Dino_BusSand_App_UI_PlayerSettingPanel__AdjustLockTips
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, UnityEngine_RectTransform_o* target,
   UnityEngine_Vector2_o offset, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__AdjustLockTips_2304628
               (float param_1,float param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
  fVar9 = param_2;
  if ((bRam0000000004f9c4e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c4e7 = 1;
  }
  lVar4 = *(long *)(param_4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
    if ((uVar2 & 1) == 0) {
      if ((param_5 != 0) &&
         (uVar7 = UnityEngine_Transform__get_position_43d0e48(param_5,0), lVar4 != 0)) {
        fVar10 = fVar9;
                    /* catch() { ... } // from try @ 02404390 with catch @ 024046fc */
        fVar8 = (float)UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar4,0);
                    /* catch() { ... } // from try @ 02404380 with catch @ 02404700 */
        fVar11 = 0.0;
        plVar3 = *(long **)(param_4 + 0xa8);
                    /* try { // try from 0240471c to 0250471f has its CatchHandler @ 0240473c */
                    /* try { // try from 02404720 to 0250473f has its CatchHandler @ 02403fd8 */
        if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)PTR_DAT_04cabdb0)) {
          UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
          fVar11 = fVar11 * 0.5;
        }
                    /* catch() { ... } // from try @ 0240471c with catch @ 0240473c */
        param_1 = param_1 + fVar8;
                    /* try { // try from 02404740 to 02504747 has its CatchHandler @ 02404860 */
                    /* try { // try from 02404748 to 02504783 has its CatchHandler @ 02403fd8 */
                    /* catch() { ... } // from try @ 024042bc with catch @ 0240474c */
                    /* catch() { ... } // from try @ 024042c8 with catch @ 02404750 */
                    /* catch() { ... } // from try @ 02404290 with catch @ 02404754 */
        if (param_1 + fVar11 <= 480.0) {
                    /* catch() { ... } // from try @ 0240443c with catch @ 02404764 */
                    /* catch() { ... } // from try @ 024042a0 with catch @ 02404768 */
          if (param_1 - fVar11 < -480.0) {
            param_1 = fVar11 + -480.0;
          }
        }
        else {
                    /* catch() { ... } // from try @ 024044f0 with catch @ 02404758 */
                    /* catch() { ... } // from try @ 02404434 with catch @ 0240475c */
          param_1 = 480.0 - fVar11;
                    /* catch() { ... } // from try @ 024044f8 with catch @ 02404760 */
        }
                    /* try { // try from 02404784 to 02504787 has its CatchHandler @ 024047a8 */
        lVar6 = *(long *)(param_4 + 0x98);
                    /* try { // try from 02404788 to 025047ab has its CatchHandler @ 02403fd8 */
        UnityEngine_Transform__TransformPoint_43d3c44(param_1,param_2 + fVar10,0,lVar4,0);
        if (lVar6 != 0) {
          UnityEngine_Transform__set_position_43d0f1c(lVar6,0);
                    /* catch() { ... } // from try @ 02404784 with catch @ 024047a8 */
          uVar5 = *(undefined8 *)(param_4 + 0xb0);
                    /* try { // try from 024047ac to 025047b3 has its CatchHandler @ 02404860 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 024047b4 to 025047db has its CatchHandler @ 02403fd8 */
            thunk_FUN_0218fdac();
          }
                    /* catch() { ... } // from try @ 024044e0 with catch @ 024047b8 */
                    /* catch() { ... } // from try @ 02404424 with catch @ 024047bc */
                    /* catch() { ... } // from try @ 0240451c with catch @ 024047c0 */
          uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(long *)(param_4 + 0x98) != 0) {
                    /* try { // try from 024047dc to 025047df has its CatchHandler @ 024047fc */
                    /* try { // try from 024047e0 to 025047ff has its CatchHandler @ 02403fd8 */
            UnityEngine_Transform__InverseTransformPoint_43d3ffc
                      (uVar7,fVar9,param_3,*(long *)(param_4 + 0x98),0);
            lVar4 = *(long *)(param_4 + 0xb0);
            if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 024047dc with catch @ 024047fc */
              UnityEngine_Transform__get_localPosition_43cfce8(lVar4,0);
                    /* try { // try from 02404800 to 02504807 has its CatchHandler @ 02404860 */
                    /* try { // try from 02404808 to 02504827 has its CatchHandler @ 02403fd8 */
                    /* catch() { ... } // from try @ 02404460 with catch @ 0240480c */
                    /* try { // try from 02404828 to 0250482b has its CatchHandler @ 0240484c */
                    /* try { // try from 0240482c to 0250484f has its CatchHandler @ 02403fd8 */
              if ((bRam0000000004fa8b33 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7a00,0);
                bRam0000000004fa8b33 = 1;
              }
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar4 = *(long *)(lVar4 + 0x10);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
              }
              if (pcRam0000000004fa8b98 == (code *)0x0) {
                pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
              }
              (*pcRam0000000004fa8b98)(lVar4,&stack0xffffffffffffffd4);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02404850 to 02504857 has its CatchHandler @ 02404860 */
      FUN_02133224();
    }
  }
                    /* catch() { ... } // from try @ 02404828 with catch @ 0240484c */
  return;
}

