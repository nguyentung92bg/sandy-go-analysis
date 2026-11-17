/* IL2CPP: Dino.BusSand.View.VehicleView$$TickPour
void Dino_BusSand_View_VehicleView__TickPour (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickPour
   void Dino_BusSand_View_VehicleView__TickPour (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickPour_23f80b0(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 024f80c8 to 025f81ab has its CatchHandler @ 024f7438 */
  if ((bRam0000000004f9cacd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cacd = 1;
  }
  puVar2 = PTR_DAT_04cbc460;
  fVar8 = 0.0;
  if (*(char *)(param_2 + 0x298) == '\0') {
    lVar3 = *(long *)PTR_DAT_04cbc460;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    fVar6 = *(float *)(*(long *)(lVar3 + 0xb8) + 0x30);
    fVar8 = 0.0;
    if (fVar6 != 1.0) {
      fVar7 = (*(float *)(param_2 + 0x278) - fVar6) / (1.0 - fVar6);
      fVar6 = 1.0;
      if (fVar7 <= 1.0) {
        fVar6 = fVar7;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar7) {
        fVar8 = fVar6;
      }
    }
    fVar6 = 0.0;
    if (0.0 <= fVar8) {
      fVar6 = fVar8;
    }
    fVar8 = fVar6 * fVar6 * 3.0 - fVar6 * fVar6 * (fVar6 + fVar6);
    fVar8 = (*(float *)(param_2 + 0x27c) * _UNK_00e2065c + _UNK_00e2043c) *
            (fVar8 + (1.0 - fVar8) * 0.0);
  }
  fVar7 = *(float *)(param_2 + 0x2c4);
  fVar6 = fVar8;
  if (fVar8 <= fVar7) {
                    /* try { // try from 024f81ac to 025f81af has its CatchHandler @ 024f823c */
                    /* try { // try from 024f81b0 to 025f81b3 has its CatchHandler @ 024f8228 */
                    /* try { // try from 024f81b4 to 025f81b7 has its CatchHandler @ 024f8220 */
                    /* try { // try from 024f81b8 to 025f81bb has its CatchHandler @ 024f8204 */
                    /* try { // try from 024f81bc to 025f81c3 has its CatchHandler @ 024f81e4 */
    fVar4 = 2.0;
    if (*(char *)(param_2 + 0x298) != '\0') {
      fVar4 = _UNK_00e20094;
    }
                    /* try { // try from 024f81c4 to 025f81cf has its CatchHandler @ 024f7438 */
                    /* catch() { ... } // from try @ 024f7aa4 with catch @ 024f81c8 */
                    /* try { // try from 024f81d0 to 025f81d7 has its CatchHandler @ 024f82c8 */
    fVar6 = -(fVar4 * param_1);
                    /* try { // try from 024f81d8 to 025f825b has its CatchHandler @ 024f7438 */
    if (0.0 <= fVar8 - fVar7) {
      fVar6 = fVar4 * param_1;
    }
                    /* catch() { ... } // from try @ 024f808c with catch @ 024f81dc */
                    /* catch() { ... } // from try @ 024f7950 with catch @ 024f81e0 */
    fVar6 = fVar7 + fVar6;
                    /* catch() { ... } // from try @ 024f81bc with catch @ 024f81e4 */
    if (ABS(fVar8 - fVar7) <= fVar4 * param_1) {
      fVar6 = fVar8;
    }
  }
                    /* catch() { ... } // from try @ 024f7a08 with catch @ 024f81e8 */
  *(float *)(param_2 + 0x2c4) = fVar6;
  if (*(char *)(param_2 + 0x2c8) != '\0') {
                    /* catch() { ... } // from try @ 024f790c with catch @ 024f81fc */
                    /* catch() { ... } // from try @ 024f7a4c with catch @ 024f8200 */
    fVar8 = 0.0;
    if (*(char *)(param_2 + 0x298) == '\0') {
                    /* catch() { ... } // from try @ 024f81b8 with catch @ 024f8204 */
                    /* catch() { ... } // from try @ 024f78d8 with catch @ 024f8208 */
                    /* catch() { ... } // from try @ 024f78a0 with catch @ 024f820c */
                    /* catch() { ... } // from try @ 024f7938 with catch @ 024f8210 */
                    /* catch() { ... } // from try @ 024f792c with catch @ 024f8214 */
      fVar7 = *(float *)(param_2 + 0x27c) * _UNK_00e2032c;
                    /* catch() { ... } // from try @ 024f7918 with catch @ 024f8218 */
                    /* catch() { ... } // from try @ 024f806c with catch @ 024f821c */
                    /* catch() { ... } // from try @ 024f81b4 with catch @ 024f8220 */
      fVar6 = 1.0;
      if (fVar7 <= 1.0) {
        fVar6 = fVar7;
      }
                    /* catch() { ... } // from try @ 024f7884 with catch @ 024f8224 */
      fVar8 = 0.0;
                    /* catch() { ... } // from try @ 024f81b0 with catch @ 024f8228 */
      if (0.0 <= fVar7) {
        fVar8 = fVar6;
      }
    }
                    /* catch() { ... } // from try @ 024f78e8 with catch @ 024f822c */
    fVar7 = *(float *)(param_2 + 700);
                    /* catch() { ... } // from try @ 024f78b0 with catch @ 024f8230 */
                    /* catch() { ... } // from try @ 024f785c with catch @ 024f8234 */
                    /* catch() { ... } // from try @ 024f7864 with catch @ 024f8238 */
                    /* catch() { ... } // from try @ 024f81ac with catch @ 024f823c */
                    /* catch() { ... } // from try @ 024f8090 with catch @ 024f8240 */
    fVar6 = 10.0;
    if (fVar8 <= fVar7) {
      fVar6 = _UNK_00e205ec;
    }
    fVar4 = (float)expf(-(fVar6 * param_1));
    lVar3 = *(long *)puVar2;
    fVar4 = 1.0 - fVar4;
                    /* try { // try from 024f825c to 025f825f has its CatchHandler @ 024f8278 */
                    /* try { // try from 024f8260 to 025f827b has its CatchHandler @ 024f7438 */
    fVar6 = 1.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(param_2 + 0x2c0);
                    /* catch() { ... } // from try @ 024f825c with catch @ 024f8278 */
                    /* try { // try from 024f827c to 025f8283 has its CatchHandler @ 024f82c8 */
    iVar1 = *(int *)(lVar3 + 0xe4);
    fVar7 = fVar7 + (fVar8 - fVar7) * fVar5;
                    /* try { // try from 024f8284 to 025f82a7 has its CatchHandler @ 024f7438 */
    fVar8 = 0.0;
                    /* catch() { ... } // from try @ 024f782c with catch @ 024f8288 */
    if (_UNK_00e1fec8 <= fVar7) {
      fVar8 = fVar7;
    }
                    /* catch() { ... } // from try @ 024f77c8 with catch @ 024f828c */
    *(float *)(param_2 + 700) = fVar8;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
                    /* try { // try from 024f82a8 to 025f82ab has its CatchHandler @ 024f82b4 */
                    /* catch() { ... } // from try @ 024f82a8 with catch @ 024f82b4 */
    fVar6 = fVar6 + fVar8 * param_1 * *(float *)(*(long *)(lVar3 + 0xb8) + 0x34);
                    /* try { // try from 024f82b8 to 025f82bf has its CatchHandler @ 024f82c8 */
    *(float *)(param_2 + 0x2c0) = fVar6;
                    /* try { // try from 024f82c0 to 025f82cb has its CatchHandler @ 024f7438 */
    if (100.0 < fVar6) {
                    /* catch() { ... } // from try @ 024f81d0 with catch @ 024f82c8
                       catch() { ... } // from try @ 024f827c with catch @ 024f82c8
                       catch() { ... } // from try @ 024f82b8 with catch @ 024f82c8 */
      *(float *)(param_2 + 0x2c0) = fVar6 + -100.0;
    }
  }
  return;
}

