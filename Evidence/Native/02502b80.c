/* IL2CPP: Dino.BusSand.View.WorldView$$BuildBackdrop
void Dino_BusSand_View_WorldView__BuildBackdrop (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$BuildBackdrop
   void Dino_BusSand_View_WorldView__BuildBackdrop (Dino_BusSand_View_WorldView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_WorldView__BuildBackdrop_2402b80(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 uVar24;
  int iVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 extraout_s0;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint uStack_b4;
  int iStack_b0;
  int iStack_ac;
  double dStack_a8;
  
  if ((bRam0000000004f9cb14 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cb95c8);
    FUN_02132f7c(PTR_DAT_04caf260);
    FUN_02132f7c(PTR_DAT_04cbe100);
    FUN_02132f7c(PTR_DAT_04cbe108);
    FUN_02132f7c(PTR_DAT_04cbe110);
    FUN_02132f7c(PTR_DAT_04cbc808);
    FUN_02132f7c(PTR_DAT_04cbe118);
    FUN_02132f7c(PTR_DAT_04cbe120);
    FUN_02132f7c(PTR_DAT_04cbe128);
    FUN_02132f7c(PTR_DAT_04cbe130);
    FUN_02132f7c(PTR_DAT_04cb9248);
    bRam0000000004f9cb14 = 1;
  }
  puVar10 = PTR_DAT_04cbc000;
  puVar9 = PTR_DAT_04cae330;
  lVar26 = *(long *)(param_1 + 0x20);
  iStack_b0 = 0;
  iStack_ac = 0;
  uStack_b4 = 0;
  if (lVar26 != 0) {
    fVar46 = (*(float *)(lVar26 + 0x7c) - *(float *)(lVar26 + 0x88) * *(float *)(lVar26 + 0x6c)) +
             *(float *)(lVar26 + 0x88) * *(float *)(lVar26 + 0x68) + *(float *)(lVar26 + 0x60) * 9.0
    ;
    fVar27 = (float)Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34(fVar46,lVar26,0);
    plVar15 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar9);
    System_Random___ctor_4840cc4(plVar15,5,0);
    lVar16 = FUN_02133068(*(undefined8 *)puVar10,5);
    uVar17 = _UNK_00e6af90;
    if (lVar16 != 0) {
      uVar1 = *(uint *)(lVar16 + 0x18);
      if (uVar1 != 0) {
        *(undefined8 *)(lVar16 + 0x28) = _UNK_00e6af98;
        *(undefined8 *)(lVar16 + 0x20) = uVar17;
        uVar17 = _UNK_00e6b830;
        if (uVar1 != 1) {
          *(undefined8 *)(lVar16 + 0x38) = _UNK_00e6b838;
          *(undefined8 *)(lVar16 + 0x30) = uVar17;
          uVar17 = _UNK_00e6b570;
          if (2 < uVar1) {
            *(undefined8 *)(lVar16 + 0x48) = _UNK_00e6b578;
            *(undefined8 *)(lVar16 + 0x40) = uVar17;
            uVar17 = _UNK_00e6bea0;
            if (uVar1 != 3) {
              *(undefined8 *)(lVar16 + 0x58) = _UNK_00e6bea8;
              *(undefined8 *)(lVar16 + 0x50) = uVar17;
              puVar9 = PTR_DAT_04cb6dd0;
              uVar17 = _UNK_00e6beb0;
              fVar7 = _UNK_00e20838;
              if (4 < uVar1) {
                *(undefined8 *)(lVar16 + 0x68) = _UNK_00e6beb8;
                *(undefined8 *)(lVar16 + 0x60) = uVar17;
                puVar11 = PTR_DAT_04cbe128;
                puVar10 = PTR_DAT_04cbe108;
                fVar27 = fVar27 * fVar7;
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar17 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                   (0x3f000000,_UNK_00e20994,_UNK_00e20830,0x3f800000,_UNK_00e20180,
                                    0,*(undefined8 *)puVar10,0);
                uVar18 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                   (_UNK_00e1fea8,_UNK_00e205e8,_UNK_00e20114,0x3f800000,
                                    _UNK_00e207cc,0,*(undefined8 *)puVar11,0);
                puVar9 = PTR_DAT_04cb95c8;
                fVar50 = _UNK_00e20998;
                fVar47 = _UNK_00e2098c;
                fVar44 = _UNK_00e2096c;
                fVar8 = _UNK_00e208e8;
                fVar6 = _UNK_00e208e0;
                fVar5 = _UNK_00e20660;
                fVar4 = _UNK_00e205ec;
                fVar51 = _UNK_00e20390;
                fVar45 = _UNK_00e2032c;
                fVar31 = _UNK_00e200f8;
                fVar32 = _UNK_00e200a8;
                fVar43 = _UNK_00e20000;
                fVar33 = _UNK_00e1fea4;
                    /* try { // try from 02502e28 to 02602f83 has its CatchHandler @ 02502e28
                       catch() { ... } // from try @ 02502e28 with catch @ 02502e28
                       catch() { ... } // from try @ 02502fdc with catch @ 02502e28
                       catch() { ... } // from try @ 02503008 with catch @ 02502e28
                       catch() { ... } // from try @ 02503038 with catch @ 02502e28
                       catch() { ... } // from try @ 0250305c with catch @ 02502e28 */
                iStack_ac = 0;
                if (0.0 < fVar27) {
                  if (plVar15 == (long *)0x0) goto LAB_02503934;
                  fVar52 = -fVar27;
                  do {
                    fVar28 = *(float *)(lVar26 + 0x60);
                    dVar34 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    fVar38 = *(float *)(lVar26 + 0x60);
                    dVar35 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    fVar39 = *(float *)(lVar26 + 0x60);
                    dVar36 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    fVar48 = *(float *)(lVar26 + 0x60);
                    dVar37 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    uVar1 = *(uint *)(lVar16 + 0x18);
                    iVar25 = 0;
                    if (uVar1 != 0) {
                      iVar25 = iStack_ac / (int)uVar1;
                    }
                    uVar2 = iStack_ac - iVar25 * uVar1;
                    if (uVar1 <= uVar2) goto LAB_02503930;
                    lVar21 = lVar16 + (long)(int)uVar2 * 0x10;
                    /* try { // try from 02502f84 to 02602f8b has its CatchHandler @ 02503014 */
                    uVar40 = *(undefined4 *)(lVar21 + 0x20);
                    uVar29 = *(undefined4 *)(lVar21 + 0x24);
                    uVar41 = *(undefined4 *)(lVar21 + 0x28);
                    uVar30 = *(undefined4 *)(lVar21 + 0x2c);
                    uVar19 = System_Int32__ToString_482d750(&iStack_ac,0);
                    /* try { // try from 02502fac to 02602faf has its CatchHandler @ 0250300c */
                    /* try { // try from 02502fb0 to 02602fdb has its CatchHandler @ 02503018 */
                    uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbe100,uVar19,0)
                    ;
                    iVar25 = *(int *)(lVar16 + 0x18);
                    iVar3 = 0;
                    if (iVar25 != 0) {
                      iVar3 = iStack_ac / iVar25;
                    }
                    _iStack_b0 = CONCAT44(iStack_ac,iStack_ac - iVar3 * iVar25);
                    uVar20 = System_Int32__ToString_482d750(&iStack_b0,0);
                    /* try { // try from 02502fdc to 02603003 has its CatchHandler @ 02502e28 */
                    uVar20 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbe118,uVar20,0)
                    ;
                    /* try { // try from 02503004 to 02603007 has its CatchHandler @ 02503010 */
                    /* try { // try from 02503008 to 02603033 has its CatchHandler @ 02502e28 */
                    if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02502fac with catch @ 0250300c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02503004 with catch @ 02503010
                        */
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6dd0);
                    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02502f84 with catch @ 02503014
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02502fb0 with catch @ 02503018
                        */
                    /* try { // try from 02503034 to 02603037 has its CatchHandler @ 02503050 */
                    /* try { // try from 02503038 to 02603053 has its CatchHandler @ 02502e28 */
                    /* catch() { ... } // from try @ 02503034 with catch @ 02503050 */
                    /* try { // try from 02503054 to 0260305b has its CatchHandler @ 02503064 */
                    /* try { // try from 0250305c to 02603067 has its CatchHandler @ 02502e28 */
                    fVar28 = fVar28 * ((float)dVar34 * 4.0 + 4.5);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02503054 with catch @ 02503064
                        */
                    fVar39 = fVar39 * ((float)dVar36 * 3.0 + 4.0);
                    fVar38 = fVar38 * ((float)dVar35 * fVar33 + fVar45);
                    fVar42 = fVar46 + fVar48 * (float)dVar37 * 3.0;
                    fVar49 = fVar52 + fVar28 * 0.5;
                    fVar48 = fVar39 * 0.5 + fVar42;
                    uVar20 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                       (uVar40,uVar29,uVar41,uVar30,fVar51,0,uVar20,0);
                    Dino_BusSand_View_WorldView__Box_2405ee4
                              (fVar49,fVar38 * 0.5,fVar48,fVar28 * fVar6,fVar38,fVar39,param_1,
                               uVar19,uVar20,0);
                    uVar19 = System_Int32__ToString_482d750(&iStack_ac,0);
                    uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbc808,uVar19,0)
                    ;
                    Dino_BusSand_View_WorldView__Box_2405ee4
                              (fVar49,fVar38 + *(float *)(lVar26 + 0x60) * fVar51,fVar48,
                               fVar28 * fVar44,*(float *)(lVar26 + 0x60) * fVar47,fVar39 * fVar50,
                               param_1,uVar19,uVar18,0);
                    fVar39 = *(float *)(lVar26 + 0x60);
                    if (cRam0000000004f9b891 == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa200);
                      cRam0000000004f9b891 = '\x01';
                    }
                    puVar10 = PTR_DAT_04cbc2b8;
                    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    fVar39 = fVar28 / (fVar39 * fVar4);
                    dVar35 = (double)fVar39;
                    dVar34 = (double)FUN_049b52f0(dVar35,&dStack_a8);
                    if (0.0 <= fVar39) {
                      if (dVar34 == 0.5) {
                        dVar34 = 1.0;
                        goto LAB_025031e8;
                      }
                      dVar35 = (double)(long)(dVar35 + 0.5);
                    }
                    else if (dVar34 == -0.5) {
                      dVar34 = -1.0;
LAB_025031e8:
                      dVar35 = dStack_a8;
                      if (((long)dStack_a8 & 1U) != 0) {
                        dVar35 = dStack_a8 + dVar34;
                      }
                    }
                    else {
                      dVar35 = (double)(long)(dVar35 + -0.5);
                    }
                    iVar25 = (int)dVar35;
                    lVar21 = *(long *)puVar10;
                    if (iVar25 < 3) {
                      iVar25 = 2;
                    }
                    iVar3 = 2;
                    if (dVar35 != INFINITY) {
                      iVar3 = iVar25;
                    }
                    if (*(int *)(lVar21 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar21 = *(long *)puVar10;
                    }
                    if ((*(char *)(*(long *)(lVar21 + 0xb8) + 1) != '\0') &&
                       (fVar39 = *(float *)(lVar26 + 0x60) * fVar5,
                       fVar39 < fVar38 + *(float *)(lVar26 + 0x60) * fVar32)) {
                      do {
                        iVar25 = 0;
                        do {
                          Dino_BusSand_View_WorldView__Box_2405ee4
                                    (fVar52 + (fVar28 * ((float)iVar25 + 0.5)) / (float)iVar3,fVar39
                                     ,fVar42 + fVar43,(fVar28 / (float)iVar3) * fVar8,
                                     *(float *)(lVar26 + 0x60) * fVar31,
                                     *(float *)(lVar26 + 0x60) * _UNK_00e20754,param_1,
                                     *(undefined8 *)puVar9,uVar17,0);
                          iVar25 = iVar25 + 1;
                        } while (iVar3 != iVar25);
                        fVar39 = fVar39 + *(float *)(lVar26 + 0x60) * _UNK_00e1fdec;
                      } while (fVar39 < fVar38 + *(float *)(lVar26 + 0x60) * fVar32);
                    }
                    fVar52 = fVar52 + fVar28;
                    iVar25 = iStack_ac + 1;
                    iStack_ac = iVar25;
                  } while ((fVar52 < fVar27) && (iVar25 < 0x18));
                }
                puVar14 = PTR_DAT_04cbe130;
                puVar13 = PTR_DAT_04cbe120;
                puVar12 = PTR_DAT_04cbe110;
                puVar11 = PTR_DAT_04cbc250;
                puVar10 = PTR_DAT_04caf260;
                puVar9 = PTR_DAT_04ca9ae8;
                fVar43 = _UNK_00e203f0;
                fVar33 = _UNK_00e2009c;
                if (plVar15 != (long *)0x0) {
                  iVar25 = 0;
                  do {
                    fVar31 = ((float)iVar25 + 0.5) / 14.0;
                    fVar32 = 1.0;
                    if (fVar31 <= 1.0) {
                      fVar32 = fVar31;
                    }
                    fVar45 = 0.0;
                    if (0.0 <= fVar31) {
                      fVar45 = fVar32;
                    }
                    dVar34 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    fVar31 = *(float *)(lVar26 + 0x60);
                    fVar32 = fVar31 * (float)(dVar34 + -0.5);
                    dVar34 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    fVar51 = *(float *)(lVar26 + 0x60);
                    fVar31 = fVar31 * ((float)dVar34 * fVar43 + fVar33);
                    dVar34 = (double)(**(code **)(*plVar15 + 0x1b8))
                                               (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                    Dino_BusSand_View_WorldView__Tree_24061ac
                              (((fVar27 + fVar27) * fVar45 - fVar27) + fVar32 + fVar32,0,
                               fVar46 - fVar51 * ((float)dVar34 * 3.0 + 2.0),param_1);
                    iVar25 = iVar25 + 1;
                  } while (iVar25 != 0xe);
                  fVar27 = (float)func_0x049b5430(*(float *)(lVar26 + 0x30) * 0.5 * _UNK_00e20a74);
                  fVar46 = fVar46 + *(float *)(lVar26 + 0x60) * 14.0;
                  uVar29 = 0;
                  fVar33 = (float)Dino_BusSand_View_StageLayout__Depth_23e6f00(0,lVar26,0);
                  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar17 = Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
                  fVar43 = fVar27 * fVar33 * _UNK_00e208e8;
                  fVar51 = fVar33 * (fVar27 + fVar27) * *(float *)(lVar26 + 0x10) * 1.25;
                  fVar32 = (float)*(undefined8 *)(lVar26 + 0x14) +
                           (float)*(undefined8 *)(lVar26 + 0x34) * fVar33 +
                           (float)*(undefined8 *)(lVar26 + 0x40) * fVar43;
                  fVar45 = (float)((ulong)*(undefined8 *)(lVar26 + 0x14) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar26 + 0x34) >> 0x20) * fVar33 +
                           (float)((ulong)*(undefined8 *)(lVar26 + 0x40) >> 0x20) * fVar43;
                  fVar43 = *(float *)(lVar26 + 0x1c) + fVar33 * *(float *)(lVar26 + 0x3c) +
                           fVar43 * *(float *)(lVar26 + 0x48);
                  uVar17 = Dino_BusSand_View_WorldView__Tex_2406868(uVar17,*(undefined8 *)puVar13);
                  if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6dd0);
                  }
                    /* try { // try from 0250357c to 0260374f has its CatchHandler @ 0250357c
                       catch() { ... } // from try @ 0250357c with catch @ 0250357c
                       catch() { ... } // from try @ 025037a8 with catch @ 0250357c
                       catch() { ... } // from try @ 02503800 with catch @ 0250357c
                       catch() { ... } // from try @ 02503830 with catch @ 0250357c
                       catch() { ... } // from try @ 0250385c with catch @ 0250357c */
                  uVar17 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                     (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                      *(undefined8 *)puVar10,uVar17,0,0xffffffd8,0);
                  Dino_BusSand_View_WorldView__FacingQuad_2406938
                            (CONCAT44(fVar45,fVar32),fVar45,fVar43,extraout_s0,uVar29,fVar46,fVar31,
                             fVar51,param_1,*(undefined8 *)puVar10,uVar17);
                  fVar8 = _UNK_00e208d0;
                  fVar6 = _UNK_00e206d4;
                  fVar5 = _UNK_00e205f8;
                  uVar30 = _UNK_00e2038c;
                  fVar4 = _UNK_00e201f4;
                  uStack_b4 = 0;
                  do {
                    iStack_b0 = (int)uStack_b4 % 5 + 1;
                    uVar17 = System_Int32__ToString_482d750(&iStack_b0,0);
                    uVar17 = System_String__Concat_46d2b84
                                       (*(undefined8 *)puVar12,uVar17,*(undefined8 *)puVar14,0);
                    plVar22 = (long *)Dino_BusSand_View_WorldView__Tex_2406868(uVar17,uVar17);
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar9);
                    }
                    uVar23 = UnityEngine_Object__op_Equality_43c6f30(plVar22,0,0);
                    if ((uVar23 & 1) == 0) {
                      dVar34 = (double)(**(code **)(*plVar15 + 0x1b8))
                                                 (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                      uVar2 = uStack_b4;
                      uVar1 = uStack_b4 & 1;
                      if (cRam0000000004f9c25f == '\0') {
                        FUN_02132f7c(PTR_DAT_04caa208);
                        cRam0000000004f9c25f = '\x01';
                      }
                      fVar44 = -0.25;
                      if (1 < (int)uVar2) {
                        fVar44 = fVar6;
                      }
                      fVar47 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x44);
                      uVar19 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x3c);
                      dVar35 = (double)(**(code **)(*plVar15 + 0x1b8))
                                                 (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                      uVar18 = *(undefined8 *)(lVar26 + 0x34);
                      uVar20 = *(undefined8 *)(lVar26 + 0x40);
                      fVar52 = *(float *)(lVar26 + 0x48);
                      fVar50 = *(float *)(lVar26 + 0x3c);
                      uVar17 = System_Int32__ToString_482d750(&uStack_b4,0);
                      puVar10 = PTR_DAT_04cb9248;
                    /* try { // try from 02503750 to 02603757 has its CatchHandler @ 0250380c */
                      uVar17 = System_String__Concat_46c82e0
                                         (*(undefined8 *)PTR_DAT_04cb9248,uVar17,0);
                      if (plVar22 == (long *)0x0) break;
                    /* try { // try from 02503778 to 0260377b has its CatchHandler @ 02503804 */
                      (**(code **)(*plVar22 + 0x1a8))(plVar22,*(undefined8 *)(*plVar22 + 0x1b0));
                    /* try { // try from 0250377c to 026037a7 has its CatchHandler @ 02503810 */
                      (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
                      uVar24 = System_Int32__ToString_482d750(&uStack_b4,0);
                    /* try { // try from 025037a8 to 026037fb has its CatchHandler @ 0250357c */
                      uVar24 = System_String__Concat_46c82e0(*(undefined8 *)puVar10,uVar24,0);
                      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6dd0);
                      }
                    /* try { // try from 025037fc to 026037ff has its CatchHandler @ 02503808 */
                    /* try { // try from 02503800 to 0260382b has its CatchHandler @ 0250357c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02503778 with catch @ 02503804
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 025037fc with catch @ 02503808
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02503750 with catch @ 0250380c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0250377c with catch @ 02503810
                        */
                      fVar28 = fVar51 * *(float *)(&UNK_00e6a750 + (ulong)(uVar1 == 0) * 4) +
                               fVar51 * (float)(dVar35 + -0.5) * fVar5;
                    /* try { // try from 0250382c to 0260382f has its CatchHandler @ 02503850 */
                      fVar44 = fVar27 * fVar33 * fVar7 * fVar44;
                    /* try { // try from 02503830 to 02603853 has its CatchHandler @ 0250357c */
                    /* catch() { ... } // from try @ 0250382c with catch @ 02503850 */
                    /* try { // try from 02503854 to 0260385b has its CatchHandler @ 02503864 */
                    /* try { // try from 0250385c to 02603867 has its CatchHandler @ 0250357c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02503854 with catch @ 02503864
                        */
                      fVar38 = (float)((ulong)uVar20 >> 0x20) * fVar44 +
                               fVar45 + (float)((ulong)uVar19 >> 0x20) * fVar28 +
                               (float)((ulong)uVar18 >> 0x20) * -0.5;
                      uVar24 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                         (0x3f800000,0x3f800000,0x3f800000,uVar30,uVar24,plVar22,0,
                                          0xffffffdd,0);
                      Dino_BusSand_View_WorldView__FacingQuad_2406938
                                (CONCAT44(fVar38,(float)uVar20 * fVar44 +
                                                 fVar32 + (float)uVar19 * fVar28 +
                                                 (float)uVar18 * -0.5),fVar38,
                                 fVar44 * fVar52 + fVar43 + fVar47 * fVar28 + fVar50 * -0.5,
                                 extraout_s0,uVar29,fVar46,fVar31,
                                 fVar51 * ((float)dVar34 * fVar4 + fVar8),param_1,uVar17,uVar24);
                    }
                    uStack_b4 = uStack_b4 + 1;
                    if (3 < (int)uStack_b4) {
                      return;
                    }
                  } while( true );
                }
                goto LAB_02503934;
              }
            }
          }
        }
      }
LAB_02503930:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02503934:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

