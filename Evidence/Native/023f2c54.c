/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Face
void Dino_BusSand_App_UI_HomeToonRig__Face (Dino_BusSand_App_UI_HomeToonRig_o* __this, float closeL, float closeR, float slant, UnityEngine_Vector2_o look, float iris, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Face
   void Dino_BusSand_App_UI_HomeToonRig__Face (Dino_BusSand_App_UI_HomeToonRig_o* __this, float
   closeL, float closeR, float slant, UnityEngine_Vector2_o look, float iris, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeToonRig__Face_22f2c54
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar19;
  
  if ((bRam0000000004f9c47f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b0);
    bRam0000000004f9c47f = 1;
  }
  uVar5 = Dino_BusSand_App_UI_HomeToonRig__get_Valid_22f505c(param_7);
  fVar3 = _UNK_00e2090c;
  if ((uVar5 & 1) != 0) {
    fVar22 = *(float *)(param_7 + 0xdc);
    fVar19 = 1.0;
    if (param_4 <= 1.0) {
      fVar19 = param_4;
    }
    fVar17 = 1.0;
    if (param_5 <= 1.0) {
      fVar17 = param_5;
    }
    fVar23 = -1.0;
    if (-1.0 <= param_5) {
      fVar23 = fVar17;
    }
    fVar17 = _UNK_00e20658;
    if (-1.0 <= param_4) {
      fVar17 = fVar19 * _UNK_00e2090c;
    }
    fVar19 = _UNK_00e20838;
    if (param_6 <= _UNK_00e20838) {
      fVar19 = param_6;
    }
    fVar24 = _UNK_00e20094;
    if (_UNK_00e20094 <= param_6) {
      fVar24 = fVar19;
    }
    fVar19 = 0.25;
    if (fVar22 <= 0.25) {
      fVar19 = fVar22;
    }
    fVar25 = 0.75;
    if (-0.25 <= fVar22) {
      fVar25 = fVar19 + 1.0;
    }
    if (*(int *)(*(long *)PTR_DAT_04cb71b0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar19 = _UNK_00e207cc;
    fVar22 = param_1;
    if (0.0 <= param_1) {
      fVar22 = (float)NEON_fminnm(param_1,0x3f800000);
      fVar19 = _UNK_00e1ff28;
    }
    fVar22 = fVar22 * fVar19;
    fVar19 = _UNK_00e207cc;
    fVar18 = param_2;
    if (0.0 <= param_2) {
      fVar18 = (float)NEON_fminnm(param_2,0x3f800000);
      fVar19 = _UNK_00e1ff28;
    }
    fVar18 = fVar18 * fVar19;
    fVar19 = fVar22;
    if (fVar18 <= fVar22) {
      fVar19 = fVar18;
    }
    if (*(long *)(param_7 + 0x48) == 0) {
LAB_023f30a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar12 = *(float *)(&UNK_00e6a0a0 + (ulong)(0.0 < fVar23) * 4);
    fVar24 = fVar24 * fVar25;
    UnityEngine_Transform__set_localPosition_43cfda8
              (*(float *)(param_7 + 0x60) + 0.0,*(float *)(param_7 + 100) - fVar19,
               *(float *)(param_7 + 0x68) + 0.0,*(long *)(param_7 + 0x48),0);
    fVar4 = _UNK_00e20af8;
    fVar2 = _UNK_00e207cc;
    fVar1 = _UNK_00e20210;
    fVar25 = _UNK_00e201f8;
    uVar5 = 0;
    fVar13 = 0.0;
    if (0.0 <= fVar23) {
      fVar13 = fVar23;
    }
    fVar21 = 1.0;
    if (param_3 <= 1.0) {
      fVar21 = param_3;
    }
    fVar14 = -1.0;
    if (-1.0 <= param_3) {
      fVar14 = fVar21;
    }
    do {
      uVar10 = (uint)uVar5;
      fVar21 = param_1;
      if (uVar10 != 0) {
        fVar21 = param_2;
      }
      lVar7 = *(long *)(param_7 + 0x58);
      fVar26 = fVar22;
      if (uVar10 != 0) {
        fVar26 = fVar18;
      }
      if (lVar7 == 0) goto LAB_023f30a8;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_023f30a4:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar6 = *(long *)(param_7 + 0x78);
      if (lVar6 == 0) goto LAB_023f30a8;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_023f30a4;
      uVar11 = uVar5 & 0xffffffff;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_023f30a8;
      lVar6 = lVar6 + uVar11 * 0xc;
      fVar15 = fVar21 / fVar2;
      fVar20 = 1.0;
      if (fVar15 <= 1.0) {
        fVar20 = fVar15;
      }
      fVar16 = 0.0;
      if (0.0 <= fVar15) {
        fVar16 = fVar20;
      }
      if (fVar16 <= fVar13 * 0.5) {
        fVar16 = fVar13 * 0.5;
      }
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(float *)(lVar6 + 0x20) + fVar17 + 0.0,
                 *(float *)(lVar6 + 0x24) + fVar23 * fVar12 + 0.0,
                 *(float *)(lVar6 + 0x28) + 0.0 + fVar16 * fVar1,lVar7,0);
      lVar7 = *(long *)(param_7 + 0x58);
      if (lVar7 == 0) goto LAB_023f30a8;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_023f30a4;
      lVar6 = *(long *)(param_7 + 0x80);
      if (lVar6 == 0) goto LAB_023f30a8;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_023f30a4;
      lVar7 = *(long *)(lVar7 + uVar11 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_023f30a8;
      lVar6 = lVar6 + uVar11 * 0xc;
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar24 * *(float *)(lVar6 + 0x20),fVar24 * *(float *)(lVar6 + 0x24),
                 fVar24 * *(float *)(lVar6 + 0x28),lVar7,0);
      uVar11 = 0;
      fVar20 = 1.0;
      if (fVar21 <= 1.0) {
        fVar20 = fVar21;
      }
      fVar15 = 1.0;
      if (0.0 <= fVar21) {
        fVar15 = fVar20 * fVar25 + 1.0;
      }
      do {
        fVar21 = fVar14 * fVar15 * fVar3;
        if (((int)uVar11 != 0) && (fVar21 = 0.0, (int)uVar11 == 2)) {
          fVar21 = fVar14 * fVar15 * fVar4;
        }
        lVar7 = *(long *)(param_7 + 0x50);
        if (lVar7 == 0) goto LAB_023f30a8;
        if ((**(uint **)(lVar7 + 0x10) <= uVar10) ||
           (uVar8 = *(ulong *)(*(uint **)(lVar7 + 0x10) + 4), (uVar8 & 0xffffffff) <= uVar11))
        goto LAB_023f30a4;
        lVar6 = *(long *)(param_7 + 0x70);
        if (lVar6 == 0) goto LAB_023f30a8;
        if ((**(uint **)(lVar6 + 0x10) <= uVar10) ||
           (uVar9 = *(ulong *)(*(uint **)(lVar6 + 0x10) + 4), (uVar9 & 0xffffffff) <= uVar11))
        goto LAB_023f30a4;
        lVar7 = *(long *)(lVar7 + (uVar11 + uVar5 * uVar8) * 8 + 0x20);
        if (lVar7 == 0) goto LAB_023f30a8;
        lVar6 = lVar6 + (uVar11 + uVar5 * uVar9) * 0xc;
        UnityEngine_Transform__set_localPosition_43cfda8
                  (*(float *)(lVar6 + 0x20) + 0.0,
                   (fVar21 - (fVar26 - fVar19)) + *(float *)(lVar6 + 0x24),
                   *(float *)(lVar6 + 0x28) + 0.0,lVar7,0);
        uVar11 = uVar11 + 1;
      } while (uVar11 != 3);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 != 2);
  }
  return;
}

