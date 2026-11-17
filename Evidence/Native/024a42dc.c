/* IL2CPP: Dino.BusSand.View.GameView$$LateUpdate
void Dino_BusSand_View_GameView__LateUpdate (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$LateUpdate
   void Dino_BusSand_View_GameView__LateUpdate (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__LateUpdate_23a42dc(long param_1)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 024a42e0 to 025a433b has its CatchHandler @ 024a3eb8 */
  if ((bRam0000000004f9c925 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c925 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 024a433c to 025a4343 has its CatchHandler @ 024a44bc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  cVar2 = cRam0000000004f9b65d;
                    /* try { // try from 024a4360 to 025a4363 has its CatchHandler @ 024a4404 */
                    /* try { // try from 024a4364 to 025a4373 has its CatchHandler @ 024a4470 */
  fVar14 = *(float *)(param_1 + 0x11c);
                    /* try { // try from 024a4378 to 025a4383 has its CatchHandler @ 024a4408 */
                    /* try { // try from 024a4384 to 025a43b3 has its CatchHandler @ 024a3eb8 */
  fVar9 = -(fVar7 * _UNK_00e20184);
  if (0.0 <= 0.0 - fVar14) {
    fVar9 = fVar7 * _UNK_00e20184;
  }
  fVar8 = fVar14 + fVar9;
  if (ABS(0.0 - fVar14) <= fVar7 * _UNK_00e20184) {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x11c) = fVar8;
  if (cVar2 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 024a43b4 to 025a43b7 has its CatchHandler @ 024a446c */
    fVar8 = *(float *)(param_1 + 0x11c);
                    /* try { // try from 024a43b8 to 025a43bb has its CatchHandler @ 024a4464 */
                    /* try { // try from 024a43bc to 025a43bf has its CatchHandler @ 024a4460 */
    cRam0000000004f9b65d = '\x01';
  }
                    /* try { // try from 024a43c0 to 025a43c3 has its CatchHandler @ 024a445c */
                    /* try { // try from 024a43c4 to 025a43c7 has its CatchHandler @ 024a43fc */
  if (fVar8 <= 0.0) {
                    /* catch() { ... } // from try @ 024a4428 with catch @ 024a444c */
    fVar8 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar14 = (*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8))[1];
  }
  else {
                    /* try { // try from 024a43c8 to 025a43cb has its CatchHandler @ 024a3eb8 */
                    /* try { // try from 024a43cc to 025a43cf has its CatchHandler @ 024a43f0 */
    fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* try { // try from 024a43d0 to 025a43d3 has its CatchHandler @ 024a43e8 */
                    /* try { // try from 024a43d4 to 025a43d7 has its CatchHandler @ 024a43dc */
                    /* catch() { ... } // from try @ 024a4230 with catch @ 024a43d8
                       try { // try from 024a43d8 to 025a4427 has its CatchHandler @ 024a3eb8 */
                    /* catch() { ... } // from try @ 024a43d4 with catch @ 024a43dc */
                    /* catch() { ... } // from try @ 024a4270 with catch @ 024a43e0 */
                    /* catch() { ... } // from try @ 024a4244 with catch @ 024a43e4 */
    fVar9 = fVar9 * 22.0 + *(float *)(param_1 + 0x134);
                    /* catch() { ... } // from try @ 024a43d0 with catch @ 024a43e8 */
                    /* catch() { ... } // from try @ 024a42bc with catch @ 024a43ec */
                    /* catch() { ... } // from try @ 024a43cc with catch @ 024a43f0 */
    fVar8 = (float)UnityEngine_Mathf__PerlinNoise_43afc78(fVar9,_UNK_00e207cc,0);
                    /* catch() { ... } // from try @ 024a4258 with catch @ 024a43f4 */
                    /* catch() { ... } // from try @ 024a4218 with catch @ 024a43f8 */
                    /* catch() { ... } // from try @ 024a43c4 with catch @ 024a43fc */
                    /* catch() { ... } // from try @ 024a41fc with catch @ 024a4400 */
                    /* catch() { ... } // from try @ 024a4360 with catch @ 024a4404 */
                    /* catch() { ... } // from try @ 024a4378 with catch @ 024a4408 */
    fVar10 = (float)UnityEngine_Mathf__PerlinNoise_43afc78(_UNK_00e20994,fVar9,0);
                    /* catch() { ... } // from try @ 024a41e0 with catch @ 024a440c */
    fVar14 = *(float *)(param_1 + 0x11c);
    fVar9 = -0.5;
                    /* try { // try from 024a4428 to 025a442b has its CatchHandler @ 024a444c */
                    /* try { // try from 024a442c to 025a444f has its CatchHandler @ 024a3eb8 */
    fVar14 = fVar14 * (fVar14 + fVar14) * _UNK_00e201f0;
    fVar8 = (fVar8 + -0.5) * fVar14;
    fVar14 = (fVar10 + -0.5) * fVar14;
  }
                    /* try { // try from 024a4450 to 025a4457 has its CatchHandler @ 024a4508 */
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* catch() { ... } // from try @ 024a40ec with catch @ 024a4474 */
    fVar10 = 0.0;
  }
  else {
                    /* try { // try from 024a4458 to 025a448f has its CatchHandler @ 024a3eb8 */
                    /* catch() { ... } // from try @ 024a43c0 with catch @ 024a445c */
                    /* catch() { ... } // from try @ 024a43bc with catch @ 024a4460 */
                    /* catch() { ... } // from try @ 024a43b8 with catch @ 024a4464 */
                    /* catch() { ... } // from try @ 024a4114 with catch @ 024a4468 */
                    /* catch() { ... } // from try @ 024a43b4 with catch @ 024a446c */
    fVar10 = *(float *)(param_1 + 0x244) * *(float *)(*(long *)(param_1 + 0x30) + 0x68) *
             _UNK_00e20390;
                    /* catch() { ... } // from try @ 024a4364 with catch @ 024a4470 */
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 024a4490 to 025a4493 has its CatchHandler @ 024a44ac */
      fVar15 = *(float *)(param_1 + 0x120);
                    /* try { // try from 024a4494 to 025a44af has its CatchHandler @ 024a3eb8 */
      fVar11 = *(float *)(param_1 + 0x128);
      fVar19 = *(float *)(param_1 + 0x124);
      fVar18 = fVar15;
                    /* catch() { ... } // from try @ 024a4490 with catch @ 024a44ac */
      lVar5 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0);
                    /* try { // try from 024a44b0 to 025a44b7 has its CatchHandler @ 024a4508 */
      if (lVar5 != 0) {
                    /* try { // try from 024a44b8 to 025a44d7 has its CatchHandler @ 024a3eb8 */
        fVar12 = (float)UnityEngine_Transform__get_right_43d15f4(lVar5,0);
                    /* catch() { ... } // from try @ 024a433c with catch @ 024a44bc */
                    /* try { // try from 024a44d8 to 025a44db has its CatchHandler @ 024a44f4 */
                    /* try { // try from 024a44dc to 025a44f7 has its CatchHandler @ 024a3eb8 */
        if (((*(long *)(param_1 + 0x38) != 0) &&
            (fVar16 = fVar18, fVar17 = fVar9,
            lVar5 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0),
            lVar5 != 0)) &&
           (fVar13 = (float)UnityEngine_Transform__get_up_43d16f4(lVar5,0), lVar4 != 0)) {
          fVar14 = fVar14 + fVar10;
                    /* catch() { ... } // from try @ 024a44d8 with catch @ 024a44f4 */
                    /* try { // try from 024a44f8 to 025a44ff has its CatchHandler @ 024a4508 */
                    /* try { // try from 024a4500 to 025a450b has its CatchHandler @ 024a3eb8 */
                    /* catch() { ... } // from try @ 024a4450 with catch @ 024a4508
                       catch() { ... } // from try @ 024a44b0 with catch @ 024a4508
                       catch() { ... } // from try @ 024a44f8 with catch @ 024a4508 */
          UnityEngine_Transform__set_position_43d0f1c
                    (fVar15 + fVar8 * fVar12 + fVar14 * fVar13,
                     fVar19 + fVar8 * fVar18 + fVar14 * fVar16,
                     fVar11 + fVar8 * fVar9 + fVar14 * fVar17,lVar4,0);
          fVar9 = *(float *)(param_1 + 300);
          if (*(float *)(param_1 + 0x270) <= fVar9) {
            fVar14 = *(float *)(param_1 + 0x130);
          }
          else {
            fVar14 = (*(float *)(param_1 + 0x270) - fVar9) * 80.0 + *(float *)(param_1 + 0x130);
            *(float *)(param_1 + 0x130) = fVar14;
          }
          fVar10 = _UNK_00e208e8;
          fVar8 = _UNK_00e1fee4;
          *(undefined4 *)(param_1 + 0x270) = 0;
          fVar11 = fVar7 * fVar7 * fVar8;
          fVar10 = (fVar7 + fVar7) * fVar10 * _UNK_00e209ec + 1.0;
          fVar18 = 1.0 / (fVar11 + fVar10);
          fVar10 = fVar18 * (fVar11 * 0.0 + fVar10 * fVar9 + fVar7 * fVar14);
          *(float *)(param_1 + 300) = fVar10;
          *(float *)(param_1 + 0x130) = fVar18 * (fVar7 * fVar8 * (0.0 - fVar9) + fVar14);
          puVar1 = PTR_DAT_04cb2870;
          if (*(long *)(param_1 + 0x30) == 0) {
            return;
          }
          lVar4 = *(long *)(param_1 + 0x38);
          fVar8 = *(float *)(*(long *)(param_1 + 0x30) + 0x30);
          fVar7 = *(float *)(param_1 + 0x240);
          fVar14 = *(float *)(param_1 + 0x1dc);
          fVar9 = _UNK_00e20178;
          if (fVar10 <= _UNK_00e20178) {
            fVar9 = fVar10;
          }
          fVar18 = _UNK_00e20864;
          if (_UNK_00e20864 <= fVar10) {
            fVar18 = fVar9;
          }
          if (*(int *)(*(long *)PTR_DAT_04cb2870 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (lVar4 != 0) {
            fVar14 = fVar14 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34);
            if (fVar7 <= fVar14) {
              fVar7 = fVar14;
            }
            if ((bRam0000000004fa5ba7 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf6278,0);
              bRam0000000004fa5ba7 = 1;
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 != 0) {
              if (pcRam0000000004fa5cb8 == (code *)0x0) {
                pcRam0000000004fa5cb8 = (code *)FUN_02132f40(&UNK_00e652bd);
              }
                    /* WARNING: Could not recover jumptable at 0x04455fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa5cb8)((fVar8 - fVar18) - fVar7,lVar5);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

