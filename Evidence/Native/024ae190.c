/* IL2CPP: Dino.BusSand.View.GameView.<ShowRocket>d__244$$MoveNext
bool Dino_BusSand_View_GameView__ShowRocket_d__244__MoveNext (Dino_BusSand_View_GameView__ShowRocket_d__244_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<ShowRocket>d__244$$MoveNext
   bool Dino_BusSand_View_GameView__ShowRocket_d__244__MoveNext
   (Dino_BusSand_View_GameView__ShowRocket_d__244_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_View_GameView__ShowRocket_d__244__MoveNext_23ae190
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 extraout_s0;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uStack_a4;
  
  lVar6 = param_4;
  if ((bRam0000000004f9c967 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    lVar6 = FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c967 = 1;
  }
  fVar14 = _UNK_00e208e8;
  lVar11 = *(long *)(param_4 + 0x20);
  uStack_a4 = 0;
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    puVar3 = PTR_DAT_04ca9ae8;
    if (fVar14 <= *(float *)(param_4 + 0x7c)) {
      if (lVar11 != 0) {
        if (*(int *)(param_4 + 0x3c) != *(int *)(lVar11 + 0x248)) {
          return 0;
        }
        uVar27 = *(undefined8 *)(lVar11 + 0xb0);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar27,0,0);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        uVar27 = *(undefined8 *)(lVar11 + 0xb8);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar27,0,0);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        Dino_BusSand_View_GameView__Burst_23aa070
                  (*(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                   *(undefined4 *)(param_4 + 0x48),*(undefined4 *)(param_4 + 0x4c),lVar11,
                   *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                   *(undefined4 *)(param_4 + 0x38),0);
        return 0;
      }
      goto LAB_024ae9e4;
    }
    if (lVar11 == 0) goto LAB_024ae9e4;
  }
  else {
    lVar6 = 0;
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar11 == 0) goto LAB_024ae9e4;
    uVar21 = *(undefined4 *)(param_4 + 0x2c);
    *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(lVar11 + 0x248);
    uVar13 = Dino_BusSand_View_GameView__SkyPoint_23a9ea8
                       (*(undefined4 *)(param_4 + 0x28),lVar11,param_4 + 0x4c,0);
    *(undefined4 *)(param_4 + 0x40) = uVar13;
    *(undefined4 *)(param_4 + 0x44) = uVar21;
    uVar21 = _UNK_00e20840;
    uVar13 = _UNK_00e20370;
    fVar24 = *(float *)(param_4 + 0x28);
    *(undefined4 *)(param_4 + 0x48) = param_3;
    fVar14 = (float)UnityEngine_Random__Range_43b64a8(uVar13,uVar21,0);
    uVar13 = _UNK_00e20390;
    uVar21 = Dino_BusSand_View_GameView__SkyPoint_23a9ea8(fVar24 + fVar14,lVar11,&uStack_a4,0);
    *(undefined4 *)(param_4 + 0x50) = uVar21;
    *(undefined4 *)(param_4 + 0x54) = uVar13;
    *(undefined4 *)(param_4 + 0x58) = param_3;
    lVar6 = 0;
    if (*(long *)(lVar11 + 0x38) == 0) goto LAB_024ae9e4;
    lVar7 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar11 + 0x38),0);
    lVar6 = 0;
    if (lVar7 == 0) goto LAB_024ae9e4;
    uVar21 = UnityEngine_Transform__get_right_43d15f4(lVar7,0);
    cVar5 = cRam0000000004f9b65c;
    fVar14 = *(float *)(param_4 + 0x48);
    uVar27 = *(undefined8 *)(param_4 + 0x40);
    uVar32 = *(undefined8 *)(param_4 + 0x50);
    fVar24 = *(float *)(param_4 + 0x58);
    *(undefined4 *)(param_4 + 0x5c) = uVar21;
    *(undefined4 *)(param_4 + 0x60) = uVar13;
    *(undefined4 *)(param_4 + 100) = param_3;
    if (cVar5 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    fVar25 = (float)uVar27 - (float)uVar32;
    fVar28 = (float)((ulong)uVar27 >> 0x20) - (float)((ulong)uVar32 >> 0x20);
    fVar14 = fVar14 - fVar24;
    lVar6 = *(long *)PTR_DAT_04caa200;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      lVar6 = thunk_FUN_0218fdac();
    }
    fVar24 = SQRT(fVar14 * fVar14 + fVar25 * fVar25 + fVar28 * fVar28);
    if (fVar24 <= _UNK_00e20a08) {
      if (cRam0000000004f9b65d == '\0') {
        lVar6 = FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      uVar27 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar14 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
    }
    else {
      fVar14 = fVar14 / fVar24;
      uVar27 = CONCAT44(fVar28 / fVar24,fVar25 / fVar24);
    }
    *(undefined8 *)(param_4 + 0x68) = uVar27;
    *(float *)(param_4 + 0x70) = fVar14;
    uVar13 = _UNK_00e20b3c;
    if (*(long *)(lVar11 + 0x30) == 0) goto LAB_024ae9e4;
    *(undefined4 *)(param_4 + 0x74) = *(undefined4 *)(*(long *)(lVar11 + 0x30) + 0x5c);
    uVar13 = UnityEngine_Random__Range_43b64a8(0,uVar13,0);
    puVar3 = PTR_DAT_04cad568;
    *(undefined4 *)(param_4 + 0x78) = uVar13;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 != 0) {
      Dino_BusSand_View_GameView__PanOf_23a7184
                (*(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                 *(undefined4 *)(param_4 + 0x48),lVar11,0);
      Dino_BusSand_GameAudio__Whistle_23844a4(lVar6,0);
    }
    *(undefined4 *)(param_4 + 0x7c) = 0;
    *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x88) = *(undefined4 *)(param_4 + 0x58);
  }
  if (*(int *)(param_4 + 0x3c) == *(int *)(lVar11 + 0x248)) {
    uVar27 = *(undefined8 *)(lVar11 + 0xb0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar27,0,0);
    if (((uVar8 & 1) == 0) && (*(long *)(lVar11 + 0x30) != 0)) {
      fVar25 = *(float *)(param_4 + 0x7c);
      fVar14 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
      fVar25 = fVar25 + fVar14;
      fVar34 = *(float *)(param_4 + 0x58);
      fVar28 = *(float *)(param_4 + 0x48);
      fVar24 = fVar25 / _UNK_00e208e8;
      *(float *)(param_4 + 0x7c) = fVar25;
      fVar14 = 1.0;
      if (fVar24 <= 1.0) {
        fVar14 = fVar24;
      }
      fVar25 = 0.0;
      if (0.0 <= fVar24) {
        fVar25 = fVar14;
      }
      fVar24 = 1.0 - fVar25;
      fVar23 = 1.0 - fVar24 * fVar24 * fVar24;
      fVar14 = 1.0;
      if (fVar23 <= 1.0) {
        fVar14 = fVar23;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar23) {
        fVar29 = fVar14;
      }
      fVar23 = *(float *)(param_4 + 100);
      fVar14 = (float)func_0x049b5320(fVar25 * 17.0 + *(float *)(param_4 + 0x78));
      fVar25 = *(float *)(param_4 + 0x4c);
      uVar35 = *(undefined8 *)(param_4 + 0x50);
      uVar32 = *(undefined8 *)(param_4 + 0x40);
      uVar27 = *(undefined8 *)(param_4 + 0x5c);
      lVar7 = *(long *)(lVar11 + 0xb0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar3 = PTR_DAT_04cb2870;
      lVar6 = *(long *)PTR_DAT_04cb2870;
      puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar13 = *puVar10;
      uVar37 = puVar10[1];
      uVar21 = puVar10[2];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        lVar6 = thunk_FUN_0218fdac();
      }
      if (lVar7 != 0) {
        fVar31 = (float)uVar35;
        fVar36 = (float)((ulong)uVar35 >> 0x20);
        fVar24 = fVar24 * fVar25 * fVar14 * _UNK_00e207ec;
        fVar14 = fVar31 + ((float)uVar32 - fVar31) * fVar29 + (float)uVar27 * fVar24;
        fVar25 = fVar36 + ((float)((ulong)uVar32 >> 0x20) - fVar36) * fVar29 +
                 (float)((ulong)uVar27 >> 0x20) * fVar24;
        fVar23 = fVar34 + (fVar28 - fVar34) * fVar29 + fVar23 * fVar24;
        Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                  (CONCAT44(fVar25,fVar14),fVar25,fVar23,uVar13,uVar37,uVar21,
                   *(float *)(param_4 + 0x74) * _UNK_00e1fea4,_UNK_00e2043c,lVar7,
                   *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68));
        fVar24 = *(float *)(param_4 + 0x80);
        fVar34 = *(float *)(param_4 + 0x84);
        fVar28 = *(float *)(param_4 + 0x88);
        if (cRam0000000004f9c959 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9c959 = '\x01';
        }
        puVar4 = PTR_DAT_04caa200;
        fVar34 = fVar25 - fVar34;
        fVar24 = fVar14 - fVar24;
        fVar28 = fVar23 - fVar28;
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar29 = *(float *)(param_4 + 0x4c) * _UNK_00e20294;
        if (cRam0000000004f9ba93 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9ba93 = '\x01';
        }
        fVar29 = SQRT(fVar24 * fVar24 + fVar34 * fVar34 + fVar28 * fVar28) / fVar29;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar28 = _UNK_00e20af8;
        uVar37 = _UNK_00e2094c;
        uVar21 = _UNK_00e20660;
        fVar24 = _UNK_00e20564;
        uVar13 = _UNK_00e1fea8;
        iVar9 = (int)fVar29;
        iVar12 = 0;
        if (7 < iVar9) {
          iVar9 = 8;
        }
        if (iVar9 < 3) {
          iVar9 = 2;
        }
        iVar1 = 2;
        if ((float)(int)fVar29 != INFINITY) {
          iVar1 = iVar9;
        }
        while( true ) {
          lVar7 = *(long *)(lVar11 + 0xb0);
          fVar31 = *(float *)(param_4 + 0x88);
          uVar27 = *(undefined8 *)(param_4 + 0x80);
          fVar29 = ((float)iVar12 + 1.0) / (float)iVar1;
          fVar34 = 1.0;
          if (fVar29 <= 1.0) {
            fVar34 = fVar29;
          }
          fVar36 = 0.0;
          if (0.0 <= fVar29) {
            fVar36 = fVar34;
          }
          fVar22 = *(float *)(param_4 + 0x68);
          fVar15 = *(float *)(param_4 + 0x6c);
          fVar16 = *(float *)(param_4 + 0x70);
          fVar17 = *(float *)(param_4 + 0x4c);
          fVar34 = fVar22;
          fVar29 = (float)iVar1;
          fVar18 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
          lVar6 = *(long *)puVar3;
          fVar26 = *(float *)(param_4 + 0x4c);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar3;
          }
          fVar33 = *(float *)(param_4 + 0x74);
          uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x70);
          fVar19 = (float)UnityEngine_Random__Range_43b64a8(uVar13,uVar21,0);
          lVar6 = UnityEngine_Random__Range_43b64a8(0x3e800000,uVar37,0);
          if (lVar7 == 0) break;
          fVar30 = (float)uVar27;
          fVar20 = (float)((ulong)uVar27 >> 0x20);
          fVar26 = fVar26 * fVar24;
          fVar17 = fVar17 * fVar28;
          fVar20 = fVar20 + (fVar25 - fVar20) * fVar36;
          Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                    (CONCAT44(fVar20,fVar30 + (fVar14 - fVar30) * fVar36),fVar20,
                     fVar31 + fVar36 * (fVar23 - fVar31),fVar18 * fVar26 - fVar22 * fVar17,
                     fVar34 * fVar26 - fVar15 * fVar17,fVar29 * fVar26 - fVar16 * fVar17,
                     fVar33 * fVar19,extraout_s0,lVar7,uVar2);
          iVar12 = iVar12 + 1;
          if (iVar1 == iVar12) {
            *(undefined8 *)(param_4 + 0x18) = 0;
            *(ulong *)(param_4 + 0x80) = CONCAT44(fVar25,fVar14);
            *(float *)(param_4 + 0x88) = fVar23;
            thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
            *(undefined4 *)(param_4 + 0x10) = 1;
            return 1;
          }
        }
      }
LAB_024ae9e4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(lVar6);
    }
  }
  return 0;
}

