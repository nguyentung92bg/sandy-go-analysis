/* IL2CPP: Dino.BusSand.View.GameView$$Burst
void Dino_BusSand_View_GameView__Burst (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o c, int32_t kind, UnityEngine_Color32_o a, UnityEngine_Color32_o b, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Burst
   void Dino_BusSand_View_GameView__Burst (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector3_o c, int32_t kind, UnityEngine_Color32_o a, UnityEngine_Color32_o b, float h,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__Burst_23aa070
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,long param_5,
               int param_6,ulong param_7,undefined4 param_8)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
                    /* try { // try from 024aa088 to 025aa093 has its CatchHandler @ 024aaa84 */
  if ((bRam0000000004f9c94a & 1) == 0) {
                    /* try { // try from 024aa0c0 to 025aa0c7 has its CatchHandler @ 024aaa7c */
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c94a = 1;
  }
  fVar15 = _UNK_00e20178;
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_024aa7a8;
  fVar22 = *(float *)(*(long *)(param_5 + 0x30) + 0x5c);
  if (param_6 < 2) {
    if (param_6 == 0) {
                    /* try { // try from 024aa3a8 to 025aa3ab has its CatchHandler @ 024aab78 */
                    /* try { // try from 024aa3ac to 025aa3b7 has its CatchHandler @ 024aabb8 */
      Dino_BusSand_View_GameView__Sphere_23aa7ac
                (param_1,param_2,param_3,param_4 * _UNK_00e201f0,fVar22 * _UNK_00e20270,0x3fa00000,
                 param_4,0,param_5,param_7 & 0xffffffff,0xbe);
                    /* try { // try from 024aa3ec to 025aa3f3 has its CatchHandler @ 024aabd4 */
                    /* try { // try from 024aa400 to 025aa40f has its CatchHandler @ 024aac98 */
      uVar8 = 0x37;
      uVar12 = _UNK_00e200f8;
      fVar20 = _UNK_00e20174;
      fVar15 = _UNK_00e208d8;
      fVar21 = _UNK_00e20094;
      goto LAB_024aa410;
    }
    if (param_6 == 1) {
                    /* try { // try from 024aa1f8 to 025aa1ff has its CatchHandler @ 024aabd8 */
                    /* try { // try from 024aa210 to 025aa24f has its CatchHandler @ 024aac2c */
      Dino_BusSand_View_GameView__Sphere_23aa7ac
                (param_1,param_2,param_3,param_4 * _UNK_00e2065c,fVar22 * _UNK_00e20838,
                 _UNK_00e2068c,param_4,0,param_5,param_7 & 0xffffffff,0xa5);
      uVar8 = 0x3c;
      uVar9 = 0;
      fVar15 = _UNK_00e20328;
LAB_024aa25c:
      Dino_BusSand_View_GameView__Glitter_23aa98c
                (param_1,param_2,param_3,param_4 * fVar15,param_4,param_5,uVar8,uVar9);
    }
  }
  else {
                    /* try { // try from 024aa0f8 to 025aa10f has its CatchHandler @ 024aab8c */
    if (param_6 == 2) {
                    /* try { // try from 024aa294 to 025aa297 has its CatchHandler @ 024aab7c */
                    /* try { // try from 024aa298 to 025aa2a7 has its CatchHandler @ 024aabc8 */
      Dino_BusSand_View_GameView__Ring_23aacd0
                (param_1,param_2,param_3,param_4 * _UNK_00e201f0,fVar22 * _UNK_00e20270,
                 _UNK_00e20178,param_4,param_5,param_7 & 0xffffffff,0x6e);
                    /* try { // try from 024aa2dc to 025aa2df has its CatchHandler @ 024aab88 */
      uVar8 = 0x5f;
      uVar12 = 0x3f800000;
      fVar20 = _UNK_00e20a94;
      fVar21 = 0.0;
    }
    else {
      if (param_6 != 3) {
        if (param_6 == 4) {
                    /* try { // try from 024aa12c to 025aa13f has its CatchHandler @ 024aab18 */
          Dino_BusSand_View_GameView__Sphere_23aa7ac
                    (param_1,param_2,param_3,param_4 * _UNK_00e1ffa4,fVar22 * _UNK_00e205ec,
                     0x3fc00000,param_4,0,param_5,param_7 & 0xffffffff,300);
                    /* try { // try from 024aa15c to 025aa16f has its CatchHandler @ 024aab14 */
                    /* try { // try from 024aa17c to 025aa1a3 has its CatchHandler @ 024aab6c */
          Dino_BusSand_View_GameView__Ring_23aacd0
                    (param_1,param_2,param_3,param_4 * _UNK_00e2065c,fVar22 * _UNK_00e20838,
                     _UNK_00e208d8,param_4,param_5,param_8,0x78);
          Dino_BusSand_View_GameView__Willow_23aaf64
                    (param_1,param_2,param_3,param_4 * _UNK_00e208cc,param_4,param_5,0x96);
          uVar8 = 0x82;
          uVar9 = 1;
          fVar15 = _UNK_00e20390;
          goto LAB_024aa25c;
        }
        goto LAB_024aa414;
      }
                    /* try { // try from 024aa2f8 to 025aa2fb has its CatchHandler @ 024aab04 */
                    /* try { // try from 024aa2fc to 025aa30b has its CatchHandler @ 024aab84 */
                    /* try { // try from 024aa320 to 025aa327 has its CatchHandler @ 024aab48 */
                    /* try { // try from 024aa32c to 025aa33b has its CatchHandler @ 024aab44 */
      Dino_BusSand_View_GameView__Sphere_23aa7ac
                (param_1,param_2,param_3,param_4 * _UNK_00e205f0,fVar22 * _UNK_00e20660,
                 _UNK_00e208d8,param_4,0,param_5,param_7 & 0xffffffff,0x96);
                    /* try { // try from 024aa374 to 025aa377 has its CatchHandler @ 024aabcc */
      uVar8 = 0x69;
      uVar12 = _UNK_00e2038c;
      fVar20 = _UNK_00e20a94;
      fVar15 = 1.25;
      fVar21 = 0.25;
                    /* try { // try from 024aa360 to 025aa363 has its CatchHandler @ 024aab4c */
    }
LAB_024aa410:
    Dino_BusSand_View_GameView__Sphere_23aa7ac
              (param_1,param_2,param_3,param_4 * fVar20,fVar22 * fVar15,uVar12,param_4,fVar21,
               param_5,param_8,uVar8);
  }
