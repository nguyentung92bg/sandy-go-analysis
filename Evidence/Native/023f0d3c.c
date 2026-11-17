/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Ruts
void Dino_BusSand_App_UI_HomeStage__Ruts (Dino_BusSand_App_UI_HomeStage_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Ruts
   void Dino_BusSand_App_UI_HomeStage__Ruts (Dino_BusSand_App_UI_HomeStage_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Ruts_22f0d3c(float param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dStack_98;
  
                    /* try { // try from 023f0d6c to 024f0d7b has its CatchHandler @ 023f0e2c */
  if ((bRam0000000004f9c468 & 1) == 0) {
                    /* try { // try from 023f0d80 to 024f0db7 has its CatchHandler @ 023f0e94 */
    FUN_02132f7c(PTR_DAT_04cb74a8);
    bRam0000000004f9c468 = 1;
  }
  puVar1 = PTR_DAT_04cb74a8;
  lVar11 = *(long *)(param_2 + 0x78);
  if (lVar11 != 0) {
    fVar16 = *(float *)(lVar11 + 0xf0);
    fVar18 = *(float *)(lVar11 + 0xf4);
    fVar14 = fVar18 - fVar16;
    bVar3 = false;
    if ((_UNK_00e20448 < fVar14) && (bVar3 = false, !NAN(fVar14))) {
      bVar3 = fVar14 < 128.0;
    }
    bVar4 = false;
    bVar5 = true;
    if (bVar3) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar16) && !NAN(fVar18)) {
        bVar4 = fVar16 == fVar18;
        bVar5 = fVar18 <= fVar16;
      }
    }
                    /* try { // try from 023f0db8 to 024f0e23 has its CatchHandler @ 023f0650 */
    if (!bVar5 || bVar4) {
      do {
        lVar11 = *(long *)(param_2 + 0x60);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = Dino_BusSand_App_UI_HomeStage__Ring_22f11e8(fVar16);
        if (lVar11 == 0) goto LAB_023f0ff0;
        if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_023f0ff4;
        fVar16 = fVar16 + 0.125;
        *(undefined4 *)(lVar11 + (long)(int)uVar6 * 4 + 0x20) = 0x3f800000;
      } while (fVar16 <= fVar18);
    }
    param_1 = *(float *)(param_2 + 0x70) - param_1;
    *(float *)(param_2 + 0x70) = param_1;
    if (0.0 < param_1) {
      return;
    }
                    /* try { // try from 023f0e24 to 024f0e27 has its CatchHandler @ 023f0e90 */
                    /* catch() { ... } // from try @ 023f0910 with catch @ 023f0e28
                       try { // try from 023f0e28 to 024f0e53 has its CatchHandler @ 023f0650 */
                    /* catch() { ... } // from try @ 023f0d6c with catch @ 023f0e2c */
                    /* catch() { ... } // from try @ 023f0928 with catch @ 023f0e30 */
                    /* catch() { ... } // from try @ 023f0914 with catch @ 023f0e34 */
                    /* catch() { ... } // from try @ 023f08f4 with catch @ 023f0e38 */
    fVar14 = (float)expf((_UNK_00e20754 - param_1) / -40.0);
                    /* try { // try from 023f0e54 to 024f0e57 has its CatchHandler @ 023f0e78 */
    *(undefined4 *)(param_2 + 0x70) = 0x3dcccccd;
    puVar1 = PTR_DAT_04caa200;
                    /* try { // try from 023f0e58 to 024f0e7b has its CatchHandler @ 023f0650 */
    lVar11 = 8;
                    /* catch() { ... } // from try @ 023f0e54 with catch @ 023f0e78 */
    do {
      cVar2 = cRam0000000004f9b891;
                    /* try { // try from 023f0e7c to 024f0e83 has its CatchHandler @ 023f0ee8 */
      lVar12 = *(long *)(param_2 + 0x60);
      if (lVar12 == 0) goto LAB_023f0ff0;
                    /* try { // try from 023f0e84 to 024f0eaf has its CatchHandler @ 023f0650 */
                    /* catch() { ... } // from try @ 023f0cf4 with catch @ 023f0e88 */
                    /* catch() { ... } // from try @ 023f0d10 with catch @ 023f0e8c */
                    /* catch() { ... } // from try @ 023f0e24 with catch @ 023f0e90 */
      if ((ulong)*(uint *)(lVar12 + 0x18) <= lVar11 - 8U) {
LAB_023f0ff4:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* catch() { ... } // from try @ 023f0d80 with catch @ 023f0e94 */
      lVar13 = *(long *)(param_2 + 0x68);
      fVar16 = fVar14 * *(float *)(lVar12 + lVar11 * 4);
      *(float *)(lVar12 + lVar11 * 4) = fVar16;
      if (cVar2 == '\0') {
                    /* try { // try from 023f0eb0 to 024f0eb3 has its CatchHandler @ 023f0ed4 */
        FUN_02132f7c(puVar1);
                    /* try { // try from 023f0eb4 to 024f0ed7 has its CatchHandler @ 023f0650 */
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar16 = fVar16 * 255.0;
                    /* catch() { ... } // from try @ 023f0eb0 with catch @ 023f0ed4 */
      dVar17 = (double)fVar16;
                    /* try { // try from 023f0ed8 to 024f0edf has its CatchHandler @ 023f0ee8 */
      dVar15 = (double)FUN_049b52f0(dVar17,&dStack_98);
                    /* try { // try from 023f0ee0 to 024f0eeb has its CatchHandler @ 023f0650 */
      if (0.0 <= fVar16) {
        if (dVar15 == 0.5) {
          dVar15 = dStack_98 + 1.0;
          goto LAB_023f0f14;
        }
        dVar17 = (double)(long)(dVar17 + 0.5);
      }
      else {
                    /* catch() { ... } // from try @ 023f0e7c with catch @ 023f0ee8
                       catch() { ... } // from try @ 023f0ed8 with catch @ 023f0ee8 */
        if (dVar15 == -0.5) {
          dVar15 = dStack_98 + -1.0;
LAB_023f0f14:
          dVar17 = dStack_98;
          if (((long)dStack_98 & 1U) != 0) {
            dVar17 = dVar15;
          }
        }
        else {
          dVar17 = (double)(long)(dVar17 + -0.5);
        }
      }
      if (lVar13 == 0) goto LAB_023f0ff0;
      if ((ulong)*(uint *)(lVar13 + 0x18) <= lVar11 - 8U) goto LAB_023f0ff4;
      uVar6 = 0xff000000;
      if (dVar17 != INFINITY) {
        uVar6 = (int)dVar17 & 0xffU | 0xff000000;
      }
      *(uint *)(lVar13 + lVar11 * 4) = uVar6;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x408);
    if (*(long *)(param_2 + 0x50) != 0) {
      UnityEngine_Texture2D__SetPixels32_439edd8
                (*(long *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x68),0);
      plVar7 = *(long **)(param_2 + 0x50);
      if (plVar7 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        if ((uVar8 & 1) == 0) {
          uVar9 = UnityEngine_Texture__CreateNonReadableException_4399d64(uVar8,plVar7);
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf7070);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,uVar10);
        }
        if ((bRam0000000004fa7993 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6fd0);
          bRam0000000004fa7993 = 1;
        }
        if (plVar7 != (long *)0x0) {
          lVar11 = plVar7[2];
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(plVar7,0);
          }
          if (pcRam0000000004fa7a48 == (code *)0x0) {
            pcRam0000000004fa7a48 = (code *)FUN_02132f40(&UNK_00e28bfa);
          }
                    /* WARNING: Could not recover jumptable at 0x0449accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa7a48)(lVar11,0,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_023f0ff0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

