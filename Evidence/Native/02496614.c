/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Tex
UnityEngine_Texture2D_o* Dino_BusSand_View_EndSuctionCue__Tex (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$Tex
   UnityEngine_Texture2D_o* Dino_BusSand_View_EndSuctionCue__Tex (const MethodInfo* method); */

undefined8 Dino_BusSand_View_EndSuctionCue__Tex_2396614(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dStack_a8;
  
  puVar7 = PTR_DAT_04cbc148;
                    /* try { // try from 0249664c to 02596657 has its CatchHandler @ 024969a4 */
  if ((bRam0000000004f9c8e4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cbc148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbc168);
    bRam0000000004f9c8e4 = 1;
  }
  puVar6 = PTR_DAT_04ca9ae8;
  lVar8 = *(long *)puVar7;
                    /* try { // try from 0249669c to 025966b3 has its CatchHandler @ 02496a94 */
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar7;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar6);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
LAB_02496a30:
                    /* try { // try from 02496a38 to 02596a47 has its CatchHandler @ 02496a4c */
                    /* catch() { ... } // from try @ 02496a0c with catch @ 02496a4c
                       catch() { ... } // from try @ 02496a38 with catch @ 02496a4c */
                    /* try { // try from 02496a50 to 02596a53 has its CatchHandler @ 02496b48 */
                    /* try { // try from 02496a54 to 02596ac3 has its CatchHandler @ 024960c4 */
                    /* catch() { ... } // from try @ 02496954 with catch @ 02496a58 */
                    /* catch() { ... } // from try @ 02496208 with catch @ 02496a5c
                       catch() { ... } // from try @ 02496958 with catch @ 02496a5c */
                    /* catch() { ... } // from try @ 024964ac with catch @ 02496a60 */
                    /* catch() { ... } // from try @ 024963a4 with catch @ 02496a64 */
                    /* catch() { ... } // from try @ 02496950 with catch @ 02496a68 */
    return *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28);
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
  UnityEngine_Texture2D___ctor_439e07c(lVar8,0x40,0x20,4,0,0);
  if (lVar8 != 0) {
                    /* try { // try from 02496730 to 02596753 has its CatchHandler @ 02496a70 */
    UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cbc168,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar8,1,0);
    UnityEngine_Texture__set_filterMode_4398f60(lVar8,1,0);
    lVar10 = *(long *)puVar7;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar7;
    }
    plVar11 = (long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    *plVar11 = lVar8;
                    /* try { // try from 02496780 to 0259678b has its CatchHandler @ 0249699c */
    thunk_FUN_02134474(plVar11,lVar8);
    lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,0x800);
    puVar6 = PTR_DAT_04caa200;
    fVar5 = _UNK_00e2094c;
    fVar4 = _UNK_00e207dc;
    fVar3 = _UNK_00e205f8;
    fVar2 = _UNK_00e2043c;
                    /* try { // try from 024967d4 to 025967db has its CatchHandler @ 024969a4 */
    lVar14 = 0;
                    /* try { // try from 024967ec to 025967f3 has its CatchHandler @ 0249699c */
                    /* try { // try from 024967f4 to 0259684f has its CatchHandler @ 02496998 */
    lVar10 = 0;
    lVar8 = lVar12 + 0x20;
    cVar15 = cRam0000000004f9b891;
    do {
      fVar21 = ((float)(int)lVar10 + 0.5) * 0.03125 + -0.5;
      fVar17 = fVar21 / fVar3;
      fVar18 = (float)expf(-(fVar17 * fVar17));
      fVar21 = fVar21 / fVar4;
      fVar17 = (float)expf(-(fVar21 * fVar21));
                    /* try { // try from 02496850 to 02596857 has its CatchHandler @ 02496988 */
      lVar16 = 0;
      fVar18 = fVar18 + fVar17 * fVar5;
      fVar17 = 1.0;
      if (fVar18 <= 1.0) {
        fVar17 = fVar18;
      }
      fVar21 = 0.0;
                    /* try { // try from 0249686c to 0259687b has its CatchHandler @ 024969dc */
      if (0.0 <= fVar18) {
        fVar21 = fVar17 * 255.0;
      }
      do {
        fVar17 = ((float)(int)lVar16 + 0.5) * 0.015625;
        fVar20 = fVar17 / fVar2;
                    /* try { // try from 02496888 to 0259689f has its CatchHandler @ 024969f0 */
        fVar18 = (1.0 - fVar17) / fVar2;
        fVar17 = 1.0;
        if (fVar20 <= 1.0) {
          fVar17 = fVar20;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar20) {
          fVar22 = fVar17;
        }
        fVar17 = 1.0;
        if (fVar18 <= 1.0) {
          fVar17 = fVar18;
        }
        fVar20 = 0.0;
        if (0.0 <= fVar18) {
          fVar20 = fVar17;
        }
        if (cVar15 == '\0') {
          FUN_02132f7c(puVar6);
                    /* try { // try from 024968b8 to 025968bb has its CatchHandler @ 0249697c */
          cVar15 = '\x01';
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          cVar15 = cRam0000000004f9b891;
        }
                    /* try { // try from 024968dc to 025968e7 has its CatchHandler @ 02496974 */
                    /* try { // try from 024968e8 to 025968f7 has its CatchHandler @ 02496970 */
        fVar17 = fVar22 * fVar22 * 3.0 - fVar22 * fVar22 * (fVar22 + fVar22);
        fVar18 = fVar20 * fVar20 * 3.0 - fVar20 * fVar20 * (fVar20 + fVar20);
                    /* try { // try from 02496914 to 0259692f has its CatchHandler @ 02496978 */
        fVar17 = fVar21 * (fVar17 + (1.0 - fVar17) * 0.0) * (fVar18 + (1.0 - fVar18) * 0.0);
        dVar23 = (double)fVar17;
        dVar19 = (double)FUN_049b52f0(dVar23,&dStack_a8);
                    /* try { // try from 02496934 to 02596937 has its CatchHandler @ 02496aa8 */
                    /* try { // try from 02496938 to 0259693b has its CatchHandler @ 02496aa4 */
        if (0.0 <= fVar17) {
                    /* try { // try from 02496954 to 02596957 has its CatchHandler @ 02496a58 */
                    /* try { // try from 02496958 to 0259695b has its CatchHandler @ 02496a5c */
                    /* try { // try from 0249695c to 0259695f has its CatchHandler @ 024969e4 */
          if (dVar19 == 0.5) {
                    /* try { // try from 02496960 to 02596963 has its CatchHandler @ 024969a0 */
                    /* try { // try from 02496964 to 02596967 has its CatchHandler @ 0249698c */
            dVar19 = 1.0;
            goto LAB_02496968;
          }
                    /* catch() { ... } // from try @ 02496964 with catch @ 0249698c */
                    /* catch() { ... } // from try @ 024962dc with catch @ 02496990 */
                    /* catch() { ... } // from try @ 024962d0 with catch @ 02496994 */
          dVar23 = (double)(long)(dVar23 + 0.5);
        }
        else {
                    /* try { // try from 0249693c to 0259693f has its CatchHandler @ 02496a90 */
                    /* try { // try from 02496940 to 02596943 has its CatchHandler @ 02496a8c */
                    /* try { // try from 02496944 to 02596947 has its CatchHandler @ 02496a88 */
          if (dVar19 == -0.5) {
                    /* try { // try from 02496948 to 0259694b has its CatchHandler @ 02496a78 */
                    /* try { // try from 0249694c to 0259694f has its CatchHandler @ 02496a74 */
            dVar19 = -1.0;
                    /* try { // try from 02496950 to 02596953 has its CatchHandler @ 02496a68 */
LAB_02496968:
                    /* try { // try from 02496968 to 0259696b has its CatchHandler @ 02496984 */
                    /* try { // try from 0249696c to 0259696f has its CatchHandler @ 02496980 */
                    /* catch() { ... } // from try @ 024968e8 with catch @ 02496970
                       try { // try from 02496970 to 02596a0b has its CatchHandler @ 024960c4 */
            dVar23 = dStack_a8;
                    /* catch() { ... } // from try @ 024968dc with catch @ 02496974 */
            if (((long)dStack_a8 & 1U) != 0) {
              dVar23 = dStack_a8 + dVar19;
            }
          }
          else {
                    /* catch() { ... } // from try @ 024968b8 with catch @ 0249697c */
                    /* catch() { ... } // from try @ 0249696c with catch @ 02496980 */
                    /* catch() { ... } // from try @ 02496968 with catch @ 02496984 */
            dVar23 = (double)(long)(dVar23 + -0.5);
                    /* catch() { ... } // from try @ 02496850 with catch @ 02496988 */
          }
        }
                    /* catch() { ... } // from try @ 024967f4 with catch @ 02496998 */
        if (lVar12 == 0) goto LAB_02496a6c;
                    /* catch() { ... } // from try @ 02496780 with catch @ 0249699c
                       catch() { ... } // from try @ 024967ec with catch @ 0249699c */
                    /* catch() { ... } // from try @ 02496960 with catch @ 024969a0 */
                    /* catch() { ... } // from try @ 0249664c with catch @ 024969a4
                       catch() { ... } // from try @ 024967d4 with catch @ 024969a4 */
                    /* catch() { ... } // from try @ 02496578 with catch @ 024969a8 */
        if ((ulong)*(uint *)(lVar12 + 0x18) <= (ulong)(lVar14 + lVar16)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02496730 with catch @ 02496a70 */
          FUN_0213322c();
        }
                    /* catch() { ... } // from try @ 024962b8 with catch @ 024969ac */
                    /* catch() { ... } // from try @ 024962ac with catch @ 024969b0 */
                    /* catch() { ... } // from try @ 024962a0 with catch @ 024969b4 */
                    /* catch() { ... } // from try @ 02496294 with catch @ 024969b8 */
        uVar1 = 0xffffff;
                    /* catch() { ... } // from try @ 02496288 with catch @ 024969bc */
        if (dVar23 != INFINITY) {
          uVar1 = (int)dVar23 << 0x18 | 0xffffff;
        }
                    /* catch() { ... } // from try @ 0249627c with catch @ 024969c0 */
        *(uint *)(lVar8 + lVar16 * 4) = uVar1;
                    /* catch() { ... } // from try @ 02496270 with catch @ 024969c4 */
        lVar16 = lVar16 + 1;
                    /* catch() { ... } // from try @ 02496264 with catch @ 024969c8 */
                    /* catch() { ... } // from try @ 02496258 with catch @ 024969cc */
      } while (lVar16 != 0x40);
                    /* catch() { ... } // from try @ 0249624c with catch @ 024969d0 */
      lVar10 = lVar10 + 1;
                    /* catch() { ... } // from try @ 02496240 with catch @ 024969d4 */
      lVar14 = lVar14 + 0x40;
                    /* catch() { ... } // from try @ 02496234 with catch @ 024969d8 */
      lVar8 = lVar8 + 0x100;
                    /* catch() { ... } // from try @ 0249686c with catch @ 024969dc */
                    /* catch() { ... } // from try @ 02496228 with catch @ 024969e0 */
    } while (lVar10 != 0x20);
                    /* catch() { ... } // from try @ 0249695c with catch @ 024969e4 */
    lVar8 = *(long *)puVar7;
                    /* catch() { ... } // from try @ 024965f0 with catch @ 024969e8 */
                    /* catch() { ... } // from try @ 024962f4 with catch @ 024969ec */
    if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02496888 with catch @ 024969f0 */
      thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 024961cc with catch @ 024969f4 */
      lVar8 = *(long *)puVar7;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
    if (lVar8 != 0) {
                    /* try { // try from 02496a0c to 02596a23 has its CatchHandler @ 02496a4c */
      UnityEngine_Texture2D__SetPixels32_439edd8(lVar8,lVar12,0);
      lVar8 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28);
      if (lVar8 != 0) {
                    /* try { // try from 02496a24 to 02596a37 has its CatchHandler @ 024960c4 */
        UnityEngine_Texture2D__Apply_439ea14(lVar8,0,1,0);
        goto LAB_02496a30;
      }
    }
  }
LAB_02496a6c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 024963c8 with catch @ 02496a6c */
  FUN_02133224();
}