LAB_024aa414:
  if (*(long *)(param_5 + 0xb8) != 0) {
                    /* try { // try from 024aa41c to 025aa423 has its CatchHandler @ 024aac9c */
    fVar15 = 2.0;
                    /* try { // try from 024aa434 to 025aa43b has its CatchHandler @ 024aaca0 */
    if (param_6 != 4) {
      fVar15 = _UNK_00e20838;
    }
    Dino_BusSand_View_Fx__Glow_2398b34
              (param_1,param_2,param_3,0x3f800000,0x3f800000,_UNK_00e208e0,_UNK_00e1fea8,fVar15);
    puVar2 = PTR_DAT_04cad568;
                    /* try { // try from 024aa460 to 025aa463 has its CatchHandler @ 024aac34 */
                    /* try { // try from 024aa464 to 025aa4a7 has its CatchHandler @ 024aacb8 */
    if (*(long *)(param_5 + 0xb8) != 0) {
      auVar13._8_8_ = param_7;
      auVar13._0_8_ = param_7;
      auVar13 = NEON_ushl(auVar13,_UNK_00e6b810,8);
      uVar8 = NEON_ucvtf(CONCAT44(auVar13._8_4_,auVar13._0_4_) & 0xff000000ff,4);
      fVar15 = (float)uVar8 / 255.0;
      fVar22 = (float)((ulong)uVar8 >> 0x20) / 255.0;
                    /* try { // try from 024aa4b4 to 025aa4cb has its CatchHandler @ 024aacb0 */
      fVar20 = (float)((uint)param_7 & 0xff) / 255.0;
      uVar8 = NEON_fmov(0x3f800000,4);
                    /* try { // try from 024aa4d0 to 025aa4db has its CatchHandler @ 024aac88 */
                    /* try { // try from 024aa4ec to 025aa50b has its CatchHandler @ 024aacb4 */
      fVar21 = fVar15 + ((float)((ulong)uVar8 >> 0x20) - fVar15) * 0.35;
                    /* try { // try from 024aa518 to 025aa51f has its CatchHandler @ 024aac4c */
      uVar12 = 0x40d00000;
      if (param_6 != 4) {
        uVar12 = 0x40800000;
      }
                    /* try { // try from 024aa528 to 025aa537 has its CatchHandler @ 024aac50 */
                    /* try { // try from 024aa538 to 025aa547 has its CatchHandler @ 024aac54 */
      Dino_BusSand_View_Fx__Glow_2398b34
                (param_1,param_2,param_3,CONCAT44(fVar21,fVar20 + ((float)uVar8 - fVar20) * 0.35),
                 fVar21,fVar22 + (1.0 - fVar22) * _UNK_00e20590,0x3f000000,uVar12);
      fVar17 = _UNK_00e20094;
                    /* try { // try from 024aa554 to 025aa55f has its CatchHandler @ 024aac58 */
      fVar21 = *(float *)(param_5 + 0x250);
      if (*(float *)(param_5 + 0x250) <= *(float *)(&UNK_00e69ff0 + (ulong)(param_6 == 4) * 4)) {
        fVar21 = *(float *)(&UNK_00e69ff0 + (ulong)(param_6 == 4) * 4);
      }
                    /* try { // try from 024aa574 to 025aa577 has its CatchHandler @ 024aac3c */
                    /* try { // try from 024aa578 to 025aa587 has its CatchHandler @ 024aac74 */
      fVar16 = ((float)(param_7 >> 0x18 & 0xff) / 255.0) * _UNK_00e20094;
      *(float *)(param_5 + 0x254) = fVar20 * _UNK_00e20094;
      *(float *)(param_5 + 0x250) = fVar21;
      *(ulong *)(param_5 + 600) = CONCAT44(fVar22 * 0.6,fVar15 * 0.6);
      *(float *)(param_5 + 0x260) = fVar16;
                    /* try { // try from 024aa598 to 025aa5af has its CatchHandler @ 024aac40 */
      Dino_BusSand_View_GameView__PanOf_23a7184(param_1,param_2,param_3,param_5);
                    /* try { // try from 024aa5b0 to 025aa5bb has its CatchHandler @ 024aac6c */
      if (param_6 != 4) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        if (**(long **)(lVar7 + 0xb8) != 0) {
                    /* try { // try from 024aa74c to 025aa7d3 has its CatchHandler @ 024aaca4 */
          Dino_BusSand_GameAudio__Firework_23843ac(**(long **)(lVar7 + 0xb8),0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(1);
        fVar15 = *(float *)(param_5 + 0x270);
        if (*(float *)(param_5 + 0x270) <= _UNK_00e20754) {
          fVar15 = _UNK_00e20754;
        }
        *(float *)(param_5 + 0x270) = fVar15;
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
                    /* try { // try from 024aa5d4 to 025aa5e7 has its CatchHandler @ 024aac78 */
        cRam0000000004f9b94e = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
                    /* try { // try from 024aa5f4 to 025aa5ff has its CatchHandler @ 024aac68 */
      if (**(long **)(lVar7 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__FireworkBig_2384428(**(long **)(lVar7 + 0xb8),0);
      }
                    /* try { // try from 024aa60c to 025aa617 has its CatchHandler @ 024aac38 */
      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Haptics__Play_2388ed8(2);
      fVar15 = *(float *)(param_5 + 0x270);
      if (*(float *)(param_5 + 0x270) <= _UNK_00e207cc) {
        fVar15 = _UNK_00e207cc;
      }
                    /* try { // try from 024aa63c to 025aa647 has its CatchHandler @ 024aac7c */
      *(float *)(param_5 + 0x270) = fVar15;
      fVar15 = _UNK_00e2043c;
      if (*(long *)(param_5 + 0x30) != 0) {
        fVar22 = _UNK_00e2043c;
        fVar20 = fVar17;
        uVar12 = Dino_BusSand_View_StageLayout__BoardPoint_23e89d4
                           (_UNK_00e20844,_UNK_00e2043c,fVar17,*(long *)(param_5 + 0x30),0);
        if (*(long *)(param_5 + 0x30) != 0) {
                    /* try { // try from 024aa68c to 025aa693 has its CatchHandler @ 024aac44 */
          Dino_BusSand_View_StageLayout__BoardPoint_23e89d4(*(long *)(param_5 + 0x30),0);
          if (*(long *)(param_5 + 0xb8) != 0) {
            Dino_BusSand_View_Fx__Confetti_2399120
                      (uVar12,fVar22,fVar20,0x41300000,*(long *)(param_5 + 0xb8),0x78);
            lVar7 = *(long *)(param_5 + 0xb8);
            if (lVar7 != 0) {
                    /* try { // try from 024aa6c8 to 025aa6d7 has its CatchHandler @ 024aaca8 */
              uVar18 = (ulong)(uint)fVar17;
              iVar10 = 0x78;
                    /* try { // try from 024aa6e4 to 025aa6eb has its CatchHandler @ 024aac80 */
                    /* try { // try from 024aa6f4 to 025aa6fb has its CatchHandler @ 024aac84 */
              fVar19 = fVar15;
              plVar1 = (long *)PTR_DAT_04cbc100;
              puVar2 = PTR_DAT_04caa208;
              plVar3 = (long *)PTR_DAT_04caa200;
              fVar22 = _UNK_00e20a08;
              fVar20 = _UNK_00e20994;
              uVar12 = _UNK_00e2098c;
              fVar21 = _UNK_00e20660;
              fVar16 = _UNK_00e205ec;
              uVar4 = _UNK_00e204e8;
              uVar5 = _UNK_00e2032c;
              fVar6 = _UNK_00e201f0;
              if ((bRam0000000004f9c8f3 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cbc100);
                bRam0000000004f9c8f3 = 1;
                plVar1 = (long *)PTR_DAT_04cbc100;
                puVar2 = PTR_DAT_04caa208;
                plVar3 = (long *)PTR_DAT_04caa200;
                fVar22 = _UNK_00e20a08;
                fVar20 = _UNK_00e20994;
                uVar12 = _UNK_00e2098c;
                fVar21 = _UNK_00e20660;
                fVar16 = _UNK_00e205ec;
                uVar4 = _UNK_00e204e8;
                uVar5 = _UNK_00e2032c;
                fVar6 = _UNK_00e201f0;
              }
              do {
                fVar14 = (float)uVar18;
                fVar11 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
                uVar8 = *(undefined8 *)(lVar7 + 0x40);
                if (cRam0000000004f9b65c == '\0') {
                  FUN_02132f7c(plVar3);
                  cRam0000000004f9b65c = '\x01';
                }
                if (*(int *)(*plVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar19 = ABS(fVar19) * fVar16 + fVar20;
                if ((SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar19 * fVar19) <= fVar22) &&
                   (cRam0000000004f9b65d == '\0')) {
                  FUN_02132f7c(puVar2);
                  cRam0000000004f9b65d = '\x01';
                }
                UnityEngine_Random__Range_43b64a8(uVar12,0x3f800000,0);
                UnityEngine_Random__Range_43b64a8(fVar6,uVar4,0);
                UnityEngine_Random__Range_43b64a8(fVar21,uVar5,0);
                UnityEngine_Random__Range_43b64e8(0,0x168,0);
                if (*(int *)(*plVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*plVar1);
                }
                uVar18 = (ulong)(uint)fVar17;
                fVar19 = fVar15;
                Dino_BusSand_View_Fx__Emit_23988c0(uVar8);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              return;
            }
          }
        }
      }
    }
  }
LAB_024aa7a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

