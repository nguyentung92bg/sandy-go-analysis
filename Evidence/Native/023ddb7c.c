/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakePencil
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakePencil (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakePencil
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakePencil (const MethodInfo* method); */

void Dino_BusSand_App_UI_AtelierArt__MakePencil_22ddb7c(void)

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
  float fVar11;
  float fVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  puVar14 = PTR_DAT_04cb7118;
  puVar13 = PTR_DAT_04cb6a60;
  if ((bRam0000000004f9c3fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb7118);
    bRam0000000004f9c3fb = 1;
  }
  plVar21 = (long *)Dino_BusSand_App_UI_AtelierArt__Tex_22de70c(0x30,0xf0,*(undefined8 *)puVar14);
  lVar22 = FUN_02133068(*(undefined8 *)puVar13,0x2d00);
  fVar12 = _UNK_00e20b0c;
  fVar11 = _UNK_00e20908;
  fVar10 = _UNK_00e208e8;
  fVar9 = _UNK_00e20864;
  fVar8 = _UNK_00e2082c;
  fVar7 = _UNK_00e20788;
  fVar6 = _UNK_00e20180;
  fVar5 = _UNK_00e20170;
  fVar4 = _UNK_00e200fc;
  fVar3 = _UNK_00e20094;
  fVar2 = _UNK_00e20044;
  fVar1 = _UNK_00e1fe38;
  lVar24 = 0;
  lVar25 = 0;
  lVar26 = lVar22 + 0x20;
  fVar37 = 1.0;
  do {
    fVar36 = (float)(int)lVar25 + 0.5;
    fVar27 = 0.0;
    if (0.0 <= fVar36 + -232.0) {
      fVar27 = fVar36 + -232.0;
    }
    fVar33 = fVar27 * fVar2 + 17.5;
    fVar27 = fVar37;
    if (1.0 <= fVar33) {
      fVar27 = fVar33;
    }
    fVar28 = (float)func_0x049b5320(((fVar36 + -196.0) / 18.0) * fVar8 * 3.0);
    fVar32 = fVar36 / 46.0;
    lVar23 = 0;
    fVar29 = fVar37;
    if (fVar32 <= 1.0) {
      fVar29 = fVar32;
    }
    fVar35 = fVar3;
    if (0.0 <= fVar32) {
      fVar35 = fVar29 * fVar12 + fVar3;
    }
    fVar29 = *(float *)(&UNK_00e69cc8 + (ulong)(fVar36 < 15.0) * 4);
    do {
      fVar32 = (float)(int)lVar23 + 0.5 + -24.0;
      if (46.0 <= fVar36) {
        if (196.0 <= fVar36) {
          if (214.0 <= fVar36) {
            fVar30 = (fVar32 / fVar27 + 1.0) * 0.5;
            fVar34 = fVar37;
            if (fVar30 <= 1.0) {
              fVar34 = fVar30;
            }
            fVar38 = fVar4;
            if (0.0 <= fVar30) {
              fVar38 = fVar34 * _UNK_00e1fe64 + fVar4;
            }
            uVar31 = (ulong)(uint)(fVar38 * _UNK_00e208e0);
            fVar34 = fVar33;
          }
          else {
            fVar30 = (fVar32 / 18.5 + 1.0) * 0.5;
            fVar34 = fVar37;
            if (fVar30 <= 1.0) {
              fVar34 = fVar30;
            }
            fVar38 = fVar5;
            if (0.0 <= fVar30) {
              fVar38 = fVar34 * fVar9 + fVar5;
            }
            uVar31 = (ulong)(uint)((ABS(fVar28) * 0.25 + fVar6) * fVar1 * fVar38);
            fVar34 = 18.5;
          }
        }
        else {
          uVar31 = Dino_BusSand_App_UI_AtelierArt__Facet_22de960(fVar32);
          fVar34 = 18.0;
        }
      }
      else {
        fVar30 = (fVar32 / fVar35 + 1.0) * 0.5;
        fVar34 = fVar37;
        if (fVar30 <= 1.0) {
          fVar34 = fVar30;
        }
        fVar38 = fVar4;
        if (0.0 <= fVar30) {
          fVar38 = fVar34 * fVar11 + fVar4;
        }
        fVar30 = (float)cosf(fVar32 * fVar10);
        fVar34 = fVar35;
        if (fVar36 <= fVar30 * -2.5 + 42.0) {
          uVar31 = (ulong)(uint)(fVar38 * fVar29);
        }
        else {
          uVar31 = Dino_BusSand_App_UI_AtelierArt__Facet_22de960(fVar32);
        }
      }
      fVar34 = (fVar34 - ABS(fVar32)) + 0.5;
      fVar32 = 1.0;
      if (fVar34 <= 1.0) {
        fVar32 = fVar34;
      }
      bVar15 = false;
      bVar16 = false;
      bVar17 = false;
      if (0.0 <= fVar34) {
        bVar15 = false;
        bVar16 = false;
        bVar17 = true;
        if (!NAN(fVar36) && !NAN(fVar7)) {
          bVar15 = fVar36 < fVar7;
          bVar16 = fVar36 == fVar7;
          bVar17 = false;
        }
      }
      fVar34 = 0.0;
      if (bVar16 || bVar15 != bVar17) {
        fVar34 = fVar32;
      }
      if (0.0 < fVar34) {
        uVar18 = FUN_023e4c88(uVar31,0);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((ulong)*(uint *)(lVar22 + 0x18) <= (ulong)(lVar24 + lVar23)) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined4 *)(lVar26 + lVar23 * 4) = uVar18;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 0x30);
    lVar25 = lVar25 + 1;
    lVar24 = lVar24 + 0x30;
    lVar26 = lVar26 + 0xc0;
    if (lVar25 == 0xf0) {
      if (plVar21 != (long *)0x0) {
        UnityEngine_Texture2D__SetPixels32_439edd8(plVar21,lVar22,0);
        UnityEngine_Texture2D__Apply_439ea14(plVar21,0,1,0);
        iVar19 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
        iVar20 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
        UnityEngine_Sprite__Create_4351088
                  (0,0,(float)iVar19,(float)iVar20,0x3f000000,0x3f000000,0x42c80000,plVar21,0,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0,lVar22);
    }
  } while( true );
}

