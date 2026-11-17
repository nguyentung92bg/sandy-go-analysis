/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BadgeMaterial
UnityEngine_Material_o* Dino_BusSand_View_MechanicLayer__BadgeMaterial (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BadgeMaterial
   UnityEngine_Material_o* Dino_BusSand_View_MechanicLayer__BadgeMaterial (const MethodInfo*
   method); */

undefined8 Dino_BusSand_View_MechanicLayer__BadgeMaterial_23c7764(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  ulong uVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  
  puVar9 = PTR_DAT_04cac5d0;
  if ((bRam0000000004f9c9d6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbd2a8);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cb72b0);
                    /* try { // try from 024c7814 to 025c783b has its CatchHandler @ 024c7a58 */
    FUN_02132f7c(PTR_DAT_04cbd2b0);
    FUN_02132f7c(PTR_DAT_04cbcf68);
    bRam0000000004f9c9d6 = 1;
  }
  puVar8 = PTR_DAT_04ca9ae8;
  lVar11 = *(long *)puVar9;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar9;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar8);
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar12 & 1) == 0) {
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
                    /* try { // try from 024c78b0 to 025c78b3 has its CatchHandler @ 024c7a30 */
                    /* try { // try from 024c78b4 to 025c78c3 has its CatchHandler @ 024c7a44 */
    UnityEngine_Texture2D___ctor_439e07c(lVar11,0x80,0x80,4,0,0);
    if (lVar11 != 0) {
      UnityEngine_Texture__set_wrapMode_4398ac8(lVar11,1,0);
      puVar8 = PTR_DAT_04cbd2b0;
                    /* try { // try from 024c78cc to 025c78d7 has its CatchHandler @ 024c7a40 */
                    /* try { // try from 024c78dc to 025c78e3 has its CatchHandler @ 024c7a3c */
      UnityEngine_Object__set_name_43c72ec(lVar11,*(undefined8 *)PTR_DAT_04cbd2b0,0);
                    /* try { // try from 024c78ec to 025c78f3 has its CatchHandler @ 024c7a28 */
      lVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,0x4000);
      uVar7 = _UNK_00e6a9b0;
      uVar6 = _UNK_00e69ce0;
      uVar16 = _UNK_00e69620;
      fVar5 = _UNK_00e20b44;
      fVar4 = _UNK_00e20a4c;
      fVar3 = _UNK_00e20590;
      fVar2 = _UNK_00e200e8;
      fVar1 = _UNK_00e1fe8c;
                    /* try { // try from 024c790c to 025c790f has its CatchHandler @ 024c7a2c */
                    /* try { // try from 024c7910 to 025c791f has its CatchHandler @ 024c7a4c */
      lVar17 = 0;
                    /* try { // try from 024c7930 to 025c7933 has its CatchHandler @ 024c7a20 */
                    /* try { // try from 024c7934 to 025c7947 has its CatchHandler @ 024c7a24 */
      lVar18 = 0;
                    /* try { // try from 024c7948 to 025c7a07 has its CatchHandler @ 024c7654 */
      uVar12 = NEON_fmov(0x3f800000,4);
      lVar14 = lVar13 + 0x20;
      do {
        lVar19 = 0;
        fVar20 = ((float)(int)lVar18 + 0.5) * 0.0078125;
        fVar20 = fVar20 + fVar20 + -1.0;
        do {
          fVar21 = ((float)(int)lVar19 + 0.5) * 0.0078125;
          fVar21 = fVar21 + fVar21 + -1.0;
          fVar24 = SQRT(fVar20 * fVar20 + fVar21 * fVar21);
          fVar21 = (fVar24 + (float)uVar16) * 32.0;
          fVar23 = (fVar24 + (float)((ulong)uVar16 >> 0x20)) * 32.0;
          iVar28 = -(uint)(fVar21 < 0.0);
          iVar30 = -(uint)(fVar23 < 0.0);
          uVar22 = CONCAT44(fVar23,fVar21) ^
                   (CONCAT44(fVar23,fVar21) ^ uVar12) &
                   CONCAT44(-(uint)((float)(uVar12 >> 0x20) < fVar23),
                            -(uint)((float)uVar12 < fVar21));
          fVar23 = (float)CONCAT13((byte)(uVar22 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                   CONCAT12((byte)(uVar22 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                            CONCAT11((byte)(uVar22 >> 8) &
                                                     ~(byte)((uint)iVar28 >> 8),
                                                     (byte)uVar22 & ~(byte)iVar28)));
          fVar29 = (float)(CONCAT17((byte)(uVar22 >> 0x38) & ~(byte)((uint)iVar30 >> 0x18),
                                    CONCAT16((byte)(uVar22 >> 0x30) & ~(byte)((uint)iVar30 >> 0x10),
                                             CONCAT15((byte)(uVar22 >> 0x28) &
                                                      ~(byte)((uint)iVar30 >> 8),
                                                      CONCAT14((byte)(uVar22 >> 0x20) &
                                                               ~(byte)iVar30,fVar23)))) >> 0x20);
          fVar21 = 0.0;
          if (0.0 <= fVar29) {
            fVar21 = fVar29;
          }
                    /* try { // try from 024c7a08 to 025c7a0b has its CatchHandler @ 024c7a50 */
                    /* try { // try from 024c7a0c to 025c7a0f has its CatchHandler @ 024c7a48 */
                    /* try { // try from 024c7a10 to 025c7a13 has its CatchHandler @ 024c7a38 */
                    /* try { // try from 024c7a14 to 025c7a17 has its CatchHandler @ 024c7a34 */
                    /* try { // try from 024c7a18 to 025c7a73 has its CatchHandler @ 024c7654 */
          fVar29 = fVar21 * fVar21 * 3.0 - fVar21 * fVar21 * (fVar21 + fVar21);
                    /* catch() { ... } // from try @ 024c7930 with catch @ 024c7a20 */
                    /* catch() { ... } // from try @ 024c7934 with catch @ 024c7a24 */
                    /* catch() { ... } // from try @ 024c78ec with catch @ 024c7a28 */
          fVar29 = fVar29 + (1.0 - fVar29) * 0.0;
                    /* catch() { ... } // from try @ 024c790c with catch @ 024c7a2c */
                    /* catch() { ... } // from try @ 024c78b0 with catch @ 024c7a30 */
          fVar21 = 1.0;
          if (fVar29 <= 1.0) {
            fVar21 = fVar29;
          }
                    /* catch() { ... } // from try @ 024c7a14 with catch @ 024c7a34 */
          fVar27 = 0.0;
                    /* catch() { ... } // from try @ 024c7a10 with catch @ 024c7a38 */
          if (0.0 <= fVar29) {
            fVar27 = fVar21;
          }
                    /* catch() { ... } // from try @ 024c78dc with catch @ 024c7a3c */
          fVar21 = 0.0;
                    /* catch() { ... } // from try @ 024c78cc with catch @ 024c7a40 */
          if (0.0 <= fVar23) {
            fVar21 = fVar23;
          }
                    /* catch() { ... } // from try @ 024c78b4 with catch @ 024c7a44 */
                    /* catch() { ... } // from try @ 024c7a0c with catch @ 024c7a48 */
                    /* catch() { ... } // from try @ 024c7910 with catch @ 024c7a4c */
                    /* catch() { ... } // from try @ 024c7a08 with catch @ 024c7a50 */
                    /* catch() { ... } // from try @ 024c7878 with catch @ 024c7a54 */
                    /* catch() { ... } // from try @ 024c7814 with catch @ 024c7a58 */
          fVar21 = fVar21 * fVar21 * 3.0 - fVar21 * fVar21 * (fVar21 + fVar21);
                    /* try { // try from 024c7a74 to 025c7a77 has its CatchHandler @ 024c7a80 */
          fVar21 = 1.0 - (fVar21 + (1.0 - fVar21) * 0.0);
          fVar23 = (float)uVar7 * fVar27 + (float)uVar6;
          fVar29 = (float)((ulong)uVar7 >> 0x20) * fVar27 + (float)((ulong)uVar6 >> 0x20);
          uVar22 = CONCAT44(fVar29,fVar23);
          fVar27 = fVar27 * fVar1 + fVar2;
                    /* catch() { ... } // from try @ 024c7a74 with catch @ 024c7a80 */
                    /* try { // try from 024c7a84 to 025c7a8b has its CatchHandler @ 024c7a94 */
          if (fVar21 < 1.0) {
                    /* try { // try from 024c7a8c to 025c7a97 has its CatchHandler @ 024c7654 */
            fVar23 = fVar23 * fVar21;
            fVar29 = fVar29 * fVar21;
            fVar27 = fVar21 * fVar27;
                    /* catch() { ... } // from try @ 024c7a84 with catch @ 024c7a94 */
            fVar25 = (fVar24 + fVar5) / fVar4;
            fVar24 = 1.0;
            if (fVar25 <= 1.0) {
              fVar24 = fVar25;
            }
            fVar26 = 0.0;
            if (0.0 <= fVar25) {
              fVar26 = fVar24;
            }
            fVar24 = 0.0;
            if (0.0 <= fVar26) {
              fVar24 = fVar26;
            }
            fVar24 = fVar24 * fVar24 * 3.0 - fVar24 * fVar24 * (fVar24 + fVar24);
            fVar21 = fVar21 + (1.0 - (fVar24 + (1.0 - fVar24) * 0.0)) * fVar3 * (1.0 - fVar21);
            fVar27 = fVar27 / fVar21;
            uVar22 = CONCAT44(fVar29 / fVar21,fVar23 / fVar21);
          }
          uVar10 = FUN_023e4c88(uVar22,uVar22 >> 0x20,fVar27,fVar21,0);
          if (lVar13 == 0) goto LAB_024c7cd4;
          if ((ulong)*(uint *)(lVar13 + 0x18) <= (ulong)(lVar17 + lVar19)) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined4 *)(lVar14 + lVar19 * 4) = uVar10;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0x80);
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x80;
        lVar14 = lVar14 + 0x200;
      } while (lVar18 != 0x80);
      UnityEngine_Texture2D__SetPixels32_439edd8(lVar11,lVar13,0);
      UnityEngine_Texture2D__Apply_439ea14(lVar11,0,1,0);
      if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar16 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cbcf68,0);
      lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
      UnityEngine_Material___ctor_437b5a8(lVar14,uVar16,0);
      if (lVar14 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar14,*(undefined8 *)puVar8,0);
        lVar18 = *(long *)puVar9;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar18 = *(long *)puVar9;
        }
        plVar15 = (long *)(*(long *)(lVar18 + 0xb8) + 0x28);
        *plVar15 = lVar14;
        thunk_FUN_02134474(plVar15,lVar14);
        lVar14 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
        if (lVar14 != 0) {
          UnityEngine_Material__SetTexture_43831cc(lVar14,*(undefined8 *)PTR_DAT_04cb72b0,lVar11,0);
          lVar11 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
          if (lVar11 != 0) {
            UnityEngine_Material__SetColor_43830b0
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar11,
                       *(undefined8 *)PTR_DAT_04cb68b8,0);
            lVar11 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
            if (lVar11 != 0) {
              UnityEngine_Material__SetFloat_4383048
                        (0x41000000,lVar11,*(undefined8 *)PTR_DAT_04cbd2a8,0);
              lVar11 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
              if (lVar11 != 0) {
                UnityEngine_Material__set_renderQueue_437c9d8(lVar11,0xe10,0);
                goto LAB_024c7c9c;
              }
            }
          }
        }
      }
    }
LAB_024c7cd4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 024c7878 to 025c789f has its CatchHandler @ 024c7a54 */
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
LAB_024c7c9c:
  return *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x28);
}

