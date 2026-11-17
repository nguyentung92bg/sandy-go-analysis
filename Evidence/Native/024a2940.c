/* IL2CPP: Dino.BusSand.View.GameView$$GroundPoint
bool Dino_BusSand_View_GameView__GroundPoint (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector2_o screen, float y, UnityEngine_Vector3_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$GroundPoint
   bool Dino_BusSand_View_GameView__GroundPoint (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector2_o screen, float y, UnityEngine_Vector3_o* p, const MethodInfo* method); */

undefined8
Dino_BusSand_View_GameView__GroundPoint_23a2940
          (undefined8 param_1,undefined4 param_2,float param_3,long param_4,undefined8 *param_5)

{
  undefined *puVar1;
  float fVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Camera__ScreenPointToRay_435cb2c
            (&uStack_98,param_1,param_2,0,*(long *)(param_4 + 0x38),0);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_70 = uStack_88;
  if (cRam0000000004f9bcf8 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9bcf8 = '\x01';
  }
  puVar1 = PTR_DAT_04caa208;
  lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
  fVar11 = *(float *)(lVar3 + 0x18);
  fVar12 = *(float *)(lVar3 + 0x1c);
  fVar13 = *(float *)(lVar3 + 0x20);
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar5 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12);
  if (fVar5 <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar13 = pfVar4[2];
  }
  else {
    fVar11 = fVar11 / fVar5;
    fVar12 = fVar12 / fVar5;
    fVar13 = fVar13 / fVar5;
  }
  fVar5 = (float)uStack_80;
  fVar10 = uStack_80._4_4_;
  fVar2 = (float)uStack_78;
                    /* try { // try from 024a2a90 to 025a2a93 has its CatchHandler @ 024a2abc */
                    /* try { // try from 024a2a94 to 025a2a97 has its CatchHandler @ 024a2ab0 */
                    /* try { // try from 024a2a98 to 025a2a9b has its CatchHandler @ 024a2aa4 */
                    /* try { // try from 024a2a9c to 025a2adf has its CatchHandler @ 024a24ec */
  fVar14 = fVar13 * uStack_70._4_4_ + fVar11 * uStack_78._4_4_ + fVar12 * (float)uStack_70;
  if (cRam0000000004f9c305 == '\0') {
                    /* catch() { ... } // from try @ 024a2a98 with catch @ 024a2aa4 */
                    /* catch() { ... } // from try @ 024a277c with catch @ 024a2aa8 */
                    /* catch() { ... } // from try @ 024a273c with catch @ 024a2aac */
    FUN_02132f7c(PTR_DAT_04cb5bf8);
                    /* catch() { ... } // from try @ 024a2a94 with catch @ 024a2ab0 */
                    /* catch() { ... } // from try @ 024a2760 with catch @ 024a2ab4 */
    cRam0000000004f9c305 = '\x01';
  }
                    /* catch() { ... } // from try @ 024a2740 with catch @ 024a2ab8 */
                    /* catch() { ... } // from try @ 024a2a90 with catch @ 024a2abc */
  fVar6 = ABS(fVar14);
                    /* catch() { ... } // from try @ 024a283c with catch @ 024a2ac0 */
                    /* catch() { ... } // from try @ 024a271c with catch @ 024a2ac4 */
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
                    /* try { // try from 024a2ae0 to 025a2ae3 has its CatchHandler @ 024a2b00 */
                    /* try { // try from 024a2ae4 to 025a2b03 has its CatchHandler @ 024a24ec */
  fVar9 = **(float **)(*(long *)PTR_DAT_04cb5bf8 + 0xb8) * 8.0;
  fVar7 = fVar6 * _UNK_00e20900;
  if (fVar6 * _UNK_00e20900 <= fVar9) {
    fVar7 = fVar9;
  }
  if (fVar7 <= ABS(0.0 - fVar14)) {
                    /* catch() { ... } // from try @ 024a2ae0 with catch @ 024a2b00 */
                    /* try { // try from 024a2b04 to 025a2b0b has its CatchHandler @ 024a2b64 */
                    /* try { // try from 024a2b0c to 025a2b2b has its CatchHandler @ 024a24ec */
                    /* catch() { ... } // from try @ 024a2820 with catch @ 024a2b10 */
    fVar10 = fVar11 * fVar5 + fVar12 * fVar10;
    fVar5 = fVar13 * fVar2 + fVar10;
                    /* try { // try from 024a2b2c to 025a2b2f has its CatchHandler @ 024a2b50 */
                    /* try { // try from 024a2b30 to 025a2b53 has its CatchHandler @ 024a24ec */
    if (0.0 < ((fVar13 * 0.0 + fVar11 * 0.0 + fVar12 * param_3) - fVar5) / fVar14) {
      uVar8 = UnityEngine_Ray__GetPoint_4365de4(&uStack_80,0);
      *(undefined4 *)param_5 = uVar8;
      *(float *)((long)param_5 + 4) = fVar5;
      *(float *)(param_5 + 1) = fVar10;
      return 1;
                    /* catch() { ... } // from try @ 024a2b2c with catch @ 024a2b50 */
    }
  }
                    /* try { // try from 024a2b54 to 025a2b5b has its CatchHandler @ 024a2b64 */
  *(undefined4 *)(param_5 + 1) = 0;
                    /* try { // try from 024a2b5c to 025a2b67 has its CatchHandler @ 024a24ec */
  *param_5 = 0;
                    /* catch() { ... } // from try @ 024a2b04 with catch @ 024a2b64
                       catch() { ... } // from try @ 024a2b54 with catch @ 024a2b64 */
  return 0;
}

