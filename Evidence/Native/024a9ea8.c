/* IL2CPP: Dino.BusSand.View.GameView$$SkyPoint
UnityEngine_Vector3_o Dino_BusSand_View_GameView__SkyPoint (Dino_BusSand_View_GameView_o* __this, float vx, float vy, float* h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$SkyPoint
   UnityEngine_Vector3_o Dino_BusSand_View_GameView__SkyPoint (Dino_BusSand_View_GameView_o* __this,
   float vx, float vy, float* h, const MethodInfo* method); */

undefined4 Dino_BusSand_View_GameView__SkyPoint_23a9ea8(long param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_024a9fc0;
                    /* try { // try from 024a9ecc to 025a9efb has its CatchHandler @ 024aab74 */
  lVar1 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0);
  fVar8 = *(float *)(param_1 + 0x24c);
  if (fVar8 <= 0.0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_024a9fc0;
    fVar9 = 0.0;
    fVar5 = 0.5;
    fVar8 = (float)Dino_BusSand_View_StageLayout__BoardPoint_23e89d4
                             (0x3f000000,*(long *)(param_1 + 0x30),0);
                    /* try { // try from 024a9f08 to 025a9f0f has its CatchHandler @ 024aaaa8 */
    if (lVar1 == 0) goto LAB_024a9fc0;
    fVar6 = fVar5;
    fVar7 = fVar9;
                    /* try { // try from 024a9f14 to 025a9f23 has its CatchHandler @ 024aab20 */
    fVar3 = (float)UnityEngine_Transform__get_position_43d0e48(lVar1,0);
                    /* try { // try from 024a9f30 to 025a9f37 has its CatchHandler @ 024aaaa0 */
    fVar5 = fVar5 - fVar6;
    fVar9 = fVar9 - fVar7;
    fVar4 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar1,0);
    fVar8 = (fVar9 * fVar7 + (fVar8 - fVar3) * fVar4 + fVar5 * fVar6) * _UNK_00e1fecc;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 024a9f64 to 025a9f6f has its CatchHandler @ 024aaa28 */
    fVar5 = (float)UnityEngine_Camera__get_fieldOfView_4355e9c(*(long *)(param_1 + 0x38),0);
    fVar5 = (float)func_0x049b5430(fVar5 * 0.5 * _UNK_00e20a74);
    lVar1 = *(long *)(param_1 + 0x38);
                    /* try { // try from 024a9f90 to 025a9f9b has its CatchHandler @ 024aab1c */
    *param_2 = (fVar8 + fVar8) * fVar5;
    if (lVar1 != 0) {
      if ((bRam0000000004fa5c22 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6278,2);
        bRam0000000004fa5c22 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar1,0);
        }
        if (pcRam0000000004fa6088 == (code *)0x0) {
          pcRam0000000004fa6088 = (code *)FUN_02132f40(&UNK_00e5e7cb);
        }
        (*pcRam0000000004fa6088)(lVar2,&stack0xffffffffffffffd4,2,&stack0xffffffffffffffc8);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_024a9fc0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

