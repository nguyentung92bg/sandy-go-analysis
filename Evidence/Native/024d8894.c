/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Build
void Dino_BusSand_View_PaintingLayer__Build (Dino_BusSand_View_PaintingLayer_o* __this, Dino_BusSand_Core_SandGrid_o* grid, float gwx, float gw, UnityEngine_Vector2_o paper, UnityEngine_Shader_o* shader, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Build
   void Dino_BusSand_View_PaintingLayer__Build (Dino_BusSand_View_PaintingLayer_o* __this,
   Dino_BusSand_Core_SandGrid_o* grid, float gwx, float gw, UnityEngine_Vector2_o paper,
   UnityEngine_Shader_o* shader, const MethodInfo* method); */

void Dino_BusSand_View_PaintingLayer__Build_23d8894
               (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
               undefined8 param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  int iVar23;
  ulong uVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  undefined4 uVar31;
  int iVar32;
  float fVar33;
  undefined8 uVar34;
  
  if ((bRam0000000004f9ca33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb72d0);
    FUN_02132f7c(PTR_DAT_04cb72d8);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbc398);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbc170);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cbd7d8);
    FUN_02132f7c(PTR_DAT_04cbd7e0);
    FUN_02132f7c(PTR_DAT_04cbd7e8);
    FUN_02132f7c(PTR_DAT_04cbd7f0);
                    /* try { // try from 024d89a8 to 025d89af has its CatchHandler @ 024d8a10 */
    FUN_02132f7c(PTR_DAT_04cbd7f8);
                    /* try { // try from 024d89b0 to 025d8a03 has its CatchHandler @ 024d8834 */
    FUN_02132f7c(PTR_DAT_04cbd800);
    FUN_02132f7c(PTR_DAT_04cbd808);
    FUN_02132f7c(PTR_DAT_04cbd810);
    FUN_02132f7c(PTR_DAT_04cbd818);
    FUN_02132f7c(PTR_DAT_04cbd820);
    FUN_02132f7c(PTR_DAT_04cbd828);
    bRam0000000004f9ca33 = 1;
  }
  if (param_6 != 0) {
                    /* try { // try from 024d8a04 to 025d8a07 has its CatchHandler @ 024d8a0c */
                    /* try { // try from 024d8a08 to 025d8a2b has its CatchHandler @ 024d8834 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d8a04 with catch @ 024d8a0c
                        */
    uVar34 = *(undefined8 *)(param_6 + 0x10);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d89a8 with catch @ 024d8a10
                        */
    uVar11 = *(undefined8 *)PTR_DAT_04caa148;
    *(undefined8 *)(param_5 + 0x68) = uVar34;
    lVar12 = thunk_FUN_0216e89c(uVar11);
    UnityEngine_Mesh___ctor_4389e48(lVar12,0);
    puVar6 = PTR_DAT_04cabdb8;
    if (lVar12 != 0) {
                    /* try { // try from 024d8a2c to 025d8a2f has its CatchHandler @ 024d8a48 */
                    /* try { // try from 024d8a30 to 025d8a4b has its CatchHandler @ 024d8834 */
                    /* catch() { ... } // from try @ 024d8a2c with catch @ 024d8a48 */
      UnityEngine_Object__set_name_43c72ec(lVar12,*(undefined8 *)PTR_DAT_04cbd800,0);
                    /* try { // try from 024d8a4c to 025d8a53 has its CatchHandler @ 024d8a5c */
                    /* try { // try from 024d8a54 to 025d8a5f has its CatchHandler @ 024d8834 */
      plVar19 = (long *)(param_5 + 0x40);
      *plVar19 = lVar12;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024d8a4c with catch @ 024d8a5c
                        */
      thunk_FUN_02134474(plVar19,lVar12);
      lVar20 = *plVar19;
      lVar12 = FUN_02133068(*(undefined8 *)puVar6,4);
      if (lVar12 != 0) {
        uVar17 = *(uint *)(lVar12 + 0x18);
        if (uVar17 != 0) {
          uVar11 = NEON_scvtf(uVar34,4);
          *(undefined4 *)(lVar12 + 0x24) = 0;
          param_1 = param_1 * (float)uVar11;
          param_2 = param_2 * (float)((ulong)uVar11 >> 0x20);
          fVar26 = (param_3 - param_1) * 0.5;
          fVar28 = (param_4 - param_2) * 0.5;
          iVar29 = -(uint)(fVar26 < 0.0);
          iVar32 = -(uint)(fVar28 < 0.0);
          fVar30 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                   CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                            ~(byte)((uint)iVar29 >> 0x10),
                                            CONCAT11((byte)((uint)fVar26 >> 8) &
                                                     ~(byte)((uint)iVar29 >> 8),
                                                     SUB41(fVar26,0) & ~(byte)iVar29)));
          fVar26 = -fVar30;
          fVar33 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                    CONCAT16((byte)((uint)fVar28 >> 0x10) &
                                             ~(byte)((uint)iVar32 >> 0x10),
                                             CONCAT15((byte)((uint)fVar28 >> 8) &
                                                      ~(byte)((uint)iVar32 >> 8),
                                                      CONCAT14(SUB41(fVar28,0) & ~(byte)iVar32,
                                                               fVar30)))) >> 0x20);
          fVar28 = -fVar33;
          *(float *)(lVar12 + 0x20) = fVar26;
          *(float *)(lVar12 + 0x28) = fVar28;
          if (uVar17 != 1) {
            *(undefined4 *)(lVar12 + 0x30) = 0;
            *(float *)(lVar12 + 0x2c) = param_1 + fVar30;
            *(float *)(lVar12 + 0x34) = fVar28;
            if (2 < uVar17) {
              *(float *)(lVar12 + 0x38) = fVar26;
              *(undefined4 *)(lVar12 + 0x3c) = 0;
              *(float *)(lVar12 + 0x40) = param_2 + fVar33;
              if (uVar17 != 3) {
                *(float *)(lVar12 + 0x44) = param_1 + fVar30;
                *(undefined4 *)(lVar12 + 0x48) = 0;
                *(float *)(lVar12 + 0x4c) = param_2 + fVar33;
                puVar5 = PTR_DAT_04caed88;
                if (lVar20 != 0) {
                  UnityEngine_Mesh__set_vertices_4390e48(lVar20,lVar12,0);
                  lVar20 = *plVar19;
                  lVar12 = FUN_02133068(*(undefined8 *)puVar5,4);
                  if (lVar12 != 0) {
                    uVar17 = *(uint *)(lVar12 + 0x18);
                    if (uVar17 != 0) {
                      fVar26 = fVar26 / param_1;
                      fVar28 = fVar28 / param_2;
                      *(ulong *)(lVar12 + 0x20) = CONCAT44(fVar28,fVar26);
                      if (uVar17 != 1) {
                        uVar11 = NEON_fmov(0x3f800000,4);
                        fVar30 = fVar30 / param_1 + (float)uVar11;
                        fVar33 = fVar33 / param_2 + (float)((ulong)uVar11 >> 0x20);
                        *(ulong *)(lVar12 + 0x28) = CONCAT44(fVar28,fVar30);
                        if ((2 < uVar17) &&
                           (*(ulong *)(lVar12 + 0x30) = CONCAT44(fVar33,fVar26), uVar17 != 3)) {
                          *(ulong *)(lVar12 + 0x38) = CONCAT44(fVar33,fVar30);
                          if (lVar20 != 0) {
                            UnityEngine_Mesh__set_uv_439104c(lVar20,lVar12,0);
                            lVar20 = *plVar19;
                            lVar12 = FUN_02133068(*(undefined8 *)puVar6,4);
                            if (cRam0000000004f9bcf8 == '\0') {
                              FUN_02132f7c(PTR_DAT_04caa208);
                              cRam0000000004f9bcf8 = '\x01';
                            }
                            puVar5 = PTR_DAT_04caa208;
                            if (lVar12 != 0) {
                              uVar17 = *(uint *)(lVar12 + 0x18);
                              if (uVar17 != 0) {
                                uVar31 = *(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
                                *(undefined8 *)(lVar12 + 0x20) =
                                     *(undefined8 *)
                                      (*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
                                *(undefined4 *)(lVar12 + 0x28) = uVar31;
                                if ((uVar17 & 0xfffffffe) != 0) {
                                  uVar31 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20)
                                  ;
                                  *(undefined8 *)(lVar12 + 0x2c) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
                                  *(undefined4 *)(lVar12 + 0x34) = uVar31;
                                  if (2 < uVar17) {
                                    uVar31 = *(undefined4 *)
                                              (*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
                                    *(undefined8 *)(lVar12 + 0x38) =
                                         *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
                                    *(undefined4 *)(lVar12 + 0x40) = uVar31;
                                    if ((uVar17 & 0xfffffffc) != 0) {
                                      uVar31 = *(undefined4 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
                                      *(undefined8 *)(lVar12 + 0x44) =
                                           *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18)
                                      ;
                                      *(undefined4 *)(lVar12 + 0x4c) = uVar31;
                                      puVar7 = PTR_DAT_04cbc170;
                                      puVar5 = PTR_DAT_04caec70;
                                      if (lVar20 != 0) {
                                        UnityEngine_Mesh__set_normals_4390ef4(lVar20,lVar12,0);
                                        lVar12 = *plVar19;
                    /* try { // try from 024d8c90 to 025d8de7 has its CatchHandler @ 024d8c90
                       catch() { ... } // from try @ 024d8c90 with catch @ 024d8c90
                       catch() { ... } // from try @ 024d8e64 with catch @ 024d8c90
                       catch() { ... } // from try @ 024d9064 with catch @ 024d8c90
                       catch() { ... } // from try @ 024d909c with catch @ 024d8c90
                       catch() { ... } // from try @ 024d90c8 with catch @ 024d8c90 */
                                        uVar11 = FUN_02133068(*(undefined8 *)puVar5,6);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                                                  (uVar11,*(undefined8 *)puVar7,0);
                                        if (lVar12 != 0) {
                                          UnityEngine_Mesh__set_triangles_4393ee8(lVar12,uVar11,0);
                                          if (*plVar19 != 0) {
                                            UnityEngine_Mesh__RecalculateBounds_4395ccc(*plVar19,0);
                                            lVar12 = UnityEngine_Component__get_gameObject_43bcde8
                                                               (param_5,0);
                                            if ((lVar12 != 0) &&
                                               (lVar12 = 
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (lVar12,*(undefined8 *)PTR_DAT_04cb72d0)
                                               , lVar12 != 0)) {
                                              UnityEngine_MeshFilter__set_sharedMesh_4389470
                                                        (lVar12,*(undefined8 *)(param_5 + 0x40),0);
                                              lVar12 = UnityEngine_Component__get_gameObject_43bcde8
                                                                 (param_5,0);
                                              if ((lVar12 != 0) &&
                                                 (lVar12 = 
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (lVar12,*(undefined8 *)PTR_DAT_04cb72d8)
                                                 , puVar5 = PTR_DAT_04cb6a60, lVar12 != 0)) {
                                                UnityEngine_Renderer__set_shadowCastingMode_4373c54
                                                          (lVar12,0,0);
                                                UnityEngine_Renderer__set_receiveShadows_4373dcc
                                                          (lVar12,0,0);
                                                UnityEngine_Renderer__set_lightProbeUsage_4373e90
                                                          (lVar12,0,0);
                                                UnityEngine_Renderer__set_reflectionProbeUsage_4373f54
                                                          (lVar12,0,0);
                                                lVar20 = FUN_02133068(*(undefined8 *)puVar5,
                                                                      *(int *)(param_5 + 0x6c) *
                                                                      *(int *)(param_5 + 0x68));
                                                lVar13 = FUN_02133068(*(undefined8 *)puVar6,0x80);
                                                iVar29 = *(int *)(param_5 + 0x68);
                                                iVar32 = *(int *)(param_5 + 0x6c);
                                                if (0 < iVar32) {
                                                  iVar23 = 0;
                                                  do {
                                                    iVar2 = iVar23 + 1;
                                                    if (0 < iVar29) {
                                                      iVar32 = 0;
                                                      do {
                                                        bVar9 = 
                                                  Dino_BusSand_Core_SandGrid__ColorAt_24174dc
                                                            (param_6,iVar32,iVar23,0);
                    /* try { // try from 024d8de8 to 025d8def has its CatchHandler @ 024d9078 */
                                                  iVar3 = iVar32 + 1;
                                                  if (iVar3 < *(int *)(param_5 + 0x68)) {
                    /* try { // try from 024d8e04 to 025d8e0b has its CatchHandler @ 024d9068 */
                                                    bVar10 = 
                                                  Dino_BusSand_Core_SandGrid__ColorAt_24174dc
                                                            (param_6,iVar3,iVar23,0);
                                                  uVar17 = 0xff00ff00;
                    /* try { // try from 024d8e18 to 025d8e37 has its CatchHandler @ 024d907c */
                                                  if (bVar10 == bVar9) goto LAB_024d8e1c;
                                                  }
                                                  else {
LAB_024d8e1c:
                                                    if (iVar2 < *(int *)(param_5 + 0x6c)) {
                                                      bVar10 = 
                                                  Dino_BusSand_Core_SandGrid__ColorAt_24174dc
                                                            (param_6,iVar32,iVar2,0);
                                                  uVar17 = 0xff000000;
                    /* try { // try from 024d8e4c to 025d8e63 has its CatchHandler @ 024d906c */
                                                  if (bVar10 != bVar9) {
                                                    uVar17 = 0xff00ff00;
                                                  }
                                                  }
                                                  else {
                                                    uVar17 = 0xff000000;
                                                  }
                                                  }
                                                  if (lVar20 == 0) goto LAB_024d93bc;
                                                  uVar4 = iVar32 + iVar23 * *(int *)(param_5 + 0x68)
                                                  ;
                    /* try { // try from 024d8e64 to 025d9053 has its CatchHandler @ 024d8c90 */
                                                  if (*(uint *)(lVar20 + 0x18) <= uVar4)
                                                  goto LAB_024d93c0;
                                                  *(uint *)(lVar20 + (long)(int)uVar4 * 4 + 0x20) =
                                                       uVar17 | bVar9;
                                                  if (-1 < (char)bVar9) {
                                                    if (lVar13 == 0) goto LAB_024d93bc;
                                                    if (*(uint *)(lVar13 + 0x18) <= (uint)bVar9)
                                                    goto LAB_024d93c0;
                                                    puVar15 = (undefined8 *)
                                                              (lVar13 + 0x20 + (ulong)bVar9 * 0xc);
                                                    *puVar15 = CONCAT44((float)((ulong)*puVar15 >>
                                                                               0x20) + (float)iVar23
                                                                        ,(float)*puVar15 +
                                                                         (float)iVar32);
                                                    *(float *)(puVar15 + 1) =
                                                         *(float *)(puVar15 + 1) + 1.0;
                                                  }
                                                  iVar29 = *(int *)(param_5 + 0x68);
                                                  iVar32 = iVar3;
                                                  } while (iVar3 < iVar29);
                                                  iVar32 = *(int *)(param_5 + 0x6c);
                                                  }
                                                  iVar23 = iVar2;
                                                  } while (iVar2 < iVar32);
                                                }
                                                puVar6 = PTR_DAT_04cb4ef0;
                                                lVar14 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                             PTR_DAT_04cb4ef0);
                                                UnityEngine_Texture2D___ctor_439df00
                                                          (lVar14,iVar29,iVar32,4,0,0,0);
                                                puVar5 = PTR_DAT_04cbd810;
                                                if (lVar14 != 0) {
                                                  UnityEngine_Texture__set_filterMode_4398f60
                                                            (lVar14,1,0);
                                                  UnityEngine_Texture__set_wrapMode_4398ac8
                                                            (lVar14,1,0);
                                                  UnityEngine_Object__set_name_43c72ec
                                                            (lVar14,*(undefined8 *)puVar5,0);
                                                  plVar19 = (long *)(param_5 + 0x20);
                                                  *plVar19 = lVar14;
                                                  thunk_FUN_02134474(plVar19,lVar14);
                                                  if (*plVar19 != 0) {
                                                    UnityEngine_Texture2D__SetPixels32_439edd8
                                                              (*plVar19,lVar20,0);
                                                    puVar8 = PTR_DAT_04cbd7f8;
                                                    puVar7 = PTR_DAT_04cbbfb8;
                                                    puVar5 = PTR_DAT_04cb70d8;
                                                    if (*plVar19 != 0) {
                                                      UnityEngine_Texture2D__Apply_439ea14
                                                                (*plVar19,0,1,0);
                                                      lVar20 = FUN_02133068(*(undefined8 *)
                                                                             PTR_DAT_04cb6a60,0x80);
                                                      uVar24 = 0;
                                                      pfVar25 = (float *)(lVar13 + 0x28);
                                                      do {
                                                        if (uVar24 == 0) {
                                                          uVar16 = 0;
LAB_024d8ff0:
                                                          uVar31 = 0xffffffff;
                                                        }
                                                        else {
                                                          if (0x40 < uVar24) {
                                                            uVar16 = uVar24 & 0xffffffff;
                                                            goto LAB_024d8ff0;
                                                          }
                                                          uVar16 = 
                                                  Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
                                                  if ((uVar16 & 1) == 0) {
                                                    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    uVar31 = 
                                                  Dino_BusSand_Core_SandPalette__Color_24196fc
                                                            (uVar24 & 0xffffffff,0);
                                                  }
                                                  else {
                                                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                    Dino_BusSand_View_PackPalette__Main_2390528
                                                              (uVar24 & 0xffffffff,0);
                                                    uVar31 = FUN_023e4c88(0);
                                                  }
                                                  uVar16 = uVar24 & 0xffffffff;
                                                  }
                                                  if (lVar20 == 0) goto LAB_024d93bc;
                    /* try { // try from 024d9054 to 025d9057 has its CatchHandler @ 024d9074 */
                    /* try { // try from 024d9058 to 025d905b has its CatchHandler @ 024d9070 */
                    /* try { // try from 024d905c to 025d9063 has its CatchHandler @ 024d9064 */
                                                  if (*(uint *)(lVar20 + 0x18) <= uVar16)
                                                  goto LAB_024d93c0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d905c with catch @ 024d9064
                       try { // try from 024d9064 to 025d9097 has its CatchHandler @ 024d8c90 */
                                                  *(undefined4 *)(lVar20 + uVar16 * 4 + 0x20) =
                                                       uVar31;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d8e04 with catch @ 024d9068
                        */
                                                  if (lVar13 == 0) goto LAB_024d93bc;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d8e4c with catch @ 024d906c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d9058 with catch @ 024d9070
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d9054 with catch @ 024d9074
                        */
                                                  if (*(uint *)(lVar13 + 0x18) <= uVar24)
                                                  goto LAB_024d93c0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d8de8 with catch @ 024d9078
                        */
                                                  fVar27 = *pfVar25;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024d8e18 with catch @ 024d907c
                        */
                                                  if (fVar27 <= 0.0) {
                    /* try { // try from 024d9098 to 025d909b has its CatchHandler @ 024d90bc */
                    /* try { // try from 024d909c to 025d90bf has its CatchHandler @ 024d8c90 */
                                                    uVar16 = (ulong)(uint)((float)*(int *)(param_5 +
                                                                                          0x68) *
                                                                          0.5);
                                                  }
                                                  else {
                                                    uVar16 = CONCAT44((float)((ulong)*(undefined8 *)
                                                                                      (pfVar25 + -2)
                                                                             >> 0x20) / fVar27,
                                                                      (float)*(undefined8 *)
                                                                              (pfVar25 + -2) /
                                                                      fVar27);
                                                  }
                                                  lVar14 = *(long *)(param_5 + 0x60);
                                                  if (lVar14 == 0) goto LAB_024d93bc;
                                                  if (*(uint *)(lVar14 + 0x18) <= uVar24)
                                                  goto LAB_024d93c0;
                    /* catch() { ... } // from try @ 024d9098 with catch @ 024d90bc */
                    /* try { // try from 024d90c0 to 025d90c7 has its CatchHandler @ 024d90d0 */
                                                  *(ulong *)(lVar14 + uVar24 * 8 + 0x20) = uVar16;
                                                  lVar14 = *(long *)(param_5 + 0x48);
                    /* try { // try from 024d90c8 to 025d90d3 has its CatchHandler @ 024d8c90 */
                                                  if (lVar14 == 0) goto LAB_024d93bc;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024d90c0 with catch @ 024d90d0
                        */
                                                  if (*(uint *)(lVar14 + 0x18) <= uVar24)
                                                  goto LAB_024d93c0;
                                                  lVar1 = uVar24 * 4;
                                                  uVar24 = uVar24 + 1;
                                                  pfVar25 = pfVar25 + 3;
                                                  *(undefined4 *)(lVar14 + lVar1 + 0x20) =
                                                       0xbf800000;
                                                  } while (uVar24 != 0x80);
                                                  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar6)
                                                  ;
                                                  UnityEngine_Texture2D___ctor_439df00
                                                            (lVar13,0x80,1,4,0,0,0);
                                                  if (lVar13 != 0) {
                                                    UnityEngine_Texture__set_filterMode_4398f60
                                                              (lVar13,0,0);
                                                    UnityEngine_Texture__set_wrapMode_4398ac8
                                                              (lVar13,1,0);
                                                    UnityEngine_Object__set_name_43c72ec
                                                              (lVar13,*(undefined8 *)
                                                                       PTR_DAT_04cbd7f0,0);
                                                    plVar21 = (long *)(param_5 + 0x30);
                                                    *plVar21 = lVar13;
                                                    thunk_FUN_02134474(plVar21,lVar13);
                                                    if (*plVar21 != 0) {
                                                      UnityEngine_Texture2D__SetPixels32_439edd8
                                                                (*plVar21,lVar20,0);
                                                      if (*plVar21 != 0) {
                                                        UnityEngine_Texture2D__Apply_439ea14
                                                                  (*plVar21,0,1,0);
                                                        lVar20 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                                     puVar6);
                                                        UnityEngine_Texture2D___ctor_439df00
                                                                  (lVar20,0x80,1,4,0,0,0);
                                                        if (lVar20 != 0) {
                                                                                                                    
                                                  UnityEngine_Texture__set_filterMode_4398f60
                                                            (lVar20,0,0);
                                                  UnityEngine_Texture__set_wrapMode_4398ac8
                                                            (lVar20,1,0);
                                                  UnityEngine_Object__set_name_43c72ec
                                                            (lVar20,*(undefined8 *)PTR_DAT_04cbd820,
                                                             0);
                                                  plVar22 = (long *)(param_5 + 0x28);
                                                  *plVar22 = lVar20;
                                                  thunk_FUN_02134474(plVar22,lVar20);
                                                  Dino_BusSand_View_PaintingLayer__WriteWash_23d93c4
                                                            (param_5);
                                                  lVar20 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                               PTR_DAT_04cab588);
                                                  UnityEngine_Material___ctor_437b5a8
                                                            (lVar20,param_7,0);
                                                  if (lVar20 != 0) {
                                                    UnityEngine_Object__set_name_43c72ec
                                                              (lVar20,*(undefined8 *)
                                                                       PTR_DAT_04cbd828,0);
                                                    plVar18 = (long *)(param_5 + 0x38);
                                                    *plVar18 = lVar20;
                                                    thunk_FUN_02134474(plVar18,lVar20);
                                                    if (*plVar18 != 0) {
                                                      UnityEngine_Material__SetTexture_43831cc
                                                                (*plVar18,*(undefined8 *)
                                                                           PTR_DAT_04cbd808,*plVar19
                                                                 ,0);
                                                      if (*plVar18 != 0) {
                                                        UnityEngine_Material__SetTexture_43831cc
                                                                  (*plVar18,*(undefined8 *)
                                                                             PTR_DAT_04cbd7d8,
                                                                   *plVar22,0);
                                                        if (*plVar18 != 0) {
                                                          UnityEngine_Material__SetTexture_43831cc
                                                                    (*plVar18,*(undefined8 *)
                                                                               PTR_DAT_04cbd818,
                                                                     *plVar21,0);
                                                          lVar20 = *plVar18;
                                                          if (*(int *)(*(long *)PTR_DAT_04cbc398 +
                                                                      0xe4) == 0) {
                                                            thunk_FUN_0218fdac();
                                                          }
                                                          uVar11 = 
                                                  Dino_BusSand_View_PaintingLayer__Noise_23d9848();
                                                  if (lVar20 != 0) {
                                                    UnityEngine_Material__SetTexture_43831cc
                                                              (lVar20,*(undefined8 *)
                                                                       PTR_DAT_04cbd7e0,uVar11,0);
                                                    if (*plVar18 != 0) {
                                                      iVar29 = *(int *)(param_5 + 0x6c);
                                                      if (iVar29 < 2) {
                                                        iVar29 = 1;
                                                      }
                                                      fVar27 = (float)*(int *)(param_5 + 0x68) /
                                                               (float)iVar29;
                                                      UnityEngine_Material__SetFloat_4383048
                                                                (fVar27,*plVar18,
                                                                 *(undefined8 *)PTR_DAT_04cbd7e8,0);
                                                      if (*(long *)(param_5 + 0x38) != 0) {
                                                        fVar27 = fVar27 * (fVar30 - fVar26);
                                                        UnityEngine_Material__SetFloat_4383048
                                                                  (SQRT((fVar33 - fVar28) *
                                                                        (fVar33 - fVar28) +
                                                                        fVar27 * fVar27) *
                                                                   _UNK_00e20ae0,
                                                                   *(long *)(param_5 + 0x38),
                                                                   *(undefined8 *)puVar8,0);
                                                        lVar20 = *plVar18;
                                                        if ((bRam0000000004fa68bc & 1) == 0) {
                                                          FUN_02132f7c(PTR_DAT_04cf67a0,lVar20,0);
                                                          FUN_02132f7c(PTR_DAT_04cf6618);
                                                          bRam0000000004fa68bc = 1;
                                                        }
                                                        if (lVar12 != 0) {
                                                          lVar13 = *(long *)(lVar12 + 0x10);
                                                          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                                                                                                        
                                                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                                            (lVar12,0);
                                                  }
                                                  if (*(long *)(*(long *)PTR_DAT_04cf6618 + 0x38) ==
                                                      0) {
                                                    FUN_0216b4cc();
                                                  }
                                                  uVar11 = 0;
                                                  if (lVar20 != 0) {
                                                    uVar11 = *(undefined8 *)(lVar20 + 0x10);
                                                  }
                                                  if (pcRam0000000004fa68f0 == (code *)0x0) {
                                                    pcRam0000000004fa68f0 =
                                                         (code *)FUN_02132f40(&UNK_00e421fa);
                                                  }
                    /* WARNING: Could not recover jumptable at 0x044733d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*pcRam0000000004fa68f0)(lVar13,uVar11);
                                                  return;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  FUN_02133224();
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_024d93bc;
                                    }
                                  }
                                }
                              }
                              goto LAB_024d93c0;
                            }
                          }
                          goto LAB_024d93bc;
                        }
                      }
                    }
                    goto LAB_024d93c0;
                  }
                }
                goto LAB_024d93bc;
              }
            }
          }
        }
LAB_024d93c0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_024d93bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

