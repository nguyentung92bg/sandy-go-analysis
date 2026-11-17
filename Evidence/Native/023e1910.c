/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Landed
void Dino_BusSand_App_UI_HomeBus__Landed (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Landed
   void Dino_BusSand_App_UI_HomeBus__Landed (Dino_BusSand_App_UI_HomeBus_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Landed_22e1910(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  puVar9 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c40e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c40e = 1;
  }
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar9;
  }
  if (**(long **)(lVar12 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__LidThunk_23833a0(ZEXT816(0),**(long **)(lVar12 + 0xb8),0);
  }
  puVar9 = PTR_DAT_04cb7200;
  lVar12 = *(long *)(param_1 + 0x18);
  if (lVar12 != 0) {
    uVar13 = Dino_BusSand_App_UI_HomeToonRig__get_HasCap_22f6144(lVar12,0);
    uVar19 = _UNK_00e205f0;
    if ((uVar13 & 1) == 0) {
      uVar19 = _UNK_00e20590;
    }
    Dino_BusSand_App_UI_HomeToonRig__Kick_22f5958(uVar19,_UNK_00e205f0,lVar12,0);
    lVar12 = *(long *)puVar9;
    lVar16 = *(long *)(param_1 + 0x20);
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) + _UNK_00e20864;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar9;
    }
    puVar11 = PTR_DAT_04cb71f0;
    puVar10 = PTR_DAT_04cb71e8;
    if (lVar16 != 0) {
      auVar23 = *(undefined1 (*) [16])(*(long *)(lVar12 + 0xb8) + 0x40);
      uStack_d0 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x50);
      uStack_d8 = auVar23._8_8_;
      uStack_e0 = auVar23._0_8_;
      Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar16,&uStack_e0,0);
      lVar17 = *(long *)(param_1 + 0x20);
      lVar12 = FUN_02133068(*(undefined8 *)puVar10,2);
      uStack_f8 = 0;
      uStack_f0 = 0;
      lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
      uStack_e8 = 0;
      uStack_110 = *(undefined8 *)(lVar16 + 0x68);
      uStack_108 = *(undefined8 *)(lVar16 + 0x70);
      uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(lVar16 + 0x78));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (&uStack_f8,&uStack_110,*(undefined8 *)puVar11);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x18) != 0) {
          *(undefined8 *)(lVar12 + 0x30) = uStack_e8;
          *(undefined8 *)(lVar12 + 0x28) = uStack_f0;
          *(undefined8 *)(lVar12 + 0x20) = uStack_f8;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          lVar16 = *(long *)(*(long *)puVar9 + 0xb8);
                    /* try { // try from 023e1b10 to 024e1d63 has its CatchHandler @ 023e1b10
                       catch() { ... } // from try @ 023e1b10 with catch @ 023e1b10
                       catch() { ... } // from try @ 023e1de8 with catch @ 023e1b10
                       catch() { ... } // from try @ 023e1e3c with catch @ 023e1b10
                       catch() { ... } // from try @ 023e1e68 with catch @ 023e1b10
                       catch() { ... } // from try @ 023e1e94 with catch @ 023e1b10 */
          uStack_c0 = *(undefined8 *)(lVar16 + 0x54);
          uStack_b8 = *(undefined8 *)(lVar16 + 0x5c);
          uStack_b0 = *(undefined4 *)(lVar16 + 100);
          System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                    (&uStack_110,&uStack_c0,*(undefined8 *)puVar11);
          if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar12 + 0x48) = uStack_100;
            *(undefined8 *)(lVar12 + 0x40) = uStack_108;
            *(undefined8 *)(lVar12 + 0x38) = uStack_110;
            if (lVar17 != 0) {
              Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar17,lVar12,0);
              *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x88);
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar13 = Dino_BusSand_App_UI_HomeToonRig__get_HasCap_22f6144
                                   (*(long *)(param_1 + 0x18),0);
                puVar10 = PTR_DAT_04caa208;
                puVar9 = PTR_DAT_04caa200;
                uVar19 = _UNK_00e20aec;
                fVar8 = _UNK_00e20a08;
                fVar7 = _UNK_00e20994;
                fVar6 = _UNK_00e207cc;
                fVar5 = _UNK_00e2047c;
                fVar4 = _UNK_00e20328;
                fVar3 = _UNK_00e202d4;
                fVar2 = _UNK_00e2027c;
                fVar1 = _UNK_00e1ffe0;
                if ((uVar13 & 1) != 0) {
                  NEON_fmov(0x3f800000,4);
                  iVar18 = 0;
                  do {
                    plVar14 = *(long **)(param_1 + 0x30);
                    if (plVar14 == (long *)0x0) goto LAB_023e1f2c;
                    lVar12 = *(long *)(param_1 + 0x18);
                    auVar23 = (**(code **)(*plVar14 + 0x1b8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                    if (lVar12 == 0) goto LAB_023e1f2c;
                    fVar29 = (float)auVar23._0_8_ * fVar3 + -2.0;
                    fVar26 = fVar1;
                    uVar20 = Dino_BusSand_App_UI_HomeToonRig__World_22f56bc(lVar12,0);
                    if (*(long *)(param_1 + 0x18) == 0) goto LAB_023e1f2c;
                    fVar30 = 0.0;
                    fVar27 = fVar1;
                    fVar21 = (float)Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                                              (*(long *)(param_1 + 0x18),0);
                    if (*(long *)(param_1 + 0x18) == 0) goto LAB_023e1f2c;
                    fVar33 = 0.0;
                    fVar32 = fVar1;
                    fVar22 = (float)Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                                              (ZEXT816(0),*(long *)(param_1 + 0x18),0);
                    if (cRam0000000004f9b65c == '\0') {
                      FUN_02132f7c(puVar9);
                      cRam0000000004f9b65c = '\x01';
                    }
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    fVar21 = fVar21 - fVar22;
                    fVar27 = fVar27 - fVar32;
                    fVar30 = fVar30 - fVar33;
                    fVar32 = SQRT(fVar30 * fVar30 + fVar21 * fVar21 + fVar27 * fVar27);
                    if (fVar32 <= fVar8) {
                      if (cRam0000000004f9b65d == '\0') {
                        FUN_02132f7c(puVar10);
                        cRam0000000004f9b65d = '\x01';
                      }
                      pfVar15 = *(float **)(*(long *)puVar10 + 0xb8);
                    /* try { // try from 023e1d88 to 024e1de7 has its CatchHandler @ 023e1e44 */
                      fVar21 = *pfVar15;
                      fVar27 = pfVar15[1];
                      fVar30 = pfVar15[2];
                    }
                    else {
                      fVar21 = fVar21 / fVar32;
                      fVar27 = fVar27 / fVar32;
                    /* try { // try from 023e1d64 to 024e1d6b has its CatchHandler @ 023e1e40 */
                      fVar30 = fVar30 / fVar32;
                    }
                    plVar14 = *(long **)(param_1 + 0x30);
                    if (plVar14 == (long *)0x0) goto LAB_023e1f2c;
                    lVar12 = *(long *)(param_1 + 0x28);
                    auVar23 = (**(code **)(*plVar14 + 0x1b8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                    if (cRam0000000004f9bcf8 == '\0') {
                      FUN_02132f7c(puVar10);
                      cRam0000000004f9bcf8 = '\x01';
                    }
                    plVar14 = *(long **)(param_1 + 0x30);
                    if (plVar14 == (long *)0x0) goto LAB_023e1f2c;
                    lVar16 = *(long *)(*(long *)puVar10 + 0xb8);
                    fVar32 = *(float *)(lVar16 + 0x20);
                    fVar33 = *(float *)(lVar16 + 0x18);
                    fVar22 = *(float *)(lVar16 + 0x1c);
                    /* try { // try from 023e1de8 to 024e1e37 has its CatchHandler @ 023e1b10 */
                    auVar24 = (**(code **)(*plVar14 + 0x1b8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                    plVar14 = *(long **)(param_1 + 0x30);
                    if (plVar14 == (long *)0x0) goto LAB_023e1f2c;
                    auVar25 = (**(code **)(*plVar14 + 0x1b8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                    plVar14 = *(long **)(param_1 + 0x30);
                    if (plVar14 == (long *)0x0) goto LAB_023e1f2c;
                    (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                    plVar14 = *(long **)(param_1 + 0x30);
                    /* try { // try from 023e1e38 to 024e1e3b has its CatchHandler @ 023e1e48 */
                    if ((plVar14 == (long *)0x0) ||
                       ((**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0)),
                       lVar12 == 0)) goto LAB_023e1f2c;
                    /* try { // try from 023e1e3c to 024e1e63 has its CatchHandler @ 023e1b10 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023e1d64 with catch @ 023e1e40
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023e1d88 with catch @ 023e1e44
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023e1e38 with catch @ 023e1e48
                        */
                    /* try { // try from 023e1e64 to 024e1e67 has its CatchHandler @ 023e1e88 */
                    /* try { // try from 023e1e68 to 024e1e8b has its CatchHandler @ 023e1b10 */
                    fVar28 = (float)auVar23._0_8_ * fVar2 + fVar7;
                    fVar31 = (float)auVar24._0_8_ * fVar5 + fVar4;
                    /* catch() { ... } // from try @ 023e1e64 with catch @ 023e1e88 */
                    /* try { // try from 023e1e8c to 024e1e93 has its CatchHandler @ 023e1e9c */
                    /* try { // try from 023e1e94 to 024e1e9f has its CatchHandler @ 023e1b10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023e1e8c with catch @ 023e1e9c
                        */
                    Dino_BusSand_App_UI_HomePuffs__Emit_22e5d7c
                              (uVar20,fVar26,fVar29,fVar21 * fVar28 + fVar33 * fVar31,
                               fVar27 * fVar28 + fVar22 * fVar31,fVar30 * fVar28 + fVar32 * fVar31,
                               (float)auVar25._0_8_ * fVar6 + 0.5,uVar19,lVar12,0);
                    iVar18 = iVar18 + 1;
                  } while (iVar18 != 6);
                }
                return;
              }
            }
            goto LAB_023e1f2c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_023e1f2c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

