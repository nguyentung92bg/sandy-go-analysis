/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakePeg
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakePeg (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakePeg
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakePeg (const MethodInfo* method); */

void Dino_BusSand_App_UI_AtelierArt__MakePeg_22dd74c(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fStack_b0;
  float fStack_ac;
  
  puVar15 = PTR_DAT_04cb7110;
  puVar14 = PTR_DAT_04cb6a60;
  if ((bRam0000000004f9c3fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb7110);
    bRam0000000004f9c3fa = 1;
  }
  plVar22 = (long *)Dino_BusSand_App_UI_AtelierArt__Tex_22de70c(0x2c,0x80,*(undefined8 *)puVar15);
  lVar23 = FUN_02133068(*(undefined8 *)puVar14,0x1600);
  uVar13 = _UNK_00e69f38;
  uVar12 = _UNK_00e69c08;
  uVar11 = _UNK_00e69a18;
  fVar10 = _UNK_00e20870;
  fVar9 = _UNK_00e2082c;
  fVar8 = _UNK_00e2045c;
  fVar7 = _UNK_00e20324;
  fVar6 = _UNK_00e20278;
  fVar5 = _UNK_00e200fc;
  fVar4 = _UNK_00e200f8;
  fVar3 = _UNK_00e1ff24;
  fVar2 = _UNK_00e1fea8;
  fVar1 = _UNK_00e1fde8;
  lVar25 = 0;
  lVar24 = 0;
  lVar27 = lVar23 + 0x20;
  fVar37 = 1.0;
  do {
    fVar35 = (float)(int)lVar24 + 0.5 + -64.0;
    fVar28 = (fVar35 + 60.0) / 14.0;
    fVar38 = ABS(fVar35 + -38.0);
    fVar30 = fVar37;
    if (fVar28 <= 1.0) {
      fVar30 = fVar28;
    }
    fVar36 = fVar4;
    if (0.0 <= fVar28) {
      fVar36 = fVar30 * fVar3 + fVar4;
    }
    bVar16 = false;
    bVar17 = true;
    bVar18 = false;
    if (fVar35 < 14.0) {
      bVar16 = false;
      bVar17 = false;
      bVar18 = true;
      if (!NAN(fVar35)) {
        bVar16 = fVar35 < -2.0;
        bVar17 = fVar35 == -2.0;
        bVar18 = false;
      }
    }
    fVar28 = (float)func_0x049b5320((fVar35 + 2.0) * 0.0625 * fVar9);
    lVar26 = 0;
    fVar30 = fVar37;
    if (fVar28 <= 1.0) {
      fVar30 = fVar28;
    }
    fVar29 = 0.0;
    if (0.0 <= fVar28) {
      fVar29 = fVar30;
    }
    if (-46.0 <= fVar35) {
      fVar36 = fVar37;
    }
    do {
      fVar28 = (float)(int)lVar26 + 0.5 + -22.0;
      fVar30 = (float)Dino_BusSand_App_UI_AtelierArt__Box_22de880
                                (fVar28,fVar35,0x41700000,0x42700000,0x41100000);
      if (0.0 < fVar30) {
        fVar31 = (fVar28 + 15.0) / 30.0;
        fVar34 = fVar37;
        if (fVar31 <= 1.0) {
          fVar34 = fVar31;
        }
        fVar32 = 0.0;
        if (0.0 <= fVar31) {
          fVar32 = fVar34;
        }
        fVar31 = fVar32 * fVar10 + fVar8;
        fVar34 = fVar31 * fVar2 * fVar1;
        if (2.5 <= fVar38) {
          fVar34 = fVar31 * fVar2;
        }
        if (bVar17 || bVar16 != bVar18) {
          fVar32 = (float)uVar13 * fVar31;
          fVar31 = (float)((ulong)uVar13 >> 0x20) * fVar31;
          uVar33 = CONCAT44(fVar31,fVar32);
          uVar33 = uVar33 ^ (uVar33 ^ CONCAT44(fVar31 * 0.82,fVar32 * 0.82)) &
                            CONCAT44(-(uint)((int)((uint)(fVar38 < 2.5) << 0x1f) < 0),
                                     -(uint)((int)((uint)(fVar38 < 2.5) << 0x1f) < 0));
          fStack_b0 = (float)uVar33 * fVar36;
          fStack_ac = (float)(uVar33 >> 0x20) * fVar36;
          fVar34 = fVar34 * fVar36;
        }
        else {
          fStack_ac = fVar32 * fVar6 + fVar5;
          fVar34 = (fVar29 * fVar7 + 0.5) * fStack_ac;
          fStack_b0 = ((float)uVar12 * fVar29 + (float)uVar11) * fStack_ac;
          fStack_ac = ((float)((ulong)uVar12 >> 0x20) * fVar29 + (float)((ulong)uVar11 >> 0x20)) *
                      fStack_ac;
        }
        fVar31 = (float)Dino_BusSand_App_UI_AtelierArt__Box_22de880
                                  (fVar28,fVar35,_UNK_00e20784,_UNK_00e20604,0x41000000);
        fVar28 = fVar37;
        if (fVar31 <= 1.0) {
          fVar28 = fVar31;
        }
        fVar32 = 0.0;
        if (0.0 <= fVar31) {
          fVar32 = fVar28;
        }
        fVar28 = (fStack_ac + (float)((ulong)_UNK_00e6a278 >> 0x20)) * fVar32 +
                 (float)((ulong)_UNK_00e6a710 >> 0x20);
        uVar19 = FUN_023e4c88(CONCAT44(fVar28,(fVar34 + (float)_UNK_00e6a278) * fVar32 +
                                              (float)_UNK_00e6a710),fVar28,
                              (fStack_b0 + _UNK_00e202d8) * fVar32 + _UNK_00e20390,fVar30,0);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((ulong)*(uint *)(lVar23 + 0x18) <= (ulong)(lVar25 + lVar26)) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined4 *)(lVar27 + lVar26 * 4) = uVar19;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x2c);
    lVar25 = lVar25 + 0x2c;
    lVar27 = lVar27 + 0xb0;
    lVar24 = lVar24 + 1;
    if (lVar24 == 0x80) {
      if (plVar22 != (long *)0x0) {
        UnityEngine_Texture2D__SetPixels32_439edd8(plVar22,lVar23,0);
        UnityEngine_Texture2D__Apply_439ea14(plVar22,0,1,0);
        iVar20 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
        iVar21 = (**(code **)(*plVar22 + 0x1a8))(plVar22,*(undefined8 *)(*plVar22 + 0x1b0));
        UnityEngine_Sprite__Create_4351088
                  (0,0,(float)iVar20,(float)iVar21,0x3f000000,0x3f000000,0x42c80000,plVar22,0,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0,lVar23);
    }
  } while( true );
}

